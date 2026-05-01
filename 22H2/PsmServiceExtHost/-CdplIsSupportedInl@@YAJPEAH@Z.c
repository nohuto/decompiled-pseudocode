/*
 * XREFs of ?CdplIsSupportedInl@@YAJPEAH@Z @ 0x18003C6E8
 * Callers:
 *     ?HampSystemCdplIsManaged@@YAKXZ @ 0x18003C6BC (-HampSystemCdplIsManaged@@YAKXZ.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180026AF0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18003857C (-MemoryFree@@YAXPEAX@Z.c)
 *     RtlULongLongAdd @ 0x18003E718 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x18003E73C (RtlUIntAdd.c)
 *     StringCchLengthW @ 0x18003E75C (StringCchLengthW.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x180043464 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ @ 0x180043BE4 (-Reset@-$SP@GV-$SP_MEM@G@@@@QEAAXXZ.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x180043E2C (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180047B22 (memcpy_0.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 *     wcscmp_0 @ 0x180047B46 (wcscmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 *     _alloca_probe @ 0x180047B80 (_alloca_probe.c)
 *     ?Reset@?$SH@PEAXVSH_HANDLE@@@@QEAAXXZ @ 0x180086494 (-Reset@-$SH@PEAXVSH_HANDLE@@@@QEAAXXZ.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x1800864C4 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 */

