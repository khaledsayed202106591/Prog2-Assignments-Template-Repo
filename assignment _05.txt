 public void deposit(double amount) {
        this.balance += amount;
        numOfCalls++;
    }

    public void withdraw(double amount) {
        if (amount <= this.balance) {
            this.balance -= amount;
            numOfCalls++;
        } else {
            System.out.println("Insufficient funds.");
        }
    }

    public double getBalance() {
        return this.balance;
    }

    public static int getNumOfUsers() {
        return numOfUsers;
    }

    public static int getNumOfCalls() {
        return numOfCalls;
    }
}

public class Main {
    public static void main(String[] args) {
        BankAccount account1 = new BankAccount(0,"John Doe", "ABC Bank");
        BankAccount account2 = new BankAccount(100, "John Doe", "ABC Bank");

        account1.deposit(50);
        account2.withdraw(20);

        System.out.println("Balance of account 1: " + account1.getBalance());
        System.out.println("Balance of account 2: " + account2.getBalance());

        System.out.println("Number of users: " + BankAccount.getNumOfUsers());
        System.out.println("Number of calls: " + BankAccount.getNumOfCalls());
    }
}

or anoether solve

*class BankAccount {



    public class Main {
       private static int NumofUsers=0;
       private static int Numofcalls=0;
       private static String username;
       private static String bankname;
       private double balance;
       private final String country="Egypt";

       public void BankAccount(String username, String bankname){
           this.balance = 0;
           this.username = "";
           this.bankname = "";
           System.out.println("A new BankAccount object has been created.");
           NumofUsers++;}

           public void BankAccount(String username, String bankname, double balance){
               this.balance = balance;
               this.username = "";
               this.bankname = "";
               System.out.println("A new BankAccount object has been created.");
               NumofUsers++;

       }
       public void deposit(double amount){
           balance+=amount;
           System.out.println("Deposited " + amount + " into account.");
           Numofcalls++;
       }
       public void withdraw(double amount){
           if (balance >= amount) {
               balance -= amount;
               System.out.println("Withdrew " + amount + " from account.");
               Numofcalls++;
           } else {
               System.out.println("Insufficient funds.");
           }

       }

        public double getBalance(double balance) {
            return balance;
        }

        public static int getNumofcalls() {
            return Numofcalls;
        }
        public static int getNumofUsers(){
           return NumofUsers;
        }

        public Main() {
        }

        public static void main(String[] args) {
            BankAccount account1 = new BankAccount();
            BankAccount account2 = new BankAccount(String username,bankname,double balance);

            account1.deposit(500);
            account2.withdraw(200);

            System.out.println("Balance of account1: " + account1.getBalance());
            System.out.println("Balance of account2: " + account2.getBalance());
            System.out.println("Number of users in system: " + BankAccount.getNumofUsers());
            System.out.println("Number of calls to deposit/withdraw methods: " + BankAccount.getNumOfCalls());
        }
     }
