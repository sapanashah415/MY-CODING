public class Music {
    public static void main(String[] args) {
        String[] lyrics ={
            "maa manne sambh rakhe tere jhanjhara ke joda",
            "meri gail ro-ro ye bhi chhori bawlli se hore",
            "manne aaye jaave khyal tere khaye java khayal",
            "tere jeene koni dete haaye bairan teri aaye manne",
            "geeta me gaayi kade chhati k lagai manne jit bhi",
            "gaya re teri yaad khadi paayi manne"
        };
    int[] delays ={500, 800, 1100};
    for(int i =0; i < lyrics.length; i++){
        String line = lyrics[i];
        for (int j =0; j < line.length();j++){
            System.out.print(line.charAt(j));
            System.out.flush();
            try {
                Thread.sleep(70);
            }catch(InterruptedException e){
                System.out.println(e);
            }
        }
        System.out.println();
        try {
            if (i < delays.length){
                Thread.sleep(delays[i]);
            }
        }catch (InterruptedException e){
            System.out.println(e);
        }
    }
    }
}