__int64 __fastcall CdplIsSupportedInl(int *a1)
{
  int v2; // r15d
  int v3; // edi
  int v5; // ecx
  int v6; // eax
  char *v7; // rax
  __int64 v8; // rsi
  _BYTE *v9; // r12
  int v10; // eax
  unsigned __int8 *v11; // r13
  int v12; // ebx
  int v13; // r11d
  int v14; // r14d
  int v15; // r10d
  int v16; // r9d
  int v17; // ecx
  int v18; // r10d
  int v19; // r11d
  int v20; // r9d
  unsigned int v21; // r8d
  int v22; // r11d
  unsigned int v23; // r8d
  int v24; // r11d
  int v25; // r8d
  unsigned int v26; // r11d
  int v27; // r8d
  int v28; // r11d
  int v29; // r8d
  unsigned int v30; // r11d
  int v31; // edx
  int v32; // r11d
  unsigned int v33; // ebx
  int v34; // r11d
  int v35; // ebx
  int v36; // r11d
  int v37; // ebx
  unsigned int v38; // r11d
  int v39; // ebx
  int v40; // r11d
  int v41; // ebx
  unsigned int v42; // r11d
  int v43; // ebx
  int v44; // edx
  int v45; // ecx
  int v46; // ebx
  int v47; // edx
  int v48; // r11d
  int v49; // r11d
  int v50; // ebx
  int v51; // r11d
  int v52; // ebx
  int v53; // r11d
  int v54; // ebx
  unsigned __int16 *v55; // r14
  unsigned __int64 v56; // rcx
  char v57; // al
  int v58; // esi
  int v59; // edi
  LPCWSTR i; // rdi
  unsigned int v61; // r12d
  const WCHAR *v62; // rdx
  __int64 v63; // rax
  const WCHAR *v64; // rdi
  char *v65; // rbx
  __int64 v66; // rcx
  unsigned __int64 v67; // rcx
  unsigned int v68; // r13d
  unsigned int v69; // r14d
  const CHAR *v70; // rdx
  __int64 v71; // rax
  void **ProcAddress; // rcx
  HANDLE ProcessHeap; // rax
  __int64 v74; // rbx
  HMODULE *v75; // rdi
  int v76; // esi
  signed int v77; // edi
  __int64 v78; // r14
  __int64 v79; // r9
  wchar_t *j; // rbx
  signed int LastError; // eax
  signed int v82; // eax
  DWORD CurrentThreadId; // eax
  __int64 v84; // r14
  __int64 v85; // r9
  wchar_t *k; // rbx
  signed int v87; // eax
  HANDLE CurrentProcess; // rax
  int v89; // eax
  int v90; // r12d
  unsigned __int16 *v91; // r13
  HANDLE v92; // rax
  unsigned __int16 *v93; // rbx
  _OWORD *v94; // rax
  HANDLE v95; // rax
  _QWORD *v96; // rax
  _QWORD *v97; // r13
  int v98; // eax
  unsigned int v99; // edi
  int v100; // eax
  unsigned int v101; // r11d
  int v102; // eax
  int v103; // eax
  unsigned int v104; // r11d
  int v105; // r10d
  int v106; // eax
  int v107; // eax
  unsigned int v108; // r11d
  int v109; // r10d
  int v110; // eax
  int v111; // eax
  size_t v112; // rdx
  const wchar_t *v113; // rcx
  int v114; // r10d
  unsigned int v115; // r11d
  int v116; // eax
  int v117; // eax
  unsigned int v118; // r11d
  int v119; // r10d
  int v120; // eax
  int v121; // eax
  unsigned int v122; // r11d
  int v123; // r10d
  int v124; // eax
  int v125; // eax
  int v126; // r10d
  unsigned int v127; // edi
  HANDLE v128; // rax
  _DWORD *v129; // rax
  _DWORD *v130; // rdi
  __int64 v131; // r11
  int v132; // eax
  _DWORD *v133; // rax
  int v134; // edi
  int v135; // eax
  __int64 v136; // rdx
  _DWORD *v137; // rdi
  int v138; // eax
  unsigned int v139; // r9d
  int v140; // r10d
  _OWORD *v141; // rax
  int v142; // eax
  __int64 v143; // rdx
  _DWORD *v144; // rdi
  int v145; // eax
  unsigned int v146; // r9d
  int v147; // r10d
  _QWORD *v148; // rax
  int v149; // eax
  const wchar_t *v150; // rcx
  size_t v151; // rdx
  _DWORD *v152; // rdi
  int v153; // eax
  unsigned int v154; // r9d
  int v155; // r10d
  STRSAFE_PCNZWCH *v156; // rax
  __int64 v157; // r11
  int v158; // eax
  __int64 v159; // rdx
  _DWORD *v160; // rdi
  int v161; // eax
  __int64 v162; // rcx
  unsigned int v163; // r9d
  int v164; // r11d
  __int64 v165; // r10
  void *v166; // rcx
  int v167; // eax
  __int64 v168; // rdx
  _DWORD *v169; // rdi
  int v170; // eax
  unsigned int v171; // r9d
  int v172; // r10d
  int *v173; // rax
  int v174; // eax
  __int64 v175; // rdx
  void *v176; // rdi
  HANDLE v177; // rax
  void *v178; // rdi
  HANDLE v179; // rax
  HANDLE v180; // rax
  HANDLE v181; // rax
  DWORD ModuleFileNameW; // eax
  _DWORD *v183; // rdi
  int v184; // eax
  unsigned int v185; // r9d
  int v186; // r10d
  _DWORD *v187; // rax
  int v188; // eax
  __int64 v189; // rcx
  unsigned int v190; // r9d
  int v191; // eax
  unsigned int v192; // r9d
  unsigned int v193; // edi
  unsigned int v194; // r11d
  int v195; // eax
  unsigned int v196; // r11d
  int v197; // eax
  unsigned int v198; // r11d
  int v199; // eax
  unsigned int v200; // r11d
  int v201; // eax
  unsigned int v202; // eax
  unsigned __int16 *v203; // rdi
  unsigned __int64 v204; // r13
  int v205; // r12d
  unsigned int v206; // eax
  unsigned int v207; // edi
  HANDLE v208; // rax
  _DWORD *v209; // rdi
  unsigned int v210; // r11d
  void *v211; // rcx
  HANDLE v212; // rax
  _QWORD *v213; // rbx
  int v214; // r12d
  unsigned __int8 v215; // al
  unsigned __int64 m; // rcx
  _BYTE *v217; // r12
  int v218; // r10d
  unsigned __int16 *v219; // r8
  unsigned int v220; // r9d
  unsigned int v221; // edx
  int v222; // r11d
  int v223; // r10d
  char v224; // r9
  int v225; // edi
  int v226; // ecx
  unsigned int v227; // r10d
  unsigned int v228; // ecx
  int v229; // edi
  int v230; // r11d
  char v231; // r14
  unsigned __int64 v232; // r11
  unsigned __int8 *v233; // rdx
  int v234; // r14d
  int v235; // ebx
  _BYTE *v236; // rax
  int v237; // r12d
  int v238; // r15d
  int v239; // r8d
  int v240; // edi
  int v241; // r10d
  int v242; // r9d
  int v243; // r10d
  int v244; // r9d
  int v245; // r10d
  unsigned int v246; // r9d
  int v247; // r10d
  int v248; // r9d
  int v249; // r10d
  int v250; // r9d
  int v251; // r10d
  int v252; // r9d
  unsigned int v253; // r10d
  unsigned int v254; // r9d
  int v255; // r10d
  int v256; // r9d
  int v257; // r10d
  int v258; // r9d
  int v259; // r10d
  int v260; // r9d
  int v261; // r10d
  int v262; // r9d
  unsigned int v263; // r10d
  int v264; // r9d
  unsigned int v265; // r10d
  int v266; // r9d
  int v267; // r10d
  int v268; // r9d
  int v269; // r10d
  int v270; // r9d
  int v271; // r10d
  int v272; // r9d
  int v273; // r10d
  unsigned int v274; // r12d
  HANDLE v275; // rax
  _DWORD *v276; // rax
  _DWORD *v277; // rdi
  HANDLE v278; // rax
  void *v279; // rax
  HANDLE v280; // rax
  _OWORD *v281; // rax
  HANDLE v282; // rax
  _QWORD *v283; // rax
  void *v284; // r13
  HANDLE v285; // rax
  void *v286; // r13
  HANDLE v287; // rax
  void *v288; // r13
  HANDLE v289; // rax
  HANDLE v290; // rax
  void *v291; // rdi
  HANDLE v292; // rax
  void *v293; // rdi
  HANDLE v294; // rax
  void *v295; // rdi
  HANDLE v296; // rax
  void *v297; // rdi
  HANDLE v298; // rax
  HANDLE v299; // rax
  const void **v300; // rbx
  int v301; // r12d
  unsigned int v302; // eax
  unsigned int v303; // edi
  HANDLE v304; // rax
  _DWORD *v305; // rdi
  void *v306; // rcx
  void *v307; // rcx
  HANDLE v308; // rax
  int v309; // eax
  unsigned int v310; // ecx
  unsigned int v311; // eax
  unsigned int v312; // edi
  int v313; // eax
  unsigned int *v314; // rcx
  unsigned int v315; // ebx
  int v316; // r9d
  int v317; // r9d
  unsigned int *v318; // rax
  unsigned int *v319; // rcx
  unsigned int v320; // ebx
  int v321; // r9d
  int v322; // r9d
  unsigned int *v323; // rax
  unsigned int v324; // r10d
  unsigned int v325; // r11d
  unsigned int v326; // eax
  unsigned int v327; // edi
  HANDLE v328; // rax
  int *v329; // rax
  int *v330; // rbx
  FARPROC v331; // rax
  int v332; // eax
  unsigned int v333; // edi
  signed int v334; // eax
  int v335; // r12d
  SIZE_T v336; // r9
  unsigned int v337; // r9d
  SIZE_T v338; // rbx
  SIZE_T v339; // r13
  unsigned int v340; // r10d
  int v341; // r9d
  HANDLE v342; // rax
  _QWORD *v343; // rax
  _QWORD *v344; // rdi
  unsigned int *v345; // rbx
  int *v346; // rdi
  unsigned int v347; // r13d
  unsigned __int8 *v348; // r12
  __int64 v349; // rbx
  unsigned __int64 v350; // rbx
  int *v351; // r11
  unsigned __int8 v352; // al
  char *v353; // rcx
  unsigned __int8 *v354; // r8
  int v355; // r10d
  unsigned int v356; // edx
  int v357; // r12d
  char v358; // r9
  int v359; // edi
  int v360; // ecx
  HANDLE v361; // rax
  void *v362; // rax
  HANDLE v363; // rax
  void *v364; // rax
  HANDLE v365; // rax
  void *v366; // rax
  void *v367; // rbx
  HANDLE v368; // rax
  void *v369; // rbx
  HANDLE v370; // rax
  void *v371; // rbx
  HANDLE v372; // rax
  HANDLE v373; // rax
  unsigned int *v374; // rdi
  void *v375; // rbx
  HANDLE v376; // rax
  void *v377; // rbx
  HANDLE v378; // rax
  void *v379; // rbx
  HANDLE v380; // rax
  HANDLE v381; // rax
  unsigned int v382; // r9d
  unsigned int v383; // r10d
  int v384; // ecx
  int v385; // edi
  int v386; // r12d
  _BYTE *v387; // rsi
  char v388; // r14
  unsigned __int64 v389; // r12
  int v390; // eax
  _BYTE *v391; // rbx
  int v392; // esi
  unsigned __int8 *v393; // r15
  int v394; // r13d
  unsigned int v395; // r11d
  int v396; // r8d
  int v397; // edi
  int v398; // ecx
  int v399; // r8d
  int v400; // r9d
  int v401; // edi
  unsigned int v402; // r10d
  int v403; // r9d
  unsigned int v404; // r10d
  int v405; // r9d
  int v406; // r10d
  unsigned int v407; // r9d
  int v408; // r10d
  int v409; // r9d
  int v410; // r10d
  unsigned int v411; // r9d
  int v412; // r10d
  int v413; // r9d
  unsigned int v414; // r10d
  int v415; // r9d
  int v416; // r10d
  int v417; // r9d
  int v418; // r10d
  int v419; // r9d
  int v420; // r10d
  int v421; // r9d
  int v422; // r10d
  unsigned int v423; // r9d
  int v424; // r10d
  int v425; // edx
  int v426; // ecx
  int v427; // r10d
  int v428; // edx
  int v429; // r9d
  int v430; // r9d
  int v431; // r10d
  int v432; // r9d
  int v433; // r10d
  int v434; // r9d
  int v435; // r10d
  unsigned __int64 n; // rcx
  int v437; // ebx
  int *v438; // rbx
  HANDLE v439; // rax
  int v440; // r12d
  unsigned int v441; // r11d
  __int64 v442; // r11
  __int64 v443; // rdx
  SIZE_T v444; // r13
  char *v445; // rcx
  void *v446; // rbx
  void *v447; // rdi
  unsigned int *v448; // rdi
  unsigned int *v449; // r10
  unsigned __int64 v450; // r10
  int v451; // eax
  unsigned int v452; // r9d
  HANDLE v453; // rax
  HANDLE v454; // rax
  _QWORD *v455; // rbx
  void *v456; // rdi
  HANDLE v457; // rax
  void *v458; // rdi
  HANDLE v459; // rax
  void *v460; // rdi
  HANDLE v461; // rax
  HANDLE v462; // rax
  HANDLE v463; // rax
  HANDLE v464; // rax
  void *v465; // rdi
  HANDLE v466; // rax
  void *v467; // rdi
  HANDLE v468; // rax
  void *v469; // rdi
  HANDLE v470; // rax
  HANDLE v471; // rax
  HANDLE v472; // rax
  __int64 v473; // r11
  int v474; // r9d
  int *v475; // rax
  int *v476; // rcx
  int v477; // edi
  unsigned int v478; // r9d
  int v479; // edi
  int *v480; // rax
  int *v481; // rcx
  unsigned int v482; // edi
  unsigned int v483; // r9d
  int v484; // edi
  int *v485; // rax
  LPVOID v486; // rcx
  unsigned int v487; // edi
  unsigned int v488; // r9d
  int v489; // r10d
  void *v490; // rdi
  int *v491; // rcx
  unsigned int v492; // r11d
  int v493; // r9d
  int v494; // r11d
  int v495; // r9d
  int *v496; // rax
  unsigned int *v497; // rcx
  unsigned int v498; // ebx
  unsigned int v499; // r10d
  unsigned int v500; // r11d
  int v501; // r9d
  int v502; // r9d
  unsigned int *v503; // rax
  int v504; // ecx
  __int64 v505; // rax
  unsigned int v506; // edi
  int v507; // eax
  char *v508; // rax
  __int64 v509; // rdi
  int v510; // r13d
  _BYTE *v511; // r14
  int v512; // esi
  unsigned __int8 *v513; // r12
  int v514; // ebx
  int v515; // eax
  int v516; // r11d
  int v517; // r10d
  int v518; // ecx
  int v519; // r11d
  int v520; // ebx
  int v521; // r10d
  unsigned int v522; // r9d
  int v523; // ebx
  unsigned int v524; // r9d
  int v525; // ebx
  int v526; // r9d
  unsigned int v527; // ebx
  int v528; // r9d
  int v529; // ebx
  int v530; // r9d
  unsigned int v531; // ebx
  int v532; // edx
  int v533; // ebx
  unsigned int v534; // esi
  int v535; // ebx
  int v536; // esi
  int v537; // ebx
  int v538; // esi
  unsigned int v539; // r8d
  int v540; // esi
  int v541; // r8d
  int v542; // esi
  unsigned int v543; // r8d
  int v544; // esi
  int v545; // ebx
  int v546; // ecx
  int v547; // esi
  int v548; // ebx
  int v549; // ebx
  int v550; // esi
  int v551; // ebx
  int v552; // esi
  int v553; // ebx
  int v554; // esi
  char v555; // al
  unsigned __int64 v556; // rcx
  int v557; // r13d
  unsigned __int16 *v558; // rdx
  int v559; // ebx
  LPCWSTR v560; // rbx
  const WCHAR *v561; // rdx
  __int64 v562; // rax
  const WCHAR *v563; // rbx
  HMODULE *v564; // r8
  __int64 v565; // rcx
  unsigned __int64 v566; // rcx
  unsigned int v567; // eax
  unsigned int v568; // ecx
  const CHAR *v569; // rdx
  __int64 v570; // rax
  void **v571; // rcx
  HANDLE v572; // rax
  HMODULE *v573; // rbx
  __int64 v574; // r13
  int v575; // eax
  char *v576; // rax
  __int64 v577; // rdi
  int v578; // r13d
  _BYTE *v579; // rsi
  int v580; // r14d
  unsigned __int8 *v581; // r12
  int v582; // ebx
  int v583; // eax
  int v584; // r11d
  int v585; // r10d
  int v586; // ecx
  int v587; // r11d
  int v588; // ebx
  int v589; // r10d
  unsigned int v590; // r9d
  int v591; // ebx
  unsigned int v592; // r9d
  int v593; // ebx
  int v594; // r9d
  unsigned int v595; // ebx
  int v596; // r9d
  int v597; // ebx
  int v598; // r9d
  unsigned int v599; // ebx
  int v600; // r9d
  int v601; // ebx
  unsigned int v602; // r14d
  int v603; // ebx
  int v604; // r14d
  int v605; // ebx
  int v606; // r14d
  unsigned int v607; // ebx
  int v608; // r14d
  int v609; // ebx
  int v610; // r14d
  unsigned int v611; // ebx
  int v612; // r14d
  int v613; // edx
  int v614; // ecx
  int v615; // r14d
  int v616; // edx
  int v617; // ebx
  int v618; // ebx
  int v619; // r14d
  int v620; // ebx
  int v621; // r14d
  int v622; // ebx
  int v623; // r14d
  char v624; // al
  unsigned __int64 v625; // rcx
  int v626; // r13d
  WCHAR *v627; // rdx
  int v628; // ebx
  LPCWSTR v629; // rbx
  const WCHAR *v630; // rdx
  __int64 v631; // rax
  const WCHAR *v632; // rbx
  HMODULE *v633; // r8
  __int64 v634; // rcx
  unsigned __int64 v635; // rcx
  unsigned int v636; // eax
  unsigned int v637; // ecx
  const CHAR *v638; // rdx
  __int64 v639; // rax
  void **v640; // rcx
  HANDLE v641; // rax
  HMODULE *v642; // rbx
  __int64 v643; // r13
  signed int v644; // eax
  signed int v645; // r13d
  _DWORD *v646; // rdi
  WARBIRD_DELAY_LOAD *v647; // rbx
  signed int v648; // eax
  _DWORD *v649; // rax
  _DWORD *v650; // rdi
  unsigned int v651; // esi
  __int64 v652; // rax
  unsigned int v653; // r10d
  unsigned int v654; // r9d
  __int64 v655; // r8
  unsigned int v656; // ecx
  unsigned int *v657; // rdx
  __int64 v658; // rdi
  const wchar_t *v659; // rcx
  __int64 v660; // r8
  const wchar_t **v661; // rdx
  __int64 v662; // rax
  char *v663; // rax
  _BYTE *v664; // r14
  int v665; // r11d
  unsigned __int8 *v666; // rsi
  int v667; // r10d
  int v668; // ebx
  int v669; // r15d
  __int64 v670; // r12
  int v671; // r9d
  int v672; // r8d
  int v673; // eax
  int v674; // r9d
  int v675; // r10d
  int v676; // r8d
  unsigned int v677; // edi
  int v678; // r10d
  unsigned int v679; // edi
  int v680; // r10d
  int v681; // edi
  unsigned int v682; // r10d
  int v683; // edi
  int v684; // r10d
  int v685; // edi
  unsigned int v686; // r10d
  int v687; // edi
  int v688; // r10d
  unsigned int v689; // r11d
  int v690; // r10d
  int v691; // r11d
  int v692; // r10d
  int v693; // r11d
  unsigned int v694; // r10d
  int v695; // r11d
  int v696; // r10d
  int v697; // r11d
  unsigned int v698; // r10d
  int v699; // r11d
  int v700; // ecx
  int v701; // eax
  int v702; // r11d
  int v703; // ecx
  int v704; // r10d
  int v705; // r10d
  int v706; // r11d
  int v707; // r10d
  int v708; // r11d
  int v709; // r10d
  int v710; // r11d
  unsigned __int64 v711; // rax
  void *v712; // rbx
  __m128i v713; // xmm1
  __m128i v714; // xmm0
  __m128i v715; // xmm0
  __m128i v716; // xmm1
  __m128i v717; // xmm1
  __m128i v718; // xmm1
  _BYTE *v719; // rdx
  _QWORD *v720; // rdi
  __int64 v721; // r8
  unsigned int kk; // ecx
  __int64 v723; // rax
  void **v724; // rdi
  void **v725; // rbx
  __int16 *v726; // rcx
  void **v727; // rdx
  unsigned int v728; // r8d
  __int16 v729; // r9
  _WORD *v730; // rcx
  __int64 v731; // rax
  __int64 v732; // rcx
  __int64 v733; // rax
  int v734; // eax
  void *v735; // rcx
  __int64 v736; // rax
  signed int v737; // eax
  __int64 v738; // rax
  _WORD *v739; // rdi
  __int64 v740; // rcx
  int v741; // edi
  signed int v742; // eax
  unsigned int v743; // edi
  char *v744; // rbx
  int v745; // eax
  __int64 v746; // rax
  signed int v747; // eax
  signed int v748; // eax
  unsigned __int16 *v749; // rax
  __int64 v750; // rbx
  int v751; // eax
  __int64 v752; // rax
  signed int v753; // eax
  int v754; // ebx
  unsigned int v755; // edx
  int v756; // ecx
  int v757; // eax
  int v758; // ebx
  void *v759; // rdi
  void *v760; // rdi
  __int64 v761; // rdx
  __int64 v762; // rdi
  int v763; // eax
  __int64 v764; // rax
  signed int v765; // eax
  void *v766; // rdi
  __int64 v767; // rbx
  int v768; // eax
  unsigned __int64 v769; // rdx
  int v770; // edx
  int v771; // r13d
  int v772; // ebx
  int v773; // edi
  __int64 v774; // rax
  int v775; // edx
  int v776; // ecx
  __int64 v777; // rax
  int v778; // ebx
  int v779; // eax
  __int64 v780; // rbx
  HMODULE *v781; // rdi
  unsigned int v782; // edi
  LPVOID v783; // r13
  __int64 v784; // rax
  bool v785; // zf
  int v786; // ebx
  int v787; // eax
  void *v788; // rdi
  __int64 v789; // rax
  __int64 v790; // rax
  WARBIRD_DELAY_LOAD *v791; // r13
  signed int v792; // ebx
  signed int v793; // eax
  int v794; // eax
  char *v795; // rcx
  __int64 v796; // rax
  int v797; // r8d
  int v798; // edx
  int v799; // r9d
  int v800; // edi
  int v801; // ecx
  int v802; // r11d
  char *v803; // rdx
  unsigned __int16 *v804; // rax
  __int64 v805; // r12
  __int64 v806; // r10
  unsigned __int8 *v807; // r9
  int nn; // edi
  int v809; // r8d
  int v810; // edi
  int v811; // edx
  int v812; // edi
  int v813; // edx
  void *v814; // rdi
  LPVOID v815; // r13
  __int64 v816; // rax
  __int64 v817; // rax
  WARBIRD_DELAY_LOAD *v818; // r13
  signed int v819; // ebx
  signed int v820; // eax
  int v821; // eax
  char *v822; // rcx
  __int64 v823; // rax
  int v824; // eax
  int v825; // r8d
  int v826; // edi
  int v827; // r9d
  int v828; // ecx
  int v829; // edx
  int v830; // r11d
  int v831; // esi
  char *v832; // rdx
  unsigned __int16 *v833; // rax
  unsigned __int8 *v834; // r9
  __int64 v835; // r10
  int i1; // edi
  int v837; // r8d
  int v838; // edi
  int v839; // edx
  int v840; // edi
  int v841; // edx
  LPVOID v842; // rdi
  char v843; // al
  int v844; // r11d
  unsigned int v845; // r13d
  int v846; // ecx
  unsigned __int64 v847; // kr00_8
  int v848; // edi
  __int64 v849; // rax
  void *v850; // rbx
  __int64 v851; // rax
  int v852; // ebx
  int v853; // edi
  void *v854; // rax
  signed int v855; // eax
  bool v856; // sf
  int v857; // eax
  char *v858; // rcx
  int v859; // edi
  __int64 v860; // rax
  int v861; // r8d
  int v862; // r9d
  int v863; // edx
  int v864; // ecx
  int v865; // ebx
  int v866; // r11d
  unsigned __int8 *v867; // rdi
  char *v868; // rax
  unsigned __int8 *v869; // r9
  int v870; // r8d
  __int64 v871; // r10
  int v872; // r8d
  int v873; // edi
  int v874; // edx
  int v875; // edi
  int v876; // edx
  int v877; // edi
  int v878; // ecx
  void *v879; // rdi
  __int64 v880; // rax
  int v881; // edi
  signed int v882; // ebx
  void *v883; // rax
  signed int v884; // eax
  int v885; // eax
  __int64 v886; // rcx
  __int64 v887; // rax
  int v888; // eax
  int v889; // edx
  int v890; // r9d
  int v891; // r10d
  int v892; // r8d
  int v893; // ecx
  int v894; // r11d
  unsigned __int8 *v895; // rdx
  char *v896; // rax
  unsigned __int8 *v897; // r9
  __int64 v898; // r10
  int mm; // edi
  int v900; // r8d
  int v901; // edi
  int v902; // edx
  int v903; // edi
  int v904; // edx
  __int64 v905; // rcx
  __int64 v906; // rcx
  __int64 v907; // rcx
  int v908; // eax
  HMODULE *v909; // rdi
  __int64 v910; // rbx
  int v911; // eax
  char *v912; // rax
  _BYTE *v913; // rsi
  __int64 v914; // rax
  unsigned __int8 *v915; // r13
  int v916; // r14d
  int v917; // ebx
  int v918; // r11d
  int v919; // r12d
  int v920; // r10d
  int v921; // r9d
  int v922; // ecx
  int v923; // r10d
  int v924; // r11d
  int v925; // r9d
  unsigned int v926; // r8d
  int v927; // r11d
  unsigned int v928; // r8d
  int v929; // r11d
  int v930; // r8d
  unsigned int v931; // r11d
  int v932; // r8d
  int v933; // r11d
  int v934; // r8d
  unsigned int v935; // r11d
  int v936; // edx
  int v937; // r11d
  unsigned int v938; // ebx
  int v939; // r11d
  int v940; // ebx
  int v941; // r11d
  int v942; // ebx
  unsigned int v943; // r11d
  int v944; // ebx
  int v945; // r11d
  int v946; // ebx
  unsigned int v947; // r11d
  int v948; // ebx
  int v949; // edx
  int v950; // ecx
  int v951; // ebx
  int v952; // edx
  int v953; // r11d
  int v954; // r11d
  int v955; // ebx
  int v956; // r11d
  int v957; // ebx
  int v958; // r11d
  int v959; // ebx
  char v960; // al
  unsigned __int64 v961; // rcx
  int v962; // r13d
  void *v963; // rdx
  int v964; // edi
  LPCWSTR v965; // rdi
  const WCHAR *v966; // rdx
  __int64 v967; // rax
  const WCHAR *v968; // rdi
  char *v969; // rbx
  __int64 v970; // rcx
  unsigned __int64 v971; // rcx
  unsigned int v972; // eax
  unsigned int v973; // ecx
  const CHAR *v974; // rdx
  __int64 v975; // rax
  void **v976; // rcx
  HANDLE v977; // rax
  HMODULE *v978; // rdi
  __int64 v979; // rbx
  HMODULE *v980; // rdi
  __int64 v981; // rbx
  int v982; // eax
  _QWORD *v983; // r13
  HANDLE v984; // rax
  _OWORD *v985; // rbx
  _OWORD *v986; // rax
  HANDLE v987; // rax
  _QWORD *v988; // rax
  unsigned int v989; // r11d
  int v990; // eax
  unsigned int v991; // r11d
  int v992; // r9d
  int v993; // eax
  unsigned int v994; // r11d
  int v995; // r9d
  int v996; // eax
  int v997; // r9d
  unsigned int v998; // edi
  HANDLE v999; // rax
  _DWORD *v1000; // rax
  _DWORD *v1001; // rdi
  __int64 v1002; // r11
  int *v1003; // rax
  int v1004; // r10d
  __int64 v1005; // r11
  int v1006; // ebx
  unsigned int v1007; // edi
  _DWORD *v1008; // rdi
  int v1009; // r9d
  unsigned int v1010; // r10d
  int v1011; // r8d
  _OWORD *v1012; // rax
  __int128 v1013; // xmm1
  __int64 v1014; // r11
  unsigned int v1015; // edi
  unsigned int *v1016; // r9
  __int64 v1017; // r9
  int v1018; // r10d
  int v1019; // r8d
  _DWORD *v1020; // r9
  _QWORD *v1021; // rax
  unsigned int v1022; // r11d
  unsigned int *v1023; // r9
  __int64 v1024; // r9
  int v1025; // r10d
  _DWORD *v1026; // r9
  unsigned __int64 *v1027; // rax
  __int64 v1028; // rcx
  unsigned int v1029; // edi
  _DWORD *v1030; // r13
  int v1031; // edi
  unsigned int v1032; // r9d
  LPVOID v1033; // r10
  unsigned int v1034; // eax
  unsigned int v1035; // edi
  HANDLE v1036; // rax
  _DWORD *v1037; // rbx
  unsigned int v1038; // r11d
  void *v1039; // rcx
  HANDLE v1040; // rax
  int v1041; // edi
  _QWORD *v1042; // rbx
  int v1043; // edi
  unsigned __int64 v1044; // rdi
  char *v1045; // r11
  unsigned __int8 *v1046; // r8
  unsigned __int8 v1047; // al
  unsigned __int64 v1048; // rcx
  int v1049; // r10d
  _BYTE *v1050; // rbx
  unsigned int v1051; // r9d
  unsigned int v1052; // edx
  int v1053; // r11d
  int v1054; // r10d
  char v1055; // r9
  int v1056; // edi
  int v1057; // ecx
  unsigned int v1058; // r10d
  unsigned int v1059; // ecx
  int v1060; // r11d
  int i3; // r14d
  char v1062; // si
  _BYTE *v1063; // r15
  int v1064; // r14d
  unsigned __int64 v1065; // rbx
  int v1066; // r11d
  int v1067; // r13d
  unsigned __int8 *v1068; // rax
  int v1069; // r8d
  int v1070; // edi
  int v1071; // ecx
  int v1072; // r8d
  int v1073; // edi
  int v1074; // r10d
  int v1075; // r9d
  int v1076; // r10d
  int v1077; // r9d
  int v1078; // r10d
  unsigned int v1079; // r9d
  int v1080; // r10d
  int v1081; // r9d
  int v1082; // r10d
  int v1083; // r9d
  int v1084; // r10d
  int v1085; // r9d
  unsigned int v1086; // r10d
  unsigned int v1087; // r9d
  int v1088; // r10d
  int v1089; // r9d
  int v1090; // r10d
  int v1091; // r9d
  int v1092; // r10d
  int v1093; // r9d
  int v1094; // r10d
  int v1095; // r9d
  unsigned int v1096; // r10d
  int v1097; // r9d
  unsigned int v1098; // r10d
  int v1099; // r9d
  int v1100; // r10d
  int v1101; // r10d
  int v1102; // r9d
  int v1103; // r10d
  int v1104; // r9d
  int v1105; // r10d
  int v1106; // r9d
  int v1107; // r10d
  HANDLE v1108; // rax
  _DWORD *v1109; // rax
  _DWORD *v1110; // rbx
  void *v1111; // rsi
  HANDLE v1112; // rax
  void *v1113; // rax
  HANDLE v1114; // rax
  _OWORD *v1115; // rax
  HANDLE v1116; // rax
  _QWORD *v1117; // rax
  HANDLE v1118; // rax
  HANDLE v1119; // rax
  HANDLE v1120; // rax
  HANDLE v1121; // rax
  void *v1122; // rsi
  HANDLE v1123; // rax
  void *v1124; // rsi
  HANDLE v1125; // rax
  void *v1126; // rsi
  HANDLE v1127; // rax
  void *v1128; // rsi
  HANDLE v1129; // rax
  HANDLE v1130; // rax
  const void **v1131; // rbx
  int v1132; // edi
  unsigned int v1133; // r9d
  unsigned int v1134; // r9d
  unsigned int v1135; // eax
  unsigned int v1136; // edi
  HANDLE v1137; // rax
  _DWORD *v1138; // rsi
  void *v1139; // rcx
  void *v1140; // rcx
  HANDLE v1141; // rax
  int v1142; // eax
  unsigned int v1143; // ecx
  int v1144; // r9d
  unsigned int v1145; // eax
  int v1146; // eax
  unsigned int v1147; // r9d
  unsigned int *v1148; // rcx
  int v1149; // ebx
  unsigned int v1150; // esi
  unsigned int v1151; // ebx
  unsigned int *v1152; // rax
  unsigned int *v1153; // rcx
  int v1154; // ebx
  unsigned int v1155; // esi
  unsigned int v1156; // r9d
  unsigned int v1157; // ebx
  unsigned int *v1158; // rax
  unsigned int v1159; // r10d
  unsigned int v1160; // r11d
  unsigned int v1161; // eax
  unsigned int v1162; // edi
  HANDLE v1163; // rax
  int *v1164; // rax
  int *v1165; // rbx
  FARPROC v1166; // rax
  int v1167; // eax
  unsigned int v1168; // r9d
  signed int v1169; // eax
  int v1170; // edi
  int v1171; // r9d
  void *v1172; // r11
  unsigned int v1173; // r11d
  int v1174; // r9d
  SIZE_T v1175; // rsi
  int v1176; // r9d
  int v1177; // r9d
  int v1178; // r9d
  unsigned int v1179; // r10d
  int v1180; // r9d
  int v1181; // r10d
  int v1182; // r11d
  HANDLE v1183; // rax
  _QWORD *v1184; // rax
  _QWORD *v1185; // rbx
  HANDLE v1186; // rax
  void *v1187; // rax
  void *v1188; // rdi
  HANDLE v1189; // rax
  void *v1190; // rax
  HANDLE v1191; // rax
  void *v1192; // rax
  void *v1193; // rsi
  HANDLE v1194; // rax
  void *v1195; // rsi
  HANDLE v1196; // rax
  void *v1197; // rsi
  HANDLE v1198; // rax
  HANDLE v1199; // rax
  _QWORD *v1200; // rbx
  void *v1201; // rsi
  HANDLE v1202; // rax
  void *v1203; // rsi
  HANDLE v1204; // rax
  void *v1205; // rsi
  HANDLE v1206; // rax
  HANDLE v1207; // rax
  unsigned int v1208; // esi
  unsigned __int64 v1209; // rdi
  _BYTE *v1210; // r11
  unsigned __int8 *v1211; // rbx
  unsigned __int8 v1212; // al
  char *v1213; // rcx
  unsigned int v1214; // r10d
  int v1215; // r9d
  unsigned int v1216; // edx
  char v1217; // r14
  int v1218; // r8d
  int v1219; // ecx
  unsigned int v1220; // r9d
  unsigned int v1221; // r10d
  int v1222; // ecx
  unsigned int v1223; // r8d
  _BYTE *v1224; // r14
  int v1225; // edi
  char v1226; // r12
  int v1227; // eax
  unsigned __int8 *v1228; // r15
  int v1229; // r12d
  _BYTE *v1230; // r11
  int v1231; // esi
  char *v1232; // rbx
  int v1233; // r13d
  int v1234; // r8d
  int v1235; // edi
  int v1236; // ecx
  int v1237; // r8d
  int v1238; // r9d
  int v1239; // edi
  unsigned int v1240; // r10d
  int v1241; // r9d
  unsigned int v1242; // r10d
  int v1243; // r9d
  int v1244; // r10d
  unsigned int v1245; // r9d
  int v1246; // r10d
  int v1247; // r9d
  int v1248; // r10d
  unsigned int v1249; // r9d
  int v1250; // r10d
  int v1251; // r9d
  unsigned int v1252; // r10d
  int v1253; // r9d
  int v1254; // r10d
  int v1255; // r9d
  int v1256; // r10d
  unsigned int v1257; // r9d
  int v1258; // r10d
  int v1259; // r9d
  int v1260; // r10d
  unsigned int v1261; // r9d
  int v1262; // ecx
  int v1263; // r10d
  int v1264; // edx
  int v1265; // r9d
  int v1266; // r9d
  int v1267; // r10d
  int v1268; // r9d
  int v1269; // r10d
  int v1270; // r9d
  int v1271; // r10d
  unsigned __int64 i4; // rcx
  _DWORD *v1273; // rbx
  int v1274; // edi
  int *v1275; // r14
  HANDLE v1276; // rax
  int v1277; // edi
  unsigned int v1278; // r9d
  unsigned int v1279; // r9d
  unsigned int v1280; // r9d
  unsigned int v1281; // r10d
  __int64 v1282; // r10
  void *v1283; // rbx
  __int64 v1284; // rdx
  SIZE_T v1285; // rsi
  void *v1286; // r14
  unsigned __int64 v1287; // r9
  unsigned __int64 v1288; // r11
  unsigned int *v1289; // r9
  unsigned __int64 v1290; // r11
  int v1291; // eax
  __int64 v1292; // r9
  unsigned int v1293; // r10d
  HANDLE v1294; // rax
  void *v1295; // rbx
  HANDLE v1296; // rax
  _QWORD *v1297; // rbx
  void *v1298; // rsi
  HANDLE v1299; // rax
  void *v1300; // rsi
  HANDLE v1301; // rax
  void *v1302; // rsi
  HANDLE v1303; // rax
  HANDLE v1304; // rax
  void *v1305; // rbx
  HANDLE v1306; // rax
  void *v1307; // rbx
  HANDLE v1308; // rax
  void *v1309; // rbx
  HANDLE v1310; // rax
  void *v1311; // rbx
  HANDLE v1312; // rax
  void *v1313; // rbx
  HANDLE v1314; // rax
  HANDLE v1315; // rax
  void *v1316; // rbx
  HANDLE v1317; // rax
  unsigned int *v1318; // rdi
  unsigned int v1319; // r9d
  int v1320; // r10d
  __int64 v1321; // r11
  int *v1322; // rax
  int v1323; // r9d
  int v1324; // edi
  _QWORD *v1325; // rax
  void *v1326; // rdi
  HANDLE v1327; // rax
  void *v1328; // rdi
  HANDLE v1329; // rax
  HANDLE v1330; // rax
  HANDLE v1331; // rax
  int v1332; // ebx
  int v1333; // eax
  HMODULE *v1334; // rdi
  __int64 v1335; // rsi
  unsigned __int8 v1336; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1337; // [rsp+60h] [rbp-A0h]
  unsigned int v1338; // [rsp+64h] [rbp-9Ch]
  int v1339; // [rsp+64h] [rbp-9Ch]
  int v1340; // [rsp+64h] [rbp-9Ch]
  int v1341; // [rsp+64h] [rbp-9Ch]
  int v1342; // [rsp+64h] [rbp-9Ch]
  int v1343; // [rsp+64h] [rbp-9Ch]
  unsigned __int16 *v1344; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v1345; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v1346; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v1347; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v1348; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v1349; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v1350; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v1351; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v1352; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v1353; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v1354; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v1355; // [rsp+68h] [rbp-98h]
  signed int v1356; // [rsp+68h] [rbp-98h]
  int v1357; // [rsp+68h] [rbp-98h]
  int v1358; // [rsp+68h] [rbp-98h]
  int v1359; // [rsp+68h] [rbp-98h]
  unsigned int v1360; // [rsp+68h] [rbp-98h]
  int v1361; // [rsp+68h] [rbp-98h]
  int v1362; // [rsp+68h] [rbp-98h]
  SIZE_T v1363; // [rsp+70h] [rbp-90h]
  SIZE_T v1364; // [rsp+70h] [rbp-90h]
  void *v1365; // [rsp+70h] [rbp-90h]
  SIZE_T v1366; // [rsp+70h] [rbp-90h]
  void *v1367; // [rsp+70h] [rbp-90h]
  SIZE_T v1368; // [rsp+70h] [rbp-90h]
  int v1369; // [rsp+70h] [rbp-90h]
  int v1370; // [rsp+70h] [rbp-90h]
  int v1371; // [rsp+70h] [rbp-90h]
  int v1372; // [rsp+70h] [rbp-90h]
  int v1373; // [rsp+70h] [rbp-90h]
  unsigned int v1374; // [rsp+70h] [rbp-90h]
  int v1375; // [rsp+70h] [rbp-90h]
  unsigned int v1376; // [rsp+70h] [rbp-90h]
  unsigned int v1377; // [rsp+70h] [rbp-90h]
  void *v1378; // [rsp+78h] [rbp-88h]
  const WCHAR *v1379; // [rsp+78h] [rbp-88h]
  char *v1380; // [rsp+78h] [rbp-88h]
  WARBIRD_DELAY_LOAD *v1381; // [rsp+78h] [rbp-88h]
  char *v1382; // [rsp+78h] [rbp-88h]
  char *v1383; // [rsp+78h] [rbp-88h]
  __int64 v1384; // [rsp+78h] [rbp-88h]
  int v1385; // [rsp+78h] [rbp-88h]
  unsigned int i2; // [rsp+78h] [rbp-88h]
  int v1387; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1388; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v1389; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v1390; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v1391; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v1392; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v1393; // [rsp+80h] [rbp-80h]
  int v1394; // [rsp+80h] [rbp-80h]
  int v1395; // [rsp+80h] [rbp-80h]
  int v1396; // [rsp+80h] [rbp-80h]
  int v1397; // [rsp+80h] [rbp-80h]
  unsigned int v1398; // [rsp+80h] [rbp-80h]
  unsigned int v1399; // [rsp+80h] [rbp-80h]
  int v1400; // [rsp+80h] [rbp-80h]
  int v1401; // [rsp+88h] [rbp-78h]
  int v1402; // [rsp+88h] [rbp-78h]
  int v1403; // [rsp+88h] [rbp-78h]
  int v1404; // [rsp+88h] [rbp-78h]
  unsigned int v1405; // [rsp+88h] [rbp-78h]
  unsigned int v1406; // [rsp+88h] [rbp-78h]
  int v1407; // [rsp+88h] [rbp-78h]
  int v1408; // [rsp+88h] [rbp-78h]
  int v1409; // [rsp+88h] [rbp-78h]
  int v1410; // [rsp+88h] [rbp-78h]
  int v1411; // [rsp+88h] [rbp-78h]
  unsigned int v1412; // [rsp+90h] [rbp-70h]
  const void *v1413; // [rsp+90h] [rbp-70h]
  int v1414; // [rsp+90h] [rbp-70h]
  unsigned int v1415; // [rsp+90h] [rbp-70h]
  unsigned int v1416; // [rsp+90h] [rbp-70h]
  int v1417; // [rsp+90h] [rbp-70h]
  int v1418; // [rsp+90h] [rbp-70h]
  int v1419; // [rsp+90h] [rbp-70h]
  int v1420; // [rsp+90h] [rbp-70h]
  int v1421; // [rsp+98h] [rbp-68h]
  unsigned int ii; // [rsp+98h] [rbp-68h]
  unsigned int v1423; // [rsp+98h] [rbp-68h]
  _WORD *v1424; // [rsp+98h] [rbp-68h]
  int v1425; // [rsp+98h] [rbp-68h]
  int v1426; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v1427; // [rsp+A0h] [rbp-60h]
  unsigned __int16 *v1428; // [rsp+A0h] [rbp-60h]
  unsigned __int16 *v1429; // [rsp+A0h] [rbp-60h]
  unsigned __int16 *v1430; // [rsp+A0h] [rbp-60h]
  int v1431; // [rsp+A0h] [rbp-60h]
  int v1432; // [rsp+A0h] [rbp-60h]
  unsigned __int16 *v1433; // [rsp+A0h] [rbp-60h]
  unsigned int v1434; // [rsp+A0h] [rbp-60h]
  int v1435; // [rsp+A0h] [rbp-60h]
  int v1436; // [rsp+A0h] [rbp-60h]
  HLOCAL v1437; // [rsp+A8h] [rbp-58h]
  unsigned int v1438; // [rsp+A8h] [rbp-58h]
  unsigned int v1439; // [rsp+A8h] [rbp-58h]
  const void *v1440; // [rsp+B0h] [rbp-50h]
  char *v1441; // [rsp+B0h] [rbp-50h]
  int v1442; // [rsp+B0h] [rbp-50h]
  unsigned int v1443; // [rsp+B0h] [rbp-50h]
  unsigned int jj; // [rsp+B0h] [rbp-50h]
  char v1445; // [rsp+B0h] [rbp-50h]
  int v1446; // [rsp+B8h] [rbp-48h]
  int v1447; // [rsp+B8h] [rbp-48h]
  int v1448; // [rsp+B8h] [rbp-48h]
  unsigned int v1449; // [rsp+B8h] [rbp-48h]
  __int64 v1450; // [rsp+B8h] [rbp-48h]
  int v1451; // [rsp+B8h] [rbp-48h]
  __int64 v1452; // [rsp+B8h] [rbp-48h]
  int *v1453; // [rsp+C0h] [rbp-40h]
  _DWORD *v1454; // [rsp+C0h] [rbp-40h]
  char *v1455; // [rsp+C0h] [rbp-40h]
  void **v1456; // [rsp+C0h] [rbp-40h]
  __int64 v1457; // [rsp+C0h] [rbp-40h]
  __int64 v1458; // [rsp+C0h] [rbp-40h]
  int v1459; // [rsp+C0h] [rbp-40h]
  int v1460; // [rsp+C0h] [rbp-40h]
  LPVOID v1461; // [rsp+C8h] [rbp-38h]
  WARBIRD_DELAY_LOAD *v1462; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v1463; // [rsp+C8h] [rbp-38h]
  void *v1464; // [rsp+C8h] [rbp-38h]
  void *v1465; // [rsp+C8h] [rbp-38h]
  void *v1466; // [rsp+C8h] [rbp-38h]
  void *v1467; // [rsp+C8h] [rbp-38h]
  LPVOID v1468; // [rsp+C8h] [rbp-38h]
  unsigned int *v1469; // [rsp+D0h] [rbp-30h]
  int v1470; // [rsp+D0h] [rbp-30h]
  unsigned int v1471; // [rsp+D0h] [rbp-30h]
  int v1472; // [rsp+D0h] [rbp-30h]
  int v1473; // [rsp+D0h] [rbp-30h]
  _BYTE *Src; // [rsp+D8h] [rbp-28h]
  unsigned int *Srca; // [rsp+D8h] [rbp-28h]
  char *Srcb; // [rsp+D8h] [rbp-28h]
  void *Srcc; // [rsp+D8h] [rbp-28h]
  void *Srcd; // [rsp+D8h] [rbp-28h]
  void *Srce; // [rsp+D8h] [rbp-28h]
  _BYTE *Srcf; // [rsp+D8h] [rbp-28h]
  int v1481; // [rsp+E0h] [rbp-20h]
  int v1482; // [rsp+E0h] [rbp-20h]
  SIZE_T v1483; // [rsp+E0h] [rbp-20h]
  int v1484; // [rsp+E0h] [rbp-20h]
  int *v1485; // [rsp+E8h] [rbp-18h]
  unsigned int v1486; // [rsp+E8h] [rbp-18h]
  int v1487; // [rsp+E8h] [rbp-18h]
  int v1488; // [rsp+E8h] [rbp-18h]
  char *v1489; // [rsp+F0h] [rbp-10h]
  unsigned __int8 *v1490; // [rsp+F0h] [rbp-10h]
  LPVOID v1491; // [rsp+F0h] [rbp-10h]
  LPVOID v1492; // [rsp+F0h] [rbp-10h]
  int v1493; // [rsp+F0h] [rbp-10h]
  void *v1494; // [rsp+F0h] [rbp-10h]
  void *v1495; // [rsp+F8h] [rbp-8h] BYREF
  LPVOID v1496; // [rsp+100h] [rbp+0h]
  __int64 v1497; // [rsp+108h] [rbp+8h]
  void *v1498; // [rsp+110h] [rbp+10h]
  unsigned int v1499; // [rsp+118h] [rbp+18h] BYREF
  int v1500; // [rsp+11Ch] [rbp+1Ch] BYREF
  int v1501; // [rsp+120h] [rbp+20h]
  LPVOID v1502; // [rsp+128h] [rbp+28h]
  LPVOID v1503; // [rsp+130h] [rbp+30h]
  LPVOID v1504; // [rsp+138h] [rbp+38h]
  unsigned int v1505; // [rsp+140h] [rbp+40h] BYREF
  int v1506; // [rsp+148h] [rbp+48h]
  unsigned int v1507; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v1508; // [rsp+154h] [rbp+54h]
  unsigned int v1509; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v1510; // [rsp+15Ch] [rbp+5Ch] BYREF
  unsigned int v1511; // [rsp+160h] [rbp+60h]
  unsigned int v1512; // [rsp+164h] [rbp+64h] BYREF
  unsigned int v1513; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v1514; // [rsp+16Ch] [rbp+6Ch]
  unsigned int v1515; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v1516; // [rsp+174h] [rbp+74h] BYREF
  unsigned int v1517; // [rsp+178h] [rbp+78h]
  unsigned int v1518; // [rsp+17Ch] [rbp+7Ch] BYREF
  int v1519; // [rsp+180h] [rbp+80h]
  unsigned int v1520; // [rsp+188h] [rbp+88h] BYREF
  unsigned int v1521; // [rsp+18Ch] [rbp+8Ch]
  unsigned int v1522; // [rsp+190h] [rbp+90h] BYREF
  int v1523; // [rsp+198h] [rbp+98h]
  unsigned int v1524; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v1525; // [rsp+1A4h] [rbp+A4h]
  unsigned int v1526; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v1527; // [rsp+1ACh] [rbp+ACh] BYREF
  unsigned int v1528; // [rsp+1B0h] [rbp+B0h]
  unsigned int v1529; // [rsp+1B4h] [rbp+B4h] BYREF
  unsigned int v1530; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v1531; // [rsp+1BCh] [rbp+BCh] BYREF
  unsigned int v1532; // [rsp+1C0h] [rbp+C0h] BYREF
  SIZE_T v1533; // [rsp+1C4h] [rbp+C4h]
  unsigned int v1534; // [rsp+1CCh] [rbp+CCh] BYREF
  unsigned int v1535; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v1536; // [rsp+1D4h] [rbp+D4h]
  int v1537; // [rsp+1D8h] [rbp+D8h]
  int v1538; // [rsp+1DCh] [rbp+DCh]
  unsigned int v1539; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned int v1540; // [rsp+1E4h] [rbp+E4h]
  unsigned int v1541; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned int v1542; // [rsp+1ECh] [rbp+ECh] BYREF
  unsigned int v1543; // [rsp+1F0h] [rbp+F0h]
  unsigned int v1544; // [rsp+1F4h] [rbp+F4h] BYREF
  unsigned int v1545; // [rsp+1F8h] [rbp+F8h] BYREF
  unsigned int v1546; // [rsp+1FCh] [rbp+FCh] BYREF
  unsigned int v1547; // [rsp+200h] [rbp+100h] BYREF
  int v1548; // [rsp+204h] [rbp+104h]
  int v1549; // [rsp+208h] [rbp+108h]
  int v1550; // [rsp+20Ch] [rbp+10Ch]
  int v1551; // [rsp+210h] [rbp+110h]
  int v1552; // [rsp+214h] [rbp+114h]
  int v1553; // [rsp+218h] [rbp+118h]
  int v1554; // [rsp+21Ch] [rbp+11Ch]
  int v1555; // [rsp+220h] [rbp+120h]
  int v1556; // [rsp+224h] [rbp+124h]
  int v1557; // [rsp+228h] [rbp+128h]
  unsigned int v1558; // [rsp+22Ch] [rbp+12Ch] BYREF
  _DWORD v1559[2]; // [rsp+230h] [rbp+130h] BYREF
  int v1560; // [rsp+238h] [rbp+138h]
  int v1561; // [rsp+23Ch] [rbp+13Ch]
  unsigned int v1562; // [rsp+240h] [rbp+140h]
  unsigned int v1563; // [rsp+244h] [rbp+144h]
  int v1564; // [rsp+248h] [rbp+148h]
  unsigned int v1565; // [rsp+24Ch] [rbp+14Ch] BYREF
  unsigned int v1566; // [rsp+250h] [rbp+150h] BYREF
  unsigned int v1567; // [rsp+254h] [rbp+154h] BYREF
  unsigned int v1568; // [rsp+258h] [rbp+158h] BYREF
  unsigned int v1569; // [rsp+25Ch] [rbp+15Ch] BYREF
  unsigned int v1570; // [rsp+260h] [rbp+160h] BYREF
  _DWORD v1571[3]; // [rsp+264h] [rbp+164h] BYREF
  int v1572; // [rsp+270h] [rbp+170h]
  unsigned int v1573; // [rsp+278h] [rbp+178h] BYREF
  unsigned int v1574; // [rsp+27Ch] [rbp+17Ch]
  unsigned int v1575; // [rsp+280h] [rbp+180h] BYREF
  unsigned int v1576; // [rsp+284h] [rbp+184h] BYREF
  unsigned int v1577; // [rsp+288h] [rbp+188h]
  unsigned int v1578; // [rsp+28Ch] [rbp+18Ch] BYREF
  unsigned int v1579; // [rsp+290h] [rbp+190h] BYREF
  unsigned int v1580; // [rsp+294h] [rbp+194h]
  unsigned int v1581; // [rsp+298h] [rbp+198h] BYREF
  unsigned int v1582; // [rsp+29Ch] [rbp+19Ch] BYREF
  unsigned int v1583; // [rsp+2A0h] [rbp+1A0h] BYREF
  _DWORD v1584[2]; // [rsp+2A4h] [rbp+1A4h] BYREF
  SIZE_T v1585; // [rsp+2ACh] [rbp+1ACh]
  unsigned int v1586; // [rsp+2B4h] [rbp+1B4h] BYREF
  unsigned int v1587; // [rsp+2B8h] [rbp+1B8h] BYREF
  unsigned int v1588; // [rsp+2BCh] [rbp+1BCh]
  unsigned int v1589; // [rsp+2C0h] [rbp+1C0h]
  unsigned int v1590; // [rsp+2C4h] [rbp+1C4h]
  unsigned int v1591; // [rsp+2C8h] [rbp+1C8h] BYREF
  unsigned int v1592; // [rsp+2CCh] [rbp+1CCh]
  unsigned int v1593; // [rsp+2D0h] [rbp+1D0h] BYREF
  unsigned int v1594; // [rsp+2D4h] [rbp+1D4h] BYREF
  unsigned int v1595; // [rsp+2D8h] [rbp+1D8h]
  unsigned int v1596; // [rsp+2DCh] [rbp+1DCh]
  _DWORD v1597[2]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _DWORD v1598[2]; // [rsp+2E8h] [rbp+1E8h] BYREF
  int v1599; // [rsp+2F0h] [rbp+1F0h]
  int v1600; // [rsp+2F4h] [rbp+1F4h]
  unsigned int v1601; // [rsp+2F8h] [rbp+1F8h]
  int v1602; // [rsp+2FCh] [rbp+1FCh]
  unsigned int dwBytes; // [rsp+300h] [rbp+200h] BYREF
  unsigned int dwBytes_4; // [rsp+304h] [rbp+204h] BYREF
  unsigned int v1605; // [rsp+308h] [rbp+208h]
  LPVOID v1606; // [rsp+310h] [rbp+210h]
  unsigned int v1607; // [rsp+318h] [rbp+218h] BYREF
  unsigned int v1608; // [rsp+31Ch] [rbp+21Ch] BYREF
  unsigned int v1609; // [rsp+320h] [rbp+220h] BYREF
  unsigned int v1610; // [rsp+324h] [rbp+224h] BYREF
  unsigned int v1611; // [rsp+328h] [rbp+228h] BYREF
  unsigned int v1612; // [rsp+32Ch] [rbp+22Ch] BYREF
  _QWORD *v1613; // [rsp+330h] [rbp+230h]
  const wchar_t *v1614; // [rsp+338h] [rbp+238h]
  size_t pcchLength; // [rsp+340h] [rbp+240h] BYREF
  _DWORD *v1616; // [rsp+348h] [rbp+248h] BYREF
  _DWORD *v1617; // [rsp+350h] [rbp+250h] BYREF
  STRSAFE_PCNZWCH psz; // [rsp+358h] [rbp+258h]
  _DWORD *v1619; // [rsp+360h] [rbp+260h] BYREF
  size_t v1620; // [rsp+368h] [rbp+268h] BYREF
  _DWORD *v1621; // [rsp+370h] [rbp+270h] BYREF
  _DWORD *v1622; // [rsp+378h] [rbp+278h] BYREF
  _DWORD *v1623; // [rsp+380h] [rbp+280h] BYREF
  LPVOID v1624; // [rsp+388h] [rbp+288h]
  unsigned __int64 v1625; // [rsp+390h] [rbp+290h]
  void *v1626; // [rsp+398h] [rbp+298h] BYREF
  LPVOID v1627; // [rsp+3A0h] [rbp+2A0h]
  unsigned __int64 v1628; // [rsp+3A8h] [rbp+2A8h]
  __int64 *v1629; // [rsp+3B0h] [rbp+2B0h]
  __int64 v1630; // [rsp+3B8h] [rbp+2B8h]
  _OWORD *v1631; // [rsp+3C0h] [rbp+2C0h]
  __int64 v1632; // [rsp+3C8h] [rbp+2C8h]
  void *v1633; // [rsp+3D0h] [rbp+2D0h] BYREF
  unsigned int *v1634; // [rsp+3D8h] [rbp+2D8h]
  unsigned int *v1635; // [rsp+3E0h] [rbp+2E0h]
  unsigned int *v1636; // [rsp+3E8h] [rbp+2E8h] BYREF
  unsigned int *v1637; // [rsp+3F0h] [rbp+2F0h] BYREF
  HMODULE phModule; // [rsp+3F8h] [rbp+2F8h] BYREF
  void *v1639; // [rsp+400h] [rbp+300h] BYREF
  int *v1640; // [rsp+408h] [rbp+308h]
  int *v1641; // [rsp+410h] [rbp+310h]
  int *v1642; // [rsp+418h] [rbp+318h] BYREF
  void *v1643; // [rsp+420h] [rbp+320h] BYREF
  unsigned __int64 v1644; // [rsp+428h] [rbp+328h] BYREF
  unsigned __int64 v1645; // [rsp+430h] [rbp+330h] BYREF
  unsigned int *v1646; // [rsp+438h] [rbp+338h] BYREF
  int *v1647; // [rsp+440h] [rbp+340h] BYREF
  int *v1648; // [rsp+448h] [rbp+348h]
  int *v1649; // [rsp+450h] [rbp+350h] BYREF
  int *v1650; // [rsp+458h] [rbp+358h]
  const wchar_t *v1651; // [rsp+460h] [rbp+360h]
  int *v1652; // [rsp+468h] [rbp+368h] BYREF
  int *v1653; // [rsp+470h] [rbp+370h]
  LPVOID v1654; // [rsp+478h] [rbp+378h] BYREF
  void *v1655; // [rsp+480h] [rbp+380h]
  int *v1656; // [rsp+488h] [rbp+388h] BYREF
  int *v1657; // [rsp+490h] [rbp+390h]
  unsigned int *v1658; // [rsp+498h] [rbp+398h] BYREF
  unsigned int *v1659; // [rsp+4A0h] [rbp+3A0h]
  __int64 v1660; // [rsp+4A8h] [rbp+3A8h] BYREF
  LPCWSTR lpModuleName; // [rsp+4B0h] [rbp+3B0h]
  LPCWSTR v1662; // [rsp+4B8h] [rbp+3B8h]
  unsigned __int64 v1663; // [rsp+4C0h] [rbp+3C0h]
  void **v1664; // [rsp+4C8h] [rbp+3C8h] BYREF
  LPCWSTR v1665; // [rsp+4D0h] [rbp+3D0h]
  unsigned __int64 v1666; // [rsp+4D8h] [rbp+3D8h]
  _DWORD *v1667; // [rsp+4E0h] [rbp+3E0h] BYREF
  _BYTE *v1668; // [rsp+4E8h] [rbp+3E8h] BYREF
  unsigned __int64 v1669; // [rsp+4F0h] [rbp+3F0h]
  void **v1670; // [rsp+4F8h] [rbp+3F8h] BYREF
  WARBIRD_DELAY_LOAD *v1671; // [rsp+500h] [rbp+400h] BYREF
  _DWORD *v1672; // [rsp+508h] [rbp+408h] BYREF
  __int64 v1673; // [rsp+510h] [rbp+410h]
  __int64 v1674; // [rsp+518h] [rbp+418h] BYREF
  __int64 v1675; // [rsp+520h] [rbp+420h] BYREF
  __int64 v1676; // [rsp+528h] [rbp+428h] BYREF
  unsigned __int64 v1677; // [rsp+530h] [rbp+430h]
  wchar_t *String1; // [rsp+538h] [rbp+438h] BYREF
  wchar_t *v1679; // [rsp+540h] [rbp+440h] BYREF
  wchar_t *v1680; // [rsp+548h] [rbp+448h] BYREF
  __int64 v1681; // [rsp+550h] [rbp+450h] BYREF
  wchar_t *v1682; // [rsp+558h] [rbp+458h] BYREF
  _OWORD *v1683; // [rsp+560h] [rbp+460h]
  __int64 v1684; // [rsp+568h] [rbp+468h] BYREF
  LPCWSTR v1685; // [rsp+570h] [rbp+470h]
  unsigned __int64 v1686; // [rsp+578h] [rbp+478h]
  _OWORD *v1687; // [rsp+580h] [rbp+480h]
  _QWORD *v1688; // [rsp+588h] [rbp+488h]
  unsigned __int64 v1689; // [rsp+590h] [rbp+490h]
  _DWORD *v1690; // [rsp+598h] [rbp+498h] BYREF
  unsigned int *v1691; // [rsp+5A0h] [rbp+4A0h] BYREF
  unsigned __int64 v1692; // [rsp+5A8h] [rbp+4A8h]
  unsigned int *v1693; // [rsp+5B0h] [rbp+4B0h] BYREF
  LPVOID v1694; // [rsp+5B8h] [rbp+4B8h]
  unsigned __int64 v1695; // [rsp+5C0h] [rbp+4C0h]
  void *v1696; // [rsp+5C8h] [rbp+4C8h] BYREF
  LPVOID v1697; // [rsp+5D0h] [rbp+4D0h]
  void *v1698; // [rsp+5D8h] [rbp+4D8h]
  __int64 *v1699; // [rsp+5E0h] [rbp+4E0h]
  __int64 v1700; // [rsp+5E8h] [rbp+4E8h]
  _OWORD *v1701; // [rsp+5F0h] [rbp+4F0h]
  __int64 v1702; // [rsp+5F8h] [rbp+4F8h]
  void *v1703; // [rsp+600h] [rbp+500h] BYREF
  unsigned int *v1704; // [rsp+608h] [rbp+508h]
  unsigned int *v1705; // [rsp+610h] [rbp+510h]
  unsigned int *v1706; // [rsp+618h] [rbp+518h] BYREF
  unsigned int *v1707; // [rsp+620h] [rbp+520h] BYREF
  HMODULE hModule; // [rsp+628h] [rbp+528h] BYREF
  void *v1709; // [rsp+630h] [rbp+530h] BYREF
  _DWORD *v1710; // [rsp+638h] [rbp+538h]
  void *v1711; // [rsp+640h] [rbp+540h] BYREF
  unsigned __int64 v1712; // [rsp+648h] [rbp+548h] BYREF
  unsigned __int64 v1713; // [rsp+650h] [rbp+550h] BYREF
  unsigned __int64 v1714; // [rsp+658h] [rbp+558h] BYREF
  _QWORD v1715[2]; // [rsp+660h] [rbp+560h] BYREF
  _QWORD v1716[4]; // [rsp+670h] [rbp+570h] BYREF
  _DWORD *v1717; // [rsp+690h] [rbp+590h] BYREF
  __int128 v1718; // [rsp+698h] [rbp+598h]
  _OWORD *v1719; // [rsp+6B0h] [rbp+5B0h] BYREF
  unsigned __int64 *v1720; // [rsp+6C0h] [rbp+5C0h] BYREF
  _QWORD *v1721; // [rsp+6D0h] [rbp+5D0h] BYREF
  size_t Size; // [rsp+6D8h] [rbp+5D8h] BYREF
  LPVOID lpMem; // [rsp+6E0h] [rbp+5E0h]
  LPVOID v1724[2]; // [rsp+6E8h] [rbp+5E8h]
  __int128 v1725; // [rsp+6F8h] [rbp+5F8h]
  _OWORD *v1726; // [rsp+710h] [rbp+610h] BYREF
  _QWORD *v1727; // [rsp+720h] [rbp+620h] BYREF
  STRSAFE_PCNZWCH *v1728; // [rsp+730h] [rbp+630h] BYREF
  void *v1729; // [rsp+740h] [rbp+640h] BYREF
  int *v1730; // [rsp+750h] [rbp+650h] BYREF
  _DWORD *v1731; // [rsp+760h] [rbp+660h] BYREF
  size_t v1732; // [rsp+768h] [rbp+668h] BYREF
  void *v1733; // [rsp+770h] [rbp+670h]
  __int128 v1734; // [rsp+778h] [rbp+678h]
  __int128 v1735; // [rsp+788h] [rbp+688h] BYREF
  LPVOID v1736[3]; // [rsp+798h] [rbp+698h]
  int *v1737; // [rsp+7B0h] [rbp+6B0h] BYREF
  __int128 v1738; // [rsp+7B8h] [rbp+6B8h]
  _QWORD v1739[2]; // [rsp+7C8h] [rbp+6C8h] BYREF
  unsigned int v1740; // [rsp+7D8h] [rbp+6D8h]
  unsigned int v1741; // [rsp+7DCh] [rbp+6DCh]
  int v1742; // [rsp+7E0h] [rbp+6E0h]
  _QWORD v1743[2]; // [rsp+7E8h] [rbp+6E8h] BYREF
  unsigned int v1744; // [rsp+7F8h] [rbp+6F8h]
  unsigned int v1745; // [rsp+7FCh] [rbp+6FCh]
  int v1746; // [rsp+800h] [rbp+700h]
  _BYTE v1747[24]; // [rsp+810h] [rbp+710h] BYREF
  char *v1748; // [rsp+828h] [rbp+728h]
  _BYTE v1749[4]; // [rsp+880h] [rbp+780h] BYREF
  int v1750; // [rsp+884h] [rbp+784h]
  int v1751; // [rsp+888h] [rbp+788h]
  __int16 v1752; // [rsp+892h] [rbp+792h]
  __int64 v1753; // [rsp+898h] [rbp+798h]
  _BYTE v1754[4]; // [rsp+8F0h] [rbp+7F0h] BYREF
  int v1755; // [rsp+8F4h] [rbp+7F4h]
  int v1756; // [rsp+8F8h] [rbp+7F8h]
  unsigned __int16 *v1757; // [rsp+908h] [rbp+808h]
  _BYTE v1758[24]; // [rsp+960h] [rbp+860h] BYREF
  char *v1759; // [rsp+978h] [rbp+878h]
  _BYTE v1760[4]; // [rsp+9D0h] [rbp+8D0h] BYREF
  int v1761; // [rsp+9D4h] [rbp+8D4h]
  int v1762; // [rsp+9D8h] [rbp+8D8h]
  unsigned __int16 *v1763; // [rsp+9E8h] [rbp+8E8h]
  _BYTE v1764[24]; // [rsp+A40h] [rbp+940h] BYREF
  char *v1765; // [rsp+A58h] [rbp+958h]
  _BYTE v1766[4]; // [rsp+AB0h] [rbp+9B0h] BYREF
  int v1767; // [rsp+AB4h] [rbp+9B4h]
  int v1768; // [rsp+AB8h] [rbp+9B8h]
  void *v1769; // [rsp+AC8h] [rbp+9C8h]
  _BYTE v1770[4]; // [rsp+B20h] [rbp+A20h] BYREF
  int v1771; // [rsp+B24h] [rbp+A24h]
  int v1772; // [rsp+B28h] [rbp+A28h]
  void *v1773; // [rsp+B38h] [rbp+A38h]
  _BYTE v1774[24]; // [rsp+B90h] [rbp+A90h] BYREF
  __int64 v1775; // [rsp+BA8h] [rbp+AA8h]
  int v1776; // [rsp+C00h] [rbp+B00h] BYREF
  int v1777; // [rsp+C04h] [rbp+B04h]
  void *v1778; // [rsp+C08h] [rbp+B08h]
  void *v1779; // [rsp+C10h] [rbp+B10h]
  void *v1780; // [rsp+C18h] [rbp+B18h]
  unsigned __int16 *v1781; // [rsp+C20h] [rbp+B20h]
  void *v1782; // [rsp+C28h] [rbp+B28h]
  __int64 v1783; // [rsp+C30h] [rbp+B30h]
  int v1784; // [rsp+C38h] [rbp+B38h]
  __int128 v1785; // [rsp+C3Ch] [rbp+B3Ch] BYREF
  __int128 v1786; // [rsp+C4Ch] [rbp+B4Ch] BYREF
  unsigned int v1787; // [rsp+C5Ch] [rbp+B5Ch] BYREF
  unsigned int v1788; // [rsp+C60h] [rbp+B60h]
  unsigned int v1789; // [rsp+C64h] [rbp+B64h]
  unsigned int v1790; // [rsp+C68h] [rbp+B68h]
  __int64 v1791; // [rsp+C70h] [rbp+B70h]
  unsigned __int64 v1792; // [rsp+C78h] [rbp+B78h]
  unsigned __int64 v1793; // [rsp+C80h] [rbp+B80h]
  __int64 v1794; // [rsp+C88h] [rbp+B88h]
  __int128 v1795; // [rsp+C90h] [rbp+B90h] BYREF
  __int64 v1796; // [rsp+CA0h] [rbp+BA0h] BYREF
  unsigned int v1797; // [rsp+CA8h] [rbp+BA8h]
  int v1798; // [rsp+CACh] [rbp+BACh]
  __int128 v1799; // [rsp+CB0h] [rbp+BB0h] BYREF
  __int128 v1800; // [rsp+CC0h] [rbp+BC0h] BYREF
  __int128 v1801; // [rsp+CD0h] [rbp+BD0h] BYREF
  char v1802[12]; // [rsp+CE0h] [rbp+BE0h] BYREF
  unsigned int v1803; // [rsp+CECh] [rbp+BECh]
  __int128 v1804; // [rsp+D00h] [rbp+C00h] BYREF
  __int128 v1805; // [rsp+D10h] [rbp+C10h] BYREF
  __int64 v1806; // [rsp+D20h] [rbp+C20h]
  __int128 v1807; // [rsp+D28h] [rbp+C28h] BYREF
  __int128 v1808; // [rsp+D38h] [rbp+C38h] BYREF
  __int64 v1809; // [rsp+D48h] [rbp+C48h]
  __int128 v1810; // [rsp+D50h] [rbp+C50h] BYREF
  __int128 v1811; // [rsp+D60h] [rbp+C60h]
  __int64 v1812; // [rsp+D70h] [rbp+C70h]
  int v1813; // [rsp+D78h] [rbp+C78h]
  __int128 v1814; // [rsp+D80h] [rbp+C80h] BYREF
  __int128 v1815; // [rsp+D90h] [rbp+C90h]
  __int64 v1816; // [rsp+DA0h] [rbp+CA0h]
  int v1817; // [rsp+DA8h] [rbp+CA8h]
  __int128 v1818; // [rsp+DB0h] [rbp+CB0h] BYREF
  __int128 v1819; // [rsp+DC0h] [rbp+CC0h]
  __int64 v1820; // [rsp+DD0h] [rbp+CD0h]
  int v1821; // [rsp+DD8h] [rbp+CD8h]
  __int128 v1822; // [rsp+DE0h] [rbp+CE0h] BYREF
  __int128 v1823; // [rsp+DF0h] [rbp+CF0h]
  __int64 v1824; // [rsp+E00h] [rbp+D00h]
  int v1825; // [rsp+E08h] [rbp+D08h]
  __int128 v1826; // [rsp+E10h] [rbp+D10h] BYREF
  __int128 v1827; // [rsp+E20h] [rbp+D20h]
  __int64 v1828; // [rsp+E30h] [rbp+D30h]
  int v1829; // [rsp+E38h] [rbp+D38h]
  _DWORD v1830[6]; // [rsp+E40h] [rbp+D40h] BYREF
  char v1831; // [rsp+E5Ah] [rbp+D5Ah]
  unsigned __int16 v1832[34]; // [rsp+E5Ch] [rbp+D5Ch] BYREF
  _DWORD v1833[6]; // [rsp+EA0h] [rbp+DA0h] BYREF
  char v1834; // [rsp+EBAh] [rbp+DBAh]
  unsigned __int16 v1835[34]; // [rsp+EBCh] [rbp+DBCh] BYREF
  _DWORD v1836[6]; // [rsp+F00h] [rbp+E00h] BYREF
  char v1837; // [rsp+F1Ah] [rbp+E1Ah]
  unsigned __int16 v1838[34]; // [rsp+F1Ch] [rbp+E1Ch] BYREF
  _BYTE v1839[68]; // [rsp+F60h] [rbp+E60h] BYREF
  __int16 v1840; // [rsp+FA4h] [rbp+EA4h]
  unsigned __int16 v1841; // [rsp+1006h] [rbp+F06h]
  __int64 v1842; // [rsp+100Ch] [rbp+F0Ch]
  _QWORD v1843[6]; // [rsp+1040h] [rbp+F40h] BYREF
  int v1844; // [rsp+1070h] [rbp+F70h] BYREF
  __int128 v1845; // [rsp+1078h] [rbp+F78h]
  __int128 v1846; // [rsp+1088h] [rbp+F88h]
  __int128 v1847; // [rsp+1098h] [rbp+F98h]
  __int64 v1848; // [rsp+10A8h] [rbp+FA8h]
  _QWORD v1849[20]; // [rsp+10B0h] [rbp+FB0h] BYREF
  _WORD v1850[8]; // [rsp+1150h] [rbp+1050h] BYREF
  _BYTE v1851[176]; // [rsp+1160h] [rbp+1060h] BYREF
  WCHAR Filename[264]; // [rsp+1210h] [rbp+1110h] BYREF

  v1641 = a1;
  v2 = 0;
  v3 = 0;
  AcquireSRWLockShared(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
  if ( `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedQueried )
  {
    *a1 = `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedCachedValue;
    ReleaseSRWLockShared(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
    return (unsigned int)v3;
  }
  ReleaseSRWLockShared(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
  AcquireSRWLockExclusive(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
  if ( `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedQueried )
  {
    *a1 = `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedCachedValue;
    goto LABEL_12;
  }
  v1557 = 0;
  v1559[1] = 4;
  v1642 = 0LL;
  v1560 = 0;
  v1561 = 0;
  v1562 = 0;
  v1495 = 0LL;
  v1564 = 0;
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v6 = g_WarbirdSecureFunctionsRefCount;
  v1501 = -1;
  if ( g_WarbirdSecureFunctionsRefCount )
    goto LABEL_60;
  v1446 = 0;
  lpModuleName = 0LL;
  v1677 = 0LL;
  v7 = (char *)MemoryAlloc(0x338uLL);
  v1344 = (unsigned __int16 *)v7;
  if ( !v7 )
    goto LABEL_50;
  v8 = 103LL;
  v9 = v7 + 7;
  v10 = 0;
  v11 = (unsigned __int8 *)&unk_180096FA2;
  v12 = 0;
  v13 = 0;
  v14 = -1;
  do
  {
    v15 = *(v11 - 1) | (*(v11 - 2) << 8);
    v16 = v11[2] << 8;
    v17 = *v11;
    v11 += 8;
    v18 = *(v11 - 7) | ((v17 | (v15 << 8)) << 8);
    v19 = v18 ^ v13;
    v20 = *(v11 - 3) | ((*(v11 - 4) | ((*(v11 - 5) | v16) << 8)) << 8);
    v21 = v20 ^ v12 ^ v19 ^ 0xAC987321;
    v22 = (__ROL4__(v21, 10) + 4991 * __ROL4__(v21 + 1419157410, 5)) ^ v19;
    v23 = (43881 * __ROR4__(v22 + 133239679, 9) - __ROL4__(v22, 2)) ^ v21;
    v24 = (24670 * v23 - (v23 >> 13) - 123127970) ^ v22;
    v25 = (2033 * __ROL4__(v24 ^ 0xAB69, 6) - __ROL4__(v24, 2)) ^ v23;
    v26 = (133239679 - (v25 ^ 0xAB69605E)) ^ v24;
    v27 = (43881 * (v26 ^ 0x137F)) ^ __ROR4__(v26, 6) ^ v25;
    v28 = (__ROL4__(v27, 2) + 24670 * __ROR4__(v27 + 133239679, 15)) ^ v26;
    v29 = (2033 * __ROR4__(v28 + 1419157410, 14) - __ROL4__(v28, 8)) ^ v27;
    v30 = __ROR4__(v29, 10) ^ (4991 * __ROR4__(v29 ^ 0xAB69605E, 12)) ^ v28;
    v31 = v29 ^ (v30 >> 10) ^ (43881 * (v30 ^ 0x7F1));
    v32 = (2033 * (__ROR4__(~v31, 5) + 24670)) ^ v30;
    v33 = v31 ^ (v32 - 2033) ^ 0xAB69605E;
    v34 = ((v33 >> 2) + 4991 * __ROL4__(v31 ^ (v32 - 2033) ^ 0xAB6967AF, 2)) ^ v32;
    v35 = (__ROL4__(v34, 7) + 43881 * __ROR4__(v34 - 133239679, 6)) ^ v33;
    v36 = (24670 * (v35 ^ 0x137F) + __ROR4__(v35, 9)) ^ v34;
    v37 = (__ROL4__(v36, 7) + 2033 * __ROL4__(v36 ^ 0xAB69, 5)) ^ v35;
    v38 = v37 ^ v36 ^ 0xAC987321;
    v39 = (4991 * __ROR4__(v38, 3) - 219010071) ^ v37;
    v40 = (24670 * __ROR4__(v39 - 133239679, 1) - __ROR4__(v39, 6)) ^ v38;
    v41 = (__ROL4__(v40, 14) + 2033 * __ROL4__(v40 - 1419157410, 3)) ^ v39;
    v42 = (4991 * __ROL4__(v41 - 1419157410, 15) - __ROR4__(v41, 14)) ^ v40;
    v43 = (v42 >> 3) ^ (43881 * (v42 ^ 0x605E)) ^ v41;
    v44 = 24670 * __ROL4__(v43 ^ 0x7F1137F, 4);
    v45 = v43;
    v46 = v14 ^ v43;
    v14 = v20;
    v47 = v10 ^ __ROL4__(v45, 2) ^ v44;
    v10 = v18;
    v48 = v47 ^ v42;
    *(v9 - 4) = v48;
    *v9 = v46;
    v9 += 8;
    v49 = __ROR4__(v48, 8);
    *(v9 - 13) = v49;
    v50 = __ROR4__(v46, 8);
    *(v9 - 9) = v50;
    v51 = __ROR4__(v49, 8);
    *(v9 - 14) = v51;
    v52 = __ROR4__(v50, 8);
    *(v9 - 10) = v52;
    v53 = __ROR4__(v51, 8);
    v54 = __ROR4__(v52, 8);
    *(v9 - 15) = v53;
    *(v9 - 11) = v54;
    v12 = __ROR4__(v54, 8);
    v13 = __ROR4__(v53, 8);
    --v8;
  }
  while ( v8 );
  v55 = v1344;
  v2 = 0;
  v56 = 0LL;
  v57 = 0;
  v58 = 0;
  do
    v57 ^= *((_BYTE *)v1344 + v56++);
  while ( v56 < 0x338 );
  if ( v57 == 64LL )
  {
    lpModuleName = v1344;
    v59 = 0;
    v55 = 0LL;
    v1677 = 824LL;
  }
  else
  {
    v59 = -1073425151;
  }
  if ( v55 )
    MemoryFree(v55);
  if ( v59 < 0 )
    goto LABEL_50;
  i = lpModuleName;
  HIBYTE(lpModuleName[v1677 / 2 - 1]) = 0;
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  if ( *(_BYTE *)i )
  {
    v61 = 0;
    while ( 1 )
    {
      v62 = i;
      v63 = -1LL;
      do
        ++v63;
      while ( i[v63] );
      v64 = &i[v63];
      v65 = (char *)&WARBIRD::g_arModuleInfo + 24 * v61;
      if ( !GetModuleHandleExW(0, v62, (HMODULE *)v65) )
        break;
      v58 = 0;
      if ( **(_WORD **)v65 == 23117
        && (v66 = *(int *)(*(_QWORD *)v65 + 60LL), (unsigned int)v66 < 0x10000000)
        && (v67 = *(_QWORD *)v65 + v66, v67 >= *(_QWORD *)v65)
        && *(_DWORD *)v67 == 17744 )
      {
        if ( ((*(_WORD *)(v67 + 24) - 267) & 0xFEFF) != 0 )
        {
          v58 = -1073741811;
        }
        else
        {
          *(_QWORD *)(v65 + 12) = *(_QWORD *)(v67 + 136);
          *((_DWORD *)v65 + 2) = *(_DWORD *)(v67 + 80);
        }
      }
      else
      {
        v58 = -1073741701;
      }
      v68 = *(_DWORD *)(v64 + 1);
      v69 = 0;
      for ( i = v64 + 3; v69 < v68; ++v69 )
      {
        v70 = (const CHAR *)i;
        v71 = -1LL;
        do
          ++v71;
        while ( *((_BYTE *)i + v71) );
        i = (LPCWSTR)((char *)i + v71 + 1);
        if ( v58 >= 0 )
        {
          ProcAddress = (void **)GetProcAddress(*(HMODULE *)v65, v70);
          if ( !ProcAddress )
            goto LABEL_51;
          (&WARBIRD::g_FuncAddress)[v1446] = ProcAddress;
        }
        ++v1446;
      }
      ++v61;
      if ( !*(_BYTE *)i )
        goto LABEL_51;
    }
LABEL_50:
    v58 = -1073741702;
  }
LABEL_51:
  if ( lpModuleName )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, (LPVOID)lpModuleName);
  }
  if ( v58 < 0 )
  {
    v74 = 4LL;
    v75 = (HMODULE *)&WARBIRD::g_arModuleInfo;
    do
    {
      if ( *v75 )
        FreeLibrary(*v75);
      v75 += 3;
      --v74;
    }
    while ( v74 );
    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
    memcpy_0(&WARBIRD::g_FuncAddress, off_18008E410, 0x170uLL);
    goto LABEL_61;
  }
  v6 = g_WarbirdSecureFunctionsRefCount;
LABEL_60:
  g_WarbirdSecureFunctionsRefCount = v6 + 1;
LABEL_61:
  v76 = 0;
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  v77 = 0;
  String1 = 0LL;
  v1679 = 0LL;
  if ( !NtCurrentPeb()->SessionId )
    goto LABEL_105;
  v78 = ((__int64 (*)(void))off_1800B3110[0])();
  if ( !v78 )
    goto LABEL_69;
  v1680 = 0LL;
  v79 = 0LL;
  for ( j = 0LL; ; v1680 = j )
  {
    if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1800B3130[0])(
           v78,
           2LL,
           j,
           v79,
           &v1565) )
    {
      String1 = j;
      goto LABEL_80;
    }
    LastError = GetLastError();
    if ( LastError != 122 )
      break;
    if ( j )
      goto LABEL_74;
    j = (wchar_t *)MemoryAlloc(v1565);
    SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1680);
    if ( !j )
    {
      v77 = -2147024882;
LABEL_80:
      v1680 = 0LL;
      goto LABEL_81;
    }
    v79 = v1565;
  }
  if ( !LastError )
  {
LABEL_74:
    v77 = -2147467259;
    goto LABEL_81;
  }
  if ( LastError > 0 )
    v77 = (unsigned __int16)LastError | 0x80070000;
  else
    v77 = LastError;
LABEL_81:
  SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1680);
  if ( v77 < 0 )
    goto LABEL_106;
  CurrentThreadId = GetCurrentThreadId();
  v84 = ((__int64 (__fastcall *)(_QWORD))off_1800B3128[0])(CurrentThreadId);
  if ( !v84 )
  {
LABEL_69:
    v82 = GetLastError();
    v77 = v82;
    if ( v82 > 0 )
      v77 = (unsigned __int16)v82 | 0x80070000;
    if ( v77 >= 0 )
      v77 = -2147467259;
    goto LABEL_106;
  }
  v1682 = 0LL;
  v77 = 0;
  v85 = 0LL;
  for ( k = 0LL; ; v1682 = k )
  {
    if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1800B3130[0])(
           v84,
           2LL,
           k,
           v85,
           &v1566) )
    {
      v1679 = k;
      goto LABEL_96;
    }
    v87 = GetLastError();
    if ( v87 != 122 )
      break;
    if ( k )
      goto LABEL_90;
    k = (wchar_t *)MemoryAlloc(v1566);
    SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1682);
    if ( !k )
    {
      v77 = -2147024882;
LABEL_96:
      v1682 = 0LL;
      goto LABEL_97;
    }
    v85 = v1566;
  }
  if ( !v87 )
  {
LABEL_90:
    v77 = -2147467259;
    goto LABEL_97;
  }
  if ( v87 > 0 )
    v77 = (unsigned __int16)v87 | 0x80070000;
  else
    v77 = v87;
LABEL_97:
  SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1682);
  if ( v77 >= 0 )
  {
    if ( String1 && !wcscmp_0(String1, L"WinSta0") && v1679 && !wcscmp_0(v1679, L"Default") )
    {
      v1500 = 0;
      CurrentProcess = GetCurrentProcess();
      if ( (unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1500, 4LL) )
      {
        if ( (v1500 & 0xF) == 0 )
          v76 = 1;
        goto LABEL_105;
      }
      goto LABEL_69;
    }
LABEL_105:
    v1564 = v76;
  }
LABEL_106:
  SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1679);
  SP<unsigned short,SP_MEM<unsigned short>>::Reset(&String1);
  v89 = v1564;
  if ( v77 < 0 )
    v89 = 0;
  v1564 = v89;
  v1437 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1495);
  if ( !v1437 )
  {
    v1495 = 0LL;
    v90 = -2147024882;
LABEL_1677:
    v1332 = v1500;
    goto LABEL_1678;
  }
  v1495 = v1437;
  v1345 = 0LL;
  *(_OWORD *)v1724 = 0LL;
  v1683 = &`WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher;
  v91 = 0LL;
  lpMem = 0LL;
  v1580 = 0;
  v1602 = 0;
  v92 = GetProcessHeap();
  v1363 = 3LL;
  v93 = (unsigned __int16 *)HeapAlloc(v92, 8u, 0xA0uLL);
  v90 = -1073741801;
  if ( !v93 )
  {
    v1481 = -1073741801;
    goto LABEL_248;
  }
  v94 = v1683;
  v1388 = v93;
  *(_OWORD *)v93 = *v1683;
  *((_OWORD *)v93 + 1) = v94[1];
  *((_OWORD *)v93 + 2) = v94[2];
  *((_OWORD *)v93 + 3) = v94[3];
  *((_OWORD *)v93 + 4) = v94[4];
  *((_OWORD *)v93 + 5) = v94[5];
  *((_OWORD *)v93 + 6) = v94[6];
  *((_OWORD *)v93 + 7) = v94[7];
  *((_OWORD *)v93 + 8) = v94[8];
  *((_OWORD *)v93 + 9) = v94[9];
  v1613 = &`WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
  v95 = GetProcessHeap();
  v96 = HeapAlloc(v95, 8u, 8uLL);
  v97 = v96;
  if ( !v96 )
    goto LABEL_145;
  v1345 = (unsigned __int16 *)v96;
  *v96 = *v1613;
  v1614 = (const wchar_t *)__rdtsc();
  dwBytes = 0;
  v98 = RtlUIntAdd(4LL, 4LL, &dwBytes_4);
  v99 = v1605;
  v90 = v98;
  v1481 = v98;
  if ( v98 >= 0 )
    v99 = dwBytes_4;
  v1605 = v99;
  if ( v98 < 0 )
    goto LABEL_146;
  v100 = RtlUIntAdd(0LL, v99, &dwBytes);
  v90 = v100 | 0x10000000;
  v1481 = v100 | 0x10000000;
  if ( v100 < 0 )
    goto LABEL_146;
  v102 = RtlUIntAdd(v101, 160LL, &v1607);
  v1481 = v102;
  v90 = v102;
  if ( v102 >= 0 )
    v99 = v1607;
  v1605 = v99;
  if ( v102 < 0 )
    goto LABEL_146;
  v103 = RtlUIntAdd(dwBytes, v99, &dwBytes);
  v90 = v105 | v103;
  v1481 = v105 | v103;
  if ( (v105 | v103) < 0 )
    goto LABEL_146;
  v106 = RtlUIntAdd(v104, v104 + 4, &v1608);
  v1481 = v106;
  v90 = v106;
  if ( v106 >= 0 )
    v99 = v1608;
  v1605 = v99;
  if ( v106 < 0 )
    goto LABEL_146;
  v107 = RtlUIntAdd(dwBytes, v99, &dwBytes);
  v90 = v109 | v107;
  v1481 = v109 | v107;
  if ( (v109 | v107) < 0 )
    goto LABEL_146;
  v110 = RtlUIntAdd(v108, v108 + 4, &v1609);
  v1481 = v110;
  v90 = v110;
  if ( v110 >= 0 )
    v99 = v1609;
  v1605 = v99;
  if ( v110 < 0 )
    goto LABEL_146;
  v111 = RtlUIntAdd(dwBytes, v99, &dwBytes);
  v90 = v114 | v111;
  v1481 = v114 | v111;
  if ( (v114 | v111) < 0 )
    goto LABEL_146;
  if ( StringCchLengthW(v113, v112, &pcchLength) < 0 )
    goto LABEL_147;
  v116 = RtlUIntAdd(v115, (unsigned int)(2 * ++pcchLength), &v1610);
  v1481 = v116;
  v90 = v116;
  if ( v116 >= 0 )
    v99 = v1610;
  v1605 = v99;
  if ( v116 < 0 )
    goto LABEL_146;
  v117 = RtlUIntAdd(dwBytes, v99, &dwBytes);
  v90 = v119 | v117;
  v1481 = v119 | v117;
  if ( (v119 | v117) < 0 )
    goto LABEL_146;
  v120 = RtlUIntAdd(v118, v118, &v1611);
  v1481 = v120;
  v90 = v120;
  if ( v120 >= 0 )
    v99 = v1611;
  v1605 = v99;
  if ( v120 < 0 )
    goto LABEL_146;
  v121 = RtlUIntAdd(dwBytes, v99, &dwBytes);
  v90 = v123 | v121;
  v1481 = v123 | v121;
  if ( (v123 | v121) < 0 )
    goto LABEL_146;
  v124 = RtlUIntAdd(v122, v122, &v1505);
  v1481 = v124;
  v90 = v124;
  if ( v124 >= 0 )
    v99 = v1505;
  v1605 = v99;
  if ( v124 < 0 )
    goto LABEL_146;
  v125 = RtlUIntAdd(dwBytes, v99, &dwBytes);
  v90 = v126 | v125;
  v1481 = v126 | v125;
  if ( (v126 | v125) < 0 )
    goto LABEL_146;
  HIDWORD(Size) = dwBytes;
  v127 = dwBytes;
  v128 = GetProcessHeap();
  v129 = HeapAlloc(v128, 8u, v127);
  v130 = v129;
  if ( !v129 )
  {
    v90 = -1073741801;
LABEL_145:
    v1481 = v90;
LABEL_146:
    v91 = v93;
    goto LABEL_248;
  }
  lpMem = v129;
  LODWORD(Size) = 0;
  v1506 = 0;
  v90 = RtlULongLongAdd(v129, 4LL, &v1717);
  v1481 = v90;
  v132 = 0;
  if ( v90 < 0 )
  {
    v134 = 1;
  }
  else
  {
    if ( v130 + 2 > (_DWORD *)((char *)v130 + HIDWORD(Size)) )
      goto LABEL_144;
    v133 = v1717;
    *v130 = v131;
    v134 = v131 - 3;
    *v133 = v1506;
    v132 = v131 - 3 + Size;
    LODWORD(Size) = v132;
  }
  if ( v90 < 0 )
    goto LABEL_146;
  if ( lpMem )
  {
    v137 = lpMem;
    v1616 = lpMem;
    if ( v132 )
    {
      while ( 1 )
      {
        v138 = RtlUIntAdd((unsigned int)v131, (unsigned int)*v137, &v1509);
        v1481 = v138;
        v90 = v138;
        if ( v138 >= 0 )
          v139 = v1509;
        v1508 = v139;
        if ( v138 < 0 )
          break;
        v1481 = RtlULongLongAdd(v137, v139, &v1616);
        v90 = v1481;
        if ( v1481 < 0 )
          break;
        v137 = v1616;
        if ( v140 + 1 >= (unsigned int)Size )
          goto LABEL_165;
      }
    }
    else
    {
LABEL_165:
      v1481 = RtlULongLongAdd(v137, v131, &v1726);
      v90 = v1481;
      if ( v1481 >= 0 )
      {
        if ( v137 + 41 > (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
          goto LABEL_144;
        v141 = v1726;
        *v137 = 160;
        *v141 = *(_OWORD *)v93;
        v141[1] = *((_OWORD *)v93 + 1);
        v141[2] = *((_OWORD *)v93 + 2);
        v141[3] = *((_OWORD *)v93 + 3);
        v141[4] = *((_OWORD *)v93 + 4);
        v141[5] = *((_OWORD *)v93 + 5);
        v141[6] = *((_OWORD *)v93 + 6);
        v141[7] = *((_OWORD *)v93 + 7);
        v141[8] = *((_OWORD *)v93 + 8);
        v141[9] = *((_OWORD *)v93 + 9);
        LODWORD(Size) = Size + 1;
      }
    }
  }
  else
  {
    v135 = RtlUIntAdd((unsigned int)v131, 160LL, &v1507);
    v136 = v1508;
    v90 = v135;
    v1481 = v135;
    if ( v135 >= 0 )
      v136 = v1507;
    v1508 = v136;
    if ( v135 >= 0 )
    {
      v1481 = RtlUIntAdd(HIDWORD(Size), v136, (char *)&Size + 4);
      v90 = v1481;
      if ( v1481 >= 0 )
      {
        LODWORD(Size) = v134 + Size;
        goto LABEL_169;
      }
    }
  }
  if ( v90 < 0 )
    goto LABEL_146;
LABEL_169:
  if ( lpMem )
  {
    v144 = lpMem;
    v1617 = lpMem;
    if ( (_DWORD)Size )
    {
      while ( 1 )
      {
        v145 = RtlUIntAdd((unsigned int)v131, (unsigned int)*v144, &v1512);
        v1481 = v145;
        v90 = v145;
        if ( v145 >= 0 )
          v146 = v1512;
        v1511 = v146;
        if ( v145 < 0 )
          break;
        v1481 = RtlULongLongAdd(v144, v146, &v1617);
        v90 = v1481;
        if ( v1481 < 0 )
          break;
        v144 = v1617;
        if ( v147 + 1 >= (unsigned int)Size )
          goto LABEL_181;
      }
    }
    else
    {
LABEL_181:
      v1481 = RtlULongLongAdd(v144, v131, &v1727);
      v90 = v1481;
      if ( v1481 >= 0 )
      {
        if ( v144 + 3 > (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
          goto LABEL_144;
        v148 = v1727;
        *v144 = 8;
        *v148 = *v97;
        LODWORD(Size) = Size + 1;
      }
    }
  }
  else
  {
    v142 = RtlUIntAdd((unsigned int)v131, 8LL, &v1510);
    v143 = v1511;
    v90 = v142;
    v1481 = v142;
    if ( v142 >= 0 )
      v143 = v1510;
    v1511 = v143;
    if ( v142 >= 0 )
    {
      v1481 = RtlUIntAdd(HIDWORD(Size), v143, (char *)&Size + 4);
      v90 = v1481;
      if ( v1481 >= 0 )
      {
        LODWORD(Size) = Size + 1;
        goto LABEL_185;
      }
    }
  }
  if ( v90 < 0 )
    goto LABEL_146;
LABEL_185:
  psz = v1614;
  if ( lpMem )
  {
    v152 = lpMem;
    v1619 = lpMem;
    if ( (_DWORD)Size )
    {
      do
      {
        v153 = RtlUIntAdd((unsigned int)v131, (unsigned int)*v152, &v1515);
        v1481 = v153;
        v90 = v153;
        if ( v153 >= 0 )
          v154 = v1515;
        v1514 = v154;
        if ( v153 < 0 )
          goto LABEL_200;
        v1481 = RtlULongLongAdd(v152, v154, &v1619);
        v90 = v1481;
        if ( v1481 < 0 )
          goto LABEL_200;
        v152 = v1619;
      }
      while ( v155 + 1 < (unsigned int)Size );
    }
    v1481 = RtlULongLongAdd(v152, v131, &v1728);
    v90 = v1481;
    if ( v1481 < 0 )
      goto LABEL_200;
    if ( v152 + 3 <= (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
    {
      v156 = v1728;
      *v152 = 8;
      v150 = psz;
      *v156 = psz;
      LODWORD(Size) = Size + 1;
      goto LABEL_200;
    }
LABEL_144:
    v90 = -1073741789;
    goto LABEL_145;
  }
  v149 = RtlUIntAdd((unsigned int)v131, 8LL, &v1513);
  v151 = v1514;
  v90 = v149;
  v1481 = v149;
  if ( v149 >= 0 )
    v151 = v1513;
  v1514 = v151;
  if ( v149 >= 0 )
  {
    v1481 = RtlUIntAdd(HIDWORD(Size), v151, (char *)&Size + 4);
    v90 = v1481;
    if ( v1481 >= 0 )
    {
      LODWORD(Size) = Size + 1;
      goto LABEL_201;
    }
  }
LABEL_200:
  if ( v90 < 0 )
    goto LABEL_146;
LABEL_201:
  if ( StringCchLengthW(v150, v151, &v1620) < 0 )
  {
LABEL_147:
    v90 = -1073741762;
    goto LABEL_145;
  }
  v1481 = RtlULongLongAdd(v1620, 1LL, &v1620);
  v90 = v1481;
  if ( v1481 >= 0 )
  {
    if ( 2 * (_DWORD)v1620 )
    {
      if ( lpMem )
      {
        v160 = lpMem;
        v1621 = lpMem;
        if ( (_DWORD)Size )
        {
          while ( 1 )
          {
            v161 = RtlUIntAdd(4LL, (unsigned int)*v160, &v1518);
            v1481 = v161;
            v90 = v161;
            if ( v161 >= 0 )
              v163 = v1518;
            v1517 = v163;
            if ( v161 < 0 )
              break;
            v1481 = RtlULongLongAdd(v160, v163, &v1621);
            v90 = v1481;
            if ( v1481 < 0 )
              goto LABEL_220;
            v160 = v1621;
            if ( v164 + 1 >= (unsigned int)Size )
              goto LABEL_216;
          }
          v157 = v162;
        }
        else
        {
LABEL_216:
          v1481 = RtlULongLongAdd(v160, 4LL, &v1729);
          v90 = v1481;
          if ( v1481 >= 0 )
          {
            if ( (char *)v160 + v165 + 4 <= (char *)lpMem + HIDWORD(Size) )
            {
              v166 = v1729;
              *v160 = v165;
              memcpy_0(v166, L"DataProtectionUnderLock-WindowsCore-Enabled", (unsigned int)v165);
              LODWORD(Size) = Size + 1;
LABEL_220:
              v157 = 4LL;
            }
            else
            {
              v90 = -1073741789;
              v1481 = -1073741789;
            }
          }
        }
      }
      else
      {
        v158 = RtlUIntAdd((unsigned int)v157, (unsigned int)(2 * v1620), &v1516);
        v159 = v1517;
        v90 = v158;
        v1481 = v158;
        if ( v158 >= 0 )
          v159 = v1516;
        v1517 = v159;
        if ( v158 >= 0 )
        {
          v1481 = RtlUIntAdd(HIDWORD(Size), v159, (char *)&Size + 4);
          v90 = v1481;
          if ( v1481 >= 0 )
          {
            LODWORD(Size) = Size + 1;
            v90 = 0;
            v1481 = 0;
          }
        }
      }
    }
    else
    {
      v90 = -1073741811;
      v1481 = -1073741811;
    }
  }
  if ( v90 < 0 )
    goto LABEL_247;
  v1519 = v1564;
  if ( lpMem )
  {
    v169 = lpMem;
    v1622 = lpMem;
    if ( (_DWORD)Size )
    {
      while ( 1 )
      {
        v170 = RtlUIntAdd((unsigned int)v157, (unsigned int)*v169, &v1522);
        v1481 = v170;
        v90 = v170;
        if ( v170 >= 0 )
          v171 = v1522;
        v1521 = v171;
        if ( v170 < 0 )
          break;
        v1481 = RtlULongLongAdd(v169, v171, &v1622);
        v90 = v1481;
        if ( v1481 < 0 )
          break;
        v169 = v1622;
        if ( v172 + 1 >= (unsigned int)Size )
          goto LABEL_236;
      }
    }
    else
    {
LABEL_236:
      v1481 = RtlULongLongAdd(v169, v157, &v1730);
      v90 = v1481;
      if ( v1481 >= 0 )
      {
        if ( v169 + 2 > (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
        {
LABEL_246:
          v90 = -1073741789;
          v1481 = -1073741789;
          goto LABEL_247;
        }
        v173 = v1730;
        *v169 = v157;
        *v173 = v1519;
        LODWORD(Size) = Size + 1;
      }
    }
  }
  else
  {
    v167 = RtlUIntAdd((unsigned int)v157, (unsigned int)v157, &v1520);
    v168 = v1521;
    v90 = v167;
    v1481 = v167;
    if ( v167 >= 0 )
      v168 = v1520;
    v1521 = v168;
    if ( v167 >= 0 )
    {
      v1481 = RtlUIntAdd(HIDWORD(Size), v168, (char *)&Size + 4);
      v90 = v1481;
      if ( v1481 >= 0 )
      {
        LODWORD(Size) = Size + 1;
        goto LABEL_240;
      }
    }
  }
  if ( v90 < 0 )
  {
LABEL_247:
    v91 = v93;
    goto LABEL_248;
  }
LABEL_240:
  v1523 = v157;
  if ( lpMem )
  {
    v183 = lpMem;
    v1623 = lpMem;
    if ( (_DWORD)Size )
    {
      do
      {
        v184 = RtlUIntAdd((unsigned int)v157, (unsigned int)*v183, &v1526);
        v1481 = v184;
        v90 = v184;
        if ( v184 >= 0 )
          v185 = v1526;
        v1525 = v185;
        if ( v184 < 0 )
          goto LABEL_272;
        v1481 = RtlULongLongAdd(v183, v185, &v1623);
        v90 = v1481;
        if ( v1481 < 0 )
          goto LABEL_272;
        v183 = v1623;
      }
      while ( v186 + 1 < (unsigned int)Size );
    }
    v1481 = RtlULongLongAdd(v183, v157, &v1731);
    v90 = v1481;
    if ( v1481 < 0 )
      goto LABEL_272;
    if ( v183 + 2 <= (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
    {
      v187 = v1731;
      *v183 = v157;
      *v187 = v1523;
      LODWORD(Size) = Size + 1;
      goto LABEL_272;
    }
    goto LABEL_246;
  }
  v174 = RtlUIntAdd((unsigned int)v157, (unsigned int)v157, &v1524);
  v175 = v1525;
  v90 = v174;
  v1481 = v174;
  if ( v174 >= 0 )
    v175 = v1524;
  v1525 = v175;
  if ( v174 >= 0 )
  {
    v1481 = RtlUIntAdd(HIDWORD(Size), v175, (char *)&Size + 4);
    v90 = v1481;
    if ( v1481 >= 0 )
    {
      LODWORD(Size) = Size + 1;
      goto LABEL_273;
    }
  }
LABEL_272:
  if ( v90 < 0 )
    goto LABEL_247;
LABEL_273:
  v188 = RtlUIntAdd((unsigned int)v157, (unsigned int)v157, &v1527);
  v190 = v1528;
  v90 = v188;
  v1481 = v188;
  if ( v188 >= 0 )
    v190 = v1527;
  v1528 = v190;
  if ( v188 < 0 )
    goto LABEL_298;
  v1529 = v190;
  v191 = RtlUIntAdd(v189, 8LL, &v1530);
  v1481 = v191;
  v193 = v192;
  v90 = v191;
  if ( v191 >= 0 )
    v193 = v1530;
  v1528 = v193;
  if ( v191 < 0 )
    goto LABEL_298;
  v1481 = RtlUIntAdd(v192, v193, &v1529);
  v90 = v1481;
  if ( v1481 < 0 )
    goto LABEL_298;
  v195 = RtlUIntAdd(v194, v194, &v1531);
  v1481 = v195;
  v90 = v195;
  if ( v195 >= 0 )
    v193 = v1531;
  v1528 = v193;
  if ( v195 < 0 )
    goto LABEL_298;
  v1481 = RtlUIntAdd(v1529, v193, &v1529);
  v90 = v1481;
  if ( v1481 < 0 )
    goto LABEL_298;
  v197 = RtlUIntAdd(v196, v196, &v1532);
  v1481 = v197;
  v90 = v197;
  if ( v197 >= 0 )
    v193 = v1532;
  v1528 = v193;
  if ( v197 < 0 )
    goto LABEL_298;
  v1481 = RtlUIntAdd(v1529, v193, &v1529);
  v90 = v1481;
  if ( v1481 < 0 )
    goto LABEL_298;
  v199 = RtlUIntAdd(v198, v198, &v1546);
  v1481 = v199;
  v90 = v199;
  if ( v199 >= 0 )
    v193 = v1546;
  v1528 = v193;
  if ( v199 < 0 )
    goto LABEL_298;
  v1481 = RtlUIntAdd(v1529, v193, &v1529);
  v90 = v1481;
  if ( v1481 < 0 )
    goto LABEL_298;
  v201 = RtlUIntAdd(v200, v200, &v1499);
  v1481 = v201;
  v90 = v201;
  if ( v201 >= 0 )
    v193 = v1499;
  v1528 = v193;
  if ( v201 < 0 )
  {
LABEL_298:
    v202 = v1499;
  }
  else
  {
    v90 = RtlUIntAdd(v1529, v193, &v1529);
    v1481 = v90;
    v202 = v1499;
    if ( v90 >= 0 )
      v202 = v1529;
  }
  v1412 = v202;
  if ( v90 < 0 )
    goto LABEL_247;
  v203 = 0LL;
  v1427 = 0LL;
  v204 = 0LL;
  v1624 = 0LL;
  v1378 = 0LL;
  v1338 = 0;
  v1453 = 0LL;
  v1533 = 0LL;
  v1469 = 0LL;
  v1485 = 0LL;
  v1625 = __rdtsc();
  v1534 = 8;
  v205 = RtlUIntAdd(8LL, HIDWORD(Size), &v1534);
  if ( v205 >= 0 )
  {
    v206 = (v1534 + 7) & 0xFFFFFFF8;
    if ( v206 >= v1534 )
    {
      v1534 = (v1534 + 7) & 0xFFFFFFF8;
      v207 = v206;
      v208 = GetProcessHeap();
      v209 = HeapAlloc(v208, 8u, v207);
      if ( v209 )
      {
        v1626 = v209;
        *v209 = Size;
        v205 = RtlULongLongAdd(v209, 4LL, &v1626);
        if ( v205 >= 0 )
        {
          v211 = v1626;
          *(_DWORD *)v1626 = HIDWORD(Size);
          v205 = RtlULongLongAdd(v211, v210, &v1626);
          if ( v205 >= 0 )
          {
            *(_QWORD *)((char *)v209 + v1534 - 8) = v1625;
            memcpy_0(v1626, lpMem, HIDWORD(Size));
            v204 = v1534;
            v1427 = (unsigned __int16 *)v209;
            v209 = 0LL;
          }
        }
        if ( v209 )
        {
          v212 = GetProcessHeap();
          HeapFree(v212, 0, v209);
        }
        v203 = v1427;
      }
      else
      {
        v205 = -1073741801;
        v203 = 0LL;
      }
    }
    else
    {
      v205 = -1073741675;
    }
  }
  v90 = v205 | 0x10000000;
  v1481 = v90;
  if ( v90 < 0 )
    goto LABEL_585;
  v1627 = 0LL;
  v213 = 0LL;
  if ( v203 )
  {
    if ( v204 && (Src = MemoryAlloc(v204 + 8)) != 0LL )
    {
      v215 = 0;
      for ( m = 0LL; m < v204; ++m )
        v215 ^= *((_BYTE *)v203 + m);
      v1336 = v215;
      v217 = Src;
      v1792 = 0xC81ECB17B1B54A58uLL;
      v1482 = 0;
      v218 = -1;
      v1421 = 0;
      v219 = v203;
      v220 = 0;
      v221 = v204 & 7;
      if ( (v204 & 7) != 0 )
      {
        v1421 = 0;
        v222 = 0;
        v223 = 0;
        v224 = 56;
        do
        {
          v225 = *(unsigned __int8 *)v219;
          v219 = (unsigned __int16 *)((char *)v219 + 1);
          if ( v223 >= 4 )
          {
            v226 = v1421;
            v222 |= v225 << v224;
          }
          else
          {
            v226 = (v225 << (v224 - 32)) | v1421;
            v1421 = v226;
          }
          ++v223;
          v224 -= 8;
        }
        while ( v223 < (int)v221 );
        v1482 = v222;
        v220 = v226 ^ 0xB17A307A;
        v227 = v222 ^ 0x42F6B18D;
        v228 = v226 ^ 0xB17A307A;
        v229 = v222 ^ 0x42F6B18D;
        v230 = 0;
        if ( (v204 & 7) != 0 )
        {
          do
          {
            if ( v230 >= 4 )
            {
              v229 = __ROL4__(v229, 8);
              v231 = v229;
            }
            else
            {
              v228 = __ROL4__(v228, 8);
              v231 = v228;
            }
            *v217 = v231;
            ++v230;
            ++v217;
          }
          while ( v230 < (int)v221 );
        }
        if ( v221 <= 4 )
        {
          v218 = 0;
          if ( v221 < 4 )
            v220 = v220 >> (8 * (4 - v221)) << (8 * (4 - v221));
        }
        else
        {
          v218 = v227 >> (8 * (8 - v221)) << (8 * (8 - v221));
        }
      }
      v232 = v204 >> 3;
      if ( v204 >> 3 )
      {
        v233 = (unsigned __int8 *)(v219 + 1);
        v234 = v1482;
        v235 = v1421;
        v1447 = HIWORD(v1792);
        v1401 = WORD1(v1792);
        v236 = v217 + 7;
        v237 = HIDWORD(v1792);
        v238 = WORD2(v1792);
        do
        {
          v239 = v233[1] | ((*v233 | ((*(v233 - 1) | (*(v233 - 2) << 8)) << 8)) << 8);
          v240 = v233[5] | ((v233[4] | ((v233[3] | (v233[2] << 8)) << 8)) << 8);
          v241 = v240 ^ v218;
          v242 = v237 ^ v239 ^ (v241 - 19032) ^ v220;
          v243 = (__ROR4__(v242, 7) + WORD1(v1792) * __ROR4__(v242 ^ v237, 15)) ^ v241;
          v244 = (v238 * __ROR4__(v243 - 1313519016, 9) - __ROR4__(v243, 10)) ^ v242;
          v245 = (__ROL4__(v244, 5) + HIWORD(v1792) * __ROL4__(v238 ^ v244, 4)) ^ v243;
          v246 = (v237 - (v245 ^ 0xB1B54A58)) ^ v244;
          v247 = (WORD1(v1792) * (v246 - 19032) - (v246 >> 6)) ^ v245;
          v248 = (19032 * (v238 ^ __ROR4__(v247, 15))) ^ v246;
          v249 = (v238 * (HIWORD(v1792) + __ROR4__(~v248, 3))) ^ v247;
          v250 = (v249 - v237 - 19032) ^ v248;
          v251 = (v1401 * (v1447 ^ v250)) ^ __ROR4__(v250, 10) ^ v249;
          v252 = __ROR4__(v251, 3) ^ (v238 * __ROL4__(v251 ^ 0x4A58, 6)) ^ v250;
          v253 = (19032 * (__ROR4__(v252, 15) - HIWORD(v1792))) ^ v251;
          v254 = (v253 >> 15) ^ (19032 * __ROL4__(v253 - v238, 3)) ^ (v253 >> 1) ^ (19032 * (HIWORD(v1792) ^ v253)) ^ v252;
          v255 = (WORD1(v1792) * (v254 - v238) - (v254 >> 13)) ^ v253;
          v256 = __ROR4__(v255, 11) ^ (v238 * __ROR4__(-1313519016 - v255, 9)) ^ v254;
          v257 = (v256 + 1313519016 - HIWORD(v1792)) ^ v255;
          v258 = (19032 * (v1401 ^ v257) - __ROR4__(v257, 7)) ^ v256;
          v259 = (WORD1(v1792) * __ROL4__(HIWORD(v1792) ^ v258, 4) - __ROR4__(v258, 16)) ^ v257;
          v260 = (__ROR4__(v259, 4) + v238 * __ROR4__(-1313519016 - v259, 10)) ^ v258;
          v261 = __ROR4__(v260, 9) ^ (HIWORD(v1792) * __ROR4__(v260 + 1313519016, 4)) ^ v259;
          v262 = (19032 * __ROL4__(v237 ^ v261, 8) - __ROL4__(v261, 2)) ^ v260;
          v263 = (WORD1(v1792) * __ROR4__(v237 - v262, 11) - __ROR4__(v262, 12)) ^ v261;
          v264 = (v263 >> 8) ^ (v238 * (v263 ^ WORD1(v1792))) ^ v262;
          v233 += 8;
          v265 = v264 ^ v237 ^ 0xB1B54A58 ^ v263;
          v266 = v235 ^ v264;
          *(v236 - 4) = v266;
          v267 = v234 ^ v265;
          *v236 = v267;
          v235 = v239;
          v268 = __ROR4__(v266, 8);
          v234 = v240;
          *(v236 - 5) = v268;
          v236 += 8;
          v269 = __ROR4__(v267, 8);
          *(v236 - 9) = v269;
          v270 = __ROR4__(v268, 8);
          *(v236 - 14) = v270;
          v271 = __ROR4__(v269, 8);
          *(v236 - 10) = v271;
          v272 = __ROR4__(v270, 8);
          v273 = __ROR4__(v271, 8);
          *(v236 - 15) = v272;
          *(v236 - 11) = v273;
          v218 = __ROR4__(v273, 8);
          v220 = __ROR4__(v272, 8);
          --v232;
        }
        while ( v232 );
        v215 = v1336;
        v2 = 0;
        v213 = 0LL;
      }
      v274 = v204 + 8;
      *(_QWORD *)&Src[v204] = v215;
      v1627 = Src;
      v1628 = v204 + 8;
      v1630 = 8LL;
      v1629 = &`WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
      v1632 = 160LL;
      v1631 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher;
      v275 = GetProcessHeap();
      v276 = HeapAlloc(v275, 8u, 0x30uLL);
      v277 = v276;
      if ( v276 )
      {
        *v276 = v274;
        v278 = GetProcessHeap();
        v279 = HeapAlloc(v278, 8u, v274);
        if ( !v279 )
          goto LABEL_343;
        *((_QWORD *)v277 + 1) = v279;
        memcpy_0(v279, Src, v274);
        v277[4] = 160;
        v280 = GetProcessHeap();
        v281 = HeapAlloc(v280, 8u, 0xA0uLL);
        if ( !v281 )
          goto LABEL_343;
        *((_QWORD *)v277 + 3) = v281;
        *v281 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
        v281[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
        v281[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
        v281[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
        v281[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
        v281[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
        v281[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
        v281[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
        v281[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
        v281[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
        v277[8] = 8;
        v282 = GetProcessHeap();
        v283 = HeapAlloc(v282, 8u, 8uLL);
        if ( v283 )
        {
          *((_QWORD *)v277 + 5) = v283;
          v213 = v277;
          *v283 = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
          v214 = 0;
          v277 = 0LL;
        }
        else
        {
LABEL_343:
          v214 = -1073741801;
        }
        if ( v277 )
        {
          v284 = (void *)*((_QWORD *)v277 + 1);
          if ( v284 )
          {
            v285 = GetProcessHeap();
            HeapFree(v285, 0, v284);
            *((_QWORD *)v277 + 1) = 0LL;
          }
          v286 = (void *)*((_QWORD *)v277 + 3);
          if ( v286 )
          {
            v287 = GetProcessHeap();
            HeapFree(v287, 0, v286);
            *((_QWORD *)v277 + 3) = 0LL;
          }
          v288 = (void *)*((_QWORD *)v277 + 5);
          if ( v288 )
          {
            v289 = GetProcessHeap();
            HeapFree(v289, 0, v288);
            *((_QWORD *)v277 + 5) = 0LL;
          }
          v290 = GetProcessHeap();
          HeapFree(v290, 0, v277);
        }
      }
      else
      {
        v214 = -1073741801;
      }
      if ( v214 >= 0 )
      {
        v1624 = v213;
        v213 = 0LL;
      }
    }
    else
    {
      v214 = -1073741823;
    }
    v291 = v1627;
    if ( v1627 )
    {
      v292 = GetProcessHeap();
      HeapFree(v292, 0, v291);
      v1627 = 0LL;
    }
    if ( v213 )
    {
      v293 = (void *)v213[1];
      if ( v293 )
      {
        v294 = GetProcessHeap();
        HeapFree(v294, 0, v293);
        v213[1] = 0LL;
      }
      v295 = (void *)v213[3];
      if ( v295 )
      {
        v296 = GetProcessHeap();
        HeapFree(v296, 0, v295);
        v213[3] = 0LL;
      }
      v297 = (void *)v213[5];
      if ( v297 )
      {
        v298 = GetProcessHeap();
        HeapFree(v298, 0, v297);
        v213[5] = 0LL;
      }
      v299 = GetProcessHeap();
      HeapFree(v299, 0, v213);
    }
  }
  else
  {
    v214 = -1073741811;
  }
  v90 = v214 | 0x10000000;
  v1481 = v90;
  if ( v90 < 0 )
    goto LABEL_585;
  v300 = (const void **)v1624;
  v1535 = 4;
  v301 = RtlUIntAdd(4LL, *(unsigned int *)v1624, &v1535);
  if ( v301 < 0
    || (v301 = RtlUIntAdd(v1535, 4LL, &v1535), v301 < 0)
    || (v301 = RtlUIntAdd(v1535, *((unsigned int *)v300 + 4), &v1535), v301 < 0)
    || (v301 = RtlUIntAdd(v1535, 4LL, &v1535), v301 < 0) )
  {
    v302 = v1536;
  }
  else
  {
    v301 = RtlUIntAdd(v1535, *((unsigned int *)v300 + 8), &v1535);
    v302 = v1536;
    if ( v301 >= 0 )
      v302 = v1535;
    v1536 = v302;
  }
  if ( v301 >= 0 )
  {
    v303 = v302;
    v304 = GetProcessHeap();
    v305 = HeapAlloc(v304, 8u, v303);
    if ( v305 )
    {
      *v305 = *(_DWORD *)v300;
      v1633 = v305;
      v301 = RtlULongLongAdd(v305, 4LL, &v1633);
      if ( v301 >= 0 )
      {
        memcpy_0(v1633, v300[1], *(unsigned int *)v300);
        v301 = RtlULongLongAdd(v1633, *(unsigned int *)v300, &v1633);
        if ( v301 >= 0 )
        {
          v306 = v1633;
          *(_DWORD *)v1633 = *((_DWORD *)v300 + 4);
          v301 = RtlULongLongAdd(v306, 4LL, &v1633);
          if ( v301 >= 0 )
          {
            memcpy_0(v1633, v300[3], *((unsigned int *)v300 + 4));
            v301 = RtlULongLongAdd(v1633, *((unsigned int *)v300 + 4), &v1633);
            if ( v301 >= 0 )
            {
              v307 = v1633;
              *(_DWORD *)v1633 = *((_DWORD *)v300 + 8);
              v301 = RtlULongLongAdd(v307, 4LL, &v1633);
              if ( v301 >= 0 )
              {
                memcpy_0(v1633, v300[5], *((unsigned int *)v300 + 8));
                v301 = RtlULongLongAdd(v1633, *((unsigned int *)v300 + 8), &v1633);
                if ( v301 >= 0 )
                {
                  v1378 = v305;
                  v305 = 0LL;
                  v1338 = v1536;
                }
              }
            }
          }
        }
      }
      if ( v305 )
      {
        v308 = GetProcessHeap();
        HeapFree(v308, 0, v305);
      }
    }
    else
    {
      v301 = -1073741801;
    }
  }
  v90 = v301 | 0x10000000;
  v1481 = v90;
  if ( v90 < 0 )
    goto LABEL_585;
  v1634 = 0LL;
  v1537 = 0;
  v1635 = 0LL;
  v1538 = 0;
  v1539 = 8;
  v309 = RtlUIntAdd(8LL, v1412, &v1539);
  v90 = v309 | 0x10000000;
  v1481 = v309 | 0x10000000;
  if ( v309 >= 0 )
  {
    v311 = (v1539 + 7) & 0xFFFFFFF8;
    if ( v311 >= v1539 )
    {
      v1541 = (v1539 + 7) & 0xFFFFFFF8;
      v313 = RtlUIntAdd(v311, v310, &v1541);
      v312 = v1540;
      v90 = v313;
      v1481 = v313;
      if ( v313 >= 0 )
        v312 = v1541;
      v1540 = v312;
    }
    else
    {
      v312 = v1540;
      v90 = -1073741675;
      v1481 = -1073741675;
    }
    if ( v90 < 0 )
      goto LABEL_585;
    if ( !lpMem || (unsigned int)Size <= 1 )
      goto LABEL_422;
    v314 = (unsigned int *)lpMem;
    v1636 = (unsigned int *)lpMem;
    while ( 1 )
    {
      v315 = *v314;
      v1481 = RtlULongLongAdd(v314, 4LL, &v1636);
      v90 = v1481;
      if ( v1481 < 0 )
        break;
      v1481 = RtlULongLongAdd(v1636, v315, &v1636);
      v90 = v1481;
      if ( v1481 < 0 )
        break;
      v314 = v1636;
      if ( v316 != -1 )
      {
        v1481 = RtlULongLongAdd(v1636, 4LL, &v1636);
        v90 = v1481;
        if ( v1481 >= 0 )
        {
          v318 = v1636;
          v1537 = v317;
          if ( !v317 )
            v318 = 0LL;
          v1636 = v318;
          v1634 = v318;
        }
        break;
      }
    }
    if ( v90 < 0 )
      goto LABEL_585;
    if ( (unsigned int)Size > 2 )
    {
      v319 = (unsigned int *)lpMem;
      v1637 = (unsigned int *)lpMem;
      while ( 1 )
      {
        v320 = *v319;
        v1481 = RtlULongLongAdd(v319, 4LL, &v1637);
        v90 = v1481;
        if ( v1481 < 0 )
          break;
        v1481 = RtlULongLongAdd(v1637, v320, &v1637);
        v90 = v1481;
        if ( v1481 < 0 )
          break;
        v319 = v1637;
        if ( (unsigned int)(v321 + 1) >= 2 )
        {
          v1481 = RtlULongLongAdd(v1637, 4LL, &v1637);
          v90 = v1481;
          if ( v1481 >= 0 )
          {
            v323 = v1637;
            v1538 = v322;
            if ( !v322 )
              v323 = 0LL;
            v1637 = v323;
            v1635 = v323;
          }
          break;
        }
      }
      if ( v90 < 0 )
        goto LABEL_585;
      v1542 = 4;
      v1481 = RtlUIntAdd(4LL, v312, &v1542);
      v90 = v1481;
      if ( v1481 < 0
        || (v1481 = RtlUIntAdd(v1542, 4LL, &v1542), v90 = v1481, v1481 < 0)
        || (v1481 = RtlUIntAdd(v1542, v324, &v1542), v90 = v1481, v1481 < 0)
        || (v1481 = RtlUIntAdd(v1542, 4LL, &v1542), v90 = v1481, v1481 < 0) )
      {
        v326 = v1543;
      }
      else
      {
        v90 = RtlUIntAdd(v1542, v325, &v1542);
        v1481 = v90;
        v326 = v1543;
        if ( v90 >= 0 )
          v326 = v1542;
        v1543 = v326;
      }
      if ( v90 < 0 )
        goto LABEL_585;
      if ( v326 > 0x400000 )
      {
        v90 = -2147418113;
LABEL_584:
        v1481 = v90;
        goto LABEL_585;
      }
      LODWORD(v1533) = v326;
    }
    else
    {
LABEL_422:
      v90 = -1073741811;
      v1481 = -1073741811;
    }
  }
  if ( v90 < 0 )
    goto LABEL_585;
  v327 = v1533;
  v328 = GetProcessHeap();
  v329 = (int *)HeapAlloc(v328, 8u, v327);
  if ( v329 )
  {
    v330 = v329;
    v1453 = v329;
    v90 = 0x10000000;
  }
  else
  {
    v90 = -805306345;
    v330 = 0LL;
  }
  v1481 = v90;
  if ( v90 < 0 )
    goto LABEL_585;
  if ( !v1378 || !v330 )
  {
    v90 = -2147024809;
    goto LABEL_584;
  }
  v1739[0] = v1378;
  v1740 = v1338;
  v1741 = v1533;
  v1739[1] = v330;
  v1742 = 0;
  if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule) )
  {
    v331 = GetProcAddress(phModule, "NtQuerySystemInformation");
    if ( v331 )
    {
      v332 = ((__int64 (__fastcall *)(__int64, _QWORD *))v331)(134LL, v1739);
      v333 = v1533;
      v90 = v332 | 0x10000000;
      if ( v332 >= 0 )
        v333 = v1741;
      LODWORD(v1533) = v333;
      goto LABEL_445;
    }
  }
  v334 = GetLastError();
  v1481 = v334;
  v90 = v334;
  if ( v334 > 0 )
  {
    v90 = (unsigned __int16)v334 | 0x80070000;
    v1481 = v90;
  }
  v333 = v1533;
  if ( v90 >= 0 )
  {
    v90 = -2147467259;
LABEL_445:
    v1481 = v90;
  }
  if ( v90 != -805306333 )
  {
    if ( v90 < 0 )
      goto LABEL_585;
    Srca = 0LL;
    v1544 = 0;
    v1639 = v330;
    if ( v333 >= 4 )
    {
      v1402 = *v330;
      v335 = RtlULongLongAdd(v330, 4LL, &v1639);
      if ( v335 < 0 )
        goto LABEL_471;
      v335 = RtlUIntAdd(0LL, 4LL, &v1544);
      if ( v335 < 0 )
        goto LABEL_471;
      if ( v333 - v1544 >= (unsigned int)v336 )
      {
        v1440 = v1639;
        v1483 = v336;
        v335 = RtlULongLongAdd(v1639, (unsigned int)v336, &v1639);
        if ( v335 < 0 )
          goto LABEL_471;
        v335 = RtlUIntAdd(v1544, v337, &v1544);
        if ( v335 < 0 )
          goto LABEL_471;
        if ( v333 - v1544 >= 4 )
        {
          v338 = *(unsigned int *)v1639;
          v335 = RtlULongLongAdd(v1639, 4LL, &v1639);
          if ( v335 < 0 )
            goto LABEL_471;
          v335 = RtlUIntAdd(v1544, 4LL, &v1544);
          if ( v335 < 0 )
            goto LABEL_471;
          if ( v333 - v1544 >= (unsigned int)v338 )
          {
            v1413 = v1639;
            v335 = RtlULongLongAdd(v1639, (unsigned int)v338, &v1639);
            if ( v335 < 0 )
              goto LABEL_471;
            v335 = RtlUIntAdd(v1544, (unsigned int)v338, &v1544);
            if ( v335 < 0 )
              goto LABEL_471;
            if ( v333 - v1544 >= 4 )
            {
              v339 = *(unsigned int *)v1639;
              v335 = RtlULongLongAdd(v1639, 4LL, &v1639);
              if ( v335 < 0 )
                goto LABEL_471;
              v335 = RtlUIntAdd(v1544, v340, &v1544);
              if ( v335 < 0 )
                goto LABEL_471;
              if ( v333 - v1544 >= (unsigned int)v339 )
              {
                v335 = RtlUIntAdd(v1544, (unsigned int)v339, &v1544);
                if ( v335 < 0 )
                {
LABEL_471:
                  v345 = 0LL;
                  goto LABEL_472;
                }
                if ( v333 == v1544 && (unsigned int)(v338 + v341 + v339) + 12LL == v333 )
                {
                  v342 = GetProcessHeap();
                  v343 = HeapAlloc(v342, 8u, 0x30uLL);
                  v344 = v343;
                  if ( !v343 )
                  {
                    v335 = -1073741801;
LABEL_504:
                    v345 = Srca;
                    v374 = 0LL;
                    if ( v335 < 0 )
                    {
                      v374 = Srca;
                      v345 = 0LL;
                    }
                    v1469 = v345;
                    if ( v374 )
                    {
                      v375 = (void *)*((_QWORD *)v374 + 1);
                      if ( v375 )
                      {
                        v376 = GetProcessHeap();
                        HeapFree(v376, 0, v375);
                        *((_QWORD *)v374 + 1) = 0LL;
                      }
                      v377 = (void *)*((_QWORD *)v374 + 3);
                      if ( v377 )
                      {
                        v378 = GetProcessHeap();
                        HeapFree(v378, 0, v377);
                        *((_QWORD *)v374 + 3) = 0LL;
                      }
                      v379 = (void *)*((_QWORD *)v374 + 5);
                      if ( v379 )
                      {
                        v380 = GetProcessHeap();
                        HeapFree(v380, 0, v379);
                        *((_QWORD *)v374 + 5) = 0LL;
                      }
                      v381 = GetProcessHeap();
                      HeapFree(v381, 0, v374);
                      v345 = v1469;
                    }
LABEL_472:
                    v90 = v335 | 0x10000000;
                    v1481 = v90;
                    if ( v90 < 0 )
                      goto LABEL_585;
                    v1640 = 0LL;
                    v346 = 0LL;
                    v347 = 0;
                    if ( !v345
                      || (v348 = (unsigned __int8 *)*((_QWORD *)v345 + 1), (Srcb = (char *)v348) == 0LL)
                      || !*v345 )
                    {
                      v90 = -805306355;
                      goto LABEL_584;
                    }
                    v349 = *v345;
                    if ( !v349 )
                      goto LABEL_545;
                    v350 = v349 - 8;
                    v1461 = (LPVOID)v350;
                    v1496 = MemoryAlloc(v350);
                    v351 = (int *)v1496;
                    if ( !v1496 )
                    {
                      v346 = v1640;
                      goto LABEL_545;
                    }
                    v1791 = 0x7F1137FAB69605ELL;
                    v352 = 0;
                    v353 = (char *)v1496;
                    v354 = v348;
                    v1441 = (char *)v1496;
                    v355 = 0;
                    v356 = v350 & 7;
                    if ( (v350 & 7) != 0 )
                    {
                      v1414 = 0;
                      v357 = 0;
                      v358 = 56;
                      do
                      {
                        v359 = *v354++;
                        if ( v355 >= 4 )
                        {
                          v360 = v1414;
                          v357 |= v359 << v358;
                        }
                        else
                        {
                          v360 = (v359 << (v358 - 32)) | v1414;
                          v1414 = v360;
                        }
                        ++v355;
                        v358 -= 8;
                      }
                      while ( v355 < (int)v356 );
                      v1484 = v357;
                      v382 = v360 ^ 0x92F65A5;
                      v383 = v357 ^ 0x699A899C;
                      v384 = v360 ^ 0x92F65A5;
                      v385 = v357 ^ 0x699A899C;
                      v386 = 0;
                      if ( (v350 & 7) != 0 )
                      {
                        v387 = v1496;
                        do
                        {
                          v1441 = v387 + 1;
                          if ( v386 >= 4 )
                          {
                            v385 = __ROL4__(v385, 8);
                            v388 = v385;
                          }
                          else
                          {
                            v384 = __ROL4__(v384, 8);
                            v388 = v384;
                          }
                          *v387 = v388;
                          ++v386;
                          ++v387;
                        }
                        while ( v386 < (int)v356 );
                        v353 = v1441;
                        v352 = 0;
                      }
                      else
                      {
                        v353 = (char *)v1496;
                      }
                      if ( v356 <= 4 )
                      {
                        v355 = 0;
                        if ( v356 >= 4 )
                          goto LABEL_531;
                        v382 = v382 >> (8 * (4 - v356)) << (8 * (4 - v356));
                      }
                      else
                      {
                        v355 = v383 >> (8 * (8 - v356)) << (8 * (8 - v356));
                      }
                      v353 = v1441;
                    }
                    else
                    {
                      v1484 = -1;
                      v382 = 0;
                      v1414 = 0;
                    }
LABEL_531:
                    v389 = v350 >> 3;
                    if ( v350 >> 3 )
                    {
                      v390 = HIDWORD(v1791);
                      v391 = v353 + 7;
                      v392 = v1484;
                      v393 = v354 + 2;
                      v394 = v1414;
                      v1338 = WORD2(v1791);
                      v395 = HIDWORD(v1791) ^ 0xAB69605E;
                      v1448 = WORD1(v1791);
                      do
                      {
                        v396 = *(v393 - 1) | (*(v393 - 2) << 8);
                        v397 = v393[2] << 8;
                        v398 = *v393;
                        v393 += 8;
                        v399 = *(v393 - 7) | ((v398 | (v396 << 8)) << 8);
                        v400 = v399 ^ v382;
                        v401 = *(v393 - 3) | ((*(v393 - 4) | ((*(v393 - 5) | v397) << 8)) << 8);
                        v402 = v390 ^ v400 ^ v401 ^ v355 ^ 0xAB69605E;
                        v403 = (__ROL4__(v402, 10) + v1338 * __ROL4__(v402 + 1419157410, 5)) ^ v400;
                        v404 = (WORD1(v1791) * __ROR4__(v390 + v403, 9) - __ROL4__(v403, 2)) ^ v402;
                        v405 = (24670 * (v404 - v1338) - (v404 >> 13)) ^ v403;
                        v406 = (HIWORD(v1791) * __ROL4__(WORD1(v1791) ^ v405, 6) - __ROL4__(v405, 2)) ^ v404;
                        v407 = (v390 - (v406 ^ 0xAB69605E)) ^ v405;
                        v408 = (v1448 * (v407 ^ v1338)) ^ __ROR4__(v407, 6) ^ v406;
                        v409 = (__ROL4__(v408, 2) + 24670 * __ROR4__(v390 + v408, 15)) ^ v407;
                        v410 = (HIWORD(v1791) * __ROR4__(v409 + 1419157410, 14) - __ROL4__(v409, 8)) ^ v408;
                        v411 = __ROR4__(v410, 10) ^ (v1338 * __ROR4__(v410 ^ 0xAB69605E, 12)) ^ v409;
                        v412 = (v411 >> 10) ^ (WORD1(v1791) * (HIWORD(v1791) ^ v411)) ^ v410;
                        v413 = (HIWORD(v1791) * (__ROR4__(~v412, 5) + 24670)) ^ v411;
                        v414 = (v413 - HIWORD(v1791)) ^ 0xAB69605E ^ v412;
                        v415 = ((v414 >> 2) + v1338 * __ROL4__(HIWORD(v1791) ^ v414, 2)) ^ v413;
                        v416 = (__ROL4__(v415, 7) + WORD1(v1791) * __ROR4__(v415 - v390, 6)) ^ v414;
                        v417 = (24670 * (v416 ^ v1338) + __ROR4__(v416, 9)) ^ v415;
                        v418 = (__ROL4__(v417, 7) + HIWORD(v1791) * __ROL4__(WORD1(v1791) ^ v417, 5)) ^ v416;
                        v419 = v418 ^ v395 ^ v417;
                        v420 = (v1338 * (__ROR4__(v419, 3) - WORD1(v1791))) ^ v418;
                        v421 = (24670 * __ROR4__(v420 - v390, 1) - __ROR4__(v420, 6)) ^ v419;
                        v422 = (__ROL4__(v421, 14) + HIWORD(v1791) * __ROL4__(v421 - 1419157410, 3)) ^ v420;
                        v423 = (v1338 * __ROL4__(v422 - 1419157410, 15) - __ROR4__(v422, 14)) ^ v421;
                        v424 = (v423 >> 3) ^ (WORD1(v1791) * (v423 ^ 0x605E)) ^ v422;
                        v425 = v424 ^ v390;
                        v426 = v424;
                        v427 = v392 ^ v424;
                        v392 = v401;
                        v428 = v394 ^ __ROL4__(v426, 2) ^ (24670 * __ROL4__(v425, 4));
                        v394 = v399;
                        v429 = v428 ^ v423;
                        *(v391 - 4) = v429;
                        *v391 = v427;
                        v391 += 8;
                        v430 = __ROR4__(v429, 8);
                        *(v391 - 13) = v430;
                        v431 = __ROR4__(v427, 8);
                        *(v391 - 9) = v431;
                        v432 = __ROR4__(v430, 8);
                        *(v391 - 14) = v432;
                        v433 = __ROR4__(v431, 8);
                        *(v391 - 10) = v433;
                        v434 = __ROR4__(v432, 8);
                        v435 = __ROR4__(v433, 8);
                        *(v391 - 15) = v434;
                        *(v391 - 11) = v435;
                        v355 = __ROR4__(v435, 8);
                        v382 = __ROR4__(v434, 8);
                        --v389;
                      }
                      while ( v389 );
                      v352 = 0;
                      v2 = 0;
                      v350 = (unsigned __int64)v1461;
                      v347 = 0;
                      v351 = (int *)v1496;
                    }
                    for ( n = 0LL; n < v350; ++n )
                      v352 ^= *((_BYTE *)v351 + n);
                    if ( v352 == *(_QWORD *)&Srcb[v350] )
                    {
                      v346 = v351;
                      v1640 = v351;
                      v347 = v350;
                      v351 = 0LL;
                      v437 = 0;
                    }
                    else
                    {
                      v346 = v1640;
                      v437 = -1073425151;
                    }
                    if ( v351 )
                    {
                      MemoryFree(v351);
                      v346 = v1640;
                    }
                    if ( v437 >= 0 )
                    {
                      v438 = v346;
                      v1640 = 0LL;
                      v1485 = v346;
                      v346 = 0LL;
                      HIDWORD(v1533) = v347;
                      v90 = 0x10000000;
                      goto LABEL_546;
                    }
LABEL_545:
                    v347 = HIDWORD(v1533);
                    v90 = -805306367;
                    v438 = 0LL;
LABEL_546:
                    v1481 = v90;
                    if ( v346 )
                    {
                      v439 = GetProcessHeap();
                      HeapFree(v439, 0, v346);
                      v347 = HIDWORD(v1533);
                      v1640 = 0LL;
                    }
                    if ( v90 < 0 )
                      goto LABEL_585;
                    v1545 = 0;
                    v1643 = v438;
                    if ( v347 >= 4 )
                    {
                      v1442 = *v438;
                      v440 = RtlULongLongAdd(v438, 4LL, &v1643);
                      if ( v440 < 0 )
                        goto LABEL_583;
                      v440 = RtlUIntAdd(0LL, 4LL, &v1545);
                      if ( v440 < 0 )
                        goto LABEL_583;
                      if ( v347 - v1545 >= 4 )
                      {
                        v440 = RtlULongLongAdd(v1643, 4LL, &v1643);
                        if ( v440 < 0 )
                          goto LABEL_583;
                        v440 = RtlUIntAdd(v1545, 4LL, &v1545);
                        if ( v440 < 0 )
                          goto LABEL_583;
                        if ( v347 - v1545 >= v441 )
                        {
                          v440 = RtlUIntAdd(v1545, v441, &v1545);
                          if ( v440 < 0 )
                            goto LABEL_583;
                          v443 = v347;
                          v444 = (unsigned int)v442;
                          v445 = (char *)v438 + v443;
                          v446 = v1643;
                          if ( v445 >= (char *)v1643 + v442 && (unsigned __int64)v1485 + v443 - v442 - (_QWORD)v1643 < 8 )
                          {
                            v1403 = 0;
                            v447 = 0LL;
                            v440 = 0;
                            if ( !v1643 )
                            {
LABEL_572:
                              if ( (_DWORD)v442 )
                              {
                                v453 = GetProcessHeap();
                                v447 = HeapAlloc(v453, 8u, v444);
                                if ( !v447 )
                                {
                                  v440 = -1073741801;
                                  goto LABEL_580;
                                }
                                v440 = 0;
                              }
                              if ( v446 )
                                memcpy_0(v447, v446, v444);
                              LODWORD(v1724[0]) = v1403;
                              v1724[1] = v447;
LABEL_580:
                              if ( v440 < 0 || v1442 == LODWORD(v1724[0]) )
                                goto LABEL_583;
                              goto LABEL_582;
                            }
                            v448 = (unsigned int *)v1643;
                            v440 = RtlULongLongAdd(v1643, (unsigned int)v442, &v1644);
                            if ( v440 < 0 )
                              goto LABEL_580;
                            v449 = (unsigned int *)v1644;
                            if ( (unsigned __int64)v446 < v1644 )
                            {
                              do
                              {
                                v440 = RtlULongLongAdd(v448, 4LL, &v1645);
                                if ( v440 < 0 )
                                  goto LABEL_580;
                                if ( v1645 > v450 )
                                  goto LABEL_575;
                                v451 = RtlUIntAdd(4LL, *v448, &v1547);
                                v440 = v451;
                                if ( v451 >= 0 )
                                  v452 = v1547;
                                v1563 = v452;
                                if ( v451 < 0 )
                                  goto LABEL_580;
                                v440 = RtlULongLongAdd(v448, v452, &v1646);
                                if ( v440 < 0 )
                                  goto LABEL_580;
                                v448 = v1646;
                                if ( v1646 > v449 )
                                  goto LABEL_575;
                                ++v1403;
                              }
                              while ( v1646 < v449 );
                            }
                            if ( v448 == v449 )
                            {
                              v447 = 0LL;
                              goto LABEL_572;
                            }
LABEL_575:
                            v440 = -1073741811;
LABEL_583:
                            v90 = v440 | 0x10000000;
                            goto LABEL_584;
                          }
                        }
                      }
                    }
LABEL_582:
                    v440 = -1073741762;
                    goto LABEL_583;
                  }
                  if ( v1440 )
                  {
                    *(_DWORD *)v343 = v1402;
                    v361 = GetProcessHeap();
                    v362 = HeapAlloc(v361, 8u, v1483);
                    if ( !v362 )
                      goto LABEL_485;
                    v344[1] = v362;
                    memcpy_0(v362, v1440, v1483);
                  }
                  else
                  {
                    *(_DWORD *)v343 = 0;
                    v343[1] = 0LL;
                  }
                  if ( v1413 )
                  {
                    *((_DWORD *)v344 + 4) = v338;
                    v363 = GetProcessHeap();
                    v364 = HeapAlloc(v363, 8u, v338);
                    if ( !v364 )
                      goto LABEL_485;
                    v344[3] = v364;
                    memcpy_0(v364, v1413, v338);
                  }
                  else
                  {
                    *((_DWORD *)v344 + 4) = 0;
                    v344[3] = 0LL;
                  }
                  if ( !v1639 )
                  {
                    *((_DWORD *)v344 + 8) = 0;
                    v344[5] = 0LL;
                    goto LABEL_495;
                  }
                  *((_DWORD *)v344 + 8) = v339;
                  v365 = GetProcessHeap();
                  v366 = HeapAlloc(v365, 8u, v339);
                  if ( v366 )
                  {
                    v344[5] = v366;
                    memcpy_0(v366, v1639, v339);
LABEL_495:
                    Srca = (unsigned int *)v344;
                    v335 = 0;
                    v344 = 0LL;
LABEL_496:
                    if ( v344 )
                    {
                      v367 = (void *)v344[1];
                      if ( v367 )
                      {
                        v368 = GetProcessHeap();
                        HeapFree(v368, 0, v367);
                        v344[1] = 0LL;
                      }
                      v369 = (void *)v344[3];
                      if ( v369 )
                      {
                        v370 = GetProcessHeap();
                        HeapFree(v370, 0, v369);
                        v344[3] = 0LL;
                      }
                      v371 = (void *)v344[5];
                      if ( v371 )
                      {
                        v372 = GetProcessHeap();
                        HeapFree(v372, 0, v371);
                        v344[5] = 0LL;
                      }
                      v373 = GetProcessHeap();
                      HeapFree(v373, 0, v344);
                    }
                    goto LABEL_504;
                  }
LABEL_485:
                  v335 = -1073741801;
                  goto LABEL_496;
                }
              }
            }
          }
        }
      }
    }
    v335 = -1073741762;
    goto LABEL_471;
  }
  v90 = -2147024774;
  v1481 = -2147024774;
LABEL_585:
  if ( v1427 )
  {
    v454 = GetProcessHeap();
    HeapFree(v454, 0, v1427);
  }
  v455 = v1624;
  if ( v1624 )
  {
    v456 = (void *)*((_QWORD *)v1624 + 1);
    if ( v456 )
    {
      v457 = GetProcessHeap();
      HeapFree(v457, 0, v456);
      v455[1] = 0LL;
    }
    v458 = (void *)v455[3];
    if ( v458 )
    {
      v459 = GetProcessHeap();
      HeapFree(v459, 0, v458);
      v455[3] = 0LL;
    }
    v460 = (void *)v455[5];
    if ( v460 )
    {
      v461 = GetProcessHeap();
      HeapFree(v461, 0, v460);
      v455[5] = 0LL;
    }
    v462 = GetProcessHeap();
    HeapFree(v462, 0, v455);
    v1624 = 0LL;
  }
  if ( v1378 )
  {
    v463 = GetProcessHeap();
    HeapFree(v463, 0, v1378);
  }
  if ( v1453 )
  {
    v464 = GetProcessHeap();
    HeapFree(v464, 0, v1453);
  }
  if ( v1469 )
  {
    v465 = (void *)*((_QWORD *)v1469 + 1);
    if ( v465 )
    {
      v466 = GetProcessHeap();
      HeapFree(v466, 0, v465);
      *((_QWORD *)v1469 + 1) = 0LL;
    }
    v467 = (void *)*((_QWORD *)v1469 + 3);
    if ( v467 )
    {
      v468 = GetProcessHeap();
      HeapFree(v468, 0, v467);
      *((_QWORD *)v1469 + 3) = 0LL;
    }
    v469 = (void *)*((_QWORD *)v1469 + 5);
    if ( v469 )
    {
      v470 = GetProcessHeap();
      HeapFree(v470, 0, v469);
      *((_QWORD *)v1469 + 5) = 0LL;
    }
    v471 = GetProcessHeap();
    HeapFree(v471, 0, v1469);
  }
  if ( v1485 )
  {
    v472 = GetProcessHeap();
    HeapFree(v472, 0, v1485);
  }
  if ( v90 < 0 )
    goto LABEL_699;
  if ( !LODWORD(v1724[0]) )
    goto LABEL_706;
  v473 = 4LL;
  if ( v1724[1] )
  {
    v1647 = (int *)v1724[1];
    v1481 = RtlULongLongAdd(v1724[1], 4LL, &v1647);
    v90 = v1481;
    if ( v1481 < 0 )
    {
      v474 = v1548;
      v475 = v1648;
    }
    else
    {
      v475 = v1647;
      v1548 = v474;
      if ( !v474 )
        v475 = 0LL;
      v1647 = v475;
      v1648 = v475;
    }
    if ( v1481 < 0 )
      goto LABEL_699;
    if ( v474 != (_DWORD)v473 )
      goto LABEL_695;
    v1602 = *v475;
  }
  else
  {
    v90 = -1073741811;
    v1481 = -1073741811;
  }
  if ( v90 < 0 )
    goto LABEL_699;
  v90 = v1602;
  if ( v1602 == -805306333 )
    v90 = -2147024774;
  v1481 = v90;
  v1602 = v90;
  if ( v90 != -2147024774 && v90 < 0 )
    goto LABEL_699;
  if ( LODWORD(v1724[0]) != 6 )
    goto LABEL_706;
  if ( v1724[1] )
  {
    v476 = (int *)v1724[1];
    v477 = 0;
    v1649 = (int *)v1724[1];
    do
    {
      v1481 = RtlULongLongAdd(v476, v473, &v1649);
      v90 = v1481;
      if ( v1481 < 0 )
        goto LABEL_637;
      v1481 = RtlULongLongAdd(v1649, v478, &v1649);
      v90 = v1481;
      if ( v1481 < 0 )
        goto LABEL_637;
      v476 = v1649;
      ++v477;
    }
    while ( !v477 );
    v479 = *v1649;
    v1481 = RtlULongLongAdd(v1649, v473, &v1649);
    v90 = v1481;
    if ( v1481 < 0 )
    {
LABEL_637:
      v479 = v1549;
      v480 = v1650;
      goto LABEL_638;
    }
    v480 = v1649;
    v1549 = v479;
    if ( !v479 )
      v480 = 0LL;
    v1649 = v480;
    v1650 = v480;
LABEL_638:
    if ( v90 < 0 )
      goto LABEL_699;
    if ( v479 != 8 )
      goto LABEL_695;
    v1651 = *(const wchar_t **)v480;
  }
  else
  {
    v90 = -1073741811;
    v1481 = -1073741811;
  }
  if ( v90 < 0 )
    goto LABEL_699;
  if ( v1724[1] )
  {
    v481 = (int *)v1724[1];
    v482 = 0;
    v1652 = (int *)v1724[1];
    do
    {
      v1481 = RtlULongLongAdd(v481, v473, &v1652);
      v90 = v1481;
      if ( v1481 < 0 )
        goto LABEL_652;
      v1481 = RtlULongLongAdd(v1652, v483, &v1652);
      v90 = v1481;
      if ( v1481 < 0 )
        goto LABEL_652;
      v481 = v1652;
      ++v482;
    }
    while ( v482 < 2 );
    v484 = *v1652;
    v1481 = RtlULongLongAdd(v1652, v473, &v1652);
    v90 = v1481;
    if ( v1481 < 0 )
    {
LABEL_652:
      v484 = v1550;
      v485 = v1653;
      goto LABEL_653;
    }
    v485 = v1652;
    v1550 = v484;
    if ( !v484 )
      v485 = 0LL;
    v1652 = v485;
    v1653 = v485;
LABEL_653:
    if ( v90 < 0 )
      goto LABEL_699;
    if ( v484 != (_DWORD)v473 )
      goto LABEL_695;
    v1551 = *v485;
  }
  else
  {
    v90 = -1073741811;
    v1481 = -1073741811;
  }
  if ( v90 < 0 )
    goto LABEL_699;
  if ( !v1724[1] )
  {
    v90 = -1073741811;
    goto LABEL_698;
  }
  v486 = v1724[1];
  v487 = 0;
  v1654 = v1724[1];
  do
  {
    v1481 = RtlULongLongAdd(v486, v473, &v1654);
    v90 = v1481;
    if ( v1481 < 0 )
      goto LABEL_667;
    v1481 = RtlULongLongAdd(v1654, v488, &v1654);
    v90 = v1481;
    if ( v1481 < 0 )
      goto LABEL_667;
    v486 = v1654;
    ++v487;
  }
  while ( v487 < 3 );
  v1481 = RtlULongLongAdd(v1654, v473, &v1654);
  v90 = v1481;
  if ( v1481 < 0 )
  {
LABEL_667:
    v490 = v1655;
    goto LABEL_668;
  }
  v490 = v1654;
  v1552 = v489;
  if ( !v489 )
    v490 = 0LL;
  v1654 = v490;
  v1655 = v490;
LABEL_668:
  if ( v90 < 0 )
    goto LABEL_699;
  v491 = (int *)v1724[1];
  v1656 = (int *)v1724[1];
  do
  {
    v1481 = RtlULongLongAdd(v491, 4LL, &v1656);
    v90 = v1481;
    if ( v1481 < 0 )
    {
      v494 = 4;
      goto LABEL_678;
    }
    v1481 = RtlULongLongAdd(v1656, v492, &v1656);
    v90 = v1481;
    v494 = 4;
    if ( v1481 < 0 )
      goto LABEL_678;
    v491 = v1656;
  }
  while ( (unsigned int)(v493 + 1) < 4 );
  v1481 = RtlULongLongAdd(v1656, 4LL, &v1656);
  v90 = v1481;
  if ( v1481 < 0 )
  {
LABEL_678:
    v495 = v1553;
    v496 = v1657;
    goto LABEL_679;
  }
  v496 = v1656;
  v1553 = v495;
  if ( !v495 )
    v496 = 0LL;
  v1656 = v496;
  v1657 = v496;
LABEL_679:
  if ( v90 < 0 )
  {
LABEL_682:
    if ( v90 < 0 )
      goto LABEL_699;
    v497 = (unsigned int *)v1724[1];
    v1658 = (unsigned int *)v1724[1];
    do
    {
      v498 = *v497;
      v1481 = RtlULongLongAdd(v497, 4LL, &v1658);
      v90 = v1481;
      if ( v1481 < 0 )
        goto LABEL_691;
      v1481 = RtlULongLongAdd(v1658, v498, &v1658);
      v90 = v1481;
      if ( v1481 < 0 )
        goto LABEL_691;
      v497 = v1658;
    }
    while ( (unsigned int)(v501 + 1) < 5 );
    v1481 = RtlULongLongAdd(v1658, 4LL, &v1658);
    v90 = v1481;
    if ( v1481 < 0 )
    {
LABEL_691:
      v502 = v1555;
      v503 = v1659;
      goto LABEL_692;
    }
    v503 = v1658;
    v1555 = v502;
    if ( !v502 )
      v503 = 0LL;
    v1658 = v503;
    v1659 = v503;
LABEL_692:
    if ( v90 < 0 )
    {
      v504 = v1580;
    }
    else
    {
      if ( v502 != 4 )
        goto LABEL_695;
      v504 = *v503;
      v1580 = *v503;
    }
    if ( v90 < 0 )
      goto LABEL_699;
    if ( v1614 == v1651 )
    {
      v1561 = v1551;
      v1562 = v500;
      v1564 = v504;
      if ( v500 <= 4 && v499 <= 4 )
      {
        memcpy_0(v1437, v490, v499);
        if ( v1602 )
          v90 = v1602;
      }
      else
      {
        v90 = -2147024774;
      }
      goto LABEL_698;
    }
LABEL_706:
    v90 = -1073425151;
    goto LABEL_698;
  }
  if ( v495 == v494 )
  {
    v1554 = *v496;
    goto LABEL_682;
  }
LABEL_695:
  v90 = -1073741789;
LABEL_698:
  v1481 = v90;
LABEL_699:
  v91 = v1388;
LABEL_248:
  Size = 0LL;
  v176 = lpMem;
  if ( lpMem )
  {
    v177 = GetProcessHeap();
    HeapFree(v177, 0, v176);
    lpMem = 0LL;
  }
  v1724[0] = 0LL;
  v178 = v1724[1];
  if ( v1724[1] )
  {
    v179 = GetProcessHeap();
    HeapFree(v179, 0, v178);
    v1724[1] = 0LL;
  }
  if ( v91 )
  {
    v180 = GetProcessHeap();
    HeapFree(v180, 0, v91);
  }
  if ( v1345 )
  {
    v181 = GetProcessHeap();
    HeapFree(v181, 0, v1345);
  }
  if ( v90 < 0 )
    goto LABEL_1677;
  if ( !v1564 )
    goto LABEL_1676;
  v1660 = 0LL;
  g_WarbirdNotificationInformation = v1564;
  ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
  if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
    goto LABEL_1286;
  v1496 = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800B30F8[0])(0LL, 0LL, 1027LL);
  if ( !v1496 )
  {
    GetLastError();
    goto LABEL_1286;
  }
  v505 = ((__int64 (*)(void))off_1800B3098[0])();
  v506 = g_WarbirdNotificationInformation;
  g_WarbirdPaintInitTime = v505;
  v1443 = g_WarbirdNotificationInformation;
  memset_0(&v1776, 0, 0x70uLL);
  v1556 = 1;
  v1462 = 0LL;
  v1725 = 0LL;
  v1812 = 0LL;
  v1810 = 0LL;
  v1813 = 0;
  v1811 = 0LL;
  Srcc = 0LL;
  v1606 = 0LL;
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v507 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount )
  {
LABEL_753:
    g_WarbirdSecureFunctionsRefCount = v507 + 1;
    goto LABEL_754;
  }
  v1404 = 0;
  v1338 = 0;
  v1662 = 0LL;
  v1663 = 0LL;
  v508 = (char *)MemoryAlloc(0x338uLL);
  v1346 = (unsigned __int16 *)v508;
  if ( !v508 )
    goto LABEL_743;
  v509 = 103LL;
  v510 = 0;
  v511 = v508 + 7;
  v512 = 0;
  v513 = (unsigned __int8 *)&unk_180096FA2;
  v514 = 0;
  v515 = -1;
  do
  {
    v516 = *(v513 - 1) | (*(v513 - 2) << 8);
    v517 = v513[2] << 8;
    v518 = *v513;
    v513 += 8;
    v519 = *(v513 - 7) | ((v518 | (v516 << 8)) << 8);
    v520 = v519 ^ v514;
    v521 = *(v513 - 3) | ((*(v513 - 4) | ((*(v513 - 5) | v517) << 8)) << 8);
    v522 = v521 ^ v512 ^ v520 ^ 0xAC987321;
    v523 = (__ROL4__(v522, 10) + 4991 * __ROL4__(v522 + 1419157410, 5)) ^ v520;
    v524 = (43881 * __ROR4__(v523 + 133239679, 9) - __ROL4__(v523, 2)) ^ v522;
    v525 = (24670 * v524 - (v524 >> 13) - 123127970) ^ v523;
    v526 = (2033 * __ROL4__(v525 ^ 0xAB69, 6) - __ROL4__(v525, 2)) ^ v524;
    v527 = (133239679 - (v526 ^ 0xAB69605E)) ^ v525;
    v528 = (43881 * (v527 ^ 0x137F)) ^ __ROR4__(v527, 6) ^ v526;
    v529 = (__ROL4__(v528, 2) + 24670 * __ROR4__(v528 + 133239679, 15)) ^ v527;
    v530 = (2033 * __ROR4__(v529 + 1419157410, 14) - __ROL4__(v529, 8)) ^ v528;
    v531 = __ROR4__(v530, 10) ^ (4991 * __ROR4__(v530 ^ 0xAB69605E, 12)) ^ v529;
    v532 = v530 ^ (v531 >> 10) ^ (43881 * (v531 ^ 0x7F1));
    v533 = (2033 * (__ROR4__(~v532, 5) + 24670)) ^ v531;
    v534 = v532 ^ (v533 - 2033) ^ 0xAB69605E;
    v535 = ((v534 >> 2) + 4991 * __ROL4__(v532 ^ (v533 - 2033) ^ 0xAB6967AF, 2)) ^ v533;
    v536 = (__ROL4__(v535, 7) + 43881 * __ROR4__(v535 - 133239679, 6)) ^ v534;
    v537 = (24670 * (v536 ^ 0x137F) + __ROR4__(v536, 9)) ^ v535;
    v538 = (__ROL4__(v537, 7) + 2033 * __ROL4__(v537 ^ 0xAB69, 5)) ^ v536;
    v539 = v538 ^ v537 ^ 0xAC987321;
    v540 = (4991 * __ROR4__(v539, 3) - 219010071) ^ v538;
    v541 = (24670 * __ROR4__(v540 - 133239679, 1) - __ROR4__(v540, 6)) ^ v539;
    v542 = (__ROL4__(v541, 14) + 2033 * __ROL4__(v541 - 1419157410, 3)) ^ v540;
    v543 = (4991 * __ROL4__(v542 - 1419157410, 15) - __ROR4__(v542, 14)) ^ v541;
    v544 = (v543 >> 3) ^ (43881 * (v543 ^ 0x605E)) ^ v542;
    v545 = 24670 * __ROL4__(v544 ^ 0x7F1137F, 4);
    v546 = v544;
    v547 = v515 ^ v544;
    v515 = v521;
    v548 = v510 ^ v543 ^ __ROL4__(v546, 2) ^ v545;
    v510 = v519;
    *(v511 - 4) = v548;
    *v511 = v547;
    v511 += 8;
    v549 = __ROR4__(v548, 8);
    *(v511 - 13) = v549;
    v550 = __ROR4__(v547, 8);
    *(v511 - 9) = v550;
    v551 = __ROR4__(v549, 8);
    *(v511 - 14) = v551;
    v552 = __ROR4__(v550, 8);
    *(v511 - 10) = v552;
    v553 = __ROR4__(v551, 8);
    v554 = __ROR4__(v552, 8);
    *(v511 - 15) = v553;
    *(v511 - 11) = v554;
    v512 = __ROR4__(v554, 8);
    v514 = __ROR4__(v553, 8);
    --v509;
  }
  while ( v509 );
  v555 = 0;
  v2 = 0;
  v506 = v1443;
  v556 = 0LL;
  v90 = v1481;
  v557 = 0;
  v558 = v1346;
  do
    v555 ^= *((_BYTE *)v1346 + v556++);
  while ( v556 < 0x338 );
  if ( v555 == 64LL )
  {
    v1662 = v1346;
    v559 = 0;
    v558 = 0LL;
    v1663 = 824LL;
  }
  else
  {
    v559 = -1073425151;
  }
  if ( v558 )
    MemoryFree(v558);
  if ( v559 >= 0 )
  {
    v560 = v1662;
    HIBYTE(v1662[v1663 / 2 - 1]) = 0;
    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
    while ( *(_BYTE *)v560 )
    {
      v561 = v560;
      v562 = -1LL;
      do
        ++v562;
      while ( v560[v562] );
      v563 = &v560[v562];
      v1347 = (unsigned __int16 *)((char *)&WARBIRD::g_arModuleInfo + 24 * v1338);
      if ( !GetModuleHandleExW(0, v561, (HMODULE *)v1347) )
        goto LABEL_743;
      v564 = (HMODULE *)((char *)&WARBIRD::g_arModuleInfo + 24 * v1338);
      v557 = 0;
      if ( **(_WORD **)v1347 == 23117
        && (v565 = *(int *)(*(_QWORD *)v1347 + 60LL), (unsigned int)v565 < 0x10000000)
        && (v566 = *(_QWORD *)v1347 + v565, v566 >= *(_QWORD *)v1347)
        && *(_DWORD *)v566 == 17744 )
      {
        if ( ((*(_WORD *)(v566 + 24) - 267) & 0xFEFF) != 0 )
        {
          v557 = -1073741811;
        }
        else
        {
          *(_QWORD *)(v1347 + 6) = *(_QWORD *)(v566 + 136);
          *((_DWORD *)v1347 + 2) = *(_DWORD *)(v566 + 80);
        }
      }
      else
      {
        v557 = -1073741701;
      }
      v567 = *(_DWORD *)(v563 + 1);
      v568 = 0;
      v560 = v563 + 3;
      v1415 = v567;
      for ( ii = 0; v568 < v1415; ii = v568 )
      {
        v569 = (const CHAR *)v560;
        v570 = -1LL;
        do
          ++v570;
        while ( *((_BYTE *)v560 + v570) );
        v560 = (LPCWSTR)((char *)v560 + v570 + 1);
        if ( v557 >= 0 )
        {
          v571 = (void **)GetProcAddress(*v564, v569);
          if ( !v571 )
            goto LABEL_744;
          v564 = (HMODULE *)((char *)&WARBIRD::g_arModuleInfo + 24 * v1338);
          (&WARBIRD::g_FuncAddress)[v1404] = v571;
          v568 = ii;
        }
        ++v1404;
        ++v568;
      }
      ++v1338;
    }
  }
  else
  {
LABEL_743:
    v557 = -1073741702;
  }
LABEL_744:
  if ( v1662 )
  {
    v572 = GetProcessHeap();
    HeapFree(v572, 0, (LPVOID)v1662);
  }
  if ( v557 >= 0 )
  {
    v507 = g_WarbirdSecureFunctionsRefCount;
    goto LABEL_753;
  }
  v573 = (HMODULE *)&WARBIRD::g_arModuleInfo;
  v574 = 4LL;
  do
  {
    if ( *v573 )
      FreeLibrary(*v573);
    v573 += 3;
    --v574;
  }
  while ( v574 );
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  memcpy_0(&WARBIRD::g_FuncAddress, off_18008E410, 0x170uLL);
LABEL_754:
  v1405 = 0;
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  v1664 = 0LL;
  v1734 = 0LL;
  v1416 = 0;
  v1348 = 0LL;
  v1389 = 0LL;
  v1428 = 0LL;
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v575 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount )
    goto LABEL_800;
  v1338 = 0;
  v1449 = 0;
  v1665 = 0LL;
  v1666 = 0LL;
  v576 = (char *)MemoryAlloc(0x338uLL);
  v1379 = (const WCHAR *)v576;
  if ( !v576 )
    goto LABEL_790;
  v577 = 103LL;
  v578 = 0;
  v579 = v576 + 7;
  v580 = 0;
  v581 = (unsigned __int8 *)&unk_180096FA2;
  v582 = 0;
  v583 = -1;
  do
  {
    v584 = *(v581 - 1) | (*(v581 - 2) << 8);
    v585 = v581[2] << 8;
    v586 = *v581;
    v581 += 8;
    v587 = *(v581 - 7) | ((v586 | (v584 << 8)) << 8);
    v588 = v587 ^ v582;
    v589 = *(v581 - 3) | ((*(v581 - 4) | ((*(v581 - 5) | v585) << 8)) << 8);
    v590 = v588 ^ v580 ^ v589 ^ 0xAC987321;
    v591 = (__ROL4__(v590, 10) + 4991 * __ROL4__(v590 + 1419157410, 5)) ^ v588;
    v592 = (43881 * __ROR4__(v591 + 133239679, 9) - __ROL4__(v591, 2)) ^ v590;
    v593 = (24670 * v592 - (v592 >> 13) - 123127970) ^ v591;
    v594 = (2033 * __ROL4__(v593 ^ 0xAB69, 6) - __ROL4__(v593, 2)) ^ v592;
    v595 = (133239679 - (v594 ^ 0xAB69605E)) ^ v593;
    v596 = (43881 * (v595 ^ 0x137F)) ^ __ROR4__(v595, 6) ^ v594;
    v597 = (__ROL4__(v596, 2) + 24670 * __ROR4__(v596 + 133239679, 15)) ^ v595;
    v598 = (2033 * __ROR4__(v597 + 1419157410, 14) - __ROL4__(v597, 8)) ^ v596;
    v599 = __ROR4__(v598, 10) ^ (4991 * __ROR4__(v598 ^ 0xAB69605E, 12)) ^ v597;
    v600 = (v599 >> 10) ^ (43881 * (v599 ^ 0x7F1)) ^ v598;
    v601 = (2033 * (__ROR4__(~v600, 5) + 24670)) ^ v599;
    v602 = v600 ^ (v601 - 2033) ^ 0xAB69605E;
    v603 = ((v602 >> 2) + 4991 * __ROL4__(v600 ^ (v601 - 2033) ^ 0xAB6967AF, 2)) ^ v601;
    v604 = (__ROL4__(v603, 7) + 43881 * __ROR4__(v603 - 133239679, 6)) ^ v602;
    v605 = (24670 * (v604 ^ 0x137F) + __ROR4__(v604, 9)) ^ v603;
    v606 = (__ROL4__(v605, 7) + 2033 * __ROL4__(v605 ^ 0xAB69, 5)) ^ v604;
    v607 = v606 ^ v605 ^ 0xAC987321;
    v608 = (4991 * __ROR4__(v607, 3) - 219010071) ^ v606;
    v609 = (24670 * __ROR4__(v608 - 133239679, 1) - __ROR4__(v608, 6)) ^ v607;
    v610 = (__ROL4__(v609, 14) + 2033 * __ROL4__(v609 - 1419157410, 3)) ^ v608;
    v611 = (4991 * __ROL4__(v610 - 1419157410, 15) - __ROR4__(v610, 14)) ^ v609;
    v612 = (v611 >> 3) ^ (43881 * (v611 ^ 0x605E)) ^ v610;
    v613 = 24670 * __ROL4__(v612 ^ 0x7F1137F, 4);
    v614 = v612;
    v615 = v583 ^ v612;
    v583 = v589;
    v616 = v578 ^ __ROL4__(v614, 2) ^ v613;
    v578 = v587;
    v617 = v616 ^ v611;
    *(v579 - 4) = v617;
    *v579 = v615;
    v579 += 8;
    v618 = __ROR4__(v617, 8);
    *(v579 - 13) = v618;
    v619 = __ROR4__(v615, 8);
    *(v579 - 9) = v619;
    v620 = __ROR4__(v618, 8);
    *(v579 - 14) = v620;
    v621 = __ROR4__(v619, 8);
    *(v579 - 10) = v621;
    v622 = __ROR4__(v620, 8);
    v623 = __ROR4__(v621, 8);
    *(v579 - 15) = v622;
    *(v579 - 11) = v623;
    v580 = __ROR4__(v623, 8);
    v582 = __ROR4__(v622, 8);
    --v577;
  }
  while ( v577 );
  v624 = 0;
  v2 = 0;
  v506 = v1443;
  v625 = 0LL;
  v90 = v1481;
  v626 = 0;
  v627 = (WCHAR *)v1379;
  do
    v624 ^= *((_BYTE *)v1379 + v625++);
  while ( v625 < 0x338 );
  if ( v624 == 64LL )
  {
    v1665 = v1379;
    v628 = 0;
    v627 = 0LL;
    v1666 = 824LL;
  }
  else
  {
    v628 = -1073425151;
  }
  if ( v627 )
    MemoryFree(v627);
  if ( v628 >= 0 )
  {
    v629 = v1665;
    HIBYTE(v1665[v1666 / 2 - 1]) = 0;
    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
    while ( *(_BYTE *)v629 )
    {
      v630 = v629;
      v631 = -1LL;
      do
        ++v631;
      while ( v629[v631] );
      v632 = &v629[v631];
      v1380 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1449;
      if ( !GetModuleHandleExW(0, v630, (HMODULE *)v1380) )
        goto LABEL_790;
      v633 = (HMODULE *)((char *)&WARBIRD::g_arModuleInfo + 24 * v1449);
      v626 = 0;
      if ( **(_WORD **)v1380 == 23117
        && (v634 = *(int *)(*(_QWORD *)v1380 + 60LL), (unsigned int)v634 < 0x10000000)
        && (v635 = *(_QWORD *)v1380 + v634, v635 >= *(_QWORD *)v1380)
        && *(_DWORD *)v635 == 17744 )
      {
        if ( ((*(_WORD *)(v635 + 24) - 267) & 0xFEFF) != 0 )
        {
          v626 = -1073741811;
        }
        else
        {
          *(_QWORD *)(v1380 + 12) = *(_QWORD *)(v635 + 136);
          *((_DWORD *)v1380 + 2) = *(_DWORD *)(v635 + 80);
        }
      }
      else
      {
        v626 = -1073741701;
      }
      v636 = *(_DWORD *)(v632 + 1);
      v637 = 0;
      v629 = v632 + 3;
      v1486 = v636;
      for ( jj = 0; v637 < v1486; jj = v637 )
      {
        v638 = (const CHAR *)v629;
        v639 = -1LL;
        do
          ++v639;
        while ( *((_BYTE *)v629 + v639) );
        v629 = (LPCWSTR)((char *)v629 + v639 + 1);
        if ( v626 >= 0 )
        {
          v640 = (void **)GetProcAddress(*v633, v638);
          if ( !v640 )
            goto LABEL_791;
          v633 = (HMODULE *)((char *)&WARBIRD::g_arModuleInfo + 24 * v1449);
          (&WARBIRD::g_FuncAddress)[v1338] = v640;
          v637 = jj;
        }
        ++v1338;
        ++v637;
      }
      ++v1449;
    }
  }
  else
  {
LABEL_790:
    v626 = -1073741702;
  }
LABEL_791:
  if ( v1665 )
  {
    v641 = GetProcessHeap();
    HeapFree(v641, 0, (LPVOID)v1665);
  }
  if ( v626 >= 0 )
  {
    v575 = g_WarbirdSecureFunctionsRefCount;
LABEL_800:
    g_WarbirdSecureFunctionsRefCount = v575 + 1;
    goto LABEL_801;
  }
  v642 = (HMODULE *)&WARBIRD::g_arModuleInfo;
  v643 = 4LL;
  do
  {
    if ( *v642 )
      FreeLibrary(*v642);
    v642 += 3;
    --v643;
  }
  while ( v643 );
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  memcpy_0(&WARBIRD::g_FuncAddress, off_18008E410, 0x170uLL);
LABEL_801:
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  v1487 = v506 & 0xF;
  v1850[0] = (v506 >> 4) & 0xF;
  v1850[1] = (v506 >> 8) & 0xF;
  v1725 = 0LL;
  v1850[2] = (v506 >> 12) & 0xF;
  v1381 = (WARBIRD_DELAY_LOAD *)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800B30F8[0])(0LL, 0LL, 1027LL);
  v1445 = -1;
  if ( v1381 )
  {
    v1667 = 0LL;
    v1668 = 0LL;
    v646 = 0LL;
    v1669 = 0LL;
    v1670 = 0LL;
    v645 = 0;
    v1671 = 0LL;
    v1672 = 0LL;
    v1558 = 0;
    if ( ((unsigned int (__fastcall *)(__int64, _DWORD *, _QWORD, unsigned int *))off_1800B30A0[0])(
           8LL,
           v1559,
           0LL,
           &v1558) )
    {
      v647 = (WARBIRD_DELAY_LOAD *)MemoryAlloc(2LL * v1558);
      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1671);
      if ( !v647 )
      {
        v1671 = 0LL;
        v645 = -2147024882;
        goto LABEL_824;
      }
      v1671 = v647;
      v1454 = MemoryAlloc(4LL * (unsigned int)(v1559[0] + 1));
      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1672);
      if ( !v1454 )
      {
        v645 = -2147024882;
LABEL_823:
        v1672 = 0LL;
        goto LABEL_824;
      }
      v1672 = v1454;
      if ( ((unsigned int (__fastcall *)(__int64, _DWORD *, WARBIRD_DELAY_LOAD *, unsigned int *))off_1800B30A0[0])(
             8LL,
             v1559,
             v647,
             &v1558) )
      {
        v649 = v1454;
        v650 = v1454;
        if ( v1559[0] )
        {
          v651 = 0;
          do
          {
            *v650 = off_1800B30B0(v647, 0);
            v652 = -1LL;
            do
              ++v652;
            while ( *((_WORD *)v647 + v652) );
            ++v650;
            v647 = (WARBIRD_DELAY_LOAD *)((char *)v647 + 2 * v652 + 2);
            ++v651;
          }
          while ( v651 < v1559[0] );
          v90 = v1481;
          v649 = v1454;
        }
        *v650 = 1033;
        v646 = v649;
        v1667 = v649;
        v1338 = v1559[0] + 1;
        goto LABEL_823;
      }
    }
    v648 = GetLastError();
    v645 = v648;
    if ( v648 > 0 )
      v645 = (unsigned __int16)v648 | 0x80070000;
    if ( v645 >= 0 )
      v645 = -2147467259;
LABEL_824:
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1672);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1671);
    if ( v645 >= 0 )
    {
      v653 = 0;
      v654 = 0;
      v1423 = 0;
      if ( v1338 )
      {
        v655 = 0LL;
        while ( 2 )
        {
          v656 = 0;
          v657 = `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray;
          do
          {
            if ( v646[v655] == *v657 )
            {
              v653 = v656;
              v1423 = v656;
              goto LABEL_833;
            }
            ++v656;
            ++v657;
          }
          while ( v656 < 0x26 );
          ++v654;
          ++v655;
          if ( v654 < v1338 )
            continue;
          break;
        }
      }
LABEL_833:
      v658 = v653;
      v1339 = 0;
      if ( ((unsigned int (__fastcall *)(_QWORD, _BYTE *, __int64))off_1800B30A8[0])(
             `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray[v653],
             v1851,
             85LL)
        && ((int (__fastcall *)(_BYTE *, __int64, char *))off_1800B3090[0])(v1851, 88LL, v1802) > 0 )
      {
        v1339 = (v1803 >> 27) & 1;
      }
      v659 = L"Segoe UI Light";
      v660 = 19LL;
      v661 = (const wchar_t **)v1849;
      do
      {
        *v661 = v659;
        v662 = -1LL;
        do
          ++v662;
        while ( v659[v662] );
        ++v661;
        v659 += v662 + 1;
        --v660;
      }
      while ( v660 );
      v1348 = (unsigned __int16 *)v1849[*((unsigned __int8 *)&`CUxDisplayStringsT<CEmptyType>::GetFontsForLCIDIndex'::`2'::LangFontIndexMapping
                                        + 3 * v658)];
      v1389 = (unsigned __int16 *)v1849[(unsigned __int8)byte_1800978B1[3 * v658]];
      v1428 = (unsigned __int16 *)v1849[(unsigned __int8)byte_1800978B2[3 * v658]];
      v663 = (char *)MemoryAlloc(0x1C90uLL);
      v1455 = v663;
      if ( v663 )
      {
        v664 = v663 + 7;
        v665 = 0;
        v666 = (unsigned __int8 *)&unk_1800A3C62;
        v667 = 0;
        v668 = 0;
        v669 = -1;
        v670 = 914LL;
        do
        {
          v671 = *(v666 - 1) | (*(v666 - 2) << 8);
          v672 = v666[2] << 8;
          v673 = *v666;
          v666 += 8;
          v674 = *(v666 - 7) | ((v673 | (v671 << 8)) << 8);
          v675 = v674 ^ v667;
          v676 = *(v666 - 3) | ((*(v666 - 4) | ((*(v666 - 5) | v672) << 8)) << 8);
          v677 = v675 ^ v676 ^ v665 ^ 0xAC987321;
          v678 = (__ROL4__(v677, 10) + 4991 * __ROL4__(v677 + 1419157410, 5)) ^ v675;
          v679 = (43881 * __ROR4__(v678 + 133239679, 9) - __ROL4__(v678, 2)) ^ v677;
          v680 = (24670 * v679 - (v679 >> 13) - 123127970) ^ v678;
          v681 = (2033 * __ROL4__(v680 ^ 0xAB69, 6) - __ROL4__(v680, 2)) ^ v679;
          v682 = (133239679 - (v681 ^ 0xAB69605E)) ^ v680;
          v683 = (43881 * (v682 ^ 0x137F)) ^ __ROR4__(v682, 6) ^ v681;
          v684 = (__ROL4__(v683, 2) + 24670 * __ROR4__(v683 + 133239679, 15)) ^ v682;
          v685 = (2033 * __ROR4__(v684 + 1419157410, 14) - __ROL4__(v684, 8)) ^ v683;
          v686 = __ROR4__(v685, 10) ^ (4991 * __ROR4__(v685 ^ 0xAB69605E, 12)) ^ v684;
          v687 = (v686 >> 10) ^ (43881 * (v686 ^ 0x7F1)) ^ v685;
          v688 = (2033 * (__ROR4__(~v687, 5) + 24670)) ^ v686;
          v689 = v687 ^ (v688 - 2033) ^ 0xAB69605E;
          v690 = ((v689 >> 2) + 4991 * __ROL4__(v687 ^ (v688 - 2033) ^ 0xAB6967AF, 2)) ^ v688;
          v691 = (__ROL4__(v690, 7) + 43881 * __ROR4__(v690 - 133239679, 6)) ^ v689;
          v692 = (24670 * (v691 ^ 0x137F) + __ROR4__(v691, 9)) ^ v690;
          v693 = (__ROL4__(v692, 7) + 2033 * __ROL4__(v692 ^ 0xAB69, 5)) ^ v691;
          v694 = v693 ^ v692 ^ 0xAC987321;
          v695 = (4991 * __ROR4__(v694, 3) - 219010071) ^ v693;
          v696 = (24670 * __ROR4__(v695 - 133239679, 1) - __ROR4__(v695, 6)) ^ v694;
          v697 = (__ROL4__(v696, 14) + 2033 * __ROL4__(v696 - 1419157410, 3)) ^ v695;
          v698 = (4991 * __ROL4__(v697 - 1419157410, 15) - __ROR4__(v697, 14)) ^ v696;
          v699 = (v698 >> 3) ^ (43881 * (v698 ^ 0x605E)) ^ v697;
          v700 = 24670 * __ROL4__(v699 ^ 0x7F1137F, 4);
          v701 = v699;
          v702 = v669 ^ v699;
          v669 = v676;
          v703 = v668 ^ __ROL4__(v701, 2) ^ v700;
          v668 = v674;
          v704 = v703 ^ v698;
          *(v664 - 4) = v704;
          *v664 = v702;
          v664 += 8;
          v705 = __ROR4__(v704, 8);
          *(v664 - 13) = v705;
          v706 = __ROR4__(v702, 8);
          *(v664 - 9) = v706;
          v707 = __ROR4__(v705, 8);
          *(v664 - 14) = v707;
          v708 = __ROR4__(v706, 8);
          *(v664 - 10) = v708;
          v709 = __ROR4__(v707, 8);
          v710 = __ROR4__(v708, 8);
          *(v664 - 15) = v709;
          *(v664 - 11) = v710;
          v665 = __ROR4__(v710, 8);
          v667 = __ROR4__(v709, 8);
          --v670;
        }
        while ( v670 );
        v90 = v1481;
        v2 = 0;
        v645 = 0;
        v711 = 0LL;
        v712 = v1455;
        v713 = 0LL;
        do
        {
          v714 = _mm_loadu_si128((const __m128i *)&v1455[v711]);
          v711 += 16LL;
          v715 = _mm_xor_si128(v714, v713);
          v713 = v715;
        }
        while ( v711 < 0x1C90 );
        v716 = _mm_xor_si128(v715, _mm_srli_si128(v715, 8));
        v717 = _mm_xor_si128(v716, _mm_srli_si128(v716, 4));
        v718 = _mm_xor_si128(v717, _mm_srli_si128(v717, 2));
        if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_xor_si128(v718, _mm_srli_si128(v718, 1))) == 127LL )
        {
          v1668 = v1455;
          v712 = 0LL;
          v1669 = 7312LL;
        }
        else
        {
          v645 = -1073425151;
        }
        if ( v712 )
          MemoryFree(v712);
        if ( v645 >= 0 )
        {
          v719 = v1668;
          v720 = v1843;
          v721 = 6LL;
          do
          {
            for ( kk = 0; kk < 0x26; ++kk )
            {
              if ( v1423 == kk )
                *v720 = v719;
              v723 = -1LL;
              do
                ++v723;
              while ( v719[v723] );
              v719 += v723 + 1;
            }
            ++v720;
            --v721;
          }
          while ( v721 );
          v724 = (void **)MemoryAlloc(0x18uLL);
          SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1670);
          if ( v724 )
          {
            v1438 = 0;
            v725 = v724;
            v726 = v1850;
            v1670 = v724;
            v727 = v724;
            v1424 = v1850;
            *(_OWORD *)v724 = 0LL;
            v724[2] = 0LL;
            v728 = 0;
            v1456 = v724;
            while ( 2 )
            {
              v729 = *v726;
              v730 = &`CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::wStringIds;
              v731 = 0LL;
              while ( v729 != *v730 )
              {
                v731 = (unsigned int)(v731 + 1);
                ++v730;
                if ( (unsigned int)v731 >= 6 )
                  goto LABEL_875;
              }
              v732 = v1843[v731];
              v733 = -1LL;
              v1450 = v732;
              do
                ++v733;
              while ( *(_BYTE *)(v732 + v733) );
              v734 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))off_1800B30C0[0])(
                       65001LL,
                       0LL,
                       v732,
                       (unsigned int)(v733 + 1),
                       0LL,
                       0);
              v1470 = v734;
              if ( !v734 )
                goto LABEL_878;
              v735 = MemoryAlloc(2LL * v734);
              *v1456 = v735;
              if ( !v735 )
              {
                v645 = -2147024882;
                goto LABEL_882;
              }
              v736 = -1LL;
              do
                ++v736;
              while ( *(_BYTE *)(v1450 + v736) );
              if ( !((unsigned int (__fastcall *)(__int64, _QWORD, __int64, _QWORD, void *, int))off_1800B30C0[0])(
                      65001LL,
                      0LL,
                      v1450,
                      (unsigned int)(v736 + 1),
                      v735,
                      v1470) )
              {
LABEL_878:
                v737 = GetLastError();
                v645 = v737;
                if ( v737 > 0 )
                  v645 = (unsigned __int16)v737 | 0x80070000;
                if ( v645 >= 0 )
                  v645 = -2147467259;
                goto LABEL_882;
              }
              v727 = v1456;
              v728 = v1438;
LABEL_875:
              ++v728;
              v726 = v1424 + 1;
              v1438 = v728;
              ++v727;
              ++v1424;
              v1456 = v727;
              if ( v728 < 3 )
                continue;
              break;
            }
            v725 = 0LL;
            v1670 = 0LL;
            v1664 = v724;
            v1776 = v1339;
          }
          else
          {
            v725 = 0LL;
            v645 = -2147024882;
            v1670 = 0LL;
          }
LABEL_882:
          if ( v725 )
          {
            v738 = 3LL;
            do
            {
              v739 = *v725;
              if ( *v725 )
              {
                v740 = -1LL;
                do
                  ++v740;
                while ( v739[v740] );
                memset(v739, 0, 2 * v740 + 2);
                MemoryFree(*v725);
                v738 = v1363;
              }
              ++v725;
              v1363 = --v738;
            }
            while ( v738 );
          }
        }
      }
      else
      {
        v645 = -2147024882;
      }
    }
    if ( v1668 )
      memset(v1668, 0, v1669);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1670);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1668);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1667);
    if ( v645 < 0 )
      goto LABEL_1000;
    v741 = 0;
    v645 = 0;
    v1778 = *v1664;
    v1779 = v1664[1];
    v1780 = v1664[2];
    v1735 = 0LL;
    LODWORD(v1735) = 16;
    if ( (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_1800B3168)(
                         66LL,
                         0LL,
                         &v1735,
                         0LL) )
    {
      v741 = BYTE4(v1735) & 1;
    }
    else
    {
      v742 = GetLastError();
      v645 = v742;
      if ( v742 > 0 )
        v645 = (unsigned __int16)v742 | 0x80070000;
      if ( v645 >= 0 )
        v645 = -2147467259;
    }
    v1777 = v741;
    if ( v645 < 0 )
      goto LABEL_1000;
    if ( v1487 == 1 )
    {
      v1405 = 42;
    }
    else
    {
      if ( v1487 != 2 )
      {
        if ( v1487 == 3 )
        {
          v1405 = 225;
          v1416 = 225;
        }
        goto LABEL_906;
      }
      v1405 = 15;
    }
    v1416 = 11;
LABEL_906:
    v743 = 96;
    v1471 = 96;
    memset_0(v1839, 0, 0xDCuLL);
    v1840 = 220;
    if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _BYTE *))off_1800B30E0[0])(0LL, 0xFFFFFFFFLL, v1839) )
    {
      v743 = v1841;
      *((_QWORD *)&v1734 + 1) = v1842;
      if ( v1841 < 0x60u )
        v743 = 96;
      v1471 = v743;
    }
    v744 = (char *)v1348;
    if ( v1487 != 1 )
      v744 = (char *)v1428;
    memset_0(v1830, 0, 0x5CuLL);
    v645 = 0;
    v1364 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800B30F8[0])(0LL, 0LL, 1027LL);
    if ( !v1364 )
      goto LABEL_918;
    v745 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800B30B8)(v1405, v743, 72LL);
    v1830[4] = 400;
    v1831 = 5;
    v1830[0] = -v745;
    StringCchCopyW((char *)v1832, 32LL, v744);
    v746 = ((__int64 (__fastcall *)(_DWORD *))off_1800B3020[0])(v1830);
    if ( v746 )
    {
      v1781 = (unsigned __int16 *)v746;
    }
    else
    {
      v747 = GetLastError();
      v645 = v747;
      if ( v747 > 0 )
        v645 = (unsigned __int16)v747 | 0x80070000;
      if ( v645 >= 0 )
        v645 = -2147467259;
    }
    off_1800B3160[0](0LL, v1364);
    if ( v645 < 0 )
      goto LABEL_1000;
    v749 = v1348;
    if ( v1487 != 1 )
      v749 = v1428;
    v1349 = v749;
    memset_0(v1833, 0, 0x5CuLL);
    v645 = 0;
    v750 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800B30F8[0])(0LL, 0LL, 1027LL);
    if ( !v750 )
      goto LABEL_918;
    v751 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800B30B8)(v1416, v743, 72LL);
    v1833[4] = 400;
    v1833[0] = -v751;
    v1834 = 5;
    StringCchCopyW((char *)v1835, 32LL, (char *)v1349);
    v752 = ((__int64 (__fastcall *)(_DWORD *))off_1800B3020[0])(v1833);
    if ( v752 )
    {
      v1782 = (void *)v752;
    }
    else
    {
      v753 = GetLastError();
      v645 = v753;
      if ( v753 > 0 )
        v645 = (unsigned __int16)v753 | 0x80070000;
      if ( v645 >= 0 )
        v645 = -2147467259;
    }
    off_1800B3160[0](0LL, v750);
    if ( v645 < 0 )
      goto LABEL_1000;
    v754 = 0;
    v755 = 0;
    if ( v1487 != 1 )
    {
      if ( v1487 == 2 )
      {
        v755 = 0;
        v754 = SDWORD2(v1734) / 4;
LABEL_938:
        *((_QWORD *)&v1725 + 1) = __PAIR64__(v755, v754);
        if ( v1487 == 1 )
        {
          v756 = 150;
          v1340 = 32;
        }
        else
        {
          if ( (unsigned int)(v1487 - 2) > 1 )
          {
            v1340 = 42;
            v757 = 42;
            v756 = 42;
LABEL_945:
            v1406 = v756;
            v1417 = v757;
            v758 = v754 - v756 - v757;
            v645 = 0;
            v759 = v1778;
            DWORD2(v1786) = v758;
            DWORD2(v1785) = v758;
            v1350 = (unsigned __int16 *)((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, unsigned __int16 *))off_1800B3078)(
                                          v1381,
                                          v1781);
            if ( !(unsigned int)((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, void *, __int64, __int128 *, int, _QWORD))off_1800B30D8)(
                                  v1381,
                                  v759,
                                  0xFFFFFFFFLL,
                                  &v1785,
                                  3152,
                                  0LL) )
              v645 = -2147467259;
            if ( v1350 )
              off_1800B3078(v1381, (int)v1350);
            if ( v645 < 0 )
              goto LABEL_1000;
            v645 = 0;
            v760 = v1779;
            v1351 = (unsigned __int16 *)((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, void *))off_1800B3078)(
                                          v1381,
                                          v1782);
            if ( !(unsigned int)((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, void *, __int64, __int128 *, int, _QWORD))off_1800B30D8)(
                                  v1381,
                                  v760,
                                  0xFFFFFFFFLL,
                                  &v1786,
                                  3152,
                                  0LL) )
              v645 = -2147467259;
            if ( v1351 )
              off_1800B3078(v1381, (int)v1351);
            if ( v645 < 0 )
              goto LABEL_1000;
            if ( (unsigned int)(v1487 - 2) <= 1 )
            {
              v758 = DWORD2(v1786);
              if ( SDWORD2(v1785) > SDWORD2(v1786) )
                v758 = DWORD2(v1785);
            }
            if ( v1776 )
            {
              off_1800B3150((WARBIRD_DELAY_LOAD *)&v1785, (HDC)(unsigned int)(v758 + v1417 - DWORD2(v1785)));
              v761 = (unsigned int)(v758 + v1417 - DWORD2(v1786));
            }
            else
            {
              off_1800B3150((WARBIRD_DELAY_LOAD *)&v1785, (HDC)v1406);
              v761 = v1406;
            }
            ((void (__fastcall *)(__int128 *, __int64, _QWORD))off_1800B3150)(
              &v1786,
              v761,
              (unsigned int)(v1340 + HIDWORD(v1785)));
            if ( (unsigned int)(v1487 - 2) <= 1 )
            {
              *((_QWORD *)&v1725 + 1) = __PAIR64__(HIDWORD(v1786), v758);
              v1784 = -5723992;
              goto LABEL_987;
            }
            if ( v1487 != 1 )
              goto LABEL_987;
            v1784 = 0xFFFFFF;
            memset_0(v1836, 0, 0x5CuLL);
            v645 = 0;
            v762 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800B30F8[0])(0LL, 0LL, 1027LL);
            if ( v762 )
            {
              v763 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1800B30B8)(11LL, v1471);
              v1836[4] = 400;
              v1836[0] = -v763;
              v1837 = 5;
              StringCchCopyW((char *)v1838, 32LL, (char *)v1389);
              v764 = ((__int64 (__fastcall *)(_DWORD *))off_1800B3020[0])(v1836);
              if ( v764 )
              {
                v1783 = v764;
              }
              else
              {
                v765 = GetLastError();
                v645 = v765;
                if ( v765 > 0 )
                  v645 = (unsigned __int16)v765 | 0x80070000;
                if ( v645 >= 0 )
                  v645 = -2147467259;
              }
              off_1800B3160[0](0LL, v762);
              if ( v645 < 0 )
                goto LABEL_1000;
              v645 = 0;
              v766 = v1780;
              v1789 = v758;
              v767 = ((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, __int64))off_1800B3078)(v1381, v1783);
              if ( !(unsigned int)((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, void *, __int64, unsigned int *, int, _QWORD))off_1800B30D8)(
                                    v1381,
                                    v766,
                                    0xFFFFFFFFLL,
                                    &v1787,
                                    1120,
                                    0LL) )
                v645 = -2147467259;
              if ( v767 )
                off_1800B3078(v1381, v767);
              if ( v645 < 0 )
                goto LABEL_1000;
              v768 = v1789 + 24;
              if ( (int)(v1789 + 24) < 90 )
                v768 = 90;
              v1789 = v768;
              v1790 = 32;
              v1787 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800B30B8)(v1787, v1471, 96LL);
              v1788 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800B30B8)(v1788, v1471, 96LL);
              v1789 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800B30B8)(v1789, v1471, 96LL);
              v1790 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800B30B8)(v1790, v1471, 96LL);
              if ( v1776 )
              {
                v769 = (unsigned int)v1785;
                if ( (int)v1785 >= (int)v1786 )
                  v769 = (unsigned int)v1786;
              }
              else
              {
                v770 = DWORD2(v1785);
                if ( SDWORD2(v1785) <= SDWORD2(v1786) )
                  v770 = DWORD2(v1786);
                v769 = v1787 + v770 - v1789;
              }
              off_1800B3150((WARBIRD_DELAY_LOAD *)&v1787, (HDC)v769);
LABEL_987:
              v771 = v1776;
              v772 = HIDWORD(v1725);
              v773 = DWORD2(v1725);
              switch ( v1487 )
              {
                case 1:
                  *(_QWORD *)&v1725 = 0LL;
                  goto LABEL_999;
                case 2:
                  v1809 = 0LL;
                  v1807 = 0LL;
                  v1808 = 0LL;
                  v777 = ((__int64 (__fastcall *)(_QWORD))off_1800B3148[0])(0LL);
                  LODWORD(v1807) = 40;
                  if ( !(unsigned int)((__int64 (__fastcall *)(__int64, __int128 *))off_1800B3108)(v777, &v1807) )
                  {
LABEL_999:
                    v645 = 0;
LABEL_1000:
                    off_1800B3160[0](0LL, (int)v1381);
                    goto LABEL_1001;
                  }
                  ((void (__fastcall *)(_QWORD, char *))off_1800B3140[0])(0LL, (char *)&v1808 + 4);
                  ((void (__fastcall *)(_QWORD, char *))off_1800B3140[0])(0LL, (char *)&v1808 + 12);
                  if ( v771 )
                    v775 = DWORD1(v1808) + 5 * HIDWORD(v1808) / 100;
                  else
                    v775 = 95 * (HIDWORD(v1808) - v773) / 100;
                  v776 = 95 * (v1809 - v772);
                  break;
                case 3:
                  v1806 = 0LL;
                  v1804 = 0LL;
                  v1805 = 0LL;
                  v774 = ((__int64 (__fastcall *)(_QWORD))off_1800B3148[0])(0LL);
                  LODWORD(v1804) = 40;
                  if ( !(unsigned int)((__int64 (__fastcall *)(__int64, __int128 *))off_1800B3108)(v774, &v1804) )
                    goto LABEL_999;
                  ((void (__fastcall *)(_QWORD, char *))off_1800B3140[0])(0LL, (char *)&v1805 + 4);
                  ((void (__fastcall *)(_QWORD, char *))off_1800B3140[0])(0LL, (char *)&v1805 + 12);
                  v775 = 50 * (HIDWORD(v1805) - v773) / 100;
                  v776 = 50 * (v1806 - v772);
                  break;
                default:
                  goto LABEL_999;
              }
              LODWORD(v1725) = v775;
              DWORD1(v1725) = v776 / 100;
              goto LABEL_999;
            }
LABEL_918:
            v748 = GetLastError();
            v645 = v748;
            if ( v748 > 0 )
              v645 = (unsigned __int16)v748 | 0x80070000;
            if ( v645 >= 0 )
              v645 = -2147467259;
            goto LABEL_1000;
          }
          v756 = 0;
          v1340 = 0;
        }
        v757 = 0;
        goto LABEL_945;
      }
      if ( v1487 != 3 )
        goto LABEL_938;
    }
    v754 = DWORD2(v1734);
    v755 = HIDWORD(v1734);
    goto LABEL_938;
  }
  v644 = GetLastError();
  v645 = v644;
  if ( v644 > 0 )
    v645 = (unsigned __int16)v644 | 0x80070000;
  if ( v645 >= 0 )
    v645 = -2147467259;
LABEL_1001:
  v778 = 1;
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v779 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount > 0 )
  {
    --g_WarbirdSecureFunctionsRefCount;
    if ( v779 == 1 )
    {
      v780 = 4LL;
      v781 = (HMODULE *)&WARBIRD::g_arModuleInfo;
      do
      {
        if ( *v781 )
          FreeLibrary(*v781);
        v781 += 3;
        --v780;
      }
      while ( v780 );
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      memcpy_0(&WARBIRD::g_FuncAddress, off_18008E410, 0x170uLL);
      v778 = 1;
    }
  }
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1664);
  if ( v645 < 0 )
    goto LABEL_1204;
  v782 = v1725;
  v1673 = v1725;
  memset_0(v1749, 0, 0x68uLL);
  v783 = v1496;
  v784 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1800B3050[0])(v1496, 7LL);
  if ( !v784
    || !((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1800B3068[0])(v784, 104LL, v1749)
    || v1752 != 32
    || !v1753
    || v1750 <= 0
    || v1751 <= 0 )
  {
    v778 = 0;
  }
  v1556 = v778;
  v785 = v778 == 0;
  v786 = v1487;
  if ( !v785 || v1487 == 1 )
  {
    ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1800B3150)(&v1785, v782, HIDWORD(v1673));
    ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1800B3150)(&v1786, v782, HIDWORD(v1673));
    if ( v1487 == 1 )
      v1606 = (LPVOID)((__int64 (__fastcall *)(_QWORD))off_1800B3028[0])(v1777 == 0 ? 0xB26720 : 0);
  }
  v1439 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1800B3080)(v783, 1LL);
  v787 = 2064;
  if ( v1776 )
    v787 = 133138;
  v1472 = v787;
  if ( !v1556 )
  {
    if ( v1777 || (v843 = -64, v1487 == 1) )
      v843 = -1;
    LOWORD(v1411) = 0;
    *(_QWORD *)&v1738 = 0LL;
    BYTE2(v1411) = v843;
    HIBYTE(v1411) = 1;
    LODWORD(v1718) = 0;
    v1462 = (WARBIRD_DELAY_LOAD *)((__int64 (__fastcall *)(LPVOID))off_1800B3010[0])(v783);
    if ( !v1462 )
      goto LABEL_1111;
    if ( v1487 == 1 )
    {
      v844 = 0;
      v845 = DWORD2(v1786) - v1786;
      v1425 = 0;
      if ( DWORD2(v1786) - (int)v1786 <= DWORD2(v1785) - (int)v1785 )
        v845 = DWORD2(v1785) - v1785;
      v846 = HIDWORD(v1786) - DWORD1(v1785);
      v847 = __PAIR64__(HIDWORD(v1786) - DWORD1(v1785), v845);
      if ( v1776 )
      {
        LODWORD(v1738) = v845 + v1785 - DWORD2(v1785);
        v844 = v1738;
        LODWORD(v1718) = v845 + v1786 - DWORD2(v1786);
        v1425 = v1718;
      }
      v1426 = v1425 + DWORD2(v1786) - v1786;
      v848 = v844 + DWORD2(v1785) - v1785;
      DWORD2(v1718) = v1426;
      DWORD2(v1738) = v848;
      v1459 = DWORD1(v1786) - DWORD1(v1785);
      DWORD1(v1718) = DWORD1(v1786) - DWORD1(v1785);
      v786 = v1487;
      v1385 = HIDWORD(v1786) - DWORD1(v1785);
      HIDWORD(v1718) = HIDWORD(v1786) - DWORD1(v1785);
      v1451 = HIDWORD(v1785) - DWORD1(v1785);
      HIDWORD(v1738) = HIDWORD(v1785) - DWORD1(v1785);
    }
    else
    {
      v845 = DWORD2(v1725);
      v846 = HIDWORD(v1725);
      v1738 = v1785;
      v848 = DWORD2(v1785);
      v1451 = HIDWORD(v1785);
      v1718 = v1786;
      v1385 = HIDWORD(v1786);
      v1426 = DWORD2(v1786);
      v1459 = DWORD1(v1786);
      v847 = *((_QWORD *)&v1725 + 1);
    }
    v1676 = 0LL;
    DWORD2(v1810) = -v846;
    v1812 = 0LL;
    v1811 = 0LL;
    v1813 = 0;
    LODWORD(v1810) = 40;
    DWORD1(v1810) = v845;
    HIDWORD(v1810) = 2097153;
    v849 = ((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800B3018[0])(
             v1462,
             &v1810,
             0LL,
             &v1676,
             0LL,
             0);
    Srcc = (void *)v849;
    if ( !v849 )
    {
      GetLastError();
LABEL_1200:
      if ( v1462 )
        ((void (__fastcall *)(WARBIRD_DELAY_LOAD *))off_1800B3030[0])(v1462);
      goto LABEL_1202;
    }
    off_1800B3078(v1462, v849);
    if ( v786 == 1 && v1606 )
    {
      v1796 = 0LL;
      v1798 = HIDWORD(v847);
      v1797 = v845;
      off_1800B30E8[0](v1462, (int)&v1796);
    }
    v850 = v1778;
    v1431 = v1777;
    v1497 = (__int64)v1781;
    v1502 = v1778;
    memset_0(v1766, 0, 0x68uLL);
    memset_0(v1747, 0, 0x68uLL);
    v1503 = 0LL;
    v1394 = 0;
    v1369 = 0;
    v1824 = 0LL;
    v1825 = 0;
    v1822 = 0LL;
    v1823 = 0LL;
    v1800 = 0LL;
    if ( v850 )
    {
      v851 = ((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, __int64))off_1800B3050[0])(v1462, 7LL);
      if ( v851 )
      {
        if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1800B3068[0])(v851, 104LL, v1766) )
        {
          v1503 = v1769;
          v1394 = v1767;
          v1369 = v1768;
        }
        v1504 = (LPVOID)((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *))off_1800B3010[0])(v1462);
        if ( v1504 )
        {
          v852 = v1738;
          DWORD2(v1822) = DWORD1(v1738) - v1451;
          v853 = v848 - v1738;
          v1681 = 0LL;
          v1356 = 0;
          v1823 = 0LL;
          v1824 = 0LL;
          v1825 = 0;
          LODWORD(v1822) = 40;
          DWORD1(v1822) = v853;
          HIDWORD(v1822) = 2097153;
          v854 = (void *)((__int64 (__fastcall *)(LPVOID, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800B3018[0])(
                           v1504,
                           &v1822,
                           0LL,
                           &v1681,
                           0LL,
                           0);
          v1498 = v854;
          if ( v854 )
          {
            v857 = ((__int64 (__fastcall *)(void *, __int64, _BYTE *))off_1800B3068[0])(v854, 104LL, v1747);
            v858 = 0LL;
            DWORD2(v1800) = v853;
            if ( v857 )
              v858 = v1748;
            v859 = DWORD1(v1738);
            HIDWORD(v1800) = v1451 - DWORD1(v1738);
            v1489 = v858;
            off_1800B3078((WARBIRD_DELAY_LOAD *)v1504, (int)v1498);
            ((void (__fastcall *)(LPVOID, __int64))off_1800B3080)(v1504, 1LL);
            v1497 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1800B3078)(v1504, v1497);
            v860 = ((__int64 (__fastcall *)(_QWORD))off_1800B3070[0])(0LL);
            ((void (__fastcall *)(LPVOID, __int128 *, __int64))off_1800B30E8[0])(v1504, &v1800, v860);
            ((void (__fastcall *)(LPVOID, LPVOID, __int64, __int128 *, int, _QWORD))off_1800B30D8)(
              v1504,
              v1502,
              0xFFFFFFFFLL,
              &v1800,
              v1472,
              0LL);
            if ( v1487 == 1 )
            {
              if ( v1431 )
                v1432 = ((__int64 (__fastcall *)(__int64))off_1800B3118[0])(8LL);
              else
                v1432 = 0xFFFFFF;
            }
            else
            {
              v1432 = -5723992;
            }
            v861 = -v852;
            v862 = 0;
            v863 = 0;
            if ( v852 >= 0 )
            {
              v862 = v852;
              v861 = 0;
            }
            v864 = -v859;
            if ( v859 >= 0 )
            {
              v864 = 0;
              v863 = v859;
            }
            v865 = DWORD2(v1800) - v861;
            if ( DWORD2(v1800) - v861 >= v1394 - v862 )
              v865 = v1394 - v862;
            v866 = HIDWORD(v1800) - v864;
            if ( HIDWORD(v1800) - v864 >= v1369 - v863 )
              v866 = v1369 - v863;
            if ( v865 > 0 && v866 > 0 )
            {
              v1370 = 0;
              v867 = (unsigned __int8 *)&v1489[4 * v861 + 4 * (__int64)(DWORD2(v1800) * v864)];
              v1490 = v867;
              v868 = (char *)v1503 + 4 * v862 + 4 * (__int64)(v1394 * v863);
              v1502 = (LPVOID)(4LL * SDWORD2(v1800));
              v1452 = 4LL * v1394;
              v1503 = v868;
              do
              {
                v1395 = 0;
                v869 = v867 + 2;
                v870 = 0;
                v871 = v868 - (char *)v867;
                do
                {
                  if ( (unsigned __int8)((*v869 + *(v869 - 2) + 2 * (unsigned int)*(v869 - 1)) >> 2) != 0xFF )
                  {
                    v872 = (unsigned __int8)~((*v869 + *(v869 - 2) + 2 * (unsigned int)*(v869 - 1)) >> 2);
                    v869[v871] -= ~((*v869 + *(v869 - 2) + 2 * (unsigned int)*(v869 - 1)) >> 2) * (v1432 - v869[v871]);
                    v873 = v869[v871 - 1];
                    v874 = (unsigned __int64)(2155905153LL * v872 * (BYTE1(v1432) - v873)) >> 32;
                    v869[v871 - 1] = v873 + (v874 >> 7 < 0) + (v874 >> 7);
                    v875 = v869[v871 - 2];
                    v876 = (unsigned __int64)(2155905153LL * v872 * (BYTE2(v1432) - v875)) >> 32;
                    v869[v871 - 2] = v875 + (v876 >> 7 < 0) + (v876 >> 7);
                    v877 = v869[v871 + 1];
                    v878 = v872 * (255 - v877);
                    v870 = v1395;
                    v869[v871 + 1] = v877 + v878 / 255;
                  }
                  ++v870;
                  v869 += 4;
                  v1395 = v870;
                }
                while ( v870 < v865 );
                v867 = &v1490[(_QWORD)v1502];
                v868 = (char *)v1503 + v1452;
                v1490 = &v1490[(_QWORD)v1502];
                v1503 = (char *)v1503 + v1452;
                ++v1370;
              }
              while ( v1370 < v866 );
              v90 = v1481;
              v845 = v847;
            }
            ((void (__fastcall *)(void *))off_1800B3038)(v1498);
            if ( v1497 )
              off_1800B3078((WARBIRD_DELAY_LOAD *)v1504, v1497);
          }
          else
          {
            v855 = GetLastError();
            v1356 = v855;
            v856 = v855 < 0;
            if ( v855 > 0 )
            {
              v1356 = (unsigned __int16)v855 | 0x80070000;
              v856 = 1;
            }
            if ( !v856 )
              v1356 = -2147467259;
          }
          ((void (__fastcall *)(LPVOID))off_1800B3030[0])(v1504);
          if ( v1356 < 0 )
            goto LABEL_1198;
          v879 = v1779;
          v1357 = v1777;
          v1491 = v1782;
          v1498 = v1779;
          memset_0(v1770, 0, 0x68uLL);
          memset_0(v1774, 0, 0x68uLL);
          v1504 = 0LL;
          v1371 = 0;
          v1396 = 0;
          v1828 = 0LL;
          v1829 = 0;
          v1826 = 0LL;
          v1827 = 0LL;
          v1799 = 0LL;
          if ( !v879 )
            goto LABEL_1198;
          v880 = ((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, __int64))off_1800B3050[0])(v1462, 7LL);
          if ( v880 )
          {
            if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1800B3068[0])(v880, 104LL, v1770) )
            {
              v1504 = v1773;
              v1371 = v1771;
              v1396 = v1772;
            }
            v1503 = (LPVOID)((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *))off_1800B3010[0])(v1462);
            if ( v1503 )
            {
              v881 = v1426 - v1718;
              DWORD2(v1826) = v1459 - v1385;
              v882 = 0;
              v1684 = 0LL;
              v1827 = 0LL;
              v1828 = 0LL;
              v1829 = 0;
              LODWORD(v1826) = 40;
              DWORD1(v1826) = v1426 - v1718;
              HIDWORD(v1826) = 2097153;
              v883 = (void *)((__int64 (__fastcall *)(LPVOID, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800B3018[0])(
                               v1503,
                               &v1826,
                               0LL,
                               &v1684,
                               0LL,
                               0);
              v1502 = v883;
              if ( !v883 )
              {
                v884 = GetLastError();
                v882 = v884;
                if ( v884 > 0 )
                  v882 = (unsigned __int16)v884 | 0x80070000;
                if ( v882 >= 0 )
                  v882 = -2147467259;
                goto LABEL_1193;
              }
              v885 = ((__int64 (__fastcall *)(void *, __int64, _BYTE *))off_1800B3068[0])(v883, 104LL, v1774);
              v886 = 0LL;
              DWORD2(v1799) = v881;
              if ( v885 )
                v886 = v1775;
              HIDWORD(v1799) = v1385 - v1459;
              v1497 = v886;
              off_1800B3078((WARBIRD_DELAY_LOAD *)v1503, (int)v1502);
              ((void (__fastcall *)(LPVOID, __int64))off_1800B3080)(v1503, 1LL);
              v1492 = (LPVOID)((__int64 (__fastcall *)(LPVOID, LPVOID))off_1800B3078)(v1503, v1491);
              v887 = ((__int64 (__fastcall *)(_QWORD))off_1800B3070[0])(0LL);
              ((void (__fastcall *)(LPVOID, __int128 *, __int64))off_1800B30E8[0])(v1503, &v1799, v887);
              ((void (__fastcall *)(LPVOID, void *, __int64, __int128 *, int, _QWORD))off_1800B30D8)(
                v1503,
                v1498,
                0xFFFFFFFFLL,
                &v1799,
                v1472,
                0LL);
              if ( v1487 == 1 )
              {
                if ( !v1357 )
                {
                  v1358 = 0xFFFFFF;
LABEL_1174:
                  v889 = -(int)v1718;
                  v890 = 0;
                  v891 = 0;
                  if ( (int)v1718 >= 0 )
                  {
                    v890 = v1718;
                    v889 = 0;
                  }
                  v892 = -v1459;
                  if ( v1459 >= 0 )
                  {
                    v891 = v1459;
                    v892 = 0;
                  }
                  v893 = DWORD2(v1799) - v889;
                  if ( DWORD2(v1799) - v889 >= v1371 - v890 )
                    v893 = v1371 - v890;
                  v894 = HIDWORD(v1799) - v892;
                  if ( HIDWORD(v1799) - v892 >= v1396 - v891 )
                    v894 = v1396 - v891;
                  if ( v893 > 0 && v894 > 0 )
                  {
                    v1397 = 0;
                    v895 = (unsigned __int8 *)(v1497 + 4 * (v889 + (__int64)(v892 * DWORD2(v1799))));
                    v1498 = v895;
                    v896 = (char *)v1504 + 4 * v890 + 4 * (__int64)(v891 * v1371);
                    v1497 = 4LL * SDWORD2(v1799);
                    v1433 = (unsigned __int16 *)(4LL * v1371);
                    v1504 = v896;
                    do
                    {
                      v897 = v895 + 2;
                      v1372 = 0;
                      v898 = v896 - (char *)v895;
                      for ( mm = 0; mm < v893; v1372 = mm )
                      {
                        if ( (unsigned __int8)((*v897 + *(v897 - 2) + 2 * (unsigned int)*(v897 - 1)) >> 2) != 0xFF )
                        {
                          v900 = (unsigned __int8)~((*v897 + *(v897 - 2) + 2 * (unsigned int)*(v897 - 1)) >> 2);
                          v897[v898] -= ~((*v897 + *(v897 - 2) + 2 * (unsigned int)*(v897 - 1)) >> 2)
                                      * (v1445 - v897[v898]);
                          v901 = v897[v898 - 1];
                          v902 = (unsigned __int64)(2155905153LL * v900 * (BYTE1(v1358) - v901)) >> 32;
                          v897[v898 - 1] = v901 + (v902 >> 7 < 0) + (v902 >> 7);
                          v903 = v897[v898 - 2];
                          v904 = (unsigned __int64)(2155905153LL * v900 * (BYTE2(v1358) - v903)) >> 32;
                          v897[v898 - 2] = v903 + (v904 >> 7 < 0) + (v904 >> 7);
                          mm = v1372;
                          v897[v898 + 1] += v900 * (255 - v897[v898 + 1]) / 255;
                        }
                        ++mm;
                        v897 += 4;
                      }
                      v895 = (unsigned __int8 *)v1498 + v1497;
                      v896 = (char *)v1504 + (_QWORD)v1433;
                      v1498 = (char *)v1498 + v1497;
                      v1504 = (char *)v1504 + (_QWORD)v1433;
                      ++v1397;
                    }
                    while ( v1397 < v894 );
                    v90 = v1481;
                  }
                  ((void (__fastcall *)(LPVOID))off_1800B3038)(v1502);
                  if ( v1492 )
                    off_1800B3078((WARBIRD_DELAY_LOAD *)v1503, (int)v1492);
LABEL_1193:
                  ((void (__fastcall *)(LPVOID))off_1800B3030[0])(v1503);
                  if ( v882 >= 0 )
                  {
                    v842 = v1496;
                    if ( v1487 == 1 )
                      ((void (__fastcall *)(LPVOID, _QWORD, _QWORD, _QWORD, _DWORD, WARBIRD_DELAY_LOAD *, _DWORD, _DWORD, int))WARBIRD::g_FuncAddress)(
                        v1496,
                        (unsigned int)v1785,
                        DWORD1(v1785),
                        v845,
                        HIDWORD(v847),
                        v1462,
                        0,
                        0,
                        13369376);
                    else
                      ((void (__fastcall *)(LPVOID, _QWORD, _QWORD, _QWORD, _DWORD, WARBIRD_DELAY_LOAD *, _DWORD, _DWORD, unsigned int, _DWORD, int))off_1800B3040[0])(
                        v1496,
                        (unsigned int)v1725,
                        DWORD1(v1725),
                        v845,
                        HIDWORD(v847),
                        v1462,
                        0,
                        0,
                        v845,
                        HIDWORD(v847),
                        v1411);
LABEL_1197:
                    ((void (__fastcall *)(LPVOID, _QWORD))off_1800B3080)(v842, v1439);
                  }
                  goto LABEL_1198;
                }
                v888 = ((__int64 (__fastcall *)(__int64))off_1800B3118[0])(8LL);
              }
              else
              {
                v888 = -5723992;
              }
              v1358 = v888;
              v1445 = v888;
              goto LABEL_1174;
            }
          }
        }
      }
      GetLastError();
    }
LABEL_1198:
    if ( Srcc )
      ((void (__fastcall *)(void *))off_1800B3038)(Srcc);
    goto LABEL_1200;
  }
  v788 = v1778;
  v1407 = v1777;
  v1352 = v1781;
  v1365 = v1778;
  memset_0(v1754, 0, 0x68uLL);
  memset_0(v1758, 0, 0x68uLL);
  v1390 = 0LL;
  v1418 = 0;
  v1341 = 0;
  v1816 = 0LL;
  v1817 = 0;
  v1814 = 0LL;
  v1815 = 0LL;
  v1801 = 0LL;
  if ( !v788 )
    goto LABEL_1202;
  v789 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1800B3050[0])(v783, 7LL);
  if ( !v789 )
    goto LABEL_1111;
  if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1800B3068[0])(v789, 104LL, v1754) )
  {
    v1390 = v1757;
    v1418 = v1755;
    v1341 = v1756;
  }
  v790 = ((__int64 (__fastcall *)(LPVOID))off_1800B3010[0])(v783);
  v791 = (WARBIRD_DELAY_LOAD *)v790;
  if ( !v790 )
    goto LABEL_1111;
  DWORD1(v1814) = DWORD2(v1785) - v1785;
  v792 = 0;
  DWORD2(v1814) = DWORD1(v1785) - HIDWORD(v1785);
  v1674 = 0LL;
  v1815 = 0LL;
  v1816 = 0LL;
  v1817 = 0;
  LODWORD(v1814) = 40;
  HIDWORD(v1814) = 2097153;
  v1429 = (unsigned __int16 *)((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800B3018[0])(
                                v790,
                                &v1814,
                                0LL,
                                &v1674,
                                0LL,
                                0);
  if ( v1429 )
  {
    v794 = ((__int64 (__fastcall *)(unsigned __int16 *, __int64, _BYTE *))off_1800B3068[0])(v1429, 104LL, v1758);
    v795 = 0LL;
    if ( v794 )
      v795 = v1759;
    DWORD2(v1801) = DWORD2(v1785) - v1785;
    HIDWORD(v1801) = HIDWORD(v1785) - DWORD1(v1785);
    v1382 = v795;
    off_1800B3078(v791, (int)v1429);
    ((void (__fastcall *)(WARBIRD_DELAY_LOAD *, __int64))off_1800B3080)(v791, 1LL);
    v1353 = (unsigned __int16 *)((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, unsigned __int16 *))off_1800B3078)(
                                  v791,
                                  v1352);
    v796 = ((__int64 (__fastcall *)(_QWORD))off_1800B3070[0])(0LL);
    ((void (__fastcall *)(WARBIRD_DELAY_LOAD *, __int128 *, __int64))off_1800B30E8[0])(v791, &v1801, v796);
    ((void (__fastcall *)(WARBIRD_DELAY_LOAD *, void *, __int64, __int128 *, int, _QWORD))off_1800B30D8)(
      v791,
      v1365,
      0xFFFFFFFFLL,
      &v1801,
      v1472,
      0LL);
    if ( v1487 == 1 )
    {
      if ( v1407 )
        v1408 = ((__int64 (__fastcall *)(__int64))off_1800B3118[0])(8LL);
      else
        v1408 = 0xFFFFFF;
    }
    else
    {
      v1408 = -5723992;
    }
    v797 = 0;
    v798 = -(int)v1785;
    v799 = 0;
    if ( (int)v1785 >= 0 )
    {
      v797 = v1785;
      v798 = 0;
    }
    v800 = -DWORD1(v1785);
    if ( (SDWORD1(v1785) & 0x80000000) == 0 )
    {
      v799 = DWORD1(v1785);
      v800 = 0;
    }
    v801 = DWORD2(v1801) - v798;
    if ( DWORD2(v1801) - v798 >= v1418 - v797 )
      v801 = v1418 - v797;
    v802 = HIDWORD(v1801) - v800;
    if ( HIDWORD(v1801) - v800 >= v1341 - v799 )
      v802 = v1341 - v799;
    if ( v801 > 0 && v802 > 0 )
    {
      v1342 = 0;
      v803 = &v1382[4 * v798 + 4 * (__int64)(v800 * DWORD2(v1801))];
      v1366 = (SIZE_T)v803;
      v804 = &v1390[2 * v797 + 2 * (__int64)(v799 * v1418)];
      v805 = 4LL * SDWORD2(v1801);
      v1457 = 2LL * v1418;
      v1391 = v804;
      do
      {
        v1419 = 0;
        v806 = (char *)v804 - v803;
        v807 = (unsigned __int8 *)(v803 + 2);
        for ( nn = 0; nn < v801; v1419 = nn )
        {
          if ( (unsigned __int8)((*v807 + *(v807 - 2) + 2 * (unsigned int)*(v807 - 1)) >> 2) != 0xFF )
          {
            v809 = (unsigned __int8)~((*v807 + *(v807 - 2) + 2 * (unsigned int)*(v807 - 1)) >> 2);
            v807[v806] -= ~((*v807 + *(v807 - 2) + 2 * (unsigned int)*(v807 - 1)) >> 2) * (v1408 - v807[v806]);
            v810 = v807[v806 - 1];
            v811 = (unsigned __int64)(2155905153LL * v809 * (BYTE1(v1408) - v810)) >> 32;
            v807[v806 - 1] = v810 + (v811 >> 7 < 0) + (v811 >> 7);
            v812 = v807[v806 - 2];
            v813 = (unsigned __int64)(2155905153LL * v809 * (BYTE2(v1408) - v812)) >> 32;
            v807[v806 - 2] = v812 + (v813 >> 7 < 0) + (v813 >> 7);
            nn = v1419;
            v807[v806 + 1] += v809 * (255 - v807[v806 + 1]) / 255;
          }
          ++nn;
          v807 += 4;
        }
        v803 = (char *)(v805 + v1366);
        v804 = &v1391[v1457];
        v1366 += v805;
        v1391 = (unsigned __int16 *)((char *)v1391 + v1457 * 2);
        ++v1342;
      }
      while ( v1342 < v802 );
      v90 = v1481;
      v792 = 0;
    }
    ((void (__fastcall *)(unsigned __int16 *))off_1800B3038)(v1429);
    if ( v1353 )
      off_1800B3078(v791, (int)v1353);
  }
  else
  {
    v793 = GetLastError();
    v792 = v793;
    if ( v793 > 0 )
      v792 = (unsigned __int16)v793 | 0x80070000;
    if ( v792 >= 0 )
      v792 = -2147467259;
  }
  ((void (__fastcall *)(WARBIRD_DELAY_LOAD *))off_1800B3030[0])(v791);
  if ( v792 < 0 )
    goto LABEL_1202;
  v814 = v1779;
  v1409 = v1777;
  v1354 = (unsigned __int16 *)v1782;
  v1367 = v1779;
  memset_0(v1760, 0, 0x68uLL);
  memset_0(v1764, 0, 0x68uLL);
  v1392 = 0LL;
  v1420 = 0;
  v1343 = 0;
  v1820 = 0LL;
  v1821 = 0;
  v1818 = 0LL;
  v1819 = 0LL;
  v1795 = 0LL;
  if ( !v814 )
    goto LABEL_1202;
  v815 = v1496;
  v816 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1800B3050[0])(v1496, 7LL);
  if ( !v816 )
    goto LABEL_1111;
  if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1800B3068[0])(v816, 104LL, v1760) )
  {
    v1392 = v1763;
    v1420 = v1761;
    v1343 = v1762;
  }
  v817 = ((__int64 (__fastcall *)(LPVOID))off_1800B3010[0])(v815);
  v818 = (WARBIRD_DELAY_LOAD *)v817;
  if ( !v817 )
  {
LABEL_1111:
    GetLastError();
    goto LABEL_1202;
  }
  DWORD1(v1818) = DWORD2(v1786) - v1786;
  DWORD2(v1818) = DWORD1(v1786) - HIDWORD(v1786);
  v819 = 0;
  v1675 = 0LL;
  v1819 = 0LL;
  v1820 = 0LL;
  v1821 = 0;
  LODWORD(v1818) = 40;
  HIDWORD(v1818) = 2097153;
  v1430 = (unsigned __int16 *)((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800B3018[0])(
                                v817,
                                &v1818,
                                0LL,
                                &v1675,
                                0LL,
                                0);
  if ( !v1430 )
  {
    v820 = GetLastError();
    v819 = v820;
    if ( v820 > 0 )
      v819 = (unsigned __int16)v820 | 0x80070000;
    if ( v819 >= 0 )
      v819 = -2147467259;
    goto LABEL_1099;
  }
  v821 = ((__int64 (__fastcall *)(unsigned __int16 *, __int64, _BYTE *))off_1800B3068[0])(v1430, 104LL, v1764);
  v822 = 0LL;
  if ( v821 )
    v822 = v1765;
  DWORD2(v1795) = DWORD2(v1786) - v1786;
  HIDWORD(v1795) = HIDWORD(v1786) - DWORD1(v1786);
  v1383 = v822;
  off_1800B3078(v818, (int)v1430);
  ((void (__fastcall *)(WARBIRD_DELAY_LOAD *, __int64))off_1800B3080)(v818, 1LL);
  v1355 = (unsigned __int16 *)((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, unsigned __int16 *))off_1800B3078)(
                                v818,
                                v1354);
  v823 = ((__int64 (__fastcall *)(_QWORD))off_1800B3070[0])(0LL);
  ((void (__fastcall *)(WARBIRD_DELAY_LOAD *, __int128 *, __int64))off_1800B30E8[0])(v818, &v1795, v823);
  ((void (__fastcall *)(WARBIRD_DELAY_LOAD *, void *, __int64, __int128 *, int, _QWORD))off_1800B30D8)(
    v818,
    v1367,
    0xFFFFFFFFLL,
    &v1795,
    v1472,
    0LL);
  if ( v1487 == 1 )
  {
    if ( v1409 )
    {
      v824 = ((__int64 (__fastcall *)(__int64))off_1800B3118[0])(8LL);
      goto LABEL_1079;
    }
    v1473 = 0xFFFFFF;
  }
  else
  {
    v824 = -5723992;
LABEL_1079:
    v1473 = v824;
    v1445 = v824;
  }
  v825 = 0;
  v826 = -(int)v1786;
  v827 = 0;
  if ( (int)v1786 >= 0 )
  {
    v825 = v1786;
    v826 = 0;
  }
  v828 = -DWORD1(v1786);
  if ( (SDWORD1(v1786) & 0x80000000) == 0 )
  {
    v827 = DWORD1(v1786);
    v828 = 0;
  }
  v829 = DWORD2(v1795) - v826;
  if ( DWORD2(v1795) - v826 >= v1420 - v825 )
    v829 = v1420 - v825;
  v830 = HIDWORD(v1795) - v828;
  if ( HIDWORD(v1795) - v828 >= v1343 - v827 )
    v830 = v1343 - v827;
  if ( v829 > 0 && v830 > 0 )
  {
    v831 = v829;
    v1410 = 0;
    v832 = &v1383[4 * v826 + 4 * (__int64)(DWORD2(v1795) * v828)];
    v1368 = (SIZE_T)v832;
    v833 = &v1392[2 * v825 + 2 * (__int64)(v827 * v1420)];
    v1384 = 4LL * SDWORD2(v1795);
    v1458 = 2LL * v1420;
    v1393 = v833;
    do
    {
      v834 = (unsigned __int8 *)(v832 + 2);
      v1488 = 0;
      v835 = (char *)v833 - v832;
      for ( i1 = 0; i1 < v831; v1488 = i1 )
      {
        if ( (unsigned __int8)((*v834 + *(v834 - 2) + 2 * (unsigned int)*(v834 - 1)) >> 2) != 0xFF )
        {
          v837 = (unsigned __int8)~((*v834 + *(v834 - 2) + 2 * (unsigned int)*(v834 - 1)) >> 2);
          v834[v835] -= ~((*v834 + *(v834 - 2) + 2 * (unsigned int)*(v834 - 1)) >> 2) * (v1445 - v834[v835]);
          v838 = v834[v835 - 1];
          v839 = (unsigned __int64)(2155905153LL * v837 * (BYTE1(v1473) - v838)) >> 32;
          v834[v835 - 1] = v838 + (v839 >> 7 < 0) + (v839 >> 7);
          v840 = v834[v835 - 2];
          v841 = (unsigned __int64)(2155905153LL * v837 * (BYTE2(v1473) - v840)) >> 32;
          v834[v835 - 2] = v840 + (v841 >> 7 < 0) + (v841 >> 7);
          i1 = v1488;
          v834[v835 + 1] += v837 * (255 - v834[v835 + 1]) / 255;
        }
        ++i1;
        v834 += 4;
      }
      v832 = (char *)(v1384 + v1368);
      v833 = &v1393[v1458];
      v1368 += v1384;
      v1393 = (unsigned __int16 *)((char *)v1393 + v1458 * 2);
      ++v1410;
    }
    while ( v1410 < v830 );
    v90 = v1481;
  }
  ((void (__fastcall *)(unsigned __int16 *))off_1800B3038)(v1430);
  if ( v1355 )
    off_1800B3078(v818, (int)v1355);
LABEL_1099:
  ((void (__fastcall *)(WARBIRD_DELAY_LOAD *))off_1800B3030[0])(v818);
  if ( v819 >= 0 )
  {
    v842 = v1496;
    goto LABEL_1197;
  }
LABEL_1202:
  if ( v1606 )
    ((void (__fastcall *)(LPVOID))off_1800B3038)(v1606);
LABEL_1204:
  if ( v1778 )
  {
    v905 = -1LL;
    do
      ++v905;
    while ( *((_WORD *)v1778 + v905) );
    memset(v1778, 0, 2 * v905 + 2);
    MemoryFree(v1778);
    v1778 = 0LL;
  }
  if ( v1779 )
  {
    v906 = -1LL;
    do
      ++v906;
    while ( *((_WORD *)v1779 + v906) );
    memset(v1779, 0, 2 * v906 + 2);
    MemoryFree(v1779);
    v1779 = 0LL;
  }
  if ( v1780 )
  {
    v907 = -1LL;
    do
      ++v907;
    while ( *((_WORD *)v1780 + v907) );
    memset(v1780, 0, 2 * v907 + 2);
    MemoryFree(v1780);
    v1780 = 0LL;
  }
  if ( v1781 )
  {
    ((void (*)(void))off_1800B3038)();
    v1781 = 0LL;
  }
  if ( v1782 )
  {
    ((void (*)(void))off_1800B3038)();
    v1782 = 0LL;
  }
  if ( v1783 )
  {
    ((void (*)(void))off_1800B3038)();
    v1783 = 0LL;
  }
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v908 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount > 0 )
  {
    --g_WarbirdSecureFunctionsRefCount;
    if ( v908 == 1 )
    {
      v909 = (HMODULE *)&WARBIRD::g_arModuleInfo;
      v910 = 4LL;
      do
      {
        if ( *v909 )
          FreeLibrary(*v909);
        v909 += 3;
        --v910;
      }
      while ( v910 );
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      memcpy_0(&WARBIRD::g_FuncAddress, off_18008E410, 0x170uLL);
    }
  }
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  v1359 = g_WarbirdNotificationInformation;
  v1493 = ((__int64 (*)(void))off_1800B3098[0])() - g_WarbirdPaintInitTime;
  v1848 = 0LL;
  v1845 = 0LL;
  v1846 = 0LL;
  v1847 = 0LL;
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v911 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount )
    goto LABEL_1276;
  v1373 = 0;
  v1434 = 0;
  v1685 = 0LL;
  v1686 = 0LL;
  v912 = (char *)MemoryAlloc(0x338uLL);
  v1498 = v912;
  if ( !v912 )
    goto LABEL_1266;
  v913 = v912 + 7;
  v914 = 103LL;
  v915 = (unsigned __int8 *)&unk_180096FA2;
  v916 = 0;
  v917 = 0;
  v918 = 0;
  v919 = -1;
  do
  {
    v920 = *(v915 - 1) | (*(v915 - 2) << 8);
    v921 = v915[2] << 8;
    v922 = *v915;
    v915 += 8;
    v923 = *(v915 - 7) | ((v922 | (v920 << 8)) << 8);
    v924 = v923 ^ v918;
    v925 = *(v915 - 3) | ((*(v915 - 4) | ((*(v915 - 5) | v921) << 8)) << 8);
    v926 = v925 ^ v917 ^ v924 ^ 0xAC987321;
    v927 = (__ROL4__(v926, 10) + 4991 * __ROL4__(v926 + 1419157410, 5)) ^ v924;
    v928 = (43881 * __ROR4__(v927 + 133239679, 9) - __ROL4__(v927, 2)) ^ v926;
    v929 = (24670 * v928 - (v928 >> 13) - 123127970) ^ v927;
    v930 = (2033 * __ROL4__(v929 ^ 0xAB69, 6) - __ROL4__(v929, 2)) ^ v928;
    v931 = (133239679 - (v930 ^ 0xAB69605E)) ^ v929;
    v932 = (43881 * (v931 ^ 0x137F)) ^ __ROR4__(v931, 6) ^ v930;
    v933 = (__ROL4__(v932, 2) + 24670 * __ROR4__(v932 + 133239679, 15)) ^ v931;
    v934 = (2033 * __ROR4__(v933 + 1419157410, 14) - __ROL4__(v933, 8)) ^ v932;
    v935 = __ROR4__(v934, 10) ^ (4991 * __ROR4__(v934 ^ 0xAB69605E, 12)) ^ v933;
    v936 = v934 ^ (v935 >> 10) ^ (43881 * (v935 ^ 0x7F1));
    v937 = (2033 * (__ROR4__(~v936, 5) + 24670)) ^ v935;
    v938 = v936 ^ (v937 - 2033) ^ 0xAB69605E;
    v939 = ((v938 >> 2) + 4991 * __ROL4__(v936 ^ (v937 - 2033) ^ 0xAB6967AF, 2)) ^ v937;
    v940 = (__ROL4__(v939, 7) + 43881 * __ROR4__(v939 - 133239679, 6)) ^ v938;
    v941 = (24670 * (v940 ^ 0x137F) + __ROR4__(v940, 9)) ^ v939;
    v942 = (__ROL4__(v941, 7) + 2033 * __ROL4__(v941 ^ 0xAB69, 5)) ^ v940;
    v943 = v942 ^ v941 ^ 0xAC987321;
    v944 = (4991 * __ROR4__(v943, 3) - 219010071) ^ v942;
    v945 = (24670 * __ROR4__(v944 - 133239679, 1) - __ROR4__(v944, 6)) ^ v943;
    v946 = (__ROL4__(v945, 14) + 2033 * __ROL4__(v945 - 1419157410, 3)) ^ v944;
    v947 = (4991 * __ROL4__(v946 - 1419157410, 15) - __ROR4__(v946, 14)) ^ v945;
    v948 = (v947 >> 3) ^ (43881 * (v947 ^ 0x605E)) ^ v946;
    v949 = 24670 * __ROL4__(v948 ^ 0x7F1137F, 4);
    v950 = v948;
    v951 = v919 ^ v948;
    v919 = v925;
    v952 = v916 ^ __ROL4__(v950, 2) ^ v949;
    v916 = v923;
    v953 = v952 ^ v947;
    *(v913 - 4) = v953;
    *v913 = v951;
    v913 += 8;
    v954 = __ROR4__(v953, 8);
    *(v913 - 13) = v954;
    v955 = __ROR4__(v951, 8);
    *(v913 - 9) = v955;
    v956 = __ROR4__(v954, 8);
    *(v913 - 14) = v956;
    v957 = __ROR4__(v955, 8);
    *(v913 - 10) = v957;
    v958 = __ROR4__(v956, 8);
    v959 = __ROR4__(v957, 8);
    *(v913 - 15) = v958;
    *(v913 - 11) = v959;
    v917 = __ROR4__(v959, 8);
    v918 = __ROR4__(v958, 8);
    --v914;
  }
  while ( v914 );
  v960 = 0;
  v2 = 0;
  v90 = v1481;
  v961 = 0LL;
  v962 = 0;
  v963 = v1498;
  do
    v960 ^= *((_BYTE *)v1498 + v961++);
  while ( v961 < 0x338 );
  if ( v960 == 64LL )
  {
    v1685 = (LPCWSTR)v1498;
    v964 = 0;
    v963 = 0LL;
    v1686 = 824LL;
  }
  else
  {
    v964 = -1073425151;
  }
  if ( v963 )
    MemoryFree(v963);
  if ( v964 >= 0 )
  {
    v965 = v1685;
    HIBYTE(v1685[v1686 / 2 - 1]) = 0;
    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
    while ( *(_BYTE *)v965 )
    {
      v966 = v965;
      v967 = -1LL;
      do
        ++v967;
      while ( v965[v967] );
      v968 = &v965[v967];
      v969 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1434;
      if ( !GetModuleHandleExW(0, v966, (HMODULE *)v969) )
        goto LABEL_1266;
      v962 = 0;
      if ( **(_WORD **)v969 == 23117
        && (v970 = *(int *)(*(_QWORD *)v969 + 60LL), (unsigned int)v970 < 0x10000000)
        && (v971 = *(_QWORD *)v969 + v970, v971 >= *(_QWORD *)v969)
        && *(_DWORD *)v971 == 17744 )
      {
        if ( ((*(_WORD *)(v971 + 24) - 267) & 0xFEFF) != 0 )
        {
          v962 = -1073741811;
        }
        else
        {
          *(_QWORD *)(v969 + 12) = *(_QWORD *)(v971 + 136);
          *((_DWORD *)v969 + 2) = *(_DWORD *)(v971 + 80);
        }
      }
      else
      {
        v962 = -1073741701;
      }
      v972 = *(_DWORD *)(v968 + 1);
      v973 = 0;
      v965 = v968 + 3;
      v1398 = v972;
      for ( i2 = 0; v973 < v1398; i2 = v973 )
      {
        v974 = (const CHAR *)v965;
        v975 = -1LL;
        do
          ++v975;
        while ( *((_BYTE *)v965 + v975) );
        v965 = (LPCWSTR)((char *)v965 + v975 + 1);
        if ( v962 >= 0 )
        {
          v976 = (void **)GetProcAddress(*(HMODULE *)v969, v974);
          if ( !v976 )
            goto LABEL_1267;
          (&WARBIRD::g_FuncAddress)[v1373] = v976;
          v973 = i2;
        }
        ++v1373;
        ++v973;
      }
      ++v1434;
    }
  }
  else
  {
LABEL_1266:
    v962 = -1073741702;
  }
LABEL_1267:
  if ( v1685 )
  {
    v977 = GetProcessHeap();
    HeapFree(v977, 0, (LPVOID)v1685);
  }
  if ( v962 >= 0 )
  {
    v911 = g_WarbirdSecureFunctionsRefCount;
LABEL_1276:
    v980 = (HMODULE *)&WARBIRD::g_arModuleInfo;
    g_WarbirdSecureFunctionsRefCount = v911 + 1;
    goto LABEL_1277;
  }
  v978 = (HMODULE *)&WARBIRD::g_arModuleInfo;
  v979 = 4LL;
  do
  {
    if ( *v978 )
      FreeLibrary(*v978);
    v978 += 3;
    --v979;
  }
  while ( v979 );
  v980 = (HMODULE *)&WARBIRD::g_arModuleInfo;
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  memcpy_0(&WARBIRD::g_FuncAddress, off_18008E410, 0x170uLL);
LABEL_1277:
  v981 = 4LL;
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  LODWORD(v1848) = v1359;
  LODWORD(v1845) = v1493;
  v1844 = 1;
  LODWORD(v1846) = -1721306479;
  DWORD2(v1845) = 1;
  LODWORD(v1847) = 1;
  DWORD2(v1846) = 1;
  DWORD2(v1847) = 1;
  ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1800B30D0)(0LL, 8225LL, 4LL, &v1844);
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v982 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount > 0 )
  {
    --g_WarbirdSecureFunctionsRefCount;
    if ( v982 == 1 )
    {
      do
      {
        if ( *v980 )
          FreeLibrary(*v980);
        v980 += 3;
        --v981;
      }
      while ( v981 );
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      memcpy_0(&WARBIRD::g_FuncAddress, off_18008E410, 0x170uLL);
    }
  }
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  off_1800B3160[0](0LL, (int)v1496);
  v1437 = v1495;
LABEL_1286:
  SH<void *,SH_HANDLE>::Reset(&v1660);
  if ( v1564 )
  {
    v1494 = 0LL;
    v1733 = 0LL;
    *(_OWORD *)v1736 = 0LL;
    v1687 = &`WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher;
    v983 = 0LL;
    v984 = GetProcessHeap();
    v985 = HeapAlloc(v984, 8u, 0xA0uLL);
    if ( !v985 )
      goto LABEL_1668;
    v986 = v1687;
    v1494 = v985;
    *v985 = *v1687;
    v985[1] = v986[1];
    v985[2] = v986[2];
    v985[3] = v986[3];
    v985[4] = v986[4];
    v985[5] = v986[5];
    v985[6] = v986[6];
    v985[7] = v986[7];
    v985[8] = v986[8];
    v985[9] = v986[9];
    v1688 = &`WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
    v987 = GetProcessHeap();
    v988 = HeapAlloc(v987, 8u, 8uLL);
    v983 = v988;
    if ( !v988 )
    {
      v983 = 0LL;
      goto LABEL_1668;
    }
    v1498 = v988;
    *v988 = *v1688;
    v1689 = __rdtsc();
    v1567 = 0;
    if ( (int)RtlUIntAdd(4LL, 4LL, &v1568) >= 0
      && (int)RtlUIntAdd(0LL, v1568, &v1567) >= 0
      && (int)RtlUIntAdd(v989, 160LL, &v1569) >= 0 )
    {
      v990 = RtlUIntAdd(v1567, v1569, &v1567);
      if ( (v992 | v990) >= 0 && (int)RtlUIntAdd(v991, 8LL, &v1570) >= 0 )
      {
        v993 = RtlUIntAdd(v1567, v1570, &v1567);
        if ( (v995 | v993) >= 0 && (int)RtlUIntAdd(v994, 8LL, v1571) >= 0 )
        {
          v1571[1] = v1571[0];
          v996 = RtlUIntAdd(v1567, v1571[0], &v1567);
          if ( (v997 | v996) >= 0 )
          {
            HIDWORD(v1732) = v1567;
            v998 = v1567;
            v999 = GetProcessHeap();
            v1000 = HeapAlloc(v999, 8u, v998);
            v1001 = v1000;
            if ( v1000 )
            {
              v1733 = v1000;
              LODWORD(v1732) = 0;
              v1572 = 4;
              if ( (int)RtlULongLongAdd(v1000, 4LL, &v1737) >= 0
                && v1001 + 2 <= (_DWORD *)((char *)v1001 + HIDWORD(v1732)) )
              {
                v1003 = v1737;
                *v1001 = v1002;
                *v1003 = v1572;
                v1004 = v1732 + 1;
                LODWORD(v1732) = v1732 + 1;
                if ( !v1733 )
                {
                  if ( (int)RtlUIntAdd((unsigned int)v1002, 160LL, &v1573) >= 0 )
                  {
                    v1574 = v1573;
                    if ( (int)RtlUIntAdd(HIDWORD(v1732), v1573, (char *)&v1732 + 4) >= 0 )
                    {
                      v1006 = v1005 - 3;
                      v1007 = v1005 - 3 + v1732;
                      LODWORD(v1732) = v1007;
                      goto LABEL_1311;
                    }
                  }
                  goto LABEL_1668;
                }
                v1008 = v1733;
                v1690 = v1733;
                if ( v1004 )
                {
                  while ( (int)RtlUIntAdd((unsigned int)v1002, (unsigned int)*v1008, &v1575) >= 0 )
                  {
                    v1574 = v1575;
                    if ( (int)RtlULongLongAdd(v1008, v1575, &v1690) < 0 )
                      break;
                    v1008 = v1690;
                    if ( v1009 + 1 >= v1010 )
                      goto LABEL_1308;
                  }
                  goto LABEL_1668;
                }
LABEL_1308:
                v1011 = RtlULongLongAdd(v1008, v1002, &v1719);
                if ( v1011 < 0 || v1008 + 41 > (_DWORD *)((char *)v1733 + HIDWORD(v1732)) )
                  goto LABEL_1668;
                v1012 = v1719;
                *v1008 = 160;
                *v1012 = *v985;
                v1012[1] = v985[1];
                v1012[2] = v985[2];
                v1012[3] = v985[3];
                v1012[4] = v985[4];
                v1012[5] = v985[5];
                v1012[6] = v985[6];
                v1012[7] = v985[7];
                v1012[8] = v985[8];
                v1013 = v985[9];
                v1006 = 1;
                v1012[9] = v1013;
                v1007 = v1732 + 1;
                LODWORD(v1732) = v1732 + 1;
LABEL_1311:
                if ( v1733 )
                {
                  v1016 = (unsigned int *)v1733;
                  v1691 = (unsigned int *)v1733;
                  if ( v1007 )
                  {
                    while ( (int)RtlUIntAdd((unsigned int)v1005, *v1016, &v1578) >= 0 )
                    {
                      v1577 = v1578;
                      if ( (int)RtlULongLongAdd(v1017, v1578, &v1691) < 0 )
                        break;
                      v1016 = v1691;
                      if ( v1006 + v1018 >= v1007 )
                        goto LABEL_1319;
                    }
                    goto LABEL_1668;
                  }
LABEL_1319:
                  v1019 = RtlULongLongAdd(v1016, v1005, &v1721);
                  if ( v1019 < 0 || v1020 + 3 > (_DWORD *)((char *)v1733 + HIDWORD(v1732)) )
                    goto LABEL_1668;
                  v1021 = v1721;
                  *v1020 = 8;
                  *v1021 = *v983;
                  v1015 = v1006 + v1732;
                  LODWORD(v1732) = v1006 + v1732;
                }
                else
                {
                  if ( (int)RtlUIntAdd((unsigned int)v1005, 8LL, &v1576) < 0 )
                    goto LABEL_1668;
                  v1577 = v1576;
                  if ( (int)RtlUIntAdd(HIDWORD(v1732), v1576, (char *)&v1732 + 4) < 0 )
                    goto LABEL_1668;
                  v1015 = v1006 + v1732;
                  LODWORD(v1732) = v1006 + v1732;
                }
                v1692 = v1689;
                if ( v1733 )
                {
                  v1023 = (unsigned int *)v1733;
                  v1693 = (unsigned int *)v1733;
                  if ( v1015 )
                  {
                    while ( (int)RtlUIntAdd((unsigned int)v1014, *v1023, &v1581) >= 0 )
                    {
                      v1596 = v1581;
                      if ( (int)RtlULongLongAdd(v1024, v1581, &v1693) < 0 )
                        break;
                      v1023 = v1693;
                      if ( v1006 + v1025 >= v1015 )
                        goto LABEL_1330;
                    }
                    goto LABEL_1668;
                  }
LABEL_1330:
                  if ( (int)RtlULongLongAdd(v1023, v1014, &v1720) < 0
                    || v1026 + 3 > (_DWORD *)((char *)v1733 + HIDWORD(v1732)) )
                  {
                    goto LABEL_1668;
                  }
                  v1027 = v1720;
                  *v1026 = 8;
                  *v1027 = v1692;
                }
                else
                {
                  if ( (int)RtlUIntAdd((unsigned int)v1014, 8LL, &v1579) < 0 )
                    goto LABEL_1668;
                  v1596 = v1579;
                  if ( (int)RtlUIntAdd(HIDWORD(v1732), v1579, (char *)&v1732 + 4) < 0 )
                    goto LABEL_1668;
                }
                LODWORD(v1732) = v1006 + v1732;
                if ( (int)RtlUIntAdd(v1022, v1022, &v1582) < 0 )
                  goto LABEL_1668;
                v1029 = v1582;
                v1583 = v1582;
                if ( (int)RtlUIntAdd(v1028, 8LL, v1584) < 0 )
                  goto LABEL_1668;
                v1584[1] = v1584[0];
                if ( (int)RtlUIntAdd(v1029, v1584[0], &v1583) < 0 )
                  goto LABEL_1668;
                v1360 = v1583;
                v1504 = 0LL;
                v1030 = 0LL;
                v1374 = 0;
                v1694 = 0LL;
                v1503 = 0LL;
                v1399 = 0;
                v1502 = 0LL;
                v1585 = 0LL;
                v1497 = 0LL;
                v1606 = 0LL;
                v1695 = __rdtsc();
                v1586 = 8;
                v1031 = RtlUIntAdd(8LL, HIDWORD(v1732), &v1586);
                if ( v1031 >= 0 )
                {
                  v1034 = (v1586 + 7) & 0xFFFFFFF8;
                  if ( v1034 >= v1586 )
                  {
                    v1586 = (v1586 + 7) & 0xFFFFFFF8;
                    v1035 = v1034;
                    v1036 = GetProcessHeap();
                    v1037 = HeapAlloc(v1036, 8u, v1035);
                    if ( v1037 )
                    {
                      v1696 = v1037;
                      *v1037 = v1732;
                      v1031 = RtlULongLongAdd(v1037, 4LL, &v1696);
                      if ( v1031 < 0
                        || (v1039 = v1696,
                            *(_DWORD *)v1696 = HIDWORD(v1732),
                            v1031 = RtlULongLongAdd(v1039, v1038, &v1696),
                            v1031 < 0) )
                      {
                        v1033 = 0LL;
                        v1032 = 0;
                      }
                      else
                      {
                        *(_QWORD *)((char *)v1037 + v1586 - 8) = v1695;
                        memcpy_0(v1696, v1733, HIDWORD(v1732));
                        v1032 = v1586;
                        v1033 = v1037;
                        v1504 = v1037;
                        v1037 = 0LL;
                        v1374 = v1586;
                      }
                      if ( v1037 )
                      {
                        v1040 = GetProcessHeap();
                        HeapFree(v1040, 0, v1037);
                        v1032 = v1374;
                        v1033 = v1504;
                      }
                    }
                    else
                    {
                      v1031 = -1073741801;
                      v1032 = 0;
                      v1033 = 0LL;
                    }
                  }
                  else
                  {
                    v1031 = -1073741675;
                  }
                }
                v1041 = v1031 | 0x10000000;
                if ( v1041 < 0 )
                  goto LABEL_1623;
                v1697 = 0LL;
                v1042 = 0LL;
                v1496 = 0LL;
                if ( v1033 )
                {
                  v1044 = v1032;
                  v1463 = v1032;
                  if ( v1032
                    && (Srcd = (void *)(v1032 + 8LL),
                        v1495 = MemoryAlloc((unsigned __int64)Srcd),
                        (v1045 = (char *)v1495) != 0LL) )
                  {
                    v1046 = (unsigned __int8 *)v1504;
                    v1047 = 0;
                    v1337 = 0;
                    v1048 = 0LL;
                    if ( v1044 )
                    {
                      do
                        v1047 ^= *((_BYTE *)v1504 + v1048++);
                      while ( v1048 < v1044 );
                      v1337 = v1047;
                    }
                    v1049 = -1;
                    v1793 = 0xC81ECB17B1B54A58uLL;
                    v1375 = 0;
                    v1435 = 0;
                    v1050 = v1495;
                    v1051 = 0;
                    v1052 = v1044 & 7;
                    if ( (v1044 & 7) != 0 )
                    {
                      v1435 = 0;
                      v1053 = 0;
                      v1054 = 0;
                      v1055 = 56;
                      do
                      {
                        v1056 = *v1046++;
                        if ( v1054 >= 4 )
                        {
                          v1057 = v1435;
                          v1053 |= v1056 << v1055;
                        }
                        else
                        {
                          v1057 = (v1056 << (v1055 - 32)) | v1435;
                          v1435 = v1057;
                        }
                        ++v1054;
                        v1055 -= 8;
                      }
                      while ( v1054 < (int)v1052 );
                      v1044 = v1463;
                      v1375 = v1053;
                      v1051 = v1057 ^ 0xB17A307A;
                      v1058 = v1053 ^ 0x42F6B18D;
                      v1059 = v1057 ^ 0xB17A307A;
                      v1060 = v1053 ^ 0x42F6B18D;
                      if ( v1052 )
                      {
                        for ( i3 = 0; i3 < (int)v1052; ++i3 )
                        {
                          if ( i3 >= 4 )
                          {
                            v1060 = __ROL4__(v1060, 8);
                            v1062 = v1060;
                          }
                          else
                          {
                            v1059 = __ROL4__(v1059, 8);
                            v1062 = v1059;
                          }
                          *v1050++ = v1062;
                        }
                        v90 = v1481;
                        v1030 = 0LL;
                      }
                      if ( v1052 <= 4 )
                      {
                        v1049 = 0;
                        if ( v1052 < 4 )
                          v1051 = v1051 >> (8 * (4 - v1052)) << (8 * (4 - v1052));
                      }
                      else
                      {
                        v1049 = v1058 >> (8 * (8 - v1052)) << (8 * (8 - v1052));
                      }
                      v1045 = (char *)v1495;
                    }
                    if ( v1044 >> 3 )
                    {
                      v1063 = v1050 + 7;
                      v1064 = v1375;
                      v1065 = v1044 >> 3;
                      v1066 = v1435;
                      v1067 = WORD2(v1793);
                      v1387 = HIWORD(v1793);
                      v1460 = WORD1(v1793);
                      v1068 = v1046 + 2;
                      do
                      {
                        v1069 = *(v1068 - 1) | (*(v1068 - 2) << 8);
                        v1070 = v1068[2] << 8;
                        v1071 = *v1068;
                        v1068 += 8;
                        v1072 = *(v1068 - 7) | ((v1071 | (v1069 << 8)) << 8);
                        v1073 = *(v1068 - 3) | ((*(v1068 - 4) | ((*(v1068 - 5) | v1070) << 8)) << 8);
                        v1074 = v1073 ^ v1049;
                        v1075 = v1072 ^ HIDWORD(v1793) ^ (v1074 - 19032) ^ v1051;
                        v1076 = (__ROR4__(v1075, 7) + WORD1(v1793) * __ROR4__(HIDWORD(v1793) ^ v1075, 15)) ^ v1074;
                        v1077 = (v1067 * __ROR4__(v1076 - 1313519016, 9) - __ROR4__(v1076, 10)) ^ v1075;
                        v1078 = (__ROL4__(v1077, 5) + HIWORD(v1793) * __ROL4__(v1067 ^ v1077, 4)) ^ v1076;
                        v1079 = (HIDWORD(v1793) - (v1078 ^ 0xB1B54A58)) ^ v1077;
                        v1080 = (WORD1(v1793) * (v1079 - 19032) - (v1079 >> 6)) ^ v1078;
                        v1081 = (19032 * (v1067 ^ __ROR4__(v1080, 15))) ^ v1079;
                        v1082 = (v1067 * (HIWORD(v1793) + __ROR4__(~v1081, 3))) ^ v1080;
                        v1083 = (v1082 - 19032 - HIDWORD(v1793)) ^ v1081;
                        v1084 = (v1460 * (v1387 ^ v1083)) ^ __ROR4__(v1083, 10) ^ v1082;
                        v1085 = __ROR4__(v1084, 3) ^ (v1067 * __ROL4__(v1084 ^ 0x4A58, 6)) ^ v1083;
                        v1086 = (19032 * (__ROR4__(v1085, 15) - HIWORD(v1793))) ^ v1084;
                        v1087 = (v1086 >> 15) ^ (19032 * __ROL4__(v1086 - v1067, 3)) ^ (v1086 >> 1) ^ (19032 * (HIWORD(v1793) ^ v1086)) ^ v1085;
                        v1088 = (WORD1(v1793) * (v1087 - v1067) - (v1087 >> 13)) ^ v1086;
                        v1089 = __ROR4__(v1088, 11) ^ (v1067 * __ROR4__(-1313519016 - v1088, 9)) ^ v1087;
                        v1090 = (v1089 + 1313519016 - HIWORD(v1793)) ^ v1088;
                        v1091 = (19032 * (v1460 ^ v1090) - __ROR4__(v1090, 7)) ^ v1089;
                        v1092 = (WORD1(v1793) * __ROL4__(HIWORD(v1793) ^ v1091, 4) - __ROR4__(v1091, 16)) ^ v1090;
                        v1093 = (__ROR4__(v1092, 4) + v1067 * __ROR4__(-1313519016 - v1092, 10)) ^ v1091;
                        v1094 = __ROR4__(v1093, 9) ^ (HIWORD(v1793) * __ROR4__(v1093 + 1313519016, 4)) ^ v1092;
                        v1095 = (19032 * __ROL4__(v1094 ^ HIDWORD(v1793), 8) - __ROL4__(v1094, 2)) ^ v1093;
                        v1096 = (WORD1(v1793) * __ROR4__(HIDWORD(v1793) - v1095, 11) - __ROR4__(v1095, 12)) ^ v1094;
                        v1097 = (v1096 >> 8) ^ (v1067 * (v1096 ^ WORD1(v1793))) ^ v1095;
                        v1098 = v1097 ^ v1096 ^ 0xB1B54A58;
                        v1099 = v1066 ^ v1097;
                        v1100 = HIDWORD(v1793) ^ v1098;
                        v1066 = v1072;
                        *(v1063 - 4) = v1099;
                        v1101 = v1064 ^ v1100;
                        *v1063 = v1101;
                        v1064 = v1073;
                        v1102 = __ROR4__(v1099, 8);
                        *(v1063 - 5) = v1102;
                        v1063 += 8;
                        v1103 = __ROR4__(v1101, 8);
                        *(v1063 - 9) = v1103;
                        v1104 = __ROR4__(v1102, 8);
                        *(v1063 - 14) = v1104;
                        v1105 = __ROR4__(v1103, 8);
                        *(v1063 - 10) = v1105;
                        v1106 = __ROR4__(v1104, 8);
                        v1107 = __ROR4__(v1105, 8);
                        *(v1063 - 15) = v1106;
                        *(v1063 - 11) = v1107;
                        v1049 = __ROR4__(v1107, 8);
                        v1051 = __ROR4__(v1106, 8);
                        --v1065;
                      }
                      while ( v1065 );
                      v1047 = v1337;
                      v2 = 0;
                      v90 = v1481;
                      v1030 = 0LL;
                      v1044 = v1463;
                      v1045 = (char *)v1495;
                    }
                    *(_QWORD *)&v1045[v1044] = v1047;
                    v1698 = Srcd;
                    v1697 = v1045;
                    v1699 = &`WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                    v1700 = 8LL;
                    v1702 = 160LL;
                    v1701 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher;
                    v1108 = GetProcessHeap();
                    v1109 = HeapAlloc(v1108, 8u, 0x30uLL);
                    v1110 = v1109;
                    if ( v1109 )
                    {
                      *v1109 = (_DWORD)Srcd;
                      v1112 = GetProcessHeap();
                      v1113 = HeapAlloc(v1112, 8u, (unsigned int)Srcd);
                      if ( !v1113 )
                        goto LABEL_1383;
                      *((_QWORD *)v1110 + 1) = v1113;
                      memcpy_0(v1113, v1495, (unsigned int)Srcd);
                      v1110[4] = 160;
                      v1114 = GetProcessHeap();
                      v1115 = HeapAlloc(v1114, 8u, 0xA0uLL);
                      if ( !v1115 )
                        goto LABEL_1383;
                      *((_QWORD *)v1110 + 3) = v1115;
                      *v1115 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
                      v1115[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
                      v1115[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
                      v1115[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
                      v1115[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
                      v1115[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
                      v1115[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
                      v1115[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
                      v1115[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
                      v1115[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
                      v1110[8] = 8;
                      v1116 = GetProcessHeap();
                      v1117 = HeapAlloc(v1116, 8u, 8uLL);
                      if ( v1117 )
                      {
                        *((_QWORD *)v1110 + 5) = v1117;
                        v1111 = v1110;
                        v1496 = v1110;
                        v1043 = 0;
                        *v1117 = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                        v1110 = 0LL;
                      }
                      else
                      {
LABEL_1383:
                        v1043 = -1073741801;
                        v1111 = 0LL;
                      }
                      if ( v1110 )
                      {
                        v1464 = (void *)*((_QWORD *)v1110 + 1);
                        if ( v1464 )
                        {
                          v1118 = GetProcessHeap();
                          HeapFree(v1118, 0, v1464);
                          *((_QWORD *)v1110 + 1) = 0LL;
                        }
                        v1465 = (void *)*((_QWORD *)v1110 + 3);
                        if ( v1465 )
                        {
                          v1119 = GetProcessHeap();
                          HeapFree(v1119, 0, v1465);
                          *((_QWORD *)v1110 + 3) = 0LL;
                        }
                        v1466 = (void *)*((_QWORD *)v1110 + 5);
                        if ( v1466 )
                        {
                          v1120 = GetProcessHeap();
                          HeapFree(v1120, 0, v1466);
                          *((_QWORD *)v1110 + 5) = 0LL;
                        }
                        v1121 = GetProcessHeap();
                        HeapFree(v1121, 0, v1110);
                      }
                    }
                    else
                    {
                      v1043 = -1073741801;
                      v1111 = 0LL;
                    }
                    if ( v1043 < 0 )
                    {
                      v1042 = v1496;
                    }
                    else
                    {
                      v1694 = v1111;
                      v1042 = 0LL;
                    }
                  }
                  else
                  {
                    v1043 = -1073741823;
                  }
                  v1122 = v1697;
                  if ( v1697 )
                  {
                    v1123 = GetProcessHeap();
                    HeapFree(v1123, 0, v1122);
                    v1697 = 0LL;
                  }
                  if ( v1042 )
                  {
                    v1124 = (void *)v1042[1];
                    if ( v1124 )
                    {
                      v1125 = GetProcessHeap();
                      HeapFree(v1125, 0, v1124);
                      v1042[1] = 0LL;
                    }
                    v1126 = (void *)v1042[3];
                    if ( v1126 )
                    {
                      v1127 = GetProcessHeap();
                      HeapFree(v1127, 0, v1126);
                      v1042[3] = 0LL;
                    }
                    v1128 = (void *)v1042[5];
                    if ( v1128 )
                    {
                      v1129 = GetProcessHeap();
                      HeapFree(v1129, 0, v1128);
                      v1042[5] = 0LL;
                    }
                    v1130 = GetProcessHeap();
                    HeapFree(v1130, 0, v1042);
                  }
                }
                else
                {
                  v1043 = -1073741811;
                }
                v1041 = v1043 | 0x10000000;
                if ( v1041 < 0 )
                  goto LABEL_1623;
                v1131 = (const void **)v1694;
                v1587 = 4;
                v1132 = RtlUIntAdd(4LL, *(unsigned int *)v1694, &v1587);
                if ( v1132 < 0
                  || (v1132 = RtlUIntAdd(v1587, v1133, &v1587), v1132 < 0)
                  || (v1132 = RtlUIntAdd(v1587, *((unsigned int *)v1131 + 4), &v1587), v1132 < 0)
                  || (v1132 = RtlUIntAdd(v1587, v1134, &v1587), v1132 < 0) )
                {
                  v1135 = v1588;
                }
                else
                {
                  v1132 = RtlUIntAdd(v1587, *((unsigned int *)v1131 + 8), &v1587);
                  v1135 = v1588;
                  if ( v1132 >= 0 )
                    v1135 = v1587;
                  v1588 = v1135;
                }
                if ( v1132 >= 0 )
                {
                  v1136 = v1135;
                  v1137 = GetProcessHeap();
                  v1138 = HeapAlloc(v1137, 8u, v1136);
                  if ( v1138 )
                  {
                    *v1138 = *(_DWORD *)v1131;
                    v1703 = v1138;
                    v1132 = RtlULongLongAdd(v1138, 4LL, &v1703);
                    if ( v1132 >= 0 )
                    {
                      memcpy_0(v1703, v1131[1], *(unsigned int *)v1131);
                      v1132 = RtlULongLongAdd(v1703, *(unsigned int *)v1131, &v1703);
                      if ( v1132 >= 0 )
                      {
                        v1139 = v1703;
                        *(_DWORD *)v1703 = *((_DWORD *)v1131 + 4);
                        v1132 = RtlULongLongAdd(v1139, 4LL, &v1703);
                        if ( v1132 >= 0 )
                        {
                          memcpy_0(v1703, v1131[3], *((unsigned int *)v1131 + 4));
                          v1132 = RtlULongLongAdd(v1703, *((unsigned int *)v1131 + 4), &v1703);
                          if ( v1132 >= 0 )
                          {
                            v1140 = v1703;
                            *(_DWORD *)v1703 = *((_DWORD *)v1131 + 8);
                            v1132 = RtlULongLongAdd(v1140, 4LL, &v1703);
                            if ( v1132 >= 0 )
                            {
                              memcpy_0(v1703, v1131[5], *((unsigned int *)v1131 + 8));
                              v1132 = RtlULongLongAdd(v1703, *((unsigned int *)v1131 + 8), &v1703);
                              if ( v1132 >= 0 )
                              {
                                v1503 = v1138;
                                v1138 = 0LL;
                                v1399 = v1588;
                              }
                            }
                          }
                        }
                      }
                    }
                    if ( v1138 )
                    {
                      v1141 = GetProcessHeap();
                      HeapFree(v1141, 0, v1138);
                    }
                  }
                  else
                  {
                    v1132 = -1073741801;
                  }
                }
                v1041 = v1132 | 0x10000000;
                if ( v1041 < 0 )
                {
LABEL_1623:
                  v1295 = v1504;
                  if ( v1504 )
                  {
                    v1296 = GetProcessHeap();
                    HeapFree(v1296, 0, v1295);
                  }
                  v1297 = v1694;
                  if ( v1694 )
                  {
                    v1298 = (void *)*((_QWORD *)v1694 + 1);
                    if ( v1298 )
                    {
                      v1299 = GetProcessHeap();
                      HeapFree(v1299, 0, v1298);
                      v1297[1] = 0LL;
                    }
                    v1300 = (void *)v1297[3];
                    if ( v1300 )
                    {
                      v1301 = GetProcessHeap();
                      HeapFree(v1301, 0, v1300);
                      v1297[3] = 0LL;
                    }
                    v1302 = (void *)v1297[5];
                    if ( v1302 )
                    {
                      v1303 = GetProcessHeap();
                      HeapFree(v1303, 0, v1302);
                      v1297[5] = 0LL;
                    }
                    v1304 = GetProcessHeap();
                    HeapFree(v1304, 0, v1297);
                    v1694 = 0LL;
                  }
                  v1305 = v1503;
                  if ( v1503 )
                  {
                    v1306 = GetProcessHeap();
                    HeapFree(v1306, 0, v1305);
                  }
                  v1307 = v1502;
                  if ( v1502 )
                  {
                    v1308 = GetProcessHeap();
                    HeapFree(v1308, 0, v1307);
                  }
                  if ( v1030 )
                  {
                    v1309 = (void *)*((_QWORD *)v1030 + 1);
                    if ( v1309 )
                    {
                      v1310 = GetProcessHeap();
                      HeapFree(v1310, 0, v1309);
                      *((_QWORD *)v1030 + 1) = 0LL;
                    }
                    v1311 = (void *)*((_QWORD *)v1030 + 3);
                    if ( v1311 )
                    {
                      v1312 = GetProcessHeap();
                      HeapFree(v1312, 0, v1311);
                      *((_QWORD *)v1030 + 3) = 0LL;
                    }
                    v1313 = (void *)*((_QWORD *)v1030 + 5);
                    if ( v1313 )
                    {
                      v1314 = GetProcessHeap();
                      HeapFree(v1314, 0, v1313);
                      *((_QWORD *)v1030 + 5) = 0LL;
                    }
                    v1315 = GetProcessHeap();
                    HeapFree(v1315, 0, v1030);
                  }
                  v1316 = v1606;
                  if ( v1606 )
                  {
                    v1317 = GetProcessHeap();
                    HeapFree(v1317, 0, v1316);
                  }
                  if ( v1041 >= 0 )
                  {
                    if ( LODWORD(v1736[0]) )
                    {
                      v1318 = (unsigned int *)v1736[1];
                      if ( v1736[1] )
                      {
                        v1715[0] = v1736[1];
                        if ( (int)RtlULongLongAdd(v1736[1], 4LL, v1715) >= 0 )
                        {
                          v1322 = (int *)v1715[0];
                          v1598[1] = v1320;
                          if ( !v1320 )
                            v1322 = 0LL;
                          v1715[0] = v1322;
                          v1715[1] = v1322;
                          if ( v1320 == (_DWORD)v1321 )
                          {
                            v1599 = *v1322;
                            if ( v1599 >= 0 && v1319 > 1 )
                            {
                              for ( v1716[0] = v1318;
                                    (int)RtlULongLongAdd(v1318, v1321, v1716) >= 0
                                 && (int)RtlULongLongAdd(v1716[0], *v1318, v1716) >= 0;
                                    v1318 = (unsigned int *)v1716[0] )
                              {
                                if ( v1323 != -1 )
                                {
                                  v1324 = *(_DWORD *)v1716[0];
                                  if ( (int)RtlULongLongAdd(v1716[0], v1321, v1716) >= 0 )
                                  {
                                    v1325 = (_QWORD *)v1716[0];
                                    v1600 = v1324;
                                    if ( !v1324 )
                                      v1325 = 0LL;
                                    v1716[0] = v1325;
                                    v1716[1] = v1325;
                                    if ( v1324 == 8 )
                                      v1716[2] = *v1325;
                                  }
                                  break;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  v983 = v1498;
                  goto LABEL_1668;
                }
                v1704 = 0LL;
                v1589 = 0;
                v1705 = 0LL;
                v1590 = 0;
                v1591 = 8;
                v1142 = RtlUIntAdd(8LL, v1360, &v1591);
                v1041 = v1144 | v1142;
                if ( (v1144 | v1142) >= 0 )
                {
                  v1145 = (v1591 + 7) & 0xFFFFFFF8;
                  if ( v1145 >= v1591 )
                  {
                    v1593 = (v1591 + 7) & 0xFFFFFFF8;
                    v1146 = RtlUIntAdd(v1145, v1143, &v1593);
                    v1147 = v1592;
                    v1041 = v1146;
                    if ( v1146 >= 0 )
                      v1147 = v1593;
                    v1592 = v1147;
                  }
                  else
                  {
                    v1041 = -1073741675;
                  }
                  if ( v1041 >= 0 )
                  {
                    if ( !v1733 || (unsigned int)v1732 <= 1 )
                      goto LABEL_1445;
                    v1148 = (unsigned int *)v1733;
                    v1149 = 0;
                    v1706 = (unsigned int *)v1733;
                    while ( 1 )
                    {
                      v1150 = *v1148;
                      v1041 = RtlULongLongAdd(v1148, 4LL, &v1706);
                      if ( v1041 < 0 )
                        break;
                      v1041 = RtlULongLongAdd(v1706, v1150, &v1706);
                      if ( v1041 < 0 )
                        break;
                      v1148 = v1706;
                      if ( ++v1149 )
                      {
                        v1151 = *v1706;
                        v1041 = RtlULongLongAdd(v1706, 4LL, &v1706);
                        if ( v1041 >= 0 )
                        {
                          v1152 = v1706;
                          v1589 = v1151;
                          if ( !v1151 )
                            v1152 = 0LL;
                          v1706 = v1152;
                          v1704 = v1152;
                        }
                        break;
                      }
                    }
                    if ( v1041 < 0 )
                      goto LABEL_1623;
                    if ( (unsigned int)v1732 > 2 )
                    {
                      v1153 = (unsigned int *)v1733;
                      v1154 = 0;
                      v1707 = (unsigned int *)v1733;
                      while ( 1 )
                      {
                        v1155 = *v1153;
                        v1041 = RtlULongLongAdd(v1153, 4LL, &v1707);
                        if ( v1041 < 0 )
                          break;
                        v1041 = RtlULongLongAdd(v1707, v1155, &v1707);
                        if ( v1041 < 0 )
                          break;
                        v1153 = v1707;
                        if ( (unsigned int)++v1154 >= 2 )
                        {
                          v1157 = *v1707;
                          v1041 = RtlULongLongAdd(v1707, 4LL, &v1707);
                          if ( v1041 >= 0 )
                          {
                            v1158 = v1707;
                            v1590 = v1157;
                            if ( !v1157 )
                              v1158 = 0LL;
                            v1707 = v1158;
                            v1705 = v1158;
                          }
                          break;
                        }
                      }
                      if ( v1041 >= 0 )
                      {
                        v1594 = 4;
                        v1041 = RtlUIntAdd(4LL, v1156, &v1594);
                        if ( v1041 < 0
                          || (v1041 = RtlUIntAdd(v1594, 4LL, &v1594), v1041 < 0)
                          || (v1041 = RtlUIntAdd(v1594, v1159, &v1594), v1041 < 0)
                          || (v1041 = RtlUIntAdd(v1594, 4LL, &v1594), v1041 < 0) )
                        {
                          v1161 = v1595;
                        }
                        else
                        {
                          v1041 = RtlUIntAdd(v1594, v1160, &v1594);
                          v1161 = v1595;
                          if ( v1041 >= 0 )
                            v1161 = v1594;
                          v1595 = v1161;
                        }
                        if ( v1041 >= 0 )
                        {
                          if ( v1161 > 0x400000 )
                          {
                            v1041 = -2147418113;
                            goto LABEL_1623;
                          }
                          LODWORD(v1585) = v1161;
                        }
                      }
                    }
                    else
                    {
LABEL_1445:
                      v1041 = -1073741811;
                    }
                  }
                }
                if ( v1041 < 0 )
                  goto LABEL_1623;
                v1162 = v1585;
                v1163 = GetProcessHeap();
                v1164 = (int *)HeapAlloc(v1163, 8u, v1162);
                if ( v1164 )
                {
                  v1165 = v1164;
                  v1502 = v1164;
                  v1041 = 0x10000000;
                }
                else
                {
                  v1041 = -805306345;
                  v1165 = 0LL;
                }
                if ( v1041 < 0 )
                  goto LABEL_1623;
                if ( !v1503 || !v1165 )
                {
                  v1041 = -2147024809;
                  goto LABEL_1623;
                }
                v1743[0] = v1503;
                v1744 = v1399;
                v1745 = v1585;
                v1743[1] = v1165;
                v1746 = 0;
                if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                  && (v1166 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
                {
                  v1167 = ((__int64 (__fastcall *)(__int64, _QWORD *))v1166)(134LL, v1743);
                  v1168 = v1585;
                  v1041 = v1167 | 0x10000000;
                  if ( v1167 >= 0 )
                    v1168 = v1745;
                  LODWORD(v1585) = v1168;
                }
                else
                {
                  v1169 = GetLastError();
                  v1041 = v1169;
                  if ( v1169 > 0 )
                    v1041 = (unsigned __int16)v1169 | 0x80070000;
                  if ( v1041 >= 0 )
                    v1041 = -2147467259;
                  v1168 = v1585;
                }
                if ( v1041 == -805306333 )
                {
                  v1041 = -2147024774;
                  goto LABEL_1623;
                }
                if ( v1041 < 0 )
                  goto LABEL_1623;
                v1496 = 0LL;
                v1612 = 0;
                v1709 = v1165;
                if ( v1168 < 4 )
                  goto LABEL_1511;
                v1361 = *v1165;
                v1170 = RtlULongLongAdd(v1165, 4LL, &v1709);
                if ( v1170 < 0 )
                  goto LABEL_1544;
                v1170 = RtlUIntAdd(0LL, 4LL, &v1612);
                if ( v1170 < 0 )
                  goto LABEL_1544;
                if ( v1171 - v1612 < (unsigned int)v1172 )
                  goto LABEL_1511;
                v1467 = v1709;
                Srce = v1172;
                v1170 = RtlULongLongAdd(v1709, (unsigned int)v1172, &v1709);
                if ( v1170 < 0 )
                  goto LABEL_1544;
                v1170 = RtlUIntAdd(v1612, v1173, &v1612);
                if ( v1170 < 0 )
                  goto LABEL_1544;
                if ( v1174 - v1612 < 4 )
                  goto LABEL_1511;
                v1175 = *(unsigned int *)v1709;
                v1170 = RtlULongLongAdd(v1709, 4LL, &v1709);
                if ( v1170 < 0 )
                  goto LABEL_1544;
                v1170 = RtlUIntAdd(v1612, 4LL, &v1612);
                if ( v1170 < 0 )
                  goto LABEL_1544;
                if ( v1176 - v1612 < (unsigned int)v1175 )
                  goto LABEL_1511;
                v1495 = v1709;
                v1170 = RtlULongLongAdd(v1709, (unsigned int)v1175, &v1709);
                if ( v1170 < 0 )
                  goto LABEL_1544;
                v1170 = RtlUIntAdd(v1612, (unsigned int)v1175, &v1612);
                if ( v1170 < 0 )
                  goto LABEL_1544;
                if ( v1177 - v1612 < 4 )
                  goto LABEL_1511;
                v1376 = *(_DWORD *)v1709;
                v1170 = RtlULongLongAdd(v1709, 4LL, &v1709);
                if ( v1170 < 0 )
                  goto LABEL_1544;
                v1170 = RtlUIntAdd(v1612, 4LL, &v1612);
                if ( v1170 < 0 )
                  goto LABEL_1544;
                if ( v1178 - v1612 < v1179 )
                  goto LABEL_1511;
                v1170 = RtlUIntAdd(v1612, v1179, &v1612);
                if ( v1170 < 0 )
                  goto LABEL_1544;
                if ( v1180 != v1612 || (unsigned int)(v1182 + v1181 + v1175) + 12LL != v1180 )
                {
LABEL_1511:
                  v1170 = -1073741762;
                  goto LABEL_1544;
                }
                v1183 = GetProcessHeap();
                v1184 = HeapAlloc(v1183, 8u, 0x30uLL);
                v1185 = v1184;
                if ( !v1184 )
                {
                  v1170 = -1073741801;
                  goto LABEL_1534;
                }
                if ( v1467 )
                {
                  *(_DWORD *)v1184 = v1361;
                  v1186 = GetProcessHeap();
                  v1187 = HeapAlloc(v1186, 8u, (SIZE_T)Srce);
                  if ( v1187 )
                  {
                    v1185[1] = v1187;
                    memcpy_0(v1187, v1467, (size_t)Srce);
                    goto LABEL_1517;
                  }
LABEL_1515:
                  v1170 = -1073741801;
                }
                else
                {
                  *(_DWORD *)v1184 = 0;
                  v1184[1] = 0LL;
LABEL_1517:
                  v1188 = v1495;
                  if ( v1495 )
                  {
                    *((_DWORD *)v1185 + 4) = v1175;
                    v1189 = GetProcessHeap();
                    v1190 = HeapAlloc(v1189, 8u, v1175);
                    if ( !v1190 )
                      goto LABEL_1515;
                    v1185[3] = v1190;
                    memcpy_0(v1190, v1188, v1175);
                  }
                  else
                  {
                    *((_DWORD *)v1185 + 4) = 0;
                    v1185[3] = 0LL;
                  }
                  if ( v1709 )
                  {
                    *((_DWORD *)v1185 + 8) = v1376;
                    v1191 = GetProcessHeap();
                    v1192 = HeapAlloc(v1191, 8u, v1376);
                    if ( !v1192 )
                      goto LABEL_1515;
                    v1185[5] = v1192;
                    memcpy_0(v1192, v1709, v1376);
                  }
                  else
                  {
                    *((_DWORD *)v1185 + 8) = 0;
                    v1185[5] = 0LL;
                  }
                  v1496 = v1185;
                  v1170 = 0;
                  v1185 = 0LL;
                }
                if ( v1185 )
                {
                  v1193 = (void *)v1185[1];
                  if ( v1193 )
                  {
                    v1194 = GetProcessHeap();
                    HeapFree(v1194, 0, v1193);
                    v1185[1] = 0LL;
                  }
                  v1195 = (void *)v1185[3];
                  if ( v1195 )
                  {
                    v1196 = GetProcessHeap();
                    HeapFree(v1196, 0, v1195);
                    v1185[3] = 0LL;
                  }
                  v1197 = (void *)v1185[5];
                  if ( v1197 )
                  {
                    v1198 = GetProcessHeap();
                    HeapFree(v1198, 0, v1197);
                    v1185[5] = 0LL;
                  }
                  v1199 = GetProcessHeap();
                  HeapFree(v1199, 0, v1185);
                }
LABEL_1534:
                v1030 = v1496;
                v1200 = 0LL;
                if ( v1170 < 0 )
                {
                  v1200 = v1496;
                  v1030 = 0LL;
                }
                v1497 = (__int64)v1030;
                if ( v1200 )
                {
                  v1201 = (void *)v1200[1];
                  if ( v1201 )
                  {
                    v1202 = GetProcessHeap();
                    HeapFree(v1202, 0, v1201);
                    v1200[1] = 0LL;
                  }
                  v1203 = (void *)v1200[3];
                  if ( v1203 )
                  {
                    v1204 = GetProcessHeap();
                    HeapFree(v1204, 0, v1203);
                    v1200[3] = 0LL;
                  }
                  v1205 = (void *)v1200[5];
                  if ( v1205 )
                  {
                    v1206 = GetProcessHeap();
                    HeapFree(v1206, 0, v1205);
                    v1200[5] = 0LL;
                  }
                  v1207 = GetProcessHeap();
                  HeapFree(v1207, 0, v1200);
                  v1497 = (__int64)v1030;
                }
LABEL_1544:
                v1041 = v1170 | 0x10000000;
                if ( v1041 < 0 )
                  goto LABEL_1623;
                v1208 = 0;
                v1710 = 0LL;
                if ( !v1030 || (v1496 = (LPVOID)*((_QWORD *)v1030 + 1)) == 0LL || !*v1030 )
                {
                  v1041 = -805306355;
                  goto LABEL_1623;
                }
                v1209 = (unsigned int)*v1030 - 8LL;
                v1468 = (LPVOID)v1209;
                Srcf = MemoryAlloc(v1209);
                v1210 = Srcf;
                if ( Srcf )
                {
                  v1211 = (unsigned __int8 *)v1496;
                  v1794 = 0x7F1137FAB69605ELL;
                  v1212 = 0;
                  v1213 = Srcf;
                  v1495 = Srcf;
                  v1214 = 0;
                  v1215 = 0;
                  v1216 = v1209 & 7;
                  if ( (v1209 & 7) != 0 )
                  {
                    v1501 = 0;
                    v1217 = 56;
                    do
                    {
                      v1218 = *v1211++;
                      if ( v1215 >= 4 )
                      {
                        v1219 = (v1218 << v1217) | v1501;
                        v1501 = v1219;
                      }
                      else
                      {
                        v1219 = v1501;
                        v1214 |= v1218 << (v1217 - 32);
                      }
                      ++v1215;
                      v1217 -= 8;
                    }
                    while ( v1215 < (int)v1216 );
                    v90 = v1481;
                    v1030 = (_DWORD *)v1497;
                    v1377 = v1214;
                    v1220 = v1214;
                    v1221 = v1219 ^ 0x699A899C;
                    v1215 = v1220 ^ 0x92F65A5;
                    v1222 = v1215;
                    v1223 = v1221;
                    if ( (v1209 & 7) != 0 )
                    {
                      v1224 = Srcf;
                      v1225 = 0;
                      do
                      {
                        v1495 = v1224 + 1;
                        if ( v1225 >= 4 )
                        {
                          v1223 = __ROL4__(v1223, 8);
                          v1226 = v1223;
                        }
                        else
                        {
                          v1222 = __ROL4__(v1222, 8);
                          v1226 = v1222;
                        }
                        *v1224 = v1226;
                        ++v1225;
                        v1224 = v1495;
                      }
                      while ( v1225 < (int)v1216 );
                      v1209 = (unsigned __int64)v1468;
                      v1213 = (char *)v1495;
                      v90 = v1481;
                      v1212 = 0;
                    }
                    else
                    {
                      v1213 = Srcf;
                    }
                    if ( v1216 > 4 )
                    {
                      v1214 = v1221 >> (8 * (8 - v1216)) << (8 * (8 - v1216));
                      goto LABEL_1568;
                    }
                    v1214 = 0;
                    if ( v1216 < 4 )
                    {
                      v1215 = (unsigned int)v1215 >> (8 * (4 - v1216)) << (8 * (4 - v1216));
LABEL_1568:
                      v1213 = (char *)v1495;
                    }
                  }
                  else
                  {
                    v1377 = 0;
                  }
                  v1495 = (void *)(v1209 >> 3);
                  if ( v1209 >> 3 )
                  {
                    v1227 = HIDWORD(v1794);
                    v1228 = v1211 + 2;
                    v1229 = HIWORD(v1794);
                    v1230 = v1213 + 7;
                    v1231 = v1377;
                    v1232 = (char *)v1495;
                    v1233 = WORD2(v1794);
                    v1436 = WORD1(v1794);
                    do
                    {
                      v1234 = *(v1228 - 1) | (*(v1228 - 2) << 8);
                      v1235 = v1228[2] << 8;
                      v1236 = *v1228;
                      v1228 += 8;
                      v1237 = *(v1228 - 7) | ((v1236 | (v1234 << 8)) << 8);
                      v1238 = v1237 ^ v1215;
                      v1239 = *(v1228 - 3) | ((*(v1228 - 4) | ((*(v1228 - 5) | v1235) << 8)) << 8);
                      v1240 = v1238 ^ v1227 ^ 0xAB69605E ^ v1239 ^ v1214;
                      v1241 = (__ROL4__(v1240, 10) + v1233 * __ROL4__(v1240 + 1419157410, 5)) ^ v1238;
                      v1242 = (WORD1(v1794) * __ROR4__(v1241 + v1227, 9) - __ROL4__(v1241, 2)) ^ v1240;
                      v1243 = (24670 * (v1242 - v1233) - (v1242 >> 13)) ^ v1241;
                      v1244 = (v1229 * __ROL4__(v1243 ^ WORD1(v1794), 6) - __ROL4__(v1243, 2)) ^ v1242;
                      v1245 = (v1227 - (v1244 ^ 0xAB69605E)) ^ v1243;
                      v1246 = (v1436 * (v1245 ^ v1233)) ^ __ROR4__(v1245, 6) ^ v1244;
                      v1247 = (__ROL4__(v1246, 2) + 24670 * __ROR4__(v1246 + v1227, 15)) ^ v1245;
                      v1248 = (v1229 * __ROR4__(v1247 + 1419157410, 14) - __ROL4__(v1247, 8)) ^ v1246;
                      v1249 = __ROR4__(v1248, 10) ^ (v1233 * __ROR4__(v1248 ^ 0xAB69605E, 12)) ^ v1247;
                      v1250 = (v1249 >> 10) ^ (WORD1(v1794) * (v1249 ^ v1229)) ^ v1248;
                      v1251 = (v1229 * (__ROR4__(~v1250, 5) + 24670)) ^ v1249;
                      v1252 = (v1251 - v1229) ^ 0xAB69605E ^ v1250;
                      v1253 = ((v1252 >> 2) + v1233 * __ROL4__(v1252 ^ v1229, 2)) ^ v1251;
                      v1254 = (__ROL4__(v1253, 7) + WORD1(v1794) * __ROR4__(v1253 - v1227, 6)) ^ v1252;
                      v1255 = (24670 * (v1254 ^ v1233) + __ROR4__(v1254, 9)) ^ v1253;
                      v1256 = (__ROL4__(v1255, 7) + v1229 * __ROL4__(v1255 ^ WORD1(v1794), 5)) ^ v1254;
                      v1257 = v1227 ^ v1256 ^ 0xAB69605E ^ v1255;
                      v1258 = (v1233 * (__ROR4__(v1257, 3) - WORD1(v1794))) ^ v1256;
                      v1259 = (24670 * __ROR4__(v1258 - v1227, 1) - __ROR4__(v1258, 6)) ^ v1257;
                      v1260 = (__ROL4__(v1259, 14) + v1229 * __ROL4__(v1259 - 1419157410, 3)) ^ v1258;
                      v1261 = (v1233 * __ROL4__(v1260 - 1419157410, 15) - __ROR4__(v1260, 14)) ^ v1259;
                      v1262 = (v1261 >> 3) ^ (WORD1(v1794) * (v1261 ^ 0x605E)) ^ v1260;
                      v1263 = v1501 ^ v1262;
                      v1501 = v1239;
                      v1264 = v1231 ^ __ROL4__(v1262, 2) ^ (24670 * __ROL4__(v1227 ^ v1262, 4));
                      v1231 = v1237;
                      v1265 = v1264 ^ v1261;
                      *(v1230 - 4) = v1265;
                      *v1230 = v1263;
                      v1230 += 8;
                      v1266 = __ROR4__(v1265, 8);
                      *(v1230 - 13) = v1266;
                      v1267 = __ROR4__(v1263, 8);
                      *(v1230 - 9) = v1267;
                      v1268 = __ROR4__(v1266, 8);
                      *(v1230 - 14) = v1268;
                      v1269 = __ROR4__(v1267, 8);
                      *(v1230 - 10) = v1269;
                      v1270 = __ROR4__(v1268, 8);
                      v1271 = __ROR4__(v1269, 8);
                      *(v1230 - 15) = v1270;
                      *(v1230 - 11) = v1271;
                      v1214 = __ROR4__(v1271, 8);
                      v1215 = __ROR4__(v1270, 8);
                      --v1232;
                    }
                    while ( v1232 );
                    v1212 = 0;
                    v2 = 0;
                    v90 = v1481;
                    v1208 = 0;
                    v1030 = (_DWORD *)v1497;
                    v1209 = (unsigned __int64)v1468;
                    v1210 = Srcf;
                  }
                  for ( i4 = 0LL; i4 < v1209; ++i4 )
                    v1212 ^= v1210[i4];
                  if ( v1212 == *(_QWORD *)((char *)v1496 + v1209) )
                  {
                    v1273 = v1210;
                    v1208 = v1209;
                    v1274 = 0;
                    v1210 = 0LL;
                    v1710 = v1273;
                  }
                  else
                  {
                    v1273 = v1710;
                    v1274 = -1073425151;
                  }
                  if ( v1210 )
                  {
                    MemoryFree(v1210);
                    v1273 = v1710;
                  }
                  if ( v1274 >= 0 )
                  {
                    v1275 = v1273;
                    v1606 = v1273;
                    v1273 = 0LL;
                    HIDWORD(v1585) = v1208;
                    v1710 = 0LL;
                    v1041 = 0x10000000;
                    goto LABEL_1585;
                  }
                }
                else
                {
                  v1273 = v1710;
                }
                v1208 = HIDWORD(v1585);
                v1041 = -805306367;
                v1275 = 0LL;
LABEL_1585:
                if ( v1273 )
                {
                  v1276 = GetProcessHeap();
                  HeapFree(v1276, 0, v1273);
                  v1208 = HIDWORD(v1585);
                  v1710 = 0LL;
                }
                if ( v1041 < 0 )
                  goto LABEL_1623;
                v1597[0] = 0;
                v1711 = v1275;
                if ( v1208 < 4 )
                  goto LABEL_1621;
                v1362 = *v1275;
                v1277 = RtlULongLongAdd(v1275, 4LL, &v1711);
                if ( v1277 >= 0 )
                {
                  v1277 = RtlUIntAdd(0LL, v1278, v1597);
                  if ( v1277 >= 0 )
                  {
                    if ( v1208 - v1597[0] < v1279 )
                      goto LABEL_1621;
                    v1277 = RtlULongLongAdd(v1711, v1279, &v1711);
                    if ( v1277 >= 0 )
                    {
                      v1277 = RtlUIntAdd(v1597[0], v1280, v1597);
                      if ( v1277 >= 0 )
                      {
                        if ( v1208 - v1597[0] < v1281 )
                          goto LABEL_1621;
                        v1277 = RtlUIntAdd(v1597[0], v1281, v1597);
                        if ( v1277 >= 0 )
                        {
                          v1283 = v1711;
                          v1284 = v1208;
                          v1285 = (unsigned int)v1282;
                          if ( (char *)v1275 + v1284 < (char *)v1711 + v1282
                            || (unsigned __int64)v1275 + v1284 - v1282 - (_QWORD)v1711 >= 8 )
                          {
                            goto LABEL_1621;
                          }
                          v1400 = 0;
                          v1286 = 0LL;
                          v1277 = 0;
                          if ( !v1711 )
                            goto LABEL_1611;
                          v1277 = RtlULongLongAdd(v1711, (unsigned int)v1282, &v1712);
                          if ( v1277 < 0 )
                            goto LABEL_1619;
                          v1288 = v1712;
                          if ( (unsigned __int64)v1283 < v1712 )
                          {
                            while ( 1 )
                            {
                              v1277 = RtlULongLongAdd(v1287, 4LL, &v1713);
                              if ( v1277 < 0 )
                                goto LABEL_1619;
                              if ( v1713 > v1290 )
                                goto LABEL_1614;
                              v1291 = RtlUIntAdd(4LL, *v1289, v1598);
                              v1277 = v1291;
                              if ( v1291 >= 0 )
                                v1293 = v1598[0];
                              v1597[1] = v1293;
                              if ( v1291 < 0 )
                                goto LABEL_1619;
                              v1277 = RtlULongLongAdd(v1292, v1293, &v1714);
                              if ( v1277 < 0 )
                                goto LABEL_1619;
                              v1287 = v1714;
                              if ( v1714 > v1288 )
                                goto LABEL_1614;
                              ++v1400;
                              if ( v1714 >= v1288 )
                              {
                                LODWORD(v1282) = v1285;
                                break;
                              }
                            }
                          }
                          if ( v1287 != v1288 )
                          {
LABEL_1614:
                            v1277 = -1073741811;
                          }
                          else
                          {
LABEL_1611:
                            if ( (_DWORD)v1282 )
                            {
                              v1294 = GetProcessHeap();
                              v1286 = HeapAlloc(v1294, 8u, v1285);
                              if ( !v1286 )
                              {
                                v1277 = -1073741801;
                                goto LABEL_1619;
                              }
                              v1277 = 0;
                            }
                            if ( v1283 )
                              memcpy_0(v1286, v1283, v1285);
                            LODWORD(v1736[0]) = v1400;
                            v1736[1] = v1286;
LABEL_1619:
                            if ( v1277 >= 0 && v1362 != LODWORD(v1736[0]) )
LABEL_1621:
                              v1277 = -1073741762;
                          }
                        }
                      }
                    }
                  }
                }
                v1041 = v1277 | 0x10000000;
                goto LABEL_1623;
              }
            }
          }
        }
      }
    }
LABEL_1668:
    v1732 = 0LL;
    v1326 = v1733;
    if ( v1733 )
    {
      v1327 = GetProcessHeap();
      HeapFree(v1327, 0, v1326);
      v1733 = 0LL;
    }
    v1736[0] = 0LL;
    v1328 = v1736[1];
    if ( v1736[1] )
    {
      v1329 = GetProcessHeap();
      HeapFree(v1329, 0, v1328);
      v1736[1] = 0LL;
    }
    if ( v1494 )
    {
      v1330 = GetProcessHeap();
      HeapFree(v1330, 0, v1494);
    }
    if ( v983 )
    {
      v1331 = GetProcessHeap();
      HeapFree(v1331, 0, v983);
    }
  }
LABEL_1676:
  v1332 = v1561;
  v1601 = v1562;
  v1642 = (int *)v1437;
  v1495 = 0LL;
LABEL_1678:
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v1333 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount > 0 )
  {
    --g_WarbirdSecureFunctionsRefCount;
    if ( v1333 == 1 )
    {
      v1334 = (HMODULE *)&WARBIRD::g_arModuleInfo;
      v1335 = 4LL;
      do
      {
        if ( *v1334 )
          FreeLibrary(*v1334);
        v1334 += 3;
        --v1335;
      }
      while ( v1335 );
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      memcpy_0(&WARBIRD::g_FuncAddress, off_18008E410, 0x170uLL);
    }
  }
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1495);
  if ( v90 >= 0 )
  {
    if ( v1332 == 4 )
    {
      v3 = v1560;
      v1557 = *v1642;
      goto LABEL_9;
    }
    goto LABEL_13;
  }
  switch ( v90 )
  {
    case -805306316:
      v90 = -1073418222;
      break;
    case -805306139:
    case -1073425151:
      v90 = -1073418201;
      break;
    case -805306306:
      v90 = -1073418200;
      break;
    case -2147024774:
LABEL_13:
      v3 = -1073418210;
      goto LABEL_9;
  }
  v3 = v90;
LABEL_9:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1642);
  v5 = v1557;
  if ( v3 < 0 )
    v5 = 0;
  v1557 = v5;
  LOBYTE(v2) = v5 == 1;
  *v1641 = v2;
  `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedCachedValue = v2;
  `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedQueried = 1;
LABEL_12:
  ReleaseSRWLockExclusive(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
  return (unsigned int)v3;
}
