#include<stdio.h>
#include <stdlib.h>
#include "faw_encoding.h"


int main(){

    // Following is the python code to generate random numbers: https://www.programiz.com/python-programming/online-compiler/
    // import random
    // n = 1000
    // numLow = 1
    // numHigh = 100000
    // setOfNumbers = set()
    // while len(setOfNumbers) < n:
    //     setOfNumbers.add(random.randint(numLow, numHigh))
    // print(sorted(setOfNumbers))

    int choice;
    do {
        // Change the lists as per you wish
        unsigned int list1_size = 1000;
        unsigned int list1[] = {
            10, 100, 113, 160, 161, 180, 210, 214, 251, 252, 279, 309, 334, 358, 401, 443, 461, 523, 585, 630, 705, 741, 762, 797, 853, 877, 928, 965, 966, 1025, 1030, 1085, 1159, 1231, 1284, 1450, 1534, 1844, 1851, 1962, 1996, 2020, 2202, 2326, 2540, 2591, 2598, 2614, 2641, 2699, 2701, 2735, 2832, 2881, 2930, 2950, 2997, 3049, 3126, 3164, 3185, 3253, 3337, 3357, 3379, 3402, 3472, 3559, 3608, 3638, 3644, 3768, 3862, 4110, 4149, 4242, 4263, 4414, 4477, 4484, 4527, 4602, 4631, 4744, 4783, 4808, 4814, 4835, 4846, 4872, 4943, 4946, 4956, 5005, 5009, 5037, 5058, 5082, 5092, 5105, 5110, 5116, 5186, 5224, 5305, 5415, 5434, 5504, 5514, 5522, 5581, 5657, 5843, 5845, 5894, 5922, 5998, 6010, 6039, 6041, 6217, 6457, 6522, 6550, 6605, 6624, 6694, 6722, 6755, 6776, 6802, 6887, 6922, 7092, 7149, 7173, 7194, 7239, 7293, 7308, 7325, 7391, 7392, 7499, 7512, 7514, 7712, 7741, 7808, 7907, 7947, 7952, 8077, 8091, 8112, 8127, 8341, 8481, 8538, 8671, 8709, 8744, 8771, 8841, 8855, 8867, 9029, 9059, 9236, 9237, 9260, 9345, 9518, 9530, 9546, 9601, 9663, 9768, 9791, 9818, 9835, 9890, 10081, 10122, 10148, 10176, 10183, 10192, 10198, 10231, 10267, 10292, 10299, 10314, 10674, 10729, 10793, 10836, 10866, 10894, 10915, 10970, 11031, 11050, 11053, 11125, 11220, 11230, 11248, 11260, 11264, 11293, 11300, 11419, 11438, 11445, 11461, 11474, 11518, 11702, 11744, 11776, 11785, 11824, 11865, 11890, 11980, 12000, 12059, 12312, 12379, 12517, 12554, 12587, 12627, 12687, 12757, 12779, 12788, 12792, 12832, 12854, 12857, 12912, 12919, 12944, 12972, 12977, 12979, 13061, 13101, 13176, 13185, 13193, 13209, 13224, 13278, 13298, 13301, 13322, 13389, 13409, 13426, 13514, 13515, 13551, 13593, 13702, 13722, 13736, 13800, 13817, 13833, 13901, 13918, 13955, 13970, 14026, 14046, 14183, 14254, 14258, 14304, 14313, 14373, 14422, 14444, 14512, 14523, 14546, 14559, 14645, 14700, 14794, 14837, 14844, 14952, 14979, 15042, 15064, 15067, 15096, 15135, 15145, 15243, 15324, 15360, 15415, 15565, 15604, 15609, 15628, 15697, 15882, 15940, 15989, 16030, 16042, 16067, 16123, 16184, 16195, 16198, 16202, 16215, 16326, 16386, 16475, 16525, 16663, 16668, 16708, 16820, 16830, 16845, 16866, 16901, 16919, 16981, 17018, 17074, 17157, 17185, 17242, 17345, 17442, 17506, 17651, 17703, 17782, 17843, 17874, 17894, 17925, 17966, 17993, 18007, 18014, 18077, 18092, 18105, 18189, 18254, 18275, 18442, 18495, 18535, 18633, 18640, 18648, 18758, 18772, 18800, 18807, 18913, 18995, 19009, 19065, 19102, 19125, 19129, 19172, 19183, 19224, 19275, 19318, 19344, 19448, 19507, 19663, 19809, 19858, 19976, 20046, 20146, 20171, 20173, 20186, 20220, 20280, 20596, 20739, 20899, 20938, 21194, 21229, 21343, 21347, 21412, 21434, 21518, 21529, 21659, 21807, 21817, 21849, 21862, 22013, 22121, 22157, 22175, 22192, 22199, 22322, 22339, 22393, 22464, 22527, 22549, 22635, 22684, 22786, 22902, 22918, 22944, 22961, 22982, 23180, 23200, 23202, 23316, 23334, 23517, 23551, 23590, 23732, 23748, 23811, 23920, 23941, 24033, 24087, 24090, 24109, 24112, 24236, 24239, 24250, 24253, 24360, 24399, 24404, 24452, 24526, 24592, 24603, 24613, 24618, 24698, 24775, 24851, 24951, 25149, 25156, 25174, 25187, 25279, 25289, 25408, 25419, 25444, 25462, 25519, 25608, 25680, 25788, 25791, 25822, 25994, 26013, 26116, 26182, 26442, 26491, 26545, 26559, 26580, 26734, 26796, 26808, 26896, 26906, 26984, 27034, 27042, 27120, 27122, 27202, 27285, 27289, 27293, 27380, 27387, 27395, 27404, 27472, 27485, 27491, 27512, 27563, 27657, 27772, 27785, 27795, 27844, 27928, 27948, 27962, 28092, 28142, 28280, 28315, 28384, 28386, 28430, 28508, 28565, 28585, 28587, 28677, 28734, 28978, 28984, 29007, 29087, 29119, 29180, 29200, 29201, 29207, 29298, 29303, 29341, 29382, 29404, 29416, 29444, 29481, 29549, 29645, 29677, 29699, 29703, 29713, 29720, 29729, 29752, 29793, 29845, 29946, 29948, 29955, 30016, 30030, 30040, 30093, 30121, 30150, 30201, 30209, 30237, 30243, 30260, 30282, 30337, 30349, 30377, 30453, 30477, 30505, 30524, 30693, 30717, 30758, 30779, 30784, 30856, 30862, 30891, 30938, 30995, 31132, 31133, 31185, 31197, 31415, 31463, 31484, 31523, 31547, 31553, 31654, 31720, 31773, 31821, 31854, 31860, 31864, 31897, 31943, 31991, 32055, 32166, 32189, 32194, 32208, 32232, 32310, 32320, 32342, 32351, 32395, 32406, 32428, 32482, 32590, 32835, 32909, 32965, 33028, 33048, 33172, 33181, 33190, 33241, 33246, 33250, 33265, 33305, 33327, 33333, 33357, 33374, 33401, 33483, 33485, 33518, 33526, 33555, 33614, 33622, 33677, 33808, 33829, 33846, 33895, 33932, 33974, 33981, 34084, 34167, 34299, 34356, 34375, 34411, 34443, 34453, 34460, 34475, 34479, 34542, 34585, 34586, 34682, 34701, 34748, 34783, 34790, 34808, 34951, 35049, 35051, 35086, 35194, 35254, 35377, 35410, 35573, 35584, 35610, 35620, 35665, 35777, 35806, 35814, 35856, 35879, 35902, 36176, 36192, 36204, 36246, 36271, 36309, 36423, 36435, 36519, 36609, 36741, 36768, 36771, 36853, 36893, 37019, 37071, 37228, 37321, 37326, 37583, 37618, 37630, 37660, 37664, 37715, 37893, 37973, 38048, 38060, 38092, 38130, 38132, 38277, 38291, 38303, 38406, 38456, 38543, 38630, 38646, 38658, 38661, 38712, 38723, 38732, 38788, 38803, 38812, 38845, 38941, 38948, 39007, 39125, 39162, 39214, 39318, 39357, 39361, 39457, 39531, 39553, 39608, 39612, 39642, 39656, 39662, 39665, 39775, 39886, 39900, 39902, 39906, 39954, 40027, 40037, 40051, 40057, 40062, 40151, 40307, 40347, 40388, 40389, 40448, 40463, 40473, 40515, 40534, 40543, 40572, 40631, 40643, 40650, 40654, 40658, 40693, 40705, 40775, 40813, 40839, 40847, 40852, 40881, 40904, 40953, 40960, 41052, 41226, 41249, 41257, 41264, 41363, 41417, 41490, 41712, 41794, 41979, 42006, 42061, 42231, 42258, 42259, 42281, 42286, 42289, 42306, 42331, 42434, 42442, 42507, 42524, 42650, 42670, 42690, 42709, 42868, 42875, 42928, 42967, 43059, 43098, 43108, 43124, 43135, 43144, 43201, 43225, 43243, 43328, 43343, 43361, 43392, 43455, 43591, 43643, 43913, 44071, 44081, 44110, 44117, 44172, 44310, 44338, 44391, 44393, 44400, 44480, 44530, 44589, 44620, 44686, 44738, 44766, 44818, 44829, 44851, 44875, 44889, 44903, 45045, 45057, 45121, 45137, 45206, 45231, 45396, 45404, 45446, 45503, 45533, 45539, 45544, 45686, 45722, 45780, 45817, 45862, 45876, 45879, 45972, 45976, 45990, 46006, 46106, 46146, 46163, 46213, 46228, 46267, 46278, 46369, 46462, 46612, 46762, 46851, 46892, 46958, 46964, 46980, 46987, 47010, 47052, 47054, 47081, 47265, 47303, 47312, 47376, 47455, 47607, 47653, 47659, 47671, 47702, 47839, 47843, 47864, 47980, 47994, 48003, 48093, 48103, 48119, 48123, 48134, 48140, 48158, 48294, 48345, 48373, 48375, 48475, 48507, 48547, 48565, 48572, 48595, 48619, 48672, 48726, 48754, 48758, 48771, 48814, 48851, 48904, 48913, 49006, 49013, 49069, 49110, 49145, 49151, 49173, 49232, 49285, 49298, 49324, 49329, 49340, 49368, 49405, 49580, 49629, 49639, 49659, 49806, 49932, 49958, 49963, 49967
        };
        unsigned int list2_size = 500;
        unsigned int list2[] = {
            42, 56, 71, 121, 138, 166, 177, 194, 246, 290, 351, 366, 383, 395, 399, 405, 501, 508, 522, 578, 582, 721, 853, 1100, 1242, 1263, 1270, 1429, 1442, 1444, 1605, 1765, 1850, 1869, 1883, 1891, 1902, 1926, 2042, 2145, 2245, 2261, 2309, 2343, 2578, 2635, 2647, 2657, 2794, 2824, 2849, 2889, 2957, 3037, 3110, 3164, 3170, 3183, 3253, 3289, 3298, 3309, 3370, 3376, 3428, 3595, 3639, 3786, 3816, 3831, 3895, 3926, 3940, 4021, 4076, 4152, 4252, 4276, 4305, 4452, 4455, 4491, 4710, 4734, 4744, 4861, 4868, 4912, 4961, 5004, 5010, 5068, 5119, 5130, 5160, 5173, 5181, 5532, 5773, 5783, 5825, 5917, 5960, 5964, 6200, 6270, 6392, 6395, 6397, 6447, 6482, 6620, 6769, 6989, 7085, 7092, 7150, 7221, 7392, 7478, 7487, 7548, 7641, 7743, 7824, 7847, 7890, 7925, 8117, 8149, 8208, 8247, 8302, 8320, 8416, 8418, 8501, 8578, 8768, 8896, 8930, 8941, 8955, 8991, 8997, 9028, 9086, 9090, 9097, 9156, 9169, 9219, 9305, 9469, 9511, 9550, 9571, 9581, 9593, 9663, 9673, 9687, 9715, 9738, 9758, 9760, 9801, 9834, 9861, 9882, 9898, 9915, 9917, 10150, 10171, 10179, 10250, 10304, 10336, 10460, 10463, 10499, 10519, 10625, 10684, 10688, 10831, 10844, 10845, 10863, 11110, 11149, 11217, 11529, 11611, 11689, 11897, 12031, 12158, 12190, 12279, 12418, 12521, 12536, 12581, 12627, 12638, 12712, 12738, 12761, 12891, 12956, 13030, 13143, 13246, 13311, 13465, 13697, 13729, 13765, 13773, 13781, 13830, 13964, 13969, 14069, 14225, 14240, 14496, 14536, 14649, 14664, 14682, 14684, 14729, 14747, 14748, 14832, 14833, 14843, 14847, 14890, 15062, 15221, 15222, 15228, 15278, 15493, 15504, 15586, 15655, 15743, 16019, 16075, 16095, 16104, 16146, 16168, 16198, 16204, 16235, 16256, 16287, 16288, 16310, 16323, 16352, 16363, 16677, 16692, 16735, 16814, 16862, 16961, 17020, 17072, 17154, 17184, 17230, 17243, 17248, 17269, 17318, 17447, 17450, 17507, 17641, 17804, 17823, 17827, 17920, 17979, 18038, 18102, 18128, 18155, 18291, 18340, 18441, 18469, 18527, 18616, 18710, 18752, 18773, 18839, 18866, 18931, 18943, 18988, 19024, 19251, 19287, 19415, 19458, 19556, 19588, 19655, 19764, 19771, 19826, 19920, 19977, 20089, 20096, 20134, 20160, 20307, 20399, 20413, 20450, 20489, 20671, 20830, 20959, 20968, 21083, 21091, 21417, 21502, 21540, 21546, 21566, 21608, 21636, 21651, 21669, 21710, 21733, 21823, 21830, 21839, 21899, 21921, 21939, 21965, 22103, 22130, 22144, 22161, 22168, 22181, 22229, 22253, 22269, 22275, 22355, 22380, 22451, 22460, 22552, 22567, 22720, 22759, 22762, 22821, 22921, 22967, 23006, 23143, 23175, 23225, 23252, 23327, 23388, 23406, 23448, 23544, 23637, 23647, 23774, 23809, 23853, 23861, 23938, 23942, 24057, 24279, 24318, 24408, 24436, 24582, 24613, 24673, 24698, 24738, 24775, 24812, 24986, 24993, 25032, 25088, 25265, 25277, 25286, 25313, 25399, 25493, 25541, 25645, 25752, 25755, 25795, 25864, 25900, 26109, 26125, 26137, 26218, 26271, 26275, 26283, 26286, 26298, 26321, 26324, 26370, 26396, 26416, 26832, 26848, 26906, 26987, 27073, 27160, 27219, 27228, 27272, 27426, 27618, 27691, 27716, 27914, 27958, 28052, 28101, 28110, 28111, 28119, 28139, 28195, 28213, 28265, 28275, 28293, 28322, 28341, 28387, 28412, 28421, 28428, 28432, 28512, 28567, 28616, 28641, 28796, 28921, 28949, 28958, 28985, 29007, 29021, 29124, 29146, 29158, 29216, 29299, 29338, 29388, 29402, 29664, 29668, 29669, 29689, 29840, 29894, 29914, 29942, 29958
        };
        
        printf("--------------------------------------------------------------------------------------------------\n");
        printf("1. Encode List-1 by WAH                         2. Encode List-2 by WAH\n");
        printf("3. Encode List-1 by FAH                         4. Encode List-2 by FAH\n");
        printf("5. Show values in FAW-encoded List-1            6. Show values in FAW-encoded List-2\n");
        printf("7. Decode & show FAW-encoded List-1             8. Decode & show FAW-encoded List-2\n");
        printf("9. Search a value in FAW-encoded List-1         10. Search a value in FAW-encoded List-2\n");
        printf("11. Find common (INTERSECT) values from FAW-encoded List1 and List2\n");
        printf("12. Merge (UNION) values of FAW-encoded List1 and List2\n");
        printf("99. Exit");
        printf("\n--------------------------------------------------------------------------------------------------\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);
        unsigned int wah_encoded_size, faw_encoded_list1_size, faw_encoded_list2_size, i, needle, result_size;
        short result;
        unsigned int* results;
        switch (choice)
        {
        case 1:
            wah_encoded_size = wah_encode(list1, list1_size);
            printf("#items in WAH-encoded List-1: %d\n", wah_encoded_size);
            break;
        case 2:
            wah_encoded_size = wah_encode(list2, list2_size);
            printf("#items in WAH-encoded List-2: %d\n", wah_encoded_size);
            break;
        case 3:
            faw_encoded_list1_size = encode(list1, list1_size);
            printf("#items in FAW-encoded List-1: %d\n", faw_encoded_list1_size);
            break;
        case 4:
            faw_encoded_list2_size = encode(list2, list2_size);
            printf("#items in FAW-encoded List-2: %d\n", faw_encoded_list2_size);
            break;
        case 5:
            faw_encoded_list1_size = encode(list1, list1_size);
            show_items(list1, faw_encoded_list1_size);
            break;
        case 6:
            faw_encoded_list2_size = encode(list2, list2_size);
            show_items(list2, faw_encoded_list2_size);
            break;
        case 7:
            faw_encoded_list1_size = encode(list1, list1_size);
            list1_size = decode(list1, faw_encoded_list1_size);
            i = 0;
            while(i < list1_size){
                printf("%u, ", list1[i++]);
            }
            printf("; #items: %d\n", i);
            break;
        case 8:
            faw_encoded_list2_size = encode(list2, list2_size);
            list2_size = decode(list2, faw_encoded_list2_size);
            i = 0;
            while(i < list2_size){
                printf("%u, ", list2[i++]);
            }
            printf("; #items: %d\n", i);
            break;
        case 9:
            printf("Enter a value to search in FAW-encoded List1: ");
            scanf("%u", &needle);
            faw_encoded_list1_size = encode(list1, list1_size);
            result = exists(list1, faw_encoded_list1_size, needle);
            printf("%d %s in the FAW-encoded List1\n", needle, result==1 ? "exists" : "doesn't exist");
            break;
        case 10:
            printf("Enter a value to search in FAW-encoded List2: ");
            scanf("%u", &needle);
            faw_encoded_list2_size = encode(list2, list2_size);
            result = exists(list2, faw_encoded_list2_size, needle);
            printf("%d %s in the FAW-encoded List2\n", needle, result==1 ? "exists" : "doesn't exist");
            break;
        case 11:
            faw_encoded_list1_size = encode(list1, list1_size);
            faw_encoded_list2_size = encode(list2, list2_size);
            result_size = 0;
            results = intersect(list1, faw_encoded_list1_size, list2, faw_encoded_list2_size, &result_size);
            i = 0;
            while(i < result_size){
                printf("%u, ", results[i++]);
            }
            printf("; #common-values: %d\n", i);
            break;
        case 12:
            faw_encoded_list1_size = encode(list1, list1_size);
            faw_encoded_list2_size = encode(list2, list2_size);
            result_size = 0;
            results = merge(list1, faw_encoded_list1_size, list2, faw_encoded_list2_size, &result_size);
            i = 0;
            while(i < result_size){
                printf("%u, ", results[i++]);
            }
            printf("; #Merged-values: %d\n", i);
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }while(choice != 99);
    
    return 0;
}