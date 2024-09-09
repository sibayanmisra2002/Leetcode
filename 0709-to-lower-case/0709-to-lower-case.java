class Solution {
    public String toLowerCase(String s) {
        // return s.toLowerCase(); // method 1
        //method 2
        // char[] c = s.toCharArray();        
        // for(int i=0; i<c.length; i++) {
        //     if(c[i] >= 65 && c[i] <= 90) {
        //         c[i] = (char) (c[i] + ('a' - 'A'));
        //     }
        // }
        // return String.valueOf(c);
        
        StringBuilder sb = new StringBuilder();
        for(char c : s.toCharArray()) {
            if(c >= 65 && c <= 90) {
                c = (char) (c - 'A' + 'a');
            }
            sb.append(c);
        }
        return sb.toString();
    }
}