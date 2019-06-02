
package clases;

import com.mysql.jdbc.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class conectar {
    private static Connection conn;

    public conectar() {
        conn = null;
        try{
            Class.forName("com.mysql.jdbc.Driver");
            conn = (Connection) DriverManager.getConnection("jdbc:mysql://localhost:3306/prueba1","root","eduardo");
            if(conn != null){
                System.out.println("conectado");
            }
        }catch (ClassNotFoundException | SQLException e){
            System.out.println("Error al conectar"+e);
        }
    }
    
    public Connection getConnection(){
        return conn;
    }
    
    public void desconectar(){
        conn = null;
        if(conn == null){
            System.out.println("conexion terminada");
        }
    }
    
}
