#include <iostream>
#include <unistd.h>

const int rows = 88; // ���������� �����
const int cols = 170; // ���������� ��������

int main() {
    char charArray[rows][cols] = {

"@Sometimes@the@questions@are@complicated@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+ *@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@and@the@answers@are@simple@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#  =@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%.  .@@@@@@@@@@+:@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@If@Kira@gets@caught@he@is@evil@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%#@@@-    =@@@%:@@%.  =@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@if@Kira@rules@the@world@he@is@justice@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@# -@@#      *@@..@#    .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@: .@@-   -:  @+ =#    . *@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%   *#    +-  :- =     . =@@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=    . :  +-   :       . :@@.#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*@*@:      -  +-             :@# +@@@++@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#++==--=+#@@@@**@@@#@@@@@@@@@@@@@@@@@@:#.#.     .-  -=             .@: +@%..@@@@@@@@@@@@There@are@many@types@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%#=. .-*@%+=##=@@@@@@@@@@@@@@@@# .      .  .   -      .      .+  =@. *@@@@@@@@@@@@@@@@@@@@@@@@of@monsters@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%+:  :+#+:-.*@@@@@@@@@@@@@@+      : #   .   -     -    .     --  #@@%%@@@@@@@@@@@@@@@@@@@@@@@@@@@in@this@world@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%%#######%%%@@#=   :+.  .+@@@@@@@@@%#@+      =:@  ... .=     :=   =   .     +*-*@@@@@@@@@@@@@@@%*==+*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@%+=-.                .:-.         -*@@@@@@* +#      -%@-  :+ :=    .:-   *  :        %@@@@@@@@@@@@%+--+%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%%%##*++=-:.      When     -*@@@* .:    -= @@#  := .+... =::   = . -.    .%@@@@@@@@@@#=:-#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@%%####******###****##***+-.    you   .-:#@*       :@*%*@- :-  ::-- *:#   +  =-    =@@@@@%*@@@=..*@@@@%#**+===----------===+*#%@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@#+-.     ..               :::-+*+-:    ::   .+@#  :    :@*. *%++*   +==:@*@@%=@::%     -@@@@=+@*:  +%*=-.     .:=+*##%%%%%%%%%#**++===++**%@@@@@@@@=",
"@@@@@@@@@@@@@@@@@#+:..-=+*#%@@@@@@@#*-:..     die,           :*= =@@%  :-  .*:     :@@:  #+#-. ::.#@###     %@@#.#+.              -=++******+====+*##%%@@@@@@@@%@@@@@@@@=",
"@@@@@@@@@@@@@%++=+#@@@@@@@@@@@#*-..:--===::         .-*#%##*+-:=@%@@@   # .+=       =#%  @=.       -+@#     %@+ =.     ..              ..::::.           ..::--====+++++:",
"@@@@@@@@@@***#@@@@@@@@@@@@#+:.          ..::::..          -*#%@@@@@@@-  @::.          ###=           +#     %%  :    :*:              .......:::::.:..         .::-===+*-",
"@@@@@@@@@%@@@@@@@@@@@@%*-.      :=*%@%#*+=:.     I'll  :::::=%@@-.+%%%  .#:   be       -:    the     .#  =  =#=# +*+%=:+**+-.      .::...           .:--==+****++=----=+-",
"@@@@@@@@@@@@@@@@@@@#=..   .-=*%@@%+-..     .:=+=-:.  .:--=+%@@@+:.   .   *=                    one .  *#%..   - =+#@=-@@@+.::::   .:.              :. ..   .=#@@@@@@@@%#-",
"@@@@@@@@@@@@@@@%*:.:+***%@@@@@*-..        :=+=--::-::..    =- .      =---+% -      .              :%  *@#:*.      :. :#%:        .::..   -*+-=++-:  .-=%%*-.   =*@@@@@@@=",
"@@@@@@@@@@@%+-.:+#@@@@@@@@@*-.:..     :---..:::     :-=++*#+=.     .#.:+.*@ ++. ..  .: :. .    .:*@@  *.  .*        .==--=-        ..::::   .. .=%@#+:  :+%@@#+-. -+%@@@=",
"@@@@@@@@%+--+%@@@@@@@@@@#-.  .  :..=**-  ..    :-=+*+++*#@%.        +- :=-:  ##-.-=%:    . -%=--=#@-      :+          :%@=-.     .:. writing      -%@@@#-  :+@@@@@#*==+*-",
"@@@@@@@++%@@@@@@@@@@@@*:   .:.=*+%@*.   .    :-.         :@-        +%-  --  -+::  #@*:. .+@@.. .-+      ++            =@#*==:.            your     :#@@@@#-  -#@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@+.   ::-*@@@@#:  .=-.    *=.    :  :--=.  .  name -*=:=.  -::-=+-::--:  ::. .     -  +          -@@@%%@*+=--:.          .         :#@@@@@*: .*@@@@@@=",
"@@@@@@@@@@@@@@@@@@#.   :::#@@@@%-  :##.    :+.   =#+  .  -%#@*+:    in.=#@+ . my ..                  :@- .           +@@@*+--      :  .  :.  -*#+:..:   -%@@@@@%- .#@@@@=",
"@@@@@@@@@@@@@@@@%:   --:*@@@@@*. :#@*  .  --  .*@@-  .=.:@%+==   :     my :@.-= Death    -        .: *.             :+%@@-+%    .: .+ .*=.     .+@@*-:-.  =@@@@@@@= =@@@=",
"@@@@@@@@@@@@@@%-   --.*@@@@@@- .*@@*  =. =.  +@@@-::#@: %= =::#=-.        .=* -#*:      Note    .++ +@+   .:       :*@@#.  =:    =      #@*. .:  .#@@%=-+. .*@@@@@@@+:%@=",
"@@@@@@@@@@@@%-  :=-.+@@@@@@#. -@@@* .#. +. .=@@@= +@@-  ::%+ #-=*:..    ..-@@:  -@*=---------=*%*: .@@@=            .@@@@@   -+  . .-    *@@*..#*. -@@@%:++  -@@@@@@@@+@=",
"@@@@@@@@@@%- .+%= =@@@@@@@#  *@@@# :@: =.  .@@@#.%@@*   =@@ ..#*. .:.      .#+ :-=@+%=*-.  . :%+ . +@@*           .--+@@@-  =@#     @%-   %@@@: #@*. #@@@=:%=  %@@@@@@@@=",
"@@@@@@@@#-:+%@%:.%@@@@@@@* .%@@@@.:@= -*   #@@@-%@@@:  =@@*  #@+%@@#=        *   .=-*+==+==-=-#    @@.           . -@@@@%  -@@@:    #@@*  .@@@@- #@@= *@@@*:@#. *@@@@@@@=",
"@@@@@@@##@@@@#.+@@@@@@@@# :@@@@@-.%* :@=  *@@@@%@@@#  :@@@- #@@@@@:-#% ..    -*   =*=--=--: :.   .@@*:      ... :@@@@@@@*..@@@@@:   -@@@%. =@@@@- @@@#.+@@@*.@@+ =@@@@@@=",
"@@@@@@@@@@@@%-%@@@@@@@@# -@@@@@#.%% .%@- :@@@@@@@@@= .@@@@:-@@@@@@@@@:+@@..  :@@*.  .::--::.    :@%          +@%*@@@@@@@% #@@@@@@+  .@@@@%  %@@@@::@@@@:=@@@=-@@%:-@@@@@=",
"@@@@@@@@@@@@+@@@@@@@@@@.=@@@@@@:%@.:@@@: %@@@@@@@@@: *@@@@ %@@@@@@@@@@@@@:%. .@@@%..           +@@@. :   .@%.+@@@%=@@@@@#.@@@@@@@@#. #@@@@# -@@@@% *@@@@:+@@@.*@@@==@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@.+@@@@@@##@::@@@@--@@@@@@@@@@ :@@@@@:@@@@@@@@@@@@@@@@@ -@@@%*..         ##@@* =@%+#*%*=--======-:--=#@@@@@@@@% :@@@@@- %@@@@#:@@@@@:*@@# @@@@##@@@=",
"@@@@@@@@@@@@@@@@@@@@@+*@@@@@@@@@-=@@@@@-#@@@@@@@@@@ %@@@@@%@@@@@@@@@@@@@@@@@%%@@@:+%:       :%@.@@@:#@@@#: :: .-===--:-:.  .+@@@@@@@%.#@@@@% #@@@@@:@@@@@@:%@@.#@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@%+@@@@@@@@@*+@@@%.%=@@@@@@@@@@#:@@@@@@@@##*:#@@@@@@@@@@@@@@@@@@@@*+===+*@@@@@@@@@@@--:.::. .  ::..:  .. .:@@**@@@@=@@@@@.#@@@@@#@@@@@@%-@@+*@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@@@@. +%@:#@@@@@@@#+@@@@@@@@-    :+++@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%#@:.-::...::::. --.  .--.:-@# #@@@@@@@@@:#@@@@@@@@@@@@@%%@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=   +%.%@@@@@@@%%@@@@@@@@@%*++=.  :*@@@@@@@@@@@@@@@@@@@@@@@@@@@@ *% .:: ::::.:-  ..::-:::.  %+ =@@@@@@@@@+@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    ...*@@@@@@@@@@@@@@@@@@@@@@@@##*+==+*##%@#@#@@@@@@@@@@@@@@@@% +*: .::::::::.  ..::::::-  *- .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*   :=. =*%@@@@@@@@@@@@@@@@@@@+#@#+**@%*@@@@@@@@@@@@@@@@#::::::+% .*  =.:.:::- =  =..::::--  =:  :@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#-.    *@@@%@@@@@@@@@@@@@@@@@@@@@@*-=#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=  +  %-..:...=-  :=:.:::..  :+  .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-       =@@@@@@@@@@@@@@@@@@@@@@@@@@@@:: -=+**###%%@@@@@@@@@@@@@@@@@@=  *  .-==:..=+   :=+=.: -   .%-  .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*    =%#++#@@@@@@@@@@@@@@@@@@@@@@@@@@@#. .     :-=:-+##%%@@@@@@@@@@@@#  =-   -=*+==.   :+=*=--    :@:  *@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#     -@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=    .:-=%@@@@@@@@@@@@@@@@@@@@@:  +    #+====   :%.+-=.   .@#  *@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@+      :+*#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.. -@@@@@@@@@@@@@@@@@@@@@@@@@@@#  #*   .@@@@.   :@#*+.    %@@++@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@=   +-+@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=. =%@@@@@@@@@@@@@@@@@@@@@@@@@@@%+%@=   +@@@=   +@@+:   :%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@*  .*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.    :#*=++%*@*%@@@@@@@@@@@@@@@@@@@@@-..*@@@#  :@@=  :#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@%+-.  .=-+@@@@@%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+      -+*#%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%+.#@@@@==*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@==*.:-@@@@*=. %@@@@@@@@@@@@@@@@@@@@@@@@@@@@=    +@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+=@#@@@@%#:@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+*@@@@@. :#@@@@@@@@@@@@@@@@@@@@@@!@@+-:    .=#%@@@@@@@@@@@@@@@@@@@@@@@+@@@@@@@@@@@@@@@@=*#%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*- :+%@@@@@@@@@@@@@@@@@#-::.             .:-===*#@@@@@@@@@@@@@@@@@#=++%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#+.  .-*@@@@@@@@@@@@@= .#+    .     :-=*%@@@@@@@@@@@@@@@@@@@@@@@@@@@+:==+=++++*#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%#*+=:-+%@@@@@@@@@: .%.     -=++###*#@*@%@@@@@@@@@@@@@@@@@@#=.:-====+*#@@@@@%@@@@@@@@@@@@@@@@@@@Being@alone@@@@@@@@@@@@@@@@@@@@=",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#+: .=#%@@@@@%   =.    .=%@@@@@@@@@@@@@@@@@@@@@@#+=:.   ..:--=+=    .-+  %@@@@@@@@@@@@@@@@@@@@is@better@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%#*=:  .=%@@+   :   .#@@@@@@@@@@@@@@@@@@@@@*@*@%%%%@@@@@@@@%=     :-  .@@@@@@@@@@@@@@@@@@@@@@@than being@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*:-=+::  .:.     :##@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%*#%=  :.    =@@@@@@@@@@@@@@@@@@@@@@@@with@the@wrong@person@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#=:--    .  -#@@@@@@@@@@%%@@##+-+%@@@@@@@@@@@@@@@@@%:          .:@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@==##..-%@@+----:.             .+*#@@@@@@@@@@@@%+-           :@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%*@@@@-*@@@@+---=:           .       .-+@@@@@#=:             .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-#@@@@@@@@@@@-     :+**%@@%*=-=:..  -:                 *@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@I@am@Justice!@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-+@@@@##@@@%*:        .+@@@@@@+                      -*#-.#@@@@@@@@@@@@@@In@all@things@@@@@@@@@@@@@@@@@@@@",
"@@@@@I@protect@the@innocent@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#%@%*@@#######:     :@-=%@%:                 :-##+.    .*@@@@@@@@@@@@@@@one@cannot@win@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@and@those@who@fear@evil@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@@%*++#**#**%@.   .=+:  =@              :=+#@@@@+-.      =@@@@@@@@@@@@@@@@@@@@@with@defense@alone@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@##+##*@%@#.  +%*+*+  +#-  ..:--+*%@@@@@@@@#:           =@@@@@@@@@@@@@@To@win@@you@must@attack@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@@@@@@+.  :#   -@--@+.-*@@@@@@@@@@@@@@@+              -@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@You@Can�t@Buy@PeaceAndLoveWithMoney@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*:    #@=.  +@@@=:%@@@@@@@@@@*%*-                  :@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@,You@Know!@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@:  *. =%@@+*@@-..*@@@@@@@@@@@@@##*-=+#%+     .=....*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%--%@+..#@@@@@@@@@=:*%@@@@@@@@@@@%@@@@@-  .=*@@@@%++#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@@@@@@@@@@@@@##@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*   *@@@@@@@@@@@@%+:=%@@@@=... -#@*+*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#=@@@@@@%+%@@@#  %@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#:  =#@@@@@@@@@%+#@@@@@@#   : -@.   =@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@% *@@@@@=+@@@@@@-:@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%=.  .=#@@@@@@@@@@@@=  =%@# :#    .*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@. @@@@#:%@@@@@*= .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%%@@@@@@@@@@@@@-.   .+#%@@@@@@#::+=*@@@# :-  . -@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@- *@@@*:@@@@@@+    #=#@@@@@@@#*@@@@@@@*@@@@@@@@@*-@@@@@@@@@@@@@@@@@##+:   :#@@@@%-#@+=@%-  -     +@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@* -@@@=.@@@@@@@:     %@@@@@@@@.@@@@@@@+=@@@@@@@#:-@@@@@@@@%+@@@@@@@%*@@@+  .. -**+*=%%=. -#.      -@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@:.@@@@.%@@@@@@#:.== %@@@@@@@@# @@@@@@@-+@@@@@#::#@@@@@@@@@=*@@@@@@%.*@@@@%@@@%#-    .:=*#@%    .  *@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ %@@@@-@@@@@@* =@@-*@@@@@@@@@% %@@@@@@+-@@@%:=@@@@@@@@@@@@ @@@@@@%. @@@#-+@@@@@@+-:- .--#:%*=. #%. =@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=@@@@@+@@##+. *@@%-@@@@@@@@@@@.+@@@@@@% %@@.#@@@@@@@@@@@@+:@@@@@%. :@@@ *@@@@@@@++@@@+:-%@=+:  :%@. .=@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@##     *@@@-@@@@@@@@@@@@-=@@@@@@@=:@+#@@@@@@@@@@@@@.+@@@@@=  *@@@*@@@@@@@@= *@@%=++=  -#%:.#+   @@@@@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=    :@@@@@@@@@@@@@@@@@+.@@@@@@@# @@@@@@@@@@@@@@@+.@@@@@@:  @@@@@@@@@@@@@# #@@@=--=#@@@@@: #%. -@@@@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#*+#@@@@@@@@@@@@@@@@@@#=@@@@@@@+.@@@@@@@@@@@@@@@:%@@@@@@. =@@@@@@@@@@@@@@=#@@@@@@@@@@*#@@: *#-.%@@@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@@@@@@@@=#@@@@@@@@@@@@@@%%@@@@@@@. @@@@@@@@@@@@@@@@@@@@@@@@@*@@**@@= +@@-#@@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@:#@@@@@@@@@@@@@@@@@@@@@@@@@#=@@*+@@= =@@=#@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@In@this@world,@there@are@very@few@people@who@actually@trust@each@other@@@@@@@@@@@@@@@@@@@@@@@@@@%@@@@@@@@@@@@@@@@@@@@@@@@@@@%-@@#=@@- -@*#@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@@%-@* .@@@@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-#@%%=.+@@@@@@@@@@@@@@@@@@@@@@@@@@@"
};
    sleep(3);int fl=0;
    std::cout << "                                                                         Hi                                                          " << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << charArray[i][j];
            if(fl==0)
            {
                usleep(1500);fl+=4;
            }
            else
                fl--;
        }
        std::cout << std::endl;//usleep(300000);
    }

    return 0;
}
