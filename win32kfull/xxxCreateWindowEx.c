__int64 __fastcall xxxCreateWindowEx(
        int a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        unsigned int a5,
        int a6,
        __int32 a7,
        int a8,
        int a9,
        struct tagWND *a10,
        __int64 a11,
        void *a12,
        __int64 a13,
        int a14,
        unsigned __int16 a15,
        int a16,
        __int64 a17)
{
  int v19; // r13d
  int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  struct tagPROCESSINFO **v26; // rdx
  unsigned int v27; // ebx
  __int64 v28; // r14
  struct tagPROCESSINFO **v29; // r14
  int v30; // ecx
  int v31; // r14d
  int v32; // eax
  struct tagWND *v33; // r8
  struct tagWND *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // ecx
  int v39; // ecx
  struct tagPROCESSINFO *v41; // rdi
  __int64 v42; // rcx
  BOOL v43; // eax
  __int64 CurrentProcessWin32Process; // rax
  int v46; // eax
  struct tagWND *v47; // rax
  unsigned int v48; // ebx
  struct tagWND *v49; // r8
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // r15
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  _WORD *v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rcx
  _WORD *v61; // rax
  int v62; // r11d
  __int64 v63; // r9
  __int16 v64; // r10
  __int16 Atom; // bx
  __int64 v66; // rax
  struct tagPROCESSINFO *v67; // r14
  unsigned __int64 *ClassPtr; // r9
  unsigned __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // rdi
  unsigned __int64 v72; // rbx
  __int64 v73; // rcx
  int v74; // edx
  int v75; // eax
  unsigned int v76; // ecx
  unsigned int v77; // ecx
  __int64 v78; // rax
  __int64 v79; // rdi
  tagObjLock *v80; // rax
  __int64 v81; // rbx
  unsigned int CurrentThreadDpiHostingBehavior; // eax
  __int64 v83; // rcx
  struct tagWND *v84; // rbx
  struct tagTHREADINFO *v85; // rax
  __int64 v86; // rax
  struct tagWND *v87; // rbx
  __int64 v88; // rcx
  int v89; // ebx
  __int64 v90; // rdx
  int v91; // ecx
  __int64 v92; // rdx
  wchar_t *v93; // rcx
  __int64 v94; // rbx
  __int64 v95; // rbx
  int v96; // edx
  int v97; // eax
  __int64 v98; // rcx
  int v99; // eax
  __int64 v100; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v102; // r9
  __int64 *v103; // rax
  __int64 v104; // rcx
  __int64 v105; // r8
  struct tagWND *v106; // r13
  int v107; // eax
  __int64 v108; // rdx
  __int16 v109; // bx
  _QWORD *v110; // rax
  int v111; // eax
  __int32 v112; // ecx
  int v113; // edx
  int v114; // eax
  __int64 *InheritedMonitor; // r9
  __int64 v116; // rcx
  _DWORD *v117; // rax
  _DWORD *v118; // rax
  __int64 v119; // rdx
  _QWORD *v120; // r12
  __int64 v121; // rdx
  __int64 v122; // rcx
  struct tagWND *v123; // r14
  struct tagTHREADINFO *v124; // rax
  __int64 v125; // rax
  __int64 Prop; // rbx
  int v127; // eax
  __int64 v128; // r8
  __int64 v129; // rdx
  int v131; // ecx
  unsigned int v132; // ebx
  struct tagTHREADINFO *v133; // rax
  struct _KPROCESS *v134; // rbx
  int v135; // ebx
  __int64 v136; // rcx
  __int64 v137; // rax
  int v138; // eax
  _DWORD *v139; // rax
  int v140; // r12d
  int v141; // r13d
  __int64 v142; // rbx
  __int64 v143; // r15
  void *v144; // r14
  __int64 v145; // rcx
  __int64 v146; // rax
  __int64 v147; // rcx
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // rax
  int v151; // r14d
  int v152; // r12d
  int v153; // ebx
  _DWORD *v154; // rax
  int v155; // edx
  int v156; // r12d
  __int64 v157; // r8
  int v158; // ebx
  int v159; // r13d
  int v160; // r14d
  int v161; // r15d
  int v162; // eax
  __int64 v163; // rbx
  __int64 v164; // rcx
  void *v165; // rax
  __int64 v166; // rax
  __int64 *v167; // r13
  char v168; // r14
  __int64 v169; // rcx
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // r8
  SIZE_T v175; // rcx
  __int64 v176; // rbx
  int v177; // ecx
  __int64 v178; // rax
  __int64 v179; // rdx
  __int64 v180; // r8
  __int64 v181; // rdx
  __int64 v182; // rcx
  int v183; // r13d
  int v184; // r12d
  int v185; // ebx
  char v186; // dl
  _DWORD *v187; // rax
  int v188; // ecx
  int v189; // edx
  int v190; // r12d
  __int64 v191; // r8
  int v192; // ebx
  int v193; // r13d
  int v194; // r14d
  int v195; // r15d
  int v196; // eax
  __int64 v197; // rbx
  __int64 v198; // rcx
  void *v199; // rax
  int AppCompatFlags; // eax
  char v201; // bl
  unsigned __int16 v202; // r15
  __int64 v203; // rax
  int v204; // ebx
  int v205; // r14d
  int v206; // r15d
  unsigned int *v207; // rax
  int v208; // edx
  __int64 v209; // r8
  int v210; // r12d
  int v211; // r9d
  int v212; // ecx
  int v213; // r13d
  int v214; // r14d
  int v215; // r15d
  int v216; // eax
  __int64 v217; // rbx
  __int64 v218; // rcx
  void *v219; // rax
  __int64 v220; // rax
  int v221; // ebx
  int v222; // r14d
  int v223; // r15d
  unsigned int *v224; // rax
  int v225; // edx
  __int64 v226; // r8
  int v227; // r12d
  int v228; // r9d
  int v229; // ecx
  int v230; // r13d
  int v231; // r14d
  int v232; // r15d
  int v233; // eax
  __int64 v234; // rbx
  __int64 v235; // rcx
  void *v236; // rax
  __int64 v237; // rax
  int v238; // r14d
  int v239; // r12d
  int v240; // ebx
  _DWORD *v241; // rax
  int v242; // ecx
  int v243; // edx
  int v244; // r12d
  __int64 v245; // r8
  int v246; // ebx
  int v247; // r13d
  int v248; // r14d
  int v249; // r15d
  int v250; // eax
  __int64 v251; // rbx
  __int64 v252; // rcx
  void *v253; // rax
  __int64 v254; // r14
  int v255; // eax
  __int64 v256; // rbx
  __int64 *v257; // rax
  __int64 v258; // rdx
  __int64 v259; // r8
  int v260; // eax
  __int64 CurrentProcess; // rax
  __int64 v262; // rcx
  __int64 v263; // rcx
  struct tagWND *v264; // r15
  int v265; // ebx
  char v266; // r14
  int v267; // eax
  int v268; // r9d
  int v269; // r14d
  int v270; // r12d
  int v271; // ebx
  int v272; // ecx
  int v273; // edx
  int v274; // r12d
  __int64 v275; // r8
  int v276; // ebx
  int v277; // r13d
  int v278; // r14d
  int v279; // r15d
  int v280; // eax
  __int64 v281; // rbx
  __int64 v282; // rcx
  void *v283; // rax
  __int64 v284; // rcx
  int v285; // r14d
  int v286; // r12d
  int v287; // ebx
  int v288; // ecx
  int v289; // edx
  int v290; // r12d
  __int64 v291; // r8
  int v292; // ebx
  int v293; // r13d
  int v294; // r14d
  int v295; // r15d
  int v296; // eax
  __int64 v297; // rbx
  __int64 v298; // rcx
  void *v299; // rax
  int v300; // r14d
  int v301; // r12d
  int v302; // ebx
  __int64 v303; // rdx
  __int64 v304; // r8
  __int64 v305; // r9
  int v306; // ecx
  int v307; // r12d
  int v308; // ebx
  int v309; // r13d
  int v310; // r14d
  int v311; // r15d
  int v312; // eax
  __int64 v313; // rbx
  __int64 v314; // rcx
  void *v315; // rax
  int v316; // r14d
  int v317; // ecx
  BOOL v318; // r15d
  __int64 v319; // rcx
  struct tagMONITOR *v320; // rbx
  __int64 v321; // rcx
  _DWORD *v322; // rax
  _DWORD *v323; // rcx
  _DWORD *v324; // rax
  __int16 v325; // ax
  struct tagPROCESSINFO **v326; // rdx
  int v327; // eax
  int v328; // r15d
  unsigned __int64 v329; // xmm0_8
  int v330; // ecx
  int v331; // edx
  struct tagPROCESSINFO *v332; // rcx
  struct tagPROCESSINFO *v333; // rcx
  int v334; // eax
  __int64 v335; // rcx
  char v336; // dl
  int v337; // r14d
  int v338; // r12d
  int v339; // ebx
  int v340; // ecx
  int v341; // edx
  int v342; // r12d
  __int64 v343; // r8
  int v344; // ebx
  int v345; // r13d
  int v346; // r14d
  int v347; // r15d
  int v348; // eax
  __int64 v349; // rbx
  __int64 v350; // rcx
  void *v351; // rax
  __int64 v352; // rcx
  __int64 v353; // rax
  int v354; // r12d
  __int64 v355; // rax
  _QWORD *v356; // rbx
  _QWORD *v357; // rcx
  _QWORD *v358; // rdx
  struct tagWND *v359; // rbx
  _DWORD *v360; // r14
  __int64 v361; // rax
  bool v362; // zf
  int v363; // eax
  struct tagWND *NonChildAncestor; // rbx
  __int64 *v365; // r14
  __int64 v366; // rdx
  __int64 v367; // rcx
  __int64 v368; // rdx
  int v369; // r14d
  unsigned int v370; // eax
  int v371; // edx
  struct tagTHREADINFO *v372; // rax
  __int64 v373; // rax
  __int64 v374; // rbx
  __int64 v375; // rcx
  __int64 KernelEvent; // rax
  __int64 v377; // rax
  struct tagWND *v379; // rdx
  _QWORD *v380; // rax
  __int64 v381; // rcx
  struct tagWND *v382; // r10
  __int64 v383; // r8
  __int64 v384; // r9
  unsigned int v385; // ebx
  __int64 v386; // rax
  __int64 v387; // rax
  int v388; // eax
  char v389; // al
  struct tagWND *v391; // rax
  __int64 v392; // rax
  int v393; // eax
  int v394; // r15d
  __int64 v395; // rcx
  __int64 *v396; // rbx
  _DWORD *v397; // rsi
  char v398; // r14
  __int64 *v399; // rax
  __int64 v400; // r11
  int v401; // ecx
  __int64 v402; // rax
  int v403; // ecx
  __int64 v404; // rdx
  __int64 v405; // r10
  __int64 v406; // r8
  __int64 v407; // r9
  int v408; // ebx
  unsigned int v409; // eax
  NTSTATUS v410; // eax
  ULONG v411; // eax
  __int64 v412; // rcx
  __int64 v413; // rax
  __int64 v414; // rcx
  __int64 v415; // rax
  __int64 v416; // rcx
  struct tagWND *v417; // r14
  __int64 v418; // rax
  BOOL v419; // eax
  __int64 v420; // rdx
  struct tagWND *v421; // rax
  struct tagWND *v422; // rax
  __int64 v423; // rcx
  struct tagWND *v424; // rdx
  int v425; // ecx
  __int128 v426; // kr00_16
  __int64 v427; // r8
  int v428; // edx
  int v429; // eax
  int v430; // edx
  char v431; // r12
  __int64 v432; // rax
  __int64 *v433; // rbx
  __int64 v434; // rcx
  _DWORD *v435; // rax
  _DWORD *v436; // rcx
  _DWORD *v437; // rax
  int v438; // eax
  __int64 v439; // rcx
  __int64 StyleWindow; // rbx
  __int64 v441; // rdx
  __int64 CacheDC; // rax
  __int64 v443; // rcx
  __int64 *v444; // rsi
  int v445; // ebx
  __int64 v446; // r9
  __int64 v447; // rdx
  struct tagCLS *v448; // rbx
  __int64 v449; // rax
  __int64 SystemMenu; // rax
  __int64 v451; // rax
  __int64 v452; // rdx
  __int64 v453; // rcx
  __int64 v454; // r8
  __int64 v455; // rdx
  __int64 v456; // rax
  int v457; // ecx
  _DWORD *v458; // rcx
  struct tagWND **v459; // rbx
  struct tagWND *DefaultImeWindow; // rax
  struct tagWND *v461; // rcx
  __int64 v462; // rdx
  __int64 v463; // rcx
  __int64 v464; // r8
  int v465; // r8d
  struct tagWND *v466; // rcx
  __int64 v467; // rdx
  __int64 v468; // rcx
  __int64 v469; // r8
  struct tagWND *v470; // rbx
  unsigned __int64 v471; // r8
  __int64 v472; // rax
  __int64 v473; // rax
  struct tagWND *v474; // rdx
  _QWORD *v475; // rax
  __int64 v476; // rcx
  struct tagWND *v477; // r10
  __int64 v478; // r8
  __int64 v479; // r9
  unsigned int v480; // ebx
  __int64 v481; // rax
  unsigned __int8 *TopLevelWindow; // rdx
  __int64 v483; // r8
  __int64 v484; // rcx
  __int64 v485; // rax
  int v486; // eax
  char v487; // al
  struct tagWND *v489; // rax
  __int64 v490; // rax
  int v491; // eax
  unsigned int v492; // esi
  int v493; // eax
  struct tagWND *v494; // rax
  unsigned __int8 *v495; // rbx
  struct tagWND *TopLevelHostForComponent; // rax
  __int64 TopMostInsertAfter; // rax
  __int64 v498; // r9
  int v499; // edx
  int v500; // r8d
  struct tagCLS *v501; // rbx
  __int64 v502; // rax
  __int64 v503; // rax
  int v504; // ebx
  int v505; // r12d
  int v506; // r13d
  unsigned int *v507; // rax
  int v508; // edx
  __int64 v509; // r8
  int v510; // r14d
  int v511; // r9d
  int v512; // ecx
  int v513; // r15d
  int v514; // r12d
  int v515; // r13d
  int v516; // eax
  __int64 v517; // rbx
  __int64 v518; // rcx
  void *v519; // rax
  __int64 v520; // r14
  __int64 v521; // r8
  __int16 v522; // dx
  __int64 v523; // rcx
  int v524; // r12d
  __int64 v525; // r13
  void *v526; // rbx
  __int64 v527; // rcx
  __int64 v528; // rcx
  __int64 *v529; // rax
  __int64 v530; // r12
  __int64 v531; // r13
  void *v532; // rbx
  __int64 v533; // rcx
  struct tagWND *v534; // rcx
  __int64 v535; // rax
  __int64 v536; // rax
  char v537; // cl
  __int64 v538; // rdx
  bool v539; // bl
  __int64 v540; // rcx
  __int64 v541; // rax
  __int64 v542; // rdx
  __int128 v543; // xmm0
  unsigned __int64 v544; // rdx
  __int64 v545; // rcx
  __int64 v546; // rdx
  __int64 v547; // rcx
  __int64 v548; // r8
  __int64 v549; // rdx
  __int64 v550; // r8
  __int64 v551; // rcx
  struct tagPROCESSINFO **v552; // rbx
  __int64 v553; // rdx
  __int64 v554; // rcx
  __int64 v555; // r8
  __int64 v556; // rax
  __int64 v557; // rbx
  char v558[8]; // [rsp+50h] [rbp-618h] BYREF
  int v559; // [rsp+58h] [rbp-610h]
  unsigned int v560; // [rsp+60h] [rbp-608h]
  int v561; // [rsp+64h] [rbp-604h]
  struct tagWND *v562; // [rsp+68h] [rbp-600h]
  __int64 v563; // [rsp+70h] [rbp-5F8h]
  unsigned int v564; // [rsp+78h] [rbp-5F0h]
  __int32 v565; // [rsp+7Ch] [rbp-5ECh]
  __int16 v566; // [rsp+80h] [rbp-5E8h]
  __int16 v567; // [rsp+84h] [rbp-5E4h]
  int v568; // [rsp+88h] [rbp-5E0h]
  int v569; // [rsp+8Ch] [rbp-5DCh]
  __int64 v570[2]; // [rsp+90h] [rbp-5D8h] BYREF
  __int128 v571; // [rsp+A0h] [rbp-5C8h] BYREF
  int v572; // [rsp+B0h] [rbp-5B8h]
  int v573; // [rsp+B4h] [rbp-5B4h]
  _DWORD *v574; // [rsp+B8h] [rbp-5B0h]
  struct tagPROCESSINFO **v575; // [rsp+C0h] [rbp-5A8h]
  unsigned __int64 v576; // [rsp+C8h] [rbp-5A0h]
  _QWORD v577[2]; // [rsp+D0h] [rbp-598h] BYREF
  _QWORD *v578; // [rsp+E0h] [rbp-588h]
  int v579; // [rsp+E8h] [rbp-580h]
  unsigned int WindowCloakStateComponentUIAware; // [rsp+ECh] [rbp-57Ch]
  int v581; // [rsp+F0h] [rbp-578h]
  int v582; // [rsp+F4h] [rbp-574h]
  int v583; // [rsp+F8h] [rbp-570h]
  BOOL v584; // [rsp+FCh] [rbp-56Ch]
  int v585; // [rsp+100h] [rbp-568h]
  int v586; // [rsp+104h] [rbp-564h]
  int v587; // [rsp+108h] [rbp-560h]
  int v588; // [rsp+10Ch] [rbp-55Ch]
  __int64 v589; // [rsp+110h] [rbp-558h] BYREF
  __int128 v590; // [rsp+118h] [rbp-550h] BYREF
  __int128 v591; // [rsp+128h] [rbp-540h] BYREF
  int v592; // [rsp+138h] [rbp-530h]
  int v593; // [rsp+144h] [rbp-524h]
  BOOL v594; // [rsp+150h] [rbp-518h]
  int v595; // [rsp+154h] [rbp-514h]
  __int64 ProcessSequenceNumber; // [rsp+168h] [rbp-500h]
  __int64 v597; // [rsp+170h] [rbp-4F8h]
  __int64 v598; // [rsp+178h] [rbp-4F0h]
  HANDLE ProcessId; // [rsp+180h] [rbp-4E8h]
  __int64 *v600; // [rsp+188h] [rbp-4E0h]
  __int64 v601; // [rsp+190h] [rbp-4D8h]
  struct tagWND *v602; // [rsp+198h] [rbp-4D0h]
  __int128 v603; // [rsp+1A0h] [rbp-4C8h] BYREF
  __int128 v604; // [rsp+1B0h] [rbp-4B8h]
  __int128 v605; // [rsp+1C0h] [rbp-4A8h]
  __int128 v606; // [rsp+1D0h] [rbp-498h]
  __int128 v607; // [rsp+1E0h] [rbp-488h]
  __int128 v608; // [rsp+1F0h] [rbp-478h]
  __int128 v609; // [rsp+200h] [rbp-468h] BYREF
  __int64 v610; // [rsp+210h] [rbp-458h]
  __int64 v611; // [rsp+218h] [rbp-450h]
  _WORD *v612; // [rsp+220h] [rbp-448h]
  __int128 v613; // [rsp+228h] [rbp-440h] BYREF
  struct tagCLS *(__fastcall *v614)(struct tagCLS *); // [rsp+238h] [rbp-430h]
  __int64 v615; // [rsp+240h] [rbp-428h]
  _QWORD *v616; // [rsp+248h] [rbp-420h]
  _QWORD *v617; // [rsp+250h] [rbp-418h]
  __m128i v618; // [rsp+258h] [rbp-410h]
  _WORD *v619; // [rsp+270h] [rbp-3F8h]
  __int64 v620; // [rsp+278h] [rbp-3F0h]
  __int64 v621; // [rsp+280h] [rbp-3E8h]
  __int64 v622; // [rsp+288h] [rbp-3E0h] BYREF
  unsigned __int64 v623; // [rsp+290h] [rbp-3D8h]
  __int64 v624; // [rsp+2A0h] [rbp-3C8h]
  int v625; // [rsp+2ACh] [rbp-3BCh]
  __int128 v626; // [rsp+2B0h] [rbp-3B8h] BYREF
  __int64 v627; // [rsp+2C0h] [rbp-3A8h]
  __int128 v628; // [rsp+2C8h] [rbp-3A0h] BYREF
  __int64 v629; // [rsp+2D8h] [rbp-390h]
  __int128 v630; // [rsp+2E0h] [rbp-388h] BYREF
  __int64 v631; // [rsp+2F0h] [rbp-378h]
  _QWORD v632[2]; // [rsp+300h] [rbp-368h] BYREF
  _QWORD v633[2]; // [rsp+310h] [rbp-358h] BYREF
  _QWORD v634[2]; // [rsp+320h] [rbp-348h] BYREF
  __int128 v635; // [rsp+330h] [rbp-338h] BYREF
  __int128 v636; // [rsp+340h] [rbp-328h] BYREF
  _QWORD v637[2]; // [rsp+350h] [rbp-318h] BYREF
  _QWORD v638[2]; // [rsp+360h] [rbp-308h] BYREF
  _QWORD v639[2]; // [rsp+370h] [rbp-2F8h] BYREF
  _QWORD v640[2]; // [rsp+380h] [rbp-2E8h] BYREF
  _QWORD v641[2]; // [rsp+390h] [rbp-2D8h] BYREF
  int v642; // [rsp+3A0h] [rbp-2C8h] BYREF
  __int16 v643; // [rsp+3A4h] [rbp-2C4h]
  __int128 v644; // [rsp+3A6h] [rbp-2C2h]
  __int128 v645; // [rsp+3B6h] [rbp-2B2h]
  __int16 v646; // [rsp+3C6h] [rbp-2A2h]
  int v647; // [rsp+3C8h] [rbp-2A0h]
  __int64 v648; // [rsp+3CCh] [rbp-29Ch]
  int v649; // [rsp+3D4h] [rbp-294h]
  int v650; // [rsp+3D8h] [rbp-290h]
  int v651; // [rsp+3E0h] [rbp-288h] BYREF
  __int16 v652; // [rsp+3E4h] [rbp-284h]
  __int128 v653; // [rsp+3E6h] [rbp-282h]
  __int128 v654; // [rsp+3F6h] [rbp-272h]
  __int16 v655; // [rsp+406h] [rbp-262h]
  int v656; // [rsp+408h] [rbp-260h]
  __int64 v657; // [rsp+40Ch] [rbp-25Ch]
  __int64 v658; // [rsp+414h] [rbp-254h]
  __int128 v659; // [rsp+430h] [rbp-238h] BYREF
  __int128 v660; // [rsp+448h] [rbp-220h] BYREF
  __int64 v661; // [rsp+458h] [rbp-210h]
  __int128 v662; // [rsp+470h] [rbp-1F8h] BYREF
  __int64 v663; // [rsp+480h] [rbp-1E8h]
  __int128 v664; // [rsp+488h] [rbp-1E0h] BYREF
  __int64 v665; // [rsp+498h] [rbp-1D0h]
  char v666[16]; // [rsp+4A0h] [rbp-1C8h] BYREF
  __int64 v667; // [rsp+4B0h] [rbp-1B8h] BYREF
  __int128 v668; // [rsp+4C0h] [rbp-1A8h]
  int v669; // [rsp+4D0h] [rbp-198h] BYREF
  __int16 v670; // [rsp+4D4h] [rbp-194h]
  __int128 v671; // [rsp+4D6h] [rbp-192h]
  __int128 v672; // [rsp+4E6h] [rbp-182h]
  __int16 v673; // [rsp+4F6h] [rbp-172h]
  int v674; // [rsp+4F8h] [rbp-170h]
  __int64 v675; // [rsp+4FCh] [rbp-16Ch]
  __int64 v676; // [rsp+504h] [rbp-164h]
  int v677; // [rsp+50Ch] [rbp-15Ch]
  int v678; // [rsp+510h] [rbp-158h]
  __int128 v679; // [rsp+514h] [rbp-154h]
  int v680; // [rsp+524h] [rbp-144h]
  __m256i v681; // [rsp+528h] [rbp-140h]
  __m256i v682; // [rsp+548h] [rbp-120h]
  __int64 v683; // [rsp+568h] [rbp-100h]
  int v684; // [rsp+570h] [rbp-F8h]
  int v685; // [rsp+574h] [rbp-F4h]
  __int64 v686; // [rsp+578h] [rbp-F0h]
  __int128 v687; // [rsp+580h] [rbp-E8h] BYREF
  void *v688[2]; // [rsp+590h] [rbp-D8h] BYREF
  _OWORD v689[3]; // [rsp+5A0h] [rbp-C8h] BYREF
  __m256i v690; // [rsp+5D0h] [rbp-98h] BYREF
  __int128 v691; // [rsp+5F0h] [rbp-78h] BYREF
  _BYTE v692[40]; // [rsp+600h] [rbp-68h] BYREF

  v616 = a4;
  v601 = a3;
  v588 = a1;
  v19 = a14;
  v593 = a1;
  v568 = a1;
  LODWORD(v576) = a1;
  ProcessSequenceNumber = a2;
  ProcessId = a4;
  v562 = a10;
  *(_QWORD *)&v591 = a10;
  v688[0] = a12;
  v598 = a13;
  v586 = 0;
  v584 = 0;
  v585 = 0;
  v579 = 0;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v570);
  v687 = 0LL;
  v571 = 0LL;
  v581 = 5;
  v592 = 5;
  v600 = 0LL;
  v603 = 0LL;
  v604 = 0LL;
  v605 = 0LL;
  v606 = 0LL;
  v607 = 0LL;
  v608 = 0LL;
  v609 = 0LL;
  v563 = gptiCurrent;
  v589 = gptiCurrent;
  v626 = 0LL;
  v627 = 0LL;
  v628 = 0LL;
  v629 = 0LL;
  v630 = 0LL;
  v631 = 0LL;
  v613 = 0LL;
  v614 = 0LL;
  v582 = 0;
  v575 = (struct tagPROCESSINFO **)(gptiCurrent + 424LL);
  v597 = gptiCurrent + 424LL;
  v583 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x2000;
  WindowCloakStateComponentUIAware = 0;
  v20 = 0;
  v590 = 0LL;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>((__int64)v577, a11);
  v564 = 0;
  if ( !*(_QWORD *)(SGDGetUserSessionState(v21) + 8)
    || (v23 = SGDGetUserSessionState(v22), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v23 + 8))) )
  {
    v569 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      goto LABEL_1121;
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v24);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  v558[0] = 1;
  v26 = v575;
  if ( (*((_DWORD *)*v575 + 3) & 0x10000000) == 0 )
  {
    if ( !(unsigned int)RegisterIconTitleClass() )
      goto LABEL_38;
    v26 = v575;
  }
  v27 = a1 & 0x7FFFFFFF;
  if ( a1 >= 0 )
    v27 = a1;
  v28 = *(_QWORD *)(v563 + 456);
  v615 = v28;
  v610 = v28;
  if ( v562 && *((_QWORD *)v562 + 3) != v28 )
    goto LABEL_38;
  v573 = a16;
  if ( (a16 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopApp(*v26, v26) )
    {
LABEL_62:
      v38 = 5;
      goto LABEL_63;
    }
    v20 = 1;
  }
  LODWORD(v574) = a16 & 2;
  v595 = (int)v574;
  v29 = v575;
  if ( (a16 & 2) != 0 && !(unsigned int)IsImmersiveBroker(*v575) )
    goto LABEL_62;
  if ( a14 )
  {
    if ( !(unsigned int)IsValidBand(a14)
      || a14 == 15
      || (v30 = *((_DWORD *)*v29 + 203), (v30 & 0x30) == 0x10)
      && (v30 & 0x200) == 0
      && a14 == 1
      && !v20
      && !(unsigned int)HasMessageRootWindow(v562) )
    {
LABEL_38:
      v38 = 87;
LABEL_63:
      UserSetLastError(v38);
      goto LABEL_64;
    }
  }
  v31 = HIWORD(a5) & 0xC000;
  v561 = v31;
  v566 = HIWORD(a5) & 0xC000;
  v594 = (_WORD)v31 == 0x4000;
  if ( (_WORD)v31 == 0x4000 )
  {
    v33 = v562;
  }
  else
  {
    v32 = ShouldSetNoOwner(*v575, v562);
    v33 = v562;
    if ( v32 )
      v33 = 0LL;
    v562 = v33;
    *(_QWORD *)&v591 = v33;
  }
  if ( !v33 )
    goto LABEL_39;
  v34 = 0LL;
  v35 = *((_QWORD *)v33 + 3);
  if ( v35 )
  {
    v36 = *(_QWORD *)(v35 + 8);
    if ( v36 )
      v34 = *(struct tagWND **)(v36 + 24);
  }
  if ( v33 == v34 )
  {
LABEL_39:
    if ( !a14 )
    {
      v39 = *((_DWORD *)*v575 + 203);
      if ( (v39 & 0x30) == 0x10 && (v39 & 0x200) == 0 )
      {
        v20 = 1;
        v19 = 15;
      }
      else if ( (v39 & 2) != 0 && (v27 & 8) != 0 )
      {
        v19 = 2;
      }
      else
      {
        v19 = 1;
      }
    }
  }
  else
  {
    v37 = *((_QWORD *)v33 + 5);
    v20 = *(_BYTE *)(v37 + 232) & 0x40;
    if ( !a14 )
    {
      v19 = *(_DWORD *)(v37 + 236);
      goto LABEL_50;
    }
    if ( a14 != *(_DWORD *)(v37 + 236) )
      goto LABEL_38;
  }
LABEL_50:
  v587 = v20;
  v41 = *v575;
  if ( !(unsigned int)IsImmersiveBroker(*v575) )
  {
    v42 = *((unsigned int *)v41 + 203);
    if ( (*((_BYTE *)v41 + 812) & 0x30) == 0x10 )
    {
      if ( v19 != 1 )
      {
        switch ( v19 )
        {
          case 3:
          case 4:
          case 5:
          case 6:
          case 8:
          case 9:
          case 10:
          case 11:
          case 13:
          case 15:
          case 17:
          case 18:
            break;
          default:
            goto LABEL_59;
        }
      }
    }
    else if ( v19 != 1 )
    {
      if ( (v42 & 2) != 0 || v562 && *(_DWORD *)(*((_QWORD *)v562 + 5) + 236LL) == 2 )
        v43 = v19 == 2;
      else
LABEL_59:
        v43 = 0;
      goto LABEL_61;
    }
  }
  v43 = 1;
LABEL_61:
  if ( !v43 )
    goto LABEL_62;
  v560 = v27;
  v559 = v27;
  if ( (v27 & 0x400000) != 0 )
    goto LABEL_78;
  if ( !v562 )
  {
    if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 || (v42 = v27, v560 = v27, v559 = v27, (_WORD)a2 != 0x8002) )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v42);
      if ( CurrentProcessWin32Process && !*(_QWORD *)CurrentProcessWin32Process )
        CurrentProcessWin32Process = 0LL;
      v42 = v27;
      v560 = v27;
      v559 = v27;
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 816) & 1) != 0 )
      {
        LODWORD(v42) = v27 | 0x400000;
        v560 = v27 | 0x400000;
        v559 = v27 | 0x400000;
      }
    }
    goto LABEL_79;
  }
  v560 = v27;
  v559 = v27;
  if ( (_WORD)v31 == 0x4000 && (v560 = v27, v559 = v27, (*(_BYTE *)(*((_QWORD *)v562 + 5) + 26LL) & 0x50) == 0x40) )
  {
    v42 = v27;
    LODWORD(v42) = v27 | 0x400000;
    v560 = v27 | 0x400000;
    v559 = v27 | 0x400000;
  }
  else
  {
LABEL_78:
    v42 = v560;
  }
LABEL_79:
  if ( (v42 & 0x2200000) == 0x2200000 )
    goto LABEL_38;
  if ( *(_QWORD *)(v563 + 592) )
  {
    if ( RtlAreAllAccessesGranted(*(_DWORD *)(v563 + 896), 2u) )
    {
      v46 = 1;
    }
    else
    {
      UserSetLastError(5);
      v46 = 0;
    }
    if ( !v46 )
    {
LABEL_64:
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v558);
      goto LABEL_65;
    }
  }
  if ( (_WORD)v31 != 0x4000 )
    goto LABEL_101;
  if ( !v562 )
  {
    v38 = 1406;
    goto LABEL_63;
  }
  v47 = v562;
  v48 = 1;
  do
  {
    v49 = 0LL;
    v50 = *((_QWORD *)v47 + 3);
    if ( v50 )
    {
      v51 = *(_QWORD *)(v50 + 8);
      if ( v51 )
        v49 = *(struct tagWND **)(v51 + 24);
    }
    if ( v47 == v49 )
      break;
    v47 = (struct tagWND *)*((_QWORD *)v47 + 13);
    ++v48;
  }
  while ( v47 );
  v52 = PsGetCurrentProcessWin32Process(v50);
  if ( v52 && !*(_QWORD *)v52 )
    v52 = 0LL;
  v42 = gNestedWindowLimit;
  if ( v48 > gNestedWindowLimit )
    goto LABEL_38;
  if ( v48 > *(_DWORD *)(v52 + 1088) )
    *(_DWORD *)(v52 + 1088) = v48;
  if ( v48 > gNestedWindowLimit )
    goto LABEL_38;
  while ( 1 )
  {
LABEL_101:
    v53 = v601;
    if ( (v601 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( !*(_QWORD *)(SGDGetUserSessionState(v42) + 8)
        || (v55 = SGDGetUserSessionState(v54), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v55 + 8))) )
      {
        v569 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
        if ( (gdwExtraInstrumentations & 1) != 0 )
          goto LABEL_1121;
        DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
      }
      v57 = PsGetCurrentThreadWin32Thread(v56);
      ++*(_DWORD *)(v57 + 48);
      v58 = *(_WORD **)(v53 + 8);
      v59 = 2147483646LL;
      v621 = 2147483646LL;
      v619 = v58;
      v60 = 256LL;
      v620 = 256LL;
      v61 = &gawchAtomScratch;
      v612 = &gawchAtomScratch;
      v62 = 0;
      v63 = 0LL;
      v611 = 0LL;
      while ( v60 )
      {
        if ( !v59 )
          goto LABEL_113;
        v64 = *v58;
        if ( !*v58 )
          goto LABEL_113;
        v619 = ++v58;
        *v61++ = v64;
        v612 = v61;
        v620 = --v60;
        v621 = --v59;
        v611 = ++v63;
      }
      v612 = --v61;
      v611 = v63 - 1;
      v62 = -2147483643;
LABEL_113:
      *v61 = 0;
      if ( v62 < 0 )
      {
        Atom = 0;
        v567 = 0;
        v583 = 1;
      }
      else
      {
        Atom = UserFindAtom(&gawchAtomScratch);
        v567 = Atom;
      }
      v66 = PsGetCurrentThreadWin32Thread(v60);
      --*(_DWORD *)(v66 + 48);
    }
    else
    {
      Atom = v601;
      v567 = v601;
    }
    if ( Atom )
    {
      v67 = *v575;
      ClassPtr = (unsigned __int64 *)((char *)*v575 + 344);
      v69 = *ClassPtr;
      if ( *ClassPtr )
      {
        while ( 1 )
        {
          v70 = *(_QWORD *)(v69 + 8);
          if ( *(_WORD *)v70 == Atom
            && (!v688[0] || WORD1(*(_QWORD *)(v70 + 64)) == WORD1(v688[0]))
            && (*(_WORD *)(v70 + 6) & 4) == 0 )
          {
            break;
          }
          ClassPtr = (unsigned __int64 *)v69;
          v69 = *(_QWORD *)v69;
          if ( !v69 )
            goto LABEL_125;
        }
      }
      else
      {
LABEL_125:
        ClassPtr = InnerGetClassPtr(Atom, (_QWORD *)v67 + 44, 0LL);
        if ( !ClassPtr )
        {
          v71 = hModClient;
          ClassPtr = InnerGetClassPtr(Atom, (_QWORD *)v67 + 43, hModClient);
          if ( !ClassPtr )
            ClassPtr = InnerGetClassPtr(Atom, (_QWORD *)v67 + 44, v71);
        }
      }
      if ( ClassPtr )
        break;
    }
LABEL_185:
    if ( v583
      || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x2000) != 0
      || ((a2 & 0xFFFFFFFFFFFF0000uLL) == 0 ? (v93 = (wchar_t *)a2) : (v93 = *(wchar_t **)(a2 + 8)),
          !(unsigned int)RegisterDefaultClass(v93)) )
    {
      v38 = 1407;
      goto LABEL_63;
    }
    v583 = 1;
  }
  v72 = *ClassPtr;
  if ( *ClassPtr != *(_QWORD *)v570[0] )
  {
    if ( v570[0] != gSmartObjNullRef && !--*(_DWORD *)(v570[0] + 8) )
    {
      if ( *(_BYTE *)(v570[0] + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v570[0]);
    }
    if ( v72 )
    {
      v570[0] = *(_QWORD *)(v72 + 128);
      ++*(_DWORD *)(v570[0] + 8);
    }
    else
    {
      v570[0] = gSmartObjNullRef;
    }
  }
  v73 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v570[0] + 8LL) + 6LL);
  if ( (v73 & 1) != 0 && (unsigned int)PsGetWin32KFilterSet(v73) == 5 )
    goto LABEL_64;
  v74 = 0;
  v75 = 0;
  v76 = v560;
  if ( (v560 & 1) != 0 )
    goto LABEL_146;
  if ( (v560 & 0x20000) != 0 )
    goto LABEL_147;
  v69 = a5;
  if ( (a5 & 0x40000) != 0 )
    goto LABEL_146;
  if ( (a5 & 0xC00000) == 0x400000 )
  {
    v76 = v560;
LABEL_146:
    v75 = 1;
    goto LABEL_147;
  }
  v76 = v560;
  if ( (a5 & 0xC00000) == 0xC00000 )
  {
    LOBYTE(v74) = a15 >= 0x400u;
    v75 = v74;
  }
LABEL_147:
  if ( v75 )
    v77 = v76 | 0x100;
  else
    v77 = v76 & 0xFFFFFEFF;
  v559 = v77;
  v560 = v77;
  if ( (*(_DWORD *)(v563 + 488) & 1) != 0 )
  {
    v572 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 810LL);
  }
  LOBYTE(v69) = 1;
  v78 = HMAllocObject(v563, v615, v69);
  v79 = v78;
  v602 = (struct tagWND *)v78;
  if ( !v78 )
  {
    if ( (unsigned int)UserGetLastError() == 8 )
      TraceLoggingCreateWindowFailed(
        1u,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
    goto LABEL_64;
  }
  tagObjLock::LockInitialize((tagObjLock *)(v78 + 56));
  v80 = (tagObjLock *)Win32AllocPoolZInit(32LL, 1752200021LL);
  *(_QWORD *)(v79 + 144) = v80;
  if ( !v80 )
  {
    tagObjLock::LockUnInitializeThreadCreator((tagObjLock *)(v79 + 56));
    HMFreeObject(v79);
    goto LABEL_64;
  }
  tagObjLock::LockInitialize(v80);
  v617 = (_QWORD *)(v79 + 16);
  v618.m128i_i64[0] = v79 + 16;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v79 + 16) + 424LL) + 812LL) & 0x1000000) != 0 )
    *(_DWORD *)(v79 + 324) |= 1u;
  v81 = v79 + 40;
  v624 = v79 + 40;
  *(_QWORD *)(*(_QWORD *)(v79 + 40) + 296LL) = 0LL;
  *(_QWORD *)(v79 + 280) = 0LL;
  *(_QWORD *)(*(_QWORD *)(v79 + 40) + 168LL) = 0LL;
  CurrentThreadDpiHostingBehavior = W32GetCurrentThreadDpiHostingBehavior();
  v83 = CurrentThreadDpiHostingBehavior;
  *(_DWORD *)(*(_QWORD *)(v79 + 40) + 292LL) = CurrentThreadDpiHostingBehavior;
  if ( (_WORD)v561 == 0x4000 && v562 && v562 != (struct tagWND *)GetThreadDesktopWindow(0LL) )
  {
    v84 = 0LL;
    v85 = PtiCurrentShared(v83);
    if ( v85 )
    {
      v86 = *((_QWORD *)v85 + 57);
      if ( v86 )
        v84 = *(struct tagWND **)(v86 + 104);
    }
    if ( v562 != v84 )
    {
      v87 = v562;
      v83 = *(_QWORD *)(*((_QWORD *)v562 + 2) + 424LL);
      if ( *v575 == (struct tagPROCESSINFO *)v83 && !IsChildWindowDpiIsolationEnabled(0LL, v562) )
      {
        v88 = *(unsigned int *)(*((_QWORD *)v562 + 5) + 288LL);
        *(_DWORD *)(*(_QWORD *)(v79 + 40) + 288LL) = v88;
        v89 = *(_DWORD *)(*((_QWORD *)v87 + 5) + 288LL);
        if ( (((unsigned __int8)v89 ^ (unsigned __int8)W32GetCurrentThreadDpiAwarenessContext(v88)) & 0xF) != 0 )
          TraceChildWindowDpiTelemetry(v79, (__int64)v562, 0);
        v81 = v79 + 40;
        goto LABEL_171;
      }
    }
    v81 = v79 + 40;
  }
  *(_DWORD *)(*(_QWORD *)v81 + 288LL) = W32GetCurrentThreadDpiAwarenessContext(v83);
  if ( (*(_DWORD *)(*(_QWORD *)v81 + 288LL) & 0x4000000F) == 0
    && (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 0x40) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)v81 + 288LL) |= 0x40000000u;
  }
LABEL_171:
  v90 = *(_QWORD *)v81;
  v91 = *(_DWORD *)(*(_QWORD *)v81 + 288LL);
  if ( (v91 & 0xF) == 2 && (v91 & 0xF0) == 0x20 )
    *(_DWORD *)(v79 + 320) |= 0x180000u;
  if ( (*(_BYTE *)(v90 + 288) & 0xF) == 3 )
    *(_DWORD *)(v79 + 320) |= 0x80000u;
  v92 = *(_QWORD *)v570[0];
  if ( *(_QWORD *)v570[0] )
    *(_QWORD *)(*(_QWORD *)(v79 + 40) + 128LL) = *(_QWORD *)(v92 + 16);
  else
    *(_QWORD *)(*(_QWORD *)(v79 + 40) + 128LL) = 0LL;
  *(_QWORD *)(v79 + 136) = v92;
  *(_DWORD *)(*(_QWORD *)v81 + 28LL) = a5 & 0xEFFFFFFF;
  *(_DWORD *)(*(_QWORD *)v81 + 24LL) = v560 & 0xFDF7FFFF;
  *(_DWORD *)(*(_QWORD *)v81 + 200LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v570[0] + 8LL) + 80LL);
  *(_DWORD *)(*(_QWORD *)v81 + 248LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v570[0] + 8LL) + 84LL);
  if ( !(unsigned int)ReferenceClass(*(_QWORD *)v570[0], v79) )
    goto LABEL_184;
  v94 = *(_QWORD *)(v79 + 136);
  if ( v94 != *(_QWORD *)v570[0] )
  {
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v570);
    if ( v94 )
    {
      v570[0] = *(_QWORD *)(v94 + 128);
      ++*(_DWORD *)(v570[0] + 8);
    }
    else
    {
      v570[0] = gSmartObjNullRef;
    }
  }
  v95 = *(_QWORD *)v570[0];
  v96 = *(_DWORD *)(*(_QWORD *)v570[0] + 72LL);
  if ( v96 >= 131068 )
  {
    v97 = 0;
    goto LABEL_202;
  }
  *(_DWORD *)(v95 + 72) = v96 + 1;
  v98 = *(_QWORD *)(v95 + 56);
  if ( v95 != v98 )
  {
    v99 = *(_DWORD *)(v98 + 72);
    if ( v99 >= 131068 )
    {
      *(_DWORD *)(v95 + 72) = v96;
      v97 = 0;
      goto LABEL_202;
    }
    *(_DWORD *)(v98 + 72) = v99 + 1;
  }
  v100 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v100 = *ThreadWin32Thread;
  *(_QWORD *)&v613 = *(_QWORD *)(v100 + 16);
  *(_QWORD *)(v100 + 16) = &v613;
  *((_QWORD *)&v613 + 1) = v95;
  v614 = ClassUnlockWorker;
  v97 = 1;
LABEL_202:
  if ( !v97 )
  {
    DereferenceClass(*v575);
LABEL_184:
    tagObjLock::LockUnInitializeThreadCreator(*(tagObjLock **)(v79 + 144));
    Win32FreePool(*(void **)(v79 + 144));
    tagObjLock::LockUnInitializeThreadCreator((tagObjLock *)(v79 + 56));
    HMFreeObject(v79);
    goto LABEL_185;
  }
  *(_QWORD *)(*(_QWORD *)(v79 + 40) + 224LL) = a17;
  v102 = v563;
  if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)v570[0] + 8LL) + 2LL) == *(_WORD *)(gpsi + 868LL) )
  {
    *(_QWORD *)(*(_QWORD *)(v79 + 40) + 208LL) = 0LL;
  }
  else
  {
    v103 = *(__int64 **)(v563 + 792);
    v104 = 0LL;
    if ( v103 )
      v104 = *v103;
    *(_QWORD *)(*(_QWORD *)(v79 + 40) + 208LL) = v104;
  }
  *(_DWORD *)(*(_QWORD *)(v79 + 40) + 236LL) = v19;
  v105 = *(_QWORD *)(v79 + 40);
  v106 = v562;
  if ( *(_DWORD *)(v105 + 236) != 1 )
  {
    LOBYTE(v107) = IsTopLevelParent((__int64)v562);
    if ( v107 )
    {
      *(_DWORD *)(v105 + 24) |= 8u;
      v105 = *(_QWORD *)(v79 + 40);
    }
  }
  if ( v587 )
    *(_BYTE *)(v105 + 232) |= 0x40u;
  ++*(_DWORD *)(v102 + 904);
  *(_QWORD *)&v603 = 0LL;
  v604 = 0LL;
  v605 = 0LL;
  v606 = 0LL;
  v607 = 0LL;
  v608 = 0LL;
  v609 = 0LL;
  DWORD2(v607) = v560;
  *((void **)&v603 + 1) = v688[0];
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( v568 >= 0 )
    {
      *(_QWORD *)&v607 = *(_QWORD *)(a2 + 8);
      v609 = *(_OWORD *)a2;
    }
    else
    {
      v108 = *(_QWORD *)(*(_QWORD *)v570[0] + 104LL);
      *(_QWORD *)&v607 = v108;
      if ( (v108 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        RtlInitLargeAnsiString(&v609, v108);
        v102 = v563;
      }
    }
  }
  else
  {
    *(_QWORD *)&v607 = a2;
  }
  if ( v616 )
  {
    *((_QWORD *)&v606 + 1) = v616[1];
    v608 = *(_OWORD *)v616;
  }
  LODWORD(v606) = a5;
  v559 = a6;
  v565 = a7;
  *((_QWORD *)&v605 + 1) = __PAIR64__(a6, a7);
  v572 = a8;
  v569 = a9;
  *(_QWORD *)&v605 = __PAIR64__(a8, a9);
  if ( v106 )
    *((_QWORD *)&v604 + 1) = *(_QWORD *)v106;
  else
    *((_QWORD *)&v604 + 1) = 0LL;
  v109 = v561;
  v110 = v578;
  if ( (_WORD)v561 != 0x4000 )
  {
    if ( !v578 )
    {
      if ( !*(_QWORD *)v577[0] )
      {
        *(_QWORD *)&v604 = 0LL;
        goto LABEL_234;
      }
      v110 = *(_QWORD **)v577[0];
    }
    *(_QWORD *)&v604 = *v110;
    goto LABEL_234;
  }
  if ( !v578 )
    v110 = *(_QWORD **)v577[0];
  *(_QWORD *)&v604 = v110;
  *(_DWORD *)(*(_QWORD *)(v79 + 40) + 24LL) |= *(_DWORD *)(*((_QWORD *)v106 + 5) + 24LL) & 0xC4000000;
LABEL_234:
  *(_QWORD *)&v603 = v598;
  *(_QWORD *)&v626 = *(_QWORD *)(v102 + 416);
  *(_QWORD *)(v102 + 416) = &v626;
  *((_QWORD *)&v626 + 1) = v79;
  HMLockObject(v79);
  *(_QWORD *)&v689[0] = 0LL;
  if ( a6 == 0x80000000 || (v111 = a6, a6 == 0x8000) )
    v111 = 0;
  LODWORD(v689[0]) = v111;
  v112 = v565;
  if ( v565 == 0x80000000 || v565 == 0x8000 )
    v112 = 0;
  DWORD1(v689[0]) = v112;
  v113 = v572;
  if ( v572 == 0x80000000 || v572 == 0x8000 )
    v113 = 0;
  DWORD2(v689[0]) = v113 + v111;
  v114 = v569;
  if ( v569 == 0x80000000 || v569 == 0x8000 )
    v114 = 0;
  HIDWORD(v689[0]) = v112 + v114;
  InheritedMonitor = (__int64 *)GetInheritedMonitor((struct tagWND *)v79);
  v584 = InheritedMonitor != 0LL;
  if ( !InheritedMonitor && v106 )
    InheritedMonitor = (__int64 *)ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v106 + 5) + 256LL));
  if ( InheritedMonitor
    || (InheritedMonitor = (__int64 *)MonitorFromRect((__int64)v689, 2u, 0), v116 = 0LL, InheritedMonitor) )
  {
    v116 = *InheritedMonitor;
  }
  *(_QWORD *)(*(_QWORD *)(v79 + 40) + 256LL) = v116;
  *(_DWORD *)(*(_QWORD *)(v79 + 40) + 284LL) = *(unsigned __int16 *)(InheritedMonitor[5] + 60);
  v117 = (_DWORD *)InheritedMonitor[16];
  *(_QWORD *)(v79 + 288) = v117;
  ++*v117;
  *(_QWORD *)(v79 + 296) = 0LL;
  if ( v109 != 0x4000 || IsDpiBoundaryBetweenWindows((const struct tagWND *)v79, v106) )
    UpdateTopLevelWindowDPITransform(v79, InheritedMonitor);
  if ( v109 == 0x4000 )
  {
    if ( v106 )
    {
      *(_WORD *)(*(_QWORD *)(v79 + 40) + 286LL) = *(_WORD *)(*((_QWORD *)v106 + 5) + 286LL);
      v118 = (_DWORD *)*((_QWORD *)v106 + 37);
      if ( v118 )
      {
        *(_QWORD *)(v79 + 296) = v118;
        ++*v118;
      }
    }
  }
  v119 = *(_QWORD *)(v79 + 24);
  v120 = (_QWORD *)(v79 + 104);
  if ( v119 )
  {
    v121 = *(_QWORD *)(v119 + 104);
    if ( v121 )
      *(_QWORD *)(*(_QWORD *)(v79 + 40) + 48LL) = *(_QWORD *)(v121 + 48);
    else
      *(_QWORD *)(*(_QWORD *)(v79 + 40) + 48LL) = 0LL;
    v638[0] = v79 + 104;
    v638[1] = v121;
    HMAssignmentLock(v638, 0LL);
  }
  v597 = v79 + 104;
  if ( (unsigned int)IsWindowDesktopComposed(v79) )
  {
    v123 = v106;
    if ( v109 != 0x4000 && (!v106 || v106 != *(struct tagWND **)(*((_QWORD *)v106 + 3) + 104LL)) )
    {
      v123 = 0LL;
      v124 = PtiCurrentShared(v122);
      if ( v124 )
      {
        v125 = *((_QWORD *)v124 + 58);
        if ( v125 )
          v123 = *(struct tagWND **)(v125 + 24);
      }
    }
    memset(&v689[1], 0, 32);
    memset(&v690, 0, sizeof(v690));
    Prop = 0LL;
    v127 = 0;
    if ( *v120 )
    {
      v128 = 0LL;
      v122 = *(_QWORD *)(v79 + 24);
      if ( v122 )
      {
        v129 = *(_QWORD *)(v122 + 8);
        if ( v129 )
          v128 = *(_QWORD *)(v129 + 24);
      }
      if ( *v120 == v128 )
        v127 = 1;
    }
    if ( v127 || (*(_BYTE *)(*(_QWORD *)(v79 + 40) + 26LL) & 8) != 0 && GetTopLevelWindow(v79) )
      Prop = GetProp(v79, *(unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Busy, 1u);
    if ( Prop )
    {
      *(__m256i *)&v689[1] = *(__m256i *)Prop;
      v690 = *(__m256i *)(Prop + 32);
      v131 = v689[1];
    }
    else
    {
      v132 = v689[1] & 0xFFFF0000;
      v668 = 0LL;
      *(_OWORD *)((char *)&v689[1] + 8) = 0LL;
      v690.m256i_i64[0] = 0LL;
      v133 = *(struct tagTHREADINFO **)(v79 + 16);
      if ( !v133 )
        v133 = PtiCurrentShared(v122);
      v131 = v132 & 0xFFF9FFFF | (*((_QWORD *)v133 + 81) >> 3) & 0x40000;
      v690.m256i_i32[2] = g_defaultFrameStyle;
      *(__int64 *)((char *)&v690.m256i_i64[1] + 4) = 0LL;
      *(__int64 *)((char *)&v690.m256i_i64[2] + 4) = 0LL;
    }
    LODWORD(v689[1]) = v131 & 0x7FFFF;
    v134 = *(struct _KPROCESS **)(**(_QWORD **)(v79 + 16) + 544LL);
    ProcessSequenceNumber = PsGetProcessSequenceNumber(v134);
    ProcessId = PsGetProcessId(v134);
    v598 = ***(_QWORD ***)(*(_QWORD *)(v79 + 24) + 8LL);
    v135 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v79 + 136) + 8LL) + 8LL);
    v561 = v135;
    v136 = *(_QWORD *)(v79 + 160);
    if ( v136 )
    {
      v137 = MNLookUpItem(v136, 0xF060u, 0, 0LL);
      if ( !v137
        && (v137 = MNLookUpItem(*(_QWORD *)(v79 + 160), 0x8060u, 0, 0LL)) == 0
        && (v137 = MNLookUpItem(*(_QWORD *)(v79 + 160), 0xC070u, 0, 0LL)) == 0
        || (v136 = *(unsigned int *)(*(_QWORD *)v137 + 4LL), v138 = 0, (v136 & 3) != 0) )
      {
        v138 = 512;
      }
      v561 = v138 | v135;
    }
    v139 = *(_DWORD **)(v79 + 40);
    v140 = v139[58];
    v141 = v139[6];
    v587 = v139[7];
    v142 = 0LL;
    if ( v123 )
      v142 = *(_QWORD *)v123;
    v143 = *(_QWORD *)v79;
    v144 = (void *)ReferenceDwmApiPort(v136);
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(SGDGetSessionState(v145) + 32) + 13248LL));
    if ( v144 )
    {
      v671 = 0LL;
      v672 = 0LL;
      v673 = 0;
      v669 = 11534472;
      v670 = 0x8000;
      v674 = 1073741841;
      v675 = v143;
      v676 = v142;
      v677 = v587;
      v678 = v141;
      v684 = v140;
      v680 = v561;
      v681 = *(__m256i *)&v689[1];
      v682 = v690;
      v683 = v598;
      v679 = v689[0];
      v685 = (int)ProcessId;
      v686 = ProcessSequenceNumber;
      EtwUpdateEvent(v142, 1073741841LL);
      LpcRequestPort(v144, &v669);
      ObfDereferenceObject(v144);
    }
  }
  *(void **)(*(_QWORD *)(v79 + 40) + 32LL) = v688[0];
  v146 = *(_QWORD *)(*(_QWORD *)v570[0] + 8LL);
  v147 = *(_QWORD *)(v146 + 32);
  v148 = *(unsigned __int16 *)(v146 + 4);
  if ( (unsigned __int16)(v148 - 673) <= 9u )
  {
    if ( v568 < 0 )
    {
      if ( *(_QWORD *)(gpsi + 8 * v148 - 4744) == v147 )
        v147 = *(_QWORD *)(gpsi + 8 * v148 - 4936);
    }
    else if ( *(_QWORD *)(gpsi + 8 * v148 - 4936) == v147 )
    {
      v147 = *(_QWORD *)(gpsi + 8 * v148 - 4744);
    }
  }
  *(_QWORD *)(*(_QWORD *)(v79 + 40) + 120LL) = v147;
  if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v570[0] + 8LL) + 6LL) & 1) != 0 )
  {
    SetOrClrWF(1, (__int64 *)v79, 0x204u, 1);
    goto LABEL_324;
  }
  v150 = *(_QWORD *)(v79 + 40);
  v151 = *(_DWORD *)(v150 + 28);
  v152 = *(_DWORD *)(v150 + 24);
  v153 = *(_DWORD *)(v150 + 232);
  *(_BYTE *)(v150 + 18) &= ~4u;
  if ( (unsigned int)IsWindowDesktopComposed(v79) )
  {
    v154 = *(_DWORD **)(v79 + 40);
    v149 = (unsigned int)v154[7];
    v155 = v154[6];
    v156 = v155 ^ v152;
    v157 = (unsigned int)v154[58];
    v158 = v157 ^ v153;
    v159 = v151 ^ v154[7];
    if ( v159 || v156 || v158 )
    {
      v160 = 0;
      v161 = 0;
      v162 = 0;
      if ( (v159 & 0xB1CF0000) != 0 )
      {
        v160 = -16;
        v161 = v149;
        goto LABEL_318;
      }
      if ( (v156 & 0x4E27A9) != 0 )
      {
        v160 = -20;
        v161 = v155;
        goto LABEL_318;
      }
      if ( (v158 & 0x12C0) != 0 )
      {
        v160 = -268435456;
        v161 = v157;
LABEL_318:
        v162 = 1;
      }
      if ( v162 )
      {
        DirtyVisRgnTrackers(v79);
        v163 = *(_QWORD *)v79;
        v165 = (void *)ReferenceDwmApiPort(v164);
        DwmAsyncChildStyleChange(v165, v163, v160, v161);
      }
      if ( (v159 & 0xC40000) != 0 || (v156 & 0x200A0381) != 0 )
        WindowMargins::CheckForChanges((struct tagWND *)v79, 1LL, v157);
    }
  }
LABEL_324:
  if ( v558[0] )
  {
    v166 = PsGetCurrentThreadWin32Thread(v149);
    --*(_DWORD *)(v166 + 48);
    v558[0] = 0;
  }
  v167 = (__int64 *)(v79 + 40);
  v168 = *(_BYTE *)(*(_QWORD *)(v79 + 40) + 18LL) & 4;
  v169 = *(_QWORD *)v570[0];
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v570[0] + 8LL) + 84LL) )
  {
    v170 = Win32AllocPoolZInit(*(unsigned int *)(*(_QWORD *)(*(_QWORD *)v570[0] + 8LL) + 84LL), 1937208149LL);
    *(_QWORD *)(v79 + 280) = v170;
    if ( !v170 )
    {
      v564 = 5;
      goto LABEL_329;
    }
  }
  if ( (unsigned int)PsGetWin32KFilterSet(v169) == 5 && !v168 )
  {
    *(_DWORD *)(*v167 + 200) = (*(_DWORD *)(*v167 + 200) + 7) & 0xFFFFFFF8;
    *(_DWORD *)(*v167 + 200) += 32;
  }
  v175 = *(unsigned int *)(*v167 + 200);
  if ( (_DWORD)v175 )
  {
    v176 = xxxClientAllocWindowClassExtraBytes(v175);
    v171 = *v167;
    if ( !v176 )
    {
      v564 = 2;
      goto LABEL_330;
    }
    v177 = 0;
    if ( *(char *)(v171 + 19) < 0
      || *(char *)(v171 + 20) < 0
      || *(__int16 *)(v171 + 42) < 0
      || (v178 = *(_QWORD *)(v79 + 16)) != 0 && (*(_DWORD *)(v178 + 488) & 1) != 0 )
    {
      v177 = 1;
    }
    if ( !v177 && (*(_BYTE *)(_HMPheFromObject(v79) + 25) & 1) == 0 && !*(_QWORD *)(*v167 + 296) )
    {
      if ( (*(_DWORD *)(*v167 + 232) & 0x10) != 0 )
      {
        v561 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1269LL);
      }
      *(_QWORD *)(*v167 + 296) = v176;
      goto LABEL_350;
    }
    UserSetLastError(87);
LABEL_329:
    v171 = *v167;
LABEL_330:
    *(_QWORD *)(v171 + 120) = 0LL;
    SetOrClrWF(1, (__int64 *)v79, 0x204u, 1);
    goto LABEL_916;
  }
LABEL_350:
  if ( (unsigned int)PsGetWin32KFilterSet(v175) == 5 && !v168 )
  {
    v179 = *(_QWORD *)(*v167 + 296);
    v180 = *(int *)(*v167 + 200);
    v610 = *(_QWORD *)(*v167 + 120);
    *(_QWORD *)(v180 + v179 - 32) = v610;
    if ( v568 >= 0 )
      v181 = *(_QWORD *)(gpsi + 768LL);
    else
      v181 = *(_QWORD *)(gpsi + 576LL);
    *(_QWORD *)(*v167 + 120) = v181;
  }
  if ( *(_QWORD *)(*(_QWORD *)v570[0] + 80LL)
    && !*(_QWORD *)(*(_QWORD *)v570[0] + 112LL)
    && (unsigned int)PsGetWin32KFilterSet(*(_QWORD *)v570[0]) != 5 )
  {
    xxxCreateClassSmIcon(v570);
  }
  v182 = *v167;
  v183 = *(_DWORD *)(*v167 + 28);
  v184 = *(_DWORD *)(v182 + 24);
  v185 = *(_DWORD *)(v182 + 232);
  v186 = 32;
  if ( (v576 & 0x80000000) == 0LL )
    v186 = 0;
  *(_BYTE *)(((v588 >> 31) & 3) + v182 + 16) |= v186;
  if ( (unsigned int)IsWindowDesktopComposed(v79) )
  {
    v187 = *(_DWORD **)(v79 + 40);
    v188 = v187[7];
    v189 = v187[6];
    v190 = v189 ^ v184;
    v191 = (unsigned int)v187[58];
    v192 = v191 ^ v185;
    v193 = v188 ^ v183;
    if ( v193 || v190 || v192 )
    {
      v194 = 0;
      v195 = 0;
      v196 = 0;
      if ( (v193 & 0xB1CF0000) != 0 )
      {
        v194 = -16;
        v195 = v188;
        goto LABEL_373;
      }
      if ( (v190 & 0x4E27A9) != 0 )
      {
        v194 = -20;
        v195 = v189;
        goto LABEL_373;
      }
      if ( (v192 & 0x12C0) != 0 )
      {
        v194 = -268435456;
        v195 = v191;
LABEL_373:
        v196 = 1;
      }
      if ( v196 )
      {
        DirtyVisRgnTrackers(v79);
        v197 = *(_QWORD *)v79;
        v199 = (void *)ReferenceDwmApiPort(v198);
        DwmAsyncChildStyleChange(v199, v197, v194, v195);
      }
      if ( (v193 & 0xC40000) != 0 || (v190 & 0x200A0381) != 0 )
        WindowMargins::CheckForChanges((struct tagWND *)v79, 1LL, v191);
    }
  }
  if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v570[0] + 8LL) + 6LL) & 2) != 0
    || v568 < 0
    && (v567 == *(_WORD *)(gpsi + 868LL)
     || v567 == *(_WORD *)(gpsi + 878LL)
     || v567 == *(_WORD *)(gpsi + 882LL)
     || v567 == *(_WORD *)(gpsi + 904LL)
     || v567 == *(_WORD *)(gpsi + 870LL)
     || v567 == *(_WORD *)(gpsi + 874LL)
     || v567 == *(_WORD *)(gpsi + 880LL)
     || v567 == *(_WORD *)(gpsi + 898LL)
     || v567 == *(_WORD *)(gpsi + 872LL)) )
  {
    SetOrClrWF(1, (__int64 *)v79, 0x208u, 1);
  }
  AppCompatFlags = GetAppCompatFlags(v563);
  v201 = AppCompatFlags;
  if ( (AppCompatFlags & 0x8000000) != 0 )
  {
    SetOrClrWF(1, (__int64 *)v79, 0x408u, 1);
    v560 &= 0x3Fu;
    DWORD2(v607) = BYTE8(v607) & 0x3F;
  }
  v202 = a15;
  if ( a15 < 0x30Au )
  {
    if ( (v201 & 0x40) != 0 )
      SetOrClrWF(1, (__int64 *)v79, 0x640u, 1);
  }
  else
  {
    v203 = *(_QWORD *)(v79 + 40);
    v204 = *(_DWORD *)(v203 + 28);
    v205 = *(_DWORD *)(v203 + 24);
    v206 = *(_DWORD *)(v203 + 232);
    *(_BYTE *)(v203 + 21) |= 1u;
    if ( (unsigned int)IsWindowDesktopComposed(v79) )
    {
      v207 = *(unsigned int **)(v79 + 40);
      v208 = v207[7];
      v209 = v207[6];
      v210 = v205 ^ v207[6];
      v211 = v207[58];
      v212 = v206 ^ v211;
      v213 = v204 ^ v208;
      if ( v204 != v208 || v210 || v212 )
      {
        v214 = 0;
        v215 = 0;
        v216 = 0;
        if ( (v213 & 0xB1CF0000) != 0 )
        {
          v214 = -16;
          v215 = v208;
          goto LABEL_404;
        }
        if ( (v210 & 0x4E27A9) != 0 )
        {
          v214 = -20;
          v215 = v209;
          goto LABEL_404;
        }
        if ( (v212 & 0x12C0) != 0 )
        {
          v214 = -268435456;
          v215 = v211;
LABEL_404:
          v216 = 1;
        }
        if ( v216 )
        {
          DirtyVisRgnTrackers(v79);
          v217 = *(_QWORD *)v79;
          v219 = (void *)ReferenceDwmApiPort(v218);
          DwmAsyncChildStyleChange(v219, v217, v214, v215);
        }
        if ( (v213 & 0xC40000) != 0 || (v210 & 0x200A0381) != 0 )
          WindowMargins::CheckForChanges((struct tagWND *)v79, 1LL, v209);
      }
    }
    v202 = a15;
    if ( a15 >= 0x400u )
    {
      v220 = *(_QWORD *)(v79 + 40);
      v221 = *(_DWORD *)(v220 + 28);
      v222 = *(_DWORD *)(v220 + 24);
      v223 = *(_DWORD *)(v220 + 232);
      *(_BYTE *)(v220 + 21) |= 2u;
      if ( (unsigned int)IsWindowDesktopComposed(v79) )
      {
        v224 = *(unsigned int **)(v79 + 40);
        v225 = v224[7];
        v226 = v224[6];
        v227 = v222 ^ v224[6];
        v228 = v224[58];
        v229 = v223 ^ v228;
        v230 = v221 ^ v225;
        if ( v221 != v225 || v227 || v229 )
        {
          v231 = 0;
          v232 = 0;
          v233 = 0;
          if ( (v230 & 0xB1CF0000) != 0 )
          {
            v231 = -16;
            v232 = v225;
            goto LABEL_421;
          }
          if ( (v227 & 0x4E27A9) != 0 )
          {
            v231 = -20;
            v232 = v226;
            goto LABEL_421;
          }
          if ( (v229 & 0x12C0) != 0 )
          {
            v231 = -268435456;
            v232 = v228;
LABEL_421:
            v233 = 1;
          }
          if ( v233 )
          {
            DirtyVisRgnTrackers(v79);
            v234 = *(_QWORD *)v79;
            v236 = (void *)ReferenceDwmApiPort(v235);
            DwmAsyncChildStyleChange(v236, v234, v231, v232);
          }
          if ( (v230 & 0xC40000) != 0 || (v227 & 0x200A0381) != 0 )
            WindowMargins::CheckForChanges((struct tagWND *)v79, 1LL, v226);
        }
      }
      v202 = a15;
      if ( a15 >= 0x500u )
      {
        v237 = *(_QWORD *)(v79 + 40);
        v238 = *(_DWORD *)(v237 + 28);
        v239 = *(_DWORD *)(v237 + 24);
        v240 = *(_DWORD *)(v237 + 232);
        *(_BYTE *)(v237 + 21) |= 4u;
        if ( (unsigned int)IsWindowDesktopComposed(v79) )
        {
          v241 = *(_DWORD **)(v79 + 40);
          v242 = v241[7];
          v243 = v241[6];
          v244 = v243 ^ v239;
          v245 = (unsigned int)v241[58];
          v246 = v245 ^ v240;
          v247 = v238 ^ v242;
          if ( v238 != v242 || v244 || v246 )
          {
            v248 = 0;
            v249 = 0;
            v250 = 0;
            if ( (v247 & 0xB1CF0000) != 0 )
            {
              v248 = -16;
              v249 = v242;
              goto LABEL_438;
            }
            if ( (v244 & 0x4E27A9) != 0 )
            {
              v248 = -20;
              v249 = v243;
              goto LABEL_438;
            }
            if ( (v246 & 0x12C0) != 0 )
            {
              v248 = -268435456;
              v249 = v245;
LABEL_438:
              v250 = 1;
            }
            if ( v250 )
            {
              DirtyVisRgnTrackers(v79);
              v251 = *(_QWORD *)v79;
              v253 = (void *)ReferenceDwmApiPort(v252);
              DwmAsyncChildStyleChange(v253, v251, v248, v249);
            }
            if ( (v247 & 0xC40000) != 0 || (v244 & 0x200A0381) != 0 )
            {
              WindowMargins::CheckForChanges((struct tagWND *)v79, 1LL, v245);
              v202 = a15;
            }
            else
            {
              v202 = a15;
            }
          }
        }
      }
    }
  }
  v254 = v563;
  v255 = v202;
  if ( v202 <= *(_WORD *)(v563 + 636) )
    v255 = *(_DWORD *)(v563 + 636);
  *(_DWORD *)(v79 + 256) = v255;
  v256 = 0LL;
  v257 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v257 )
    v256 = *v257;
  v260 = 0;
  if ( *(_DWORD *)(v256 + 632) <= 0x9900u )
    v260 = *(_DWORD *)(v256 + 648);
  if ( (v260 & 0x10000000) != 0 )
    SetOrClrWF(1, (__int64 *)v79, 0xA80u, 1);
  if ( gihmodUserApiHook >= 0 )
  {
    CurrentProcess = PsGetCurrentProcess((unsigned int)gihmodUserApiHook, v258, v259);
    if ( !(unsigned int)PsIsProtectedProcess(CurrentProcess)
      && (unsigned int)PsGetWin32KFilterSet(v262) != 5
      && (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000000D) == 0 )
    {
      v263 = (unsigned int)gihmodUserApiHookWOW;
      if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x80u) == 0 )
        v263 = (unsigned int)gihmodUserApiHook;
      xxxLoadHmodIndex(v263);
    }
  }
  v264 = v562;
  if ( (unsigned int)WantImeWindow(v562, (struct tagWND *)v79) )
  {
    *(_DWORD *)(v79 + 320) |= 0x10000000u;
    ++*(_DWORD *)(v254 + 912);
  }
  if ( ((*(_BYTE *)(v254 + 680) | *(_BYTE *)(**(_QWORD **)(v254 + 464) + 16LL)) & 0x40) != 0 )
  {
    v622 = (__int64)&v603;
    v623 = 0LL;
    if ( (unsigned int)xxxCallHook(3, *(_QWORD *)v79, (__int64)&v622, 5) )
    {
      v564 = 6;
      v167 = (__int64 *)(v79 + 40);
      goto LABEL_916;
    }
    v265 = HIDWORD(v605);
    v559 = HIDWORD(v605);
    v565 = DWORD2(v605);
    v572 = DWORD1(v605);
    v569 = v605;
    v576 = v623;
  }
  else
  {
    v576 = 0LL;
    v265 = v559;
  }
  v167 = (__int64 *)(v79 + 40);
  v173 = *(unsigned __int8 *)(*(_QWORD *)(v79 + 40) + 31LL);
  LOBYTE(v173) = v173 & 0xC0;
  LOBYTE(v566) = v173;
  if ( (_BYTE)v173 == 64 && !v264 )
    goto LABEL_916;
  if ( ((_BYTE)v173 == 64) != v594 )
  {
    v578 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v577, 0LL);
    LOBYTE(v173) = v566;
  }
  v266 = *(_BYTE *)(*v167 + 31) & 0xC0;
  if ( v266 )
  {
    if ( v265 == 0x80000000 || v265 == 0x8000 )
    {
      v265 = 0;
      v559 = 0;
      v565 = 0;
    }
    v267 = v572;
    if ( v572 == 0x80000000 || v572 == 0x8000 )
    {
      v267 = 0;
      v572 = 0;
      v569 = 0;
    }
  }
  else
  {
    v267 = v572;
  }
  *(_QWORD *)&v571 = __PAIR64__(v565, v265);
  v561 = v267;
  *((_QWORD *)&v571 + 1) = __PAIR64__(v569, v267);
  v568 = v569;
  if ( (_BYTE)v173 == 64 )
  {
    v590 = *(_OWORD *)(*((_QWORD *)v264 + 5) + 104LL);
    if ( IsDpiBoundaryBetweenWindows((const struct tagWND *)v79, v264) )
    {
      *(_QWORD *)(v79 + 224) = 0LL;
      LogicalToPhysicalInPlaceRectWithSubpixel(v264, (int *)&v590, v79 + 224);
      PhysicalToLogicalInPlaceRectWithSubpixel((const struct tagWND *)v79, (int *)&v590, v79 + 224);
      v265 = v559;
    }
    if ( v264 != (struct tagWND *)GetDesktopWindow(v79) )
    {
      LODWORD(v571) = v265 + v590;
      DWORD1(v571) = v268 + DWORD1(v590);
    }
    v576 = 1LL;
  }
  if ( !v266 )
  {
    v269 = *(_DWORD *)(*v167 + 28);
    v270 = *(_DWORD *)(*v167 + 24);
    v271 = *(_DWORD *)(*v167 + 232);
    *(_BYTE *)(*v167 + 31) = HIBYTE(v269) | 4;
    if ( (unsigned int)IsWindowDesktopComposed(v79) )
    {
      v272 = *(_DWORD *)(*v167 + 28);
      v273 = *(_DWORD *)(*v167 + 24);
      v274 = v273 ^ v270;
      v275 = *(unsigned int *)(*v167 + 232);
      v276 = v275 ^ v271;
      v277 = v269 ^ v272;
      if ( v269 != v272 || v274 || v276 )
      {
        v278 = 0;
        v279 = 0;
        v280 = 0;
        if ( (v277 & 0xB1CF0000) != 0 )
        {
          v278 = -16;
          v279 = v272;
          goto LABEL_498;
        }
        if ( (v274 & 0x4E27A9) != 0 )
        {
          v278 = -20;
          v279 = v273;
          goto LABEL_498;
        }
        if ( (v276 & 0x12C0) != 0 )
        {
          v278 = -268435456;
          v279 = v275;
LABEL_498:
          v280 = 1;
        }
        if ( v280 )
        {
          DirtyVisRgnTrackers(v79);
          v281 = *(_QWORD *)v79;
          v283 = (void *)ReferenceDwmApiPort(v282);
          DwmAsyncChildStyleChange(v283, v281, v278, v279);
        }
        if ( (v277 & 0xC40000) != 0 || (v274 & 0x200A0381) != 0 )
          WindowMargins::CheckForChanges((struct tagWND *)v79, 1LL, v275);
      }
      v167 = (__int64 *)(v79 + 40);
    }
    v586 = 192;
    v284 = *v167;
    if ( (*(_BYTE *)(*v167 + 21) & 2) != 0 )
    {
      v285 = *(_DWORD *)(v284 + 28);
      v286 = *(_DWORD *)(v284 + 24);
      v287 = *(_DWORD *)(v284 + 232);
      *(_BYTE *)(v284 + 25) = BYTE1(v286) | 1;
      if ( (unsigned int)IsWindowDesktopComposed(v79) )
      {
        v288 = *(_DWORD *)(*v167 + 28);
        v289 = *(_DWORD *)(*v167 + 24);
        v290 = v289 ^ v286;
        v291 = *(unsigned int *)(*v167 + 232);
        v292 = v291 ^ v287;
        v293 = v285 ^ v288;
        if ( v285 != v288 || v290 || v292 )
        {
          v294 = 0;
          v295 = 0;
          v296 = 0;
          if ( (v293 & 0xB1CF0000) != 0 )
          {
            v294 = -16;
            v295 = v288;
            goto LABEL_516;
          }
          if ( (v290 & 0x4E27A9) != 0 )
          {
            v294 = -20;
            v295 = v289;
            goto LABEL_516;
          }
          if ( (v292 & 0x12C0) != 0 )
          {
            v294 = -268435456;
            v295 = v291;
LABEL_516:
            v296 = 1;
          }
          if ( v296 )
          {
            DirtyVisRgnTrackers(v79);
            v297 = *(_QWORD *)v79;
            v299 = (void *)ReferenceDwmApiPort(v298);
            DwmAsyncChildStyleChange(v299, v297, v294, v295);
          }
          if ( (v293 & 0xC40000) != 0 || (v290 & 0x200A0381) != 0 )
            WindowMargins::CheckForChanges((struct tagWND *)v79, 1LL, v291);
        }
        v167 = (__int64 *)(v79 + 40);
      }
    }
    v300 = *(_DWORD *)(*v167 + 28);
    v301 = *(_DWORD *)(*v167 + 24);
    v302 = *(_DWORD *)(*v167 + 232);
    *(_BYTE *)(*v167 + 16) |= 0x10u;
    if ( (unsigned int)IsWindowDesktopComposed(v79) )
    {
      v306 = *(_DWORD *)(*v167 + 28);
      v303 = *(unsigned int *)(*v167 + 24);
      v307 = v303 ^ v301;
      v304 = *(unsigned int *)(*v167 + 232);
      v308 = v304 ^ v302;
      v309 = v300 ^ v306;
      if ( v300 != v306 || v307 || v308 )
      {
        v310 = 0;
        v311 = 0;
        v312 = 0;
        if ( (v309 & 0xB1CF0000) != 0 )
        {
          v310 = -16;
          v311 = v306;
          goto LABEL_533;
        }
        if ( (v307 & 0x4E27A9) != 0 )
        {
          v310 = -20;
          v311 = v303;
          goto LABEL_533;
        }
        if ( (v308 & 0x12C0) != 0 )
        {
          v310 = -268435456;
          v311 = v304;
LABEL_533:
          v312 = 1;
        }
        if ( v312 )
        {
          DirtyVisRgnTrackers(v79);
          v313 = *(_QWORD *)v79;
          v315 = (void *)ReferenceDwmApiPort(v314);
          DwmAsyncChildStyleChange(v315, v313, v310, v311);
        }
        if ( (v309 & 0xC40000) != 0 || (v307 & 0x200A0381) != 0 )
          WindowMargins::CheckForChanges((struct tagWND *)v79, 1LL, v304);
      }
      v167 = (__int64 *)(v79 + 40);
    }
    v316 = v559;
    if ( (v559 == 0x80000000 || v559 == 0x8000) && DWORD1(v571) != 0x80000000 )
    {
      v317 = v581;
      if ( DWORD1(v571) != 0x8000 )
        v317 = DWORD1(v571);
      v581 = v317;
    }
    v318 = v584;
    if ( !v584 && (v559 == 0x80000000 || v559 == 0x8000 || v572 == 0x80000000 || v572 == 0x8000) )
    {
      v319 = *((_QWORD *)*v575 + 86);
      if ( v319 )
      {
        v320 = (struct tagMONITOR *)ValidateHmonitor(v319, v303, v304, v305);
      }
      else if ( v562 )
      {
        v320 = _MonitorFromWindowInternal(v562, 2u, 0);
      }
      else
      {
        v320 = 0LL;
      }
      if ( !v320 )
      {
        v320 = *(struct tagMONITOR **)(GetDispInfo(v319) + 96);
        goto LABEL_559;
      }
    }
    else
    {
      v320 = 0LL;
LABEL_559:
      if ( !v320 )
      {
        v320 = (struct tagMONITOR *)ValidateHmonitor(*(_QWORD *)(*v167 + 256), v303, v304, v305);
        if ( !v320 )
        {
          if ( !v318 || (v320 = (struct tagMONITOR *)GetInheritedMonitor((struct tagWND *)v79)) == 0LL )
            v320 = (struct tagMONITOR *)MonitorFromRect(*v167 + 88, 2u, 0);
          v321 = 0LL;
          if ( v320 )
            v321 = *(_QWORD *)v320;
          *(_QWORD *)(*v167 + 256) = v321;
          *(_WORD *)(*v167 + 284) = *(_WORD *)(*((_QWORD *)v320 + 5) + 60LL);
          v322 = *(_DWORD **)(v79 + 288);
          if ( v322 )
          {
            --*v322;
            v323 = *(_DWORD **)(v79 + 288);
            if ( !*v323 )
              Win32FreePool(v323);
            *(_QWORD *)(v79 + 288) = 0LL;
          }
          v324 = (_DWORD *)*((_QWORD *)v320 + 16);
          *(_QWORD *)(v79 + 288) = v324;
          ++*v324;
          UpdateTopLevelWindowDPITransform(v79, v320);
        }
      }
    }
    SetTiledRect(v79, &v687, (__int64)v320);
    if ( v316 == 0x80000000 || v316 == 0x8000 )
    {
      v326 = v575;
      v332 = *v575;
      if ( (*((_DWORD *)*v575 + 200) & 4) != 0 )
      {
        v579 = 1;
        v316 = *((_DWORD *)v332 + 196);
        v565 = *((_DWORD *)v332 + 197);
        *(_QWORD *)&v571 = __PAIR64__(v565, v316);
        v559 = v316;
      }
      else
      {
        v316 = v687;
        v565 = DWORD1(v687);
        *(_QWORD *)&v571 = v687;
        v559 = v687;
      }
      v327 = 1;
    }
    else
    {
      v325 = *((_WORD *)v320 + 37);
      v326 = v575;
      if ( v325 )
        *((_WORD *)v320 + 37) = v325 - 1;
      v327 = v585;
    }
    v328 = v572;
    if ( v572 == 0x80000000 || v572 == 0x8000 )
    {
      v333 = *v326;
      if ( (*((_DWORD *)*v326 + 200) & 2) != 0 )
      {
        v579 = 1;
        v561 = *((_DWORD *)v333 + 198);
        DWORD2(v571) = v561;
        v334 = *((_DWORD *)v333 + 199);
      }
      else
      {
        v561 = DWORD2(v687) - v316;
        DWORD2(v571) = DWORD2(v687) - v316;
        v334 = HIDWORD(v687) - v565;
      }
      HIDWORD(v571) = v334;
      v568 = v334;
    }
    else if ( v327 )
    {
      v618 = *(__m128i *)GetMonitorRect(v666, v320);
      v329 = _mm_srli_si128(v618, 8).m128i_u64[0];
      v330 = v328 + v571 - v329;
      v331 = v569 + DWORD1(v571) - HIDWORD(v329);
      if ( v330 > 0 )
      {
        v559 = v316 - v330;
        LODWORD(v571) = v316 - v330;
        if ( v316 - v330 < v618.m128i_i32[0] )
        {
          v559 = v618.m128i_i32[0];
          LODWORD(v571) = v618.m128i_i32[0];
        }
      }
      if ( v331 > 0 )
      {
        v565 -= v331;
        DWORD1(v571) = v565;
        if ( v565 < v618.m128i_i32[1] )
        {
          v565 = v618.m128i_i32[1];
          DWORD1(v571) = v618.m128i_i32[1];
        }
      }
    }
  }
  if ( v579 )
    *((_DWORD *)*v575 + 200) &= 0xFFFFFFF9;
  v335 = *v167;
  v336 = *(_BYTE *)(*v167 + 31);
  if ( (((v336 & 0xC0) + 0x80) & 0xBF) == 0 )
  {
    v337 = *(_DWORD *)(v335 + 28);
    v338 = *(_DWORD *)(v335 + 24);
    v339 = *(_DWORD *)(v335 + 232);
    *(_BYTE *)(v335 + 31) = v336 | 4;
    if ( (unsigned int)IsWindowDesktopComposed(v79) )
    {
      v340 = *(_DWORD *)(*v167 + 28);
      v341 = *(_DWORD *)(*v167 + 24);
      v342 = v341 ^ v338;
      v343 = *(unsigned int *)(*v167 + 232);
      v344 = v343 ^ v339;
      v345 = v337 ^ v340;
      if ( v337 == v340 && !v342 && !v344 )
        goto LABEL_612;
      v346 = 0;
      v347 = 0;
      v348 = 0;
      if ( (v345 & 0xB1CF0000) != 0 )
      {
        v346 = -16;
        v347 = v340;
        goto LABEL_606;
      }
      if ( (v342 & 0x4E27A9) != 0 )
      {
        v346 = -20;
        v347 = v341;
        goto LABEL_606;
      }
      if ( (v344 & 0x12C0) != 0 )
      {
        v346 = -268435456;
        v347 = v343;
LABEL_606:
        v348 = 1;
      }
      if ( v348 )
      {
        DirtyVisRgnTrackers(v79);
        v349 = *(_QWORD *)v79;
        v351 = (void *)ReferenceDwmApiPort(v350);
        DwmAsyncChildStyleChange(v351, v349, v346, v347);
      }
      if ( (v345 & 0xC40000) != 0 || (v342 & 0x200A0381) != 0 )
      {
        WindowMargins::CheckForChanges((struct tagWND *)v79, 1LL, v343);
        v167 = (__int64 *)(v79 + 40);
      }
      else
      {
LABEL_612:
        v167 = (__int64 *)(v79 + 40);
      }
    }
  }
  *(_WORD *)(*v167 + 30) |= v586;
  if ( v578 )
  {
    v354 = v561;
  }
  else
  {
    if ( !*(_QWORD *)v577[0] && (_BYTE)v566 != 64 && *(_QWORD *)(*(_QWORD *)v570[0] + 96LL) )
    {
      v636 = 0LL;
      v352 = v79;
      if ( *(_QWORD *)(v79 + 104) )
        v352 = *(_QWORD *)(v79 + 104);
      zzzLockDisplayAreaAndInvalidateDCCache(v352, 16, 0LL);
      RtlInitUnicodeStringOrId(&v636, *(_QWORD *)(*(_QWORD *)v570[0] + 96LL));
      v353 = xxxClientLoadMenu(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v570[0] + 8LL) + 64LL), &v636);
      v578 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v577, v353);
      if ( (*(_BYTE *)(*v167 + 31) & 0xC0) == 0x40 || (unsigned int)IsWindowBeingDestroyed(v79) )
      {
        v355 = SmartObjStackRef<tagMENU>::operator tagMENU *(v577);
        DestroyMenu(v355);
        v578 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v577, 0LL);
        goto LABEL_916;
      }
      if ( SmartObjStackRef<tagMENU>::operator==((__int64)v577) )
        *(_QWORD *)&v604 = 0LL;
      else
        *(_QWORD *)&v604 = *(_QWORD *)SmartObjStackRef<tagMENU>::operator tagMENU *(v577);
    }
    v568 = HIDWORD(v571);
    v354 = DWORD2(v571);
    v561 = DWORD2(v571);
  }
  v356 = (_QWORD *)(v79 + 168);
  if ( (*(_BYTE *)(*v167 + 31) & 0xC0) == 0x40 )
  {
    *(_QWORD *)(*v167 + 320) = SmartObjStackRef<tagMENU>::operator tagMENU *(v577);
    *(_QWORD *)(*(_QWORD *)(v79 + 40) + 152LL) = 0LL;
    *v356 = 0LL;
  }
  else
  {
    *(_QWORD *)(*v167 + 320) = 0LL;
    if ( *v356 )
    {
      v357 = (_QWORD *)(*v356 + 80LL);
      if ( *v357 == v79 )
        HMAssignmentUnlock(v357);
    }
    if ( (v578 || *(_QWORD *)v577[0]) && !*(_QWORD *)(*(_QWORD *)v577[0] + 80LL) )
    {
      v639[0] = *(_QWORD *)v577[0] + 80LL;
      v639[1] = v79;
      HMAssignmentLock(v639, 0LL);
    }
    v358 = v578;
    if ( v578 || (v358 = *(_QWORD **)v577[0]) != 0LL )
      *(_QWORD *)(*(_QWORD *)(v79 + 40) + 152LL) = v358[6];
    else
      *(_QWORD *)(*(_QWORD *)(v79 + 40) + 152LL) = 0LL;
    v637[0] = v79 + 168;
    v637[1] = v358;
    HMAssignmentLock(v637, 0LL);
    v568 = HIDWORD(v571);
    v354 = DWORD2(v571);
    v561 = DWORD2(v571);
  }
  v173 = *(unsigned __int8 *)(*v167 + 31);
  LOBYTE(v173) = v173 & 0xC0;
  if ( (_BYTE)v173 != 64 )
  {
    if ( (v573 & 4) != 0 )
      CoreWindowProp::ChangeRole(v79, 1LL, 1LL);
    *(_QWORD *)(*(_QWORD *)(v79 + 40) + 176LL) = *(_QWORD *)(v79 + 48);
    v640[0] = v79 + 200;
    v640[1] = v79;
    HMAssignmentLock(v640, 0LL);
    if ( !v562
      || (v361 = *((_QWORD *)v562 + 3), v562 == *(struct tagWND **)(v361 + 104))
      || (v362 = v562 == *(struct tagWND **)(*(_QWORD *)(v361 + 8) + 24LL), v363 = 0, v362) )
    {
      v363 = 1;
    }
    if ( v363 )
    {
      v365 = (__int64 *)(v79 + 120);
      *(_QWORD *)(*(_QWORD *)(v79 + 40) + 64LL) = 0LL;
      v641[0] = v79 + 120;
      v641[1] = 0LL;
      HMAssignmentLock(v641, 0LL);
    }
    else
    {
      NonChildAncestor = (struct tagWND *)GetNonChildAncestor((__int64)v562);
      if ( !(unsigned int)ValidateOwnerDepth(v79, NonChildAncestor) )
        goto LABEL_655;
      if ( NonChildAncestor )
      {
        if ( (unsigned int)IsWindowBeingDestroyed((__int64)NonChildAncestor) )
        {
          v573 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1865LL);
          UserSetLastError(87);
        }
        *(_DWORD *)(*v167 + 236) = *(_DWORD *)(*((_QWORD *)NonChildAncestor + 5) + 236LL);
        SetOrClrWF(*(_BYTE *)(*((_QWORD *)NonChildAncestor + 5) + 232LL) & 0x40, (__int64 *)v79, 0xD840u, 1);
        WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(NonChildAncestor);
      }
      v365 = (__int64 *)(v79 + 120);
      v659 = *(_OWORD *)LockPointer(&v667, v79 + 120, (__int64)NonChildAncestor);
      HMAssignmentLock(&v659, 1LL);
      v366 = *(_QWORD *)(v79 + 120);
      if ( v366 && ((*(_BYTE *)(*(_QWORD *)(v366 + 40) + 24LL) & 8) != 0 || *(_DWORD *)(*v167 + 236) != 1) )
      {
        SetOrClrWF(1, (__int64 *)v79, 0x808u, 1);
        v366 = *v365;
      }
      v367 = gpsi;
      if ( v567 != *(_WORD *)(gpsi + 898LL) )
      {
        if ( v366 )
        {
          v368 = *(_QWORD *)(v366 + 16);
          if ( v368 != v563 )
            zzzAttachThreadInput(v563, v368, 1LL);
        }
      }
    }
    if ( *v365 )
    {
      v360 = (_DWORD *)(v79 + 320);
      v574 = (_DWORD *)(v79 + 320);
    }
    else
    {
      v369 = 0;
      if ( (*(_DWORD *)(v79 + 320) & 0x1000) != 0 )
      {
        v589 = 0LL;
        if ( CWindowProp::GetProp<CoreWindowProp>(v79, &v589) )
          v369 = *(_DWORD *)(v589 + 28);
      }
      v574 = (_DWORD *)(v79 + 320);
      if ( !v369 )
      {
        v367 = *v167;
        v370 = *(_DWORD *)(*v167 + 236);
        if ( v370 > 0xF || (v371 = 44800, !_bittest(&v371, v370)) )
        {
          v360 = (_DWORD *)(v79 + 320);
          v574 = (_DWORD *)(v79 + 320);
          if ( (*(_BYTE *)(v367 + 232) & 0x40) == 0 )
            goto LABEL_679;
        }
        WindowCloakStateComponentUIAware = 2;
        v574 = (_DWORD *)(v79 + 320);
      }
      v360 = (_DWORD *)(v79 + 320);
    }
LABEL_679:
    v359 = v562;
    if ( !v562 || v562 != *(struct tagWND **)(*((_QWORD *)v562 + 3) + 104LL) )
    {
      v359 = 0LL;
      v562 = 0LL;
      v372 = PtiCurrentShared(v367);
      if ( v372 )
      {
        v373 = *((_QWORD *)v372 + 58);
        if ( v373 )
        {
          v359 = *(struct tagWND **)(v373 + 24);
          v562 = v359;
        }
      }
      *(_QWORD *)&v628 = *(_QWORD *)(v563 + 416);
      *(_QWORD *)(v563 + 416) = &v628;
      *((_QWORD *)&v628 + 1) = v359;
      if ( v359 )
        HMLockObject(v359);
      v582 = 1;
    }
    if ( !v595 )
      goto LABEL_696;
    v374 = v563 + 1432;
    if ( !*(_QWORD *)(v563 + 1432) )
    {
      SetOrClrWF(1, (__int64 *)v79, 0xD880u, 1);
      v375 = v563;
      *(_DWORD *)(v563 + 1272) |= 0x40000u;
      *(_DWORD *)(*(_QWORD *)(v375 + 432) + 396LL) |= 0x2000000u;
      if ( !*(_QWORD *)(v375 + 1424) )
      {
        KernelEvent = CreateKernelEvent(1LL);
        v173 = v563;
        *(_QWORD *)(v563 + 1424) = KernelEvent;
        if ( !KernelEvent )
        {
          v564 = 7;
          goto LABEL_916;
        }
      }
      v632[0] = v374;
      v632[1] = v79;
      HMAssignmentLock(v632, 0LL);
      v359 = v562;
      goto LABEL_695;
    }
LABEL_655:
    UserSetLastError(87);
    goto LABEL_916;
  }
  v359 = v562;
  if ( !v562 )
    goto LABEL_916;
  if ( (_DWORD)v574 )
  {
    UserSetLastError(87);
    goto LABEL_916;
  }
  v360 = (_DWORD *)(v79 + 320);
LABEL_695:
  v574 = v360;
LABEL_696:
  if ( (*v360 & 0x1000000) != 0 )
  {
    v600 = *(__int64 **)(v79 + 104);
    UnlinkWindow(v79, v600);
  }
  if ( v359 )
  {
    v377 = *((_QWORD *)v359 + 3);
    if ( v359 != *(struct tagWND **)(v377 + 104) && v359 != *(struct tagWND **)(*(_QWORD *)(v377 + 8) + 24LL) )
    {
      *(_DWORD *)(*v167 + 236) = *(_DWORD *)(*((_QWORD *)v359 + 5) + 236LL);
      SetOrClrWF(*(_BYTE *)(*((_QWORD *)v359 + 5) + 232LL) & 0x40, (__int64 *)v79, 0xD840u, 1);
    }
  }
  if ( !v359 )
    goto LABEL_756;
  if ( *(char *)(*v167 + 19) < 0 || *(char *)(*((_QWORD *)v359 + 5) + 19LL) < 0 )
  {
LABEL_750:
    UserSetLastError(87);
    goto LABEL_751;
  }
  v379 = v359;
  v380 = (_QWORD *)v79;
  v381 = 1LL;
  do
  {
    v382 = 0LL;
    v383 = *((_QWORD *)v379 + 3);
    if ( v383 )
    {
      v384 = *(_QWORD *)(v383 + 8);
      if ( v384 )
        v382 = *(struct tagWND **)(v384 + 24);
    }
    if ( v379 == v382 )
      break;
    v379 = (struct tagWND *)*((_QWORD *)v379 + 13);
    v381 = (unsigned int)(v381 + 1);
  }
  while ( v379 );
  v385 = v381;
  if ( *(_QWORD *)(v79 + 112) )
  {
    while ( 1 )
    {
LABEL_715:
      while ( v380[14] )
      {
        v380 = (_QWORD *)v380[14];
        LODWORD(v381) = v381 + 1;
      }
      if ( !v380[11] )
        break;
      v380 = (_QWORD *)v380[11];
    }
    if ( (unsigned int)v381 > v385 )
      v385 = v381;
    while ( 1 )
    {
      v380 = (_QWORD *)v380[13];
      v381 = (unsigned int)(v381 - 1);
      if ( v380 == (_QWORD *)v79 )
        break;
      if ( v380[11] )
      {
        v380 = (_QWORD *)v380[11];
        goto LABEL_715;
      }
    }
  }
  v386 = PsGetCurrentProcessWin32Process(v381);
  if ( v386 && !*(_QWORD *)v386 )
    v386 = 0LL;
  v173 = gNestedWindowLimit;
  if ( v385 <= gNestedWindowLimit )
  {
    if ( v385 > *(_DWORD *)(v386 + 1088) )
      *(_DWORD *)(v386 + 1088) = v385;
    if ( v385 <= gNestedWindowLimit )
    {
      v359 = v562;
      v387 = *((_QWORD *)v562 + 3);
      if ( v387 == *(_QWORD *)(v79 + 24) )
      {
        if ( v562 == *(struct tagWND **)(v387 + 104)
          || (v362 = v562 == *(struct tagWND **)(*(_QWORD *)(v387 + 8) + 24LL), v388 = 0, v362) )
        {
          v388 = 1;
        }
        if ( v388
          || (v173 = *((_QWORD *)v562 + 5), (*(_BYTE *)(v173 + 233) & 8) != 0)
          || (v172 = *v167, *(_DWORD *)(v173 + 236) == *(_DWORD *)(*v167 + 236))
          && (v389 = *(_BYTE *)(v173 + 232),
              v173 = *(unsigned __int8 *)(v172 + 232),
              LOBYTE(v173) = v389 ^ v173,
              (v173 & 0x40) == 0) )
        {
          v391 = v562;
          while ( (struct tagWND *)v79 != v391 )
          {
            v391 = (struct tagWND *)*((_QWORD *)v391 + 13);
            if ( !v391 )
            {
              v392 = *((_QWORD *)v562 + 15);
              if ( !v392 )
              {
LABEL_749:
                v393 = 1;
                goto LABEL_752;
              }
              while ( v79 != v392 )
              {
                v392 = *(_QWORD *)(v392 + 120);
                if ( !v392 )
                  goto LABEL_749;
              }
              goto LABEL_750;
            }
          }
        }
      }
      goto LABEL_750;
    }
  }
  UserSetLastError(87);
  v359 = v562;
LABEL_751:
  v393 = 0;
LABEL_752:
  if ( !v393 )
  {
    v564 = 9;
    goto LABEL_916;
  }
  if ( v359 )
  {
    *(_QWORD *)(*(_QWORD *)(v79 + 40) + 48LL) = *((_QWORD *)v359 + 6);
    goto LABEL_757;
  }
LABEL_756:
  *(_QWORD *)(*(_QWORD *)(v79 + 40) + 48LL) = 0LL;
LABEL_757:
  v633[0] = v79 + 104;
  v633[1] = v359;
  HMAssignmentLock(v633, 0LL);
  if ( v359 )
    v394 = (int)(*(_DWORD *)(*((_QWORD *)v359 + 5) + 232LL) << 22) >> 31;
  else
    v394 = 0;
  v395 = (*(_DWORD *)(*v167 + 232) & 0x200u) >> 9;
  if ( (_DWORD)v395 != (v394 != 0) && ((*v360 & 0x1000) == 0 || v394) )
  {
    SetOrClrWF(v394, (__int64 *)v79, 0xD902u, 1);
    v396 = *(__int64 **)(v79 + 112);
    if ( v396 )
    {
      v397 = v574;
LABEL_765:
      while ( v396 != (__int64 *)v79 )
      {
        if ( (*v397 & 0x1000) == 0 || v394 )
        {
          v398 = 0;
          SetOrClrWF(v394, v396, 0xD902u, 1);
        }
        else
        {
          v398 = 1;
        }
        v399 = (__int64 *)v396[14];
        if ( !v399 || v398 )
        {
          v399 = (__int64 *)v396[11];
          if ( !v399 )
          {
            while ( 1 )
            {
              v396 = (__int64 *)v396[13];
              if ( !v396 )
                goto LABEL_779;
              v399 = (__int64 *)v396[11];
              if ( v399 )
                break;
              if ( v396 == (__int64 *)v79 )
                goto LABEL_765;
            }
          }
        }
        v396 = v399;
      }
LABEL_779:
      v354 = v561;
      v360 = v574;
    }
  }
  if ( (*(_DWORD *)(*v167 + 288) & 0xF) == 2 )
  {
    if ( IsTopLevelWindow(v79) )
    {
      v401 = (*v360 >> 19) & 1;
    }
    else
    {
      v402 = v79;
      do
      {
        v403 = 0;
        v404 = *(_QWORD *)(v402 + 104);
        if ( v404 )
        {
          v405 = 0LL;
          v406 = *(_QWORD *)(v402 + 24);
          if ( v406 )
          {
            v407 = *(_QWORD *)(v406 + 8);
            if ( v407 )
              v405 = *(_QWORD *)(v407 + 24);
          }
          if ( v404 == v405 )
            v403 = 1;
        }
        if ( v403 )
          break;
        v402 = *(_QWORD *)(v402 + 104);
      }
      while ( v404 );
      v401 = 0;
      if ( v402 )
        v401 = (*(_DWORD *)(v402 + 320) >> 20) & 1;
    }
    v395 = *(_DWORD *)(v400 + 232) & 0xFFFFFBFF | (v401 << 10);
    *(_DWORD *)(v400 + 232) = v395;
  }
  if ( (*(_BYTE *)(*v167 + 21) & 1) != 0 )
  {
    v408 = v568;
  }
  else
  {
    v395 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v570[0] + 8LL) + 8LL);
    if ( (v395 & 0x80u) != 0LL && (*(_BYTE *)(*((_QWORD *)v562 + 5) + 31LL) & 2) == 0 )
      SetOrClrWF(0, (__int64 *)v79, 0xF06u, 1);
    v408 = HIDWORD(v571);
    v354 = DWORD2(v571);
  }
  v409 = WindowCloakStateComponentUIAware;
  if ( (WindowCloakStateComponentUIAware & 2) == 0 )
    *v360 |= 0x800u;
  if ( v409 )
  {
    v410 = zzzSetWindowCompositionCloak((struct tagWND *)v79, 0LL, v409);
    if ( v410 < 0 )
    {
      v411 = RtlNtStatusToDosError(v410);
      UserSetLastError(v411);
      v564 = 8;
      goto LABEL_916;
    }
  }
  if ( !*(_QWORD *)(SGDGetUserSessionState(v395) + 8)
    || (v413 = SGDGetUserSessionState(v412), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v413 + 8))) )
  {
    v573 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
    if ( (gdwExtraInstrumentations & 1) == 0 )
    {
      DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
      goto LABEL_810;
    }
LABEL_1121:
    KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
  }
LABEL_810:
  v415 = PsGetCurrentThreadWin32Thread(v414);
  ++*(_DWORD *)(v415 + 48);
  if ( v600 )
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)v600, 16, 0LL);
  v417 = v562;
  if ( v562 )
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)v562, 16, 0LL);
  v418 = PsGetCurrentThreadWin32Thread(v416);
  --*(_DWORD *)(v418 + 48);
  if ( (*(_BYTE *)(*v167 + 31) & 0xC0) == 0x40 )
  {
    v419 = IsTopLevelWindow(v79);
    v420 = v563;
    if ( !v419 )
    {
      v421 = *(struct tagWND **)(v79 + 104);
      if ( v421 )
      {
        if ( v563 != *((_QWORD *)v421 + 2) )
        {
          if ( v417 != v421 )
          {
            v573 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2133LL);
          }
          zzzAttachThreadInput(v563, *(_QWORD *)(*(_QWORD *)(v79 + 104) + 16LL), 1LL);
          v422 = 0LL;
          v423 = *(_QWORD *)(v79 + 24);
          if ( v423 )
            v422 = *(struct tagWND **)(v423 + 104);
          v424 = *(struct tagWND **)(v79 + 104);
          if ( v424 != v422
            && (((unsigned __int8)*(_DWORD *)(*((_QWORD *)v424 + 5) + 288LL) ^ *(_BYTE *)(*v167 + 288)) & 0xF) != 0
            && !IsChildWindowDpiIsolationEnabled((struct tagWND *)v79, v424) )
          {
            xxxForceUpdateProcessDpiAwarenessContext(
              (struct tagWND *)v79,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v79 + 104) + 40LL) + 288LL));
          }
          goto LABEL_826;
        }
      }
    }
  }
  else
  {
LABEL_826:
    v420 = v563;
  }
  if ( v601 != (unsigned __int16)gatomMessage && v601 != 32769 && v601 != 32774 && !*(_DWORD *)(v420 + 904) )
  {
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(v420 + 448) + 20LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    xxxUpdateInputHangInfo(0LL, 1);
    v408 = HIDWORD(v571);
    v354 = DWORD2(v571);
  }
  memset(v692, 0, sizeof(v692));
  if ( (*(_BYTE *)(*v167 + 31) & 0xC0) == 0 || (*(_BYTE *)(*v167 + 30) & 4) != 0 )
  {
    xxxInitSendValidateMinMaxInfoEx((struct tagWND *)v79, (__int64)v692, 0LL);
    if ( (*(_BYTE *)(*v167 + 31) & 0x20) != 0 )
      v426 = *(_OWORD *)v692;
    else
      v426 = *(_OWORD *)&v692[24];
    v427 = HIDWORD(*((_QWORD *)&v426 + 1));
    v428 = DWORD2(v426);
    if ( v354 < SDWORD2(v426) )
      v428 = v354;
    if ( (int)v426 <= v428 )
    {
      if ( v354 >= SDWORD2(v426) )
        v354 = DWORD2(v426);
    }
    else
    {
      v354 = v426;
    }
    if ( v408 < SHIDWORD(v426) )
      LODWORD(v427) = v408;
    if ( SDWORD1(v426) <= (int)v427 )
    {
      if ( v408 >= SHIDWORD(v426) )
        v408 = HIDWORD(v426);
    }
    else
    {
      v408 = DWORD1(v426);
    }
    v425 = 0xFFFF;
    if ( v354 <= 0xFFFF )
    {
      if ( v354 < 0 )
        v354 = 0;
    }
    else
    {
      v354 = 0xFFFF;
    }
    if ( v408 <= 0xFFFF )
    {
      if ( v408 < 0 )
        v408 = 0;
    }
    else
    {
      v408 = 0xFFFF;
    }
  }
  else
  {
    v425 = 0xFFFF;
  }
  v429 = 0x7FFF;
  if ( (int)v571 <= 0x7FFF )
  {
    v430 = v571;
    if ( (int)v571 < -32768 )
      v430 = -32768;
  }
  else
  {
    v430 = 0x7FFF;
  }
  LODWORD(v571) = v430;
  if ( SDWORD1(v571) <= 0x7FFF )
  {
    v429 = DWORD1(v571);
    if ( SDWORD1(v571) < -32768 )
      v429 = -32768;
  }
  DWORD1(v571) = v429;
  if ( v354 <= 0xFFFF )
  {
    if ( v354 < 0 )
      v354 = 0;
  }
  else
  {
    v354 = 0xFFFF;
  }
  DWORD2(v571) = v354;
  if ( v408 <= 0xFFFF )
  {
    v425 = v408;
    if ( v408 < 0 )
      v425 = 0;
  }
  HIDWORD(v571) = v425;
  if ( *(_QWORD *)(v79 + 24) && (*(_BYTE *)(*v167 + 31) & 0x40) == 0 && *(char *)(*v167 + 24) >= 0 )
  {
    xxxCheckFullScreen((struct tagWND *)v79, (struct tagSIZERECT *)&v571);
    v425 = HIDWORD(v571);
    v354 = DWORD2(v571);
  }
  if ( v354 < 0 )
    v354 = 0;
  DWORD2(v571) = v354;
  if ( v425 < 0 )
    v425 = 0;
  HIDWORD(v571) = v425;
  RECTFromSIZERECT(*v167 + 88);
  v431 = v566;
  if ( (_BYTE)v566 != 64 )
  {
    if ( v584 )
    {
      v432 = GetInheritedMonitor((struct tagWND *)v79);
      goto LABEL_884;
    }
    goto LABEL_885;
  }
  v432 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v562 + 5) + 256LL));
LABEL_884:
  v433 = (__int64 *)v432;
  if ( v432 )
  {
LABEL_886:
    v434 = *v433;
  }
  else
  {
LABEL_885:
    v433 = (__int64 *)MonitorFromRect(*v167 + 88, 2u, 0);
    v434 = 0LL;
    if ( v433 )
      goto LABEL_886;
  }
  if ( v434 != *(_QWORD *)(*v167 + 256) )
  {
    *(_QWORD *)(*v167 + 256) = v434;
    *(_WORD *)(*v167 + 284) = *(_WORD *)(v433[5] + 60);
    v435 = *(_DWORD **)(v79 + 288);
    if ( v435 )
    {
      --*v435;
      v436 = *(_DWORD **)(v79 + 288);
      if ( !*v436 )
        Win32FreePool(v436);
      *(_QWORD *)(v79 + 288) = 0LL;
    }
    v437 = (_DWORD *)v433[16];
    *(_QWORD *)(v79 + 288) = v437;
    ++*v437;
    if ( v431 != 64 )
      UpdateTopLevelWindowDPITransform(v79, v433);
  }
  if ( (*(_BYTE *)(*v167 + 27) & 0x20) != 0 && GetRedirectionBitmap(v79) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    v438 = RecreateRedirectionBitmap((void **)v79, 0, 0, 0, 0, 0LL);
    v439 = *(_QWORD *)(gpDispInfo + 40LL);
    if ( v438 < 0 )
    {
      GreUnlockVisRgn(v439);
      v564 = 3;
      goto LABEL_916;
    }
    GreUnlockVisRgn(v439);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v570[0] + 8LL) + 8LL) & 0x20) != 0
    || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v570[0] + 8LL) + 8LL) & 0x40) != 0 && !*(_QWORD *)(*(_QWORD *)v570[0] + 40LL) )
  {
    StyleWindow = GetStyleWindow(v79, 2848);
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    v441 = 49152LL;
    if ( !StyleWindow )
      v441 = 0x8000LL;
    CacheDC = CreateCacheDC(v79, v441, 0LL);
    v443 = *(_QWORD *)(gpDispInfo + 40LL);
    if ( !CacheDC )
    {
      GreUnlockVisRgn(v443);
      v564 = 10;
      goto LABEL_916;
    }
    GreUnlockVisRgn(v443);
  }
  if ( (v560 & 0x80000) != 0
    && (*(_BYTE *)(*v167 + 26) & 8) == 0
    && (int)xxxSetLayeredWindow((struct tagWND **)v79, 0, 0LL) < 0 )
  {
    v564 = 11;
    goto LABEL_916;
  }
  if ( (v560 & 0x2000000) != 0 && !GetStyleWindow(*(_QWORD *)(v79 + 104), 2818) )
  {
    SetOrClrWF(1, (__int64 *)v79, 0xB02u, 1);
    if ( (int)SetRedirectedWindow((struct tagWND *)v79, 2) < 0 )
    {
      SetOrClrWF(0, (__int64 *)v79, 0xB02u, 1);
      v564 = 12;
      goto LABEL_916;
    }
  }
  *((_QWORD *)&v605 + 1) = __PAIR64__(v559, v565);
  *(_QWORD *)&v605 = __PAIR64__(v572, v569);
  if ( !xxxSendMessage((struct tagWND *)v79, 0x81u) )
  {
LABEL_916:
    v444 = (__int64 *)(v79 + 104);
    v445 = *(_BYTE *)(*v167 + 31) & 0x10;
    if ( v582 )
      ThreadUnlock1(v173, v172, v174);
    SetOrClrWF(1, (__int64 *)v79, 0x480u, 1);
    SetOrClrWF(1, (__int64 *)v79, 0x380u, 1);
    if ( v445 )
      SetVisible((struct tagWND *)v79, 0);
    if ( *v444 )
    {
      if ( v445 )
        zzzLockDisplayAreaAndInvalidateDCCache(*v444, 16, 0LL);
      if ( (*(_BYTE *)(*v167 + 31) & 0xC0) == 0x40 && !IsTopLevelWindow(v79) )
      {
        v447 = *(_QWORD *)(v446 + 16);
        if ( v563 != v447 )
          zzzAttachThreadInput(*v617, v447, 0LL);
      }
      UnlinkWindow(v79, (__int64 *)*v444);
    }
    v448 = *(struct tagCLS **)v570[0];
    v449 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(v449 + 16) = v613;
    ClassUnlockWorker(v448);
    xxxFreeWindow((struct tagWND *)v79, (__int64)&v626);
    if ( v564 )
      TraceLoggingCreateWindowFailed(
        v564,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
    goto LABEL_65;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v79 + 136) + 8LL) + 9LL) & 2) != 0 )
  {
    SystemMenu = xxxGetSystemMenu((struct tagWND *)v79, 0);
    v578 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v577, SystemMenu);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v577) )
    {
      v660 = 0LL;
      v661 = 0LL;
      v451 = SmartObjStackRef<tagMENU>::operator tagMENU *(v577);
      ThreadLock(v451, &v660);
      xxxRemoveDeleteMenuHelper((__int64)v577, 5u, 1024, 1);
      xxxRemoveDeleteMenuHelper((__int64)v577, 5u, 1024, 1);
      ThreadUnlock1(v453, v452, v454);
    }
  }
  if ( (*(_BYTE *)(*v167 + 18) & 2) != 0 && (!*((_QWORD *)&v608 + 1) || (_DWORD)v608 || *(_QWORD *)(v79 + 184)) )
  {
    *((_QWORD *)&v606 + 1) = *(_QWORD *)(v79 + 184);
    v455 = *(_QWORD *)(v79 + 184);
    v456 = *(_QWORD *)(v79 + 40);
    v457 = *(_DWORD *)(v456 + 188);
    LODWORD(v608) = *(_DWORD *)(v456 + 184);
    DWORD1(v608) = v457;
    *((_QWORD *)&v608 + 1) = v455;
  }
  v458 = v574;
  if ( (*gpsi & 4) != 0 )
  {
    v459 = (struct tagWND **)(v563 + 784);
    if ( !*(_QWORD *)(v563 + 784) && (*v574 & 0x10000000) != 0 )
    {
      DefaultImeWindow = xxxCreateDefaultImeWindow((struct tagWND *)v79, v567, v688[0]);
      v634[0] = v563 + 784;
      v634[1] = DefaultImeWindow;
      HMAssignmentLock(v634, 0LL);
      v461 = *v459;
      if ( *v459 )
      {
        v662 = 0LL;
        v663 = 0LL;
        ThreadLockAlways(v461, &v662);
        xxxSendMessage(*v459, 0x287u);
        ThreadUnlock1(v463, v462, v464);
      }
      v465 = (**(_DWORD **)(v563 + 480) >> 6) & 1;
      v625 = v465;
      v466 = *v459;
      if ( *v459 && v465 )
      {
        v664 = 0LL;
        v665 = 0LL;
        ThreadLock(v466, &v664);
        xxxSendMessage(*v459, 0x287u);
        **(_QWORD **)(v563 + 480) &= ~0x40uLL;
        ThreadUnlock1(v468, v467, v469);
      }
      v458 = v574;
    }
  }
  v470 = v562;
  if ( !v562 || (*v458 & 0x1000000) != 0 && *(struct tagWND **)(v79 + 104) != v562 )
    goto LABEL_1030;
  v471 = v576;
  if ( v576 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    v472 = HMValidateHandleNoSecure(v576, 1);
    v471 = v472;
    v576 = v472;
    if ( !v472 || *(char *)(*(_QWORD *)(v472 + 40) + 19LL) < 0 || !*(_QWORD *)(v472 + 104) )
    {
      v576 = 0LL;
      v471 = 0LL;
    }
  }
  if ( v471 - 2 <= 0xFFFFFFFFFFFFFFFBuLL && *(_QWORD *)(v471 + 104) != *(_QWORD *)(v79 + 104) )
    v576 = (_BYTE)v566 == 64;
  v473 = *(_QWORD *)(v79 + 120);
  if ( v473 )
  {
    *(_DWORD *)(*v167 + 236) = *(_DWORD *)(*(_QWORD *)(v473 + 40) + 236LL);
    SetOrClrWF(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v79 + 120) + 40LL) + 232LL) & 0x40, (__int64 *)v79, 0xD840u, 1);
  }
  if ( *(char *)(*v167 + 19) < 0 || *(char *)(*((_QWORD *)v470 + 5) + 19LL) < 0 )
  {
LABEL_1004:
    UserSetLastError(87);
    goto LABEL_1005;
  }
  v474 = v470;
  v475 = (_QWORD *)v79;
  v476 = 1LL;
  do
  {
    v477 = 0LL;
    v478 = *((_QWORD *)v474 + 3);
    if ( v478 )
    {
      v479 = *(_QWORD *)(v478 + 8);
      if ( v479 )
        v477 = *(struct tagWND **)(v479 + 24);
    }
    if ( v474 == v477 )
      break;
    v474 = (struct tagWND *)*((_QWORD *)v474 + 13);
    v476 = (unsigned int)(v476 + 1);
  }
  while ( v474 );
  v480 = v476;
  if ( *(_QWORD *)(v79 + 112) )
  {
    while ( 1 )
    {
LABEL_969:
      while ( v475[14] )
      {
        v475 = (_QWORD *)v475[14];
        LODWORD(v476) = v476 + 1;
      }
      if ( !v475[11] )
        break;
      v475 = (_QWORD *)v475[11];
    }
    if ( (unsigned int)v476 > v480 )
      v480 = v476;
    while ( 1 )
    {
      v475 = (_QWORD *)v475[13];
      v476 = (unsigned int)(v476 - 1);
      if ( v475 == (_QWORD *)v79 )
        break;
      if ( v475[11] )
      {
        v475 = (_QWORD *)v475[11];
        goto LABEL_969;
      }
    }
  }
  v481 = PsGetCurrentProcessWin32Process(v476);
  if ( v481 && !*(_QWORD *)v481 )
    v481 = 0LL;
  v484 = gNestedWindowLimit;
  if ( v480 <= gNestedWindowLimit )
  {
    if ( v480 > *(_DWORD *)(v481 + 1088) )
      *(_DWORD *)(v481 + 1088) = v480;
    if ( v480 <= gNestedWindowLimit )
    {
      v470 = v562;
      v485 = *((_QWORD *)v562 + 3);
      if ( v485 == *(_QWORD *)(v79 + 24) )
      {
        if ( v562 == *(struct tagWND **)(v485 + 104)
          || (v362 = v562 == *(struct tagWND **)(*(_QWORD *)(v485 + 8) + 24LL), v486 = 0, v362) )
        {
          v486 = 1;
        }
        if ( v486
          || (v484 = *((_QWORD *)v562 + 5), (*(_BYTE *)(v484 + 233) & 8) != 0)
          || (TopLevelWindow = (unsigned __int8 *)*v167, *(_DWORD *)(v484 + 236) == *(_DWORD *)(*v167 + 236))
          && (v487 = *(_BYTE *)(v484 + 232), v484 = TopLevelWindow[232], LOBYTE(v484) = v487 ^ v484, (v484 & 0x40) == 0) )
        {
          v489 = v562;
          while ( (struct tagWND *)v79 != v489 )
          {
            v489 = (struct tagWND *)*((_QWORD *)v489 + 13);
            if ( !v489 )
            {
              v490 = *((_QWORD *)v562 + 15);
              if ( !v490 )
              {
LABEL_1003:
                v491 = 1;
                goto LABEL_1006;
              }
              while ( v79 != v490 )
              {
                v490 = *(_QWORD *)(v490 + 120);
                if ( !v490 )
                  goto LABEL_1003;
              }
              goto LABEL_1004;
            }
          }
        }
      }
      goto LABEL_1004;
    }
  }
  UserSetLastError(87);
  v470 = v562;
LABEL_1005:
  v491 = 0;
LABEL_1006:
  if ( v491 )
  {
    UnlinkWindow(v79, *(__int64 **)(v79 + 104));
    v484 = *v167;
    if ( (*(_BYTE *)(*v167 + 31) & 0xC0) != 0x40 && v470 != *(struct tagWND **)(*((_QWORD *)v470 + 3) + 104LL) )
    {
      if ( (*(_BYTE *)(v484 + 24) & 8) == 0 )
      {
        TopLevelWindow = (unsigned __int8 *)v576;
        if ( !v576 )
          goto LABEL_1017;
        v493 = 0;
        if ( v576 >= 0xFFFFFFFFFFFFFFFEuLL || v576 == 1 )
          v493 = 1;
        if ( !v493 && (*(_BYTE *)(*(_QWORD *)(v576 + 40) + 24LL) & 8) != 0 )
        {
LABEL_1017:
          v494 = CalcForegroundInsertAfter((struct tagWND *)v79);
          v495 = (unsigned __int8 *)v494;
          if ( *(_QWORD *)(v79 + 120) )
          {
            TopLevelWindow = (unsigned __int8 *)v494;
          }
          else
          {
            TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(v494);
            TopLevelWindow = (unsigned __int8 *)GetTopLevelWindow((__int64)TopLevelHostForComponent);
            if ( !TopLevelWindow )
              TopLevelWindow = v495;
          }
        }
        goto LABEL_1027;
      }
      if ( gHardErrorHandler )
      {
        TopMostInsertAfter = GetTopMostInsertAfter(v79);
        TopLevelWindow = (unsigned __int8 *)v576;
        if ( TopMostInsertAfter )
          TopLevelWindow = (unsigned __int8 *)TopMostInsertAfter;
        goto LABEL_1027;
      }
    }
    TopLevelWindow = (unsigned __int8 *)v576;
LABEL_1027:
    if ( (unsigned __int64)TopLevelWindow >= 0xFFFFFFFFFFFFFFFEuLL )
    {
      v492 = 13;
      goto LABEL_1035;
    }
    v470 = v562;
    LinkWindow((struct tagWND *)v79, (struct tagWND *)TopLevelWindow, v562);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)v562, 16, 0LL);
LABEL_1030:
    v498 = *v167;
    if ( (*(_BYTE *)(*v167 + 31) & 0xC0) == 0x40 && (*(_BYTE *)(*((_QWORD *)v470 + 5) + 26LL) & 0x40) != 0 )
    {
      v499 = *(_DWORD *)(v498 + 96);
      v500 = *(_DWORD *)(v498 + 88);
      *(_DWORD *)(v498 + 96) = DWORD2(v590) + v590 - v500;
      *(_DWORD *)(*v167 + 88) = v500 + *(_DWORD *)(*v167 + 96) - v499;
    }
    v687 = *(_OWORD *)(*v167 + 88);
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout((struct tagWND *)v79, 0x83u, 0LL, &v687, 0, 0, 0LL, 1, 0);
    *(_OWORD *)(*v167 + 104) = v687;
    if ( xxxSendMessage((struct tagWND *)v79, 1u) == -1 )
    {
      v492 = v564;
      goto LABEL_1035;
    }
    v503 = *v167;
    v504 = *(_DWORD *)(*v167 + 28);
    v505 = *(_DWORD *)(*v167 + 24);
    v506 = *(_DWORD *)(*v167 + 232);
    *(_BYTE *)(v503 + 23) |= 0x80u;
    if ( !(unsigned int)IsWindowDesktopComposed(v79)
      || (v507 = *(unsigned int **)(v79 + 40),
          v508 = v507[7],
          v509 = v507[6],
          v510 = v505 ^ v507[6],
          v511 = v507[58],
          v512 = v506 ^ v511,
          (v513 = v504 ^ v508) == 0)
      && !v510
      && !v512 )
    {
LABEL_1057:
      v520 = v79 + 40;
      if ( (*(_BYTE *)(*(_QWORD *)(v79 + 40) + 288LL) & 0xF) == 3 && IsTopLevelWindow(v79) )
      {
        v522 = *(_WORD *)(*(_QWORD *)(ValidateHmonitorNoRip(*(_QWORD *)(v521 + 256)) + 40) + 84LL);
        if ( ((*(_DWORD *)(*(_QWORD *)v520 + 288LL) >> 8) & 0x1FF) != v522 && *(_WORD *)(v79 + 304) != v522 )
        {
          *(_WORD *)(v79 + 304) = v522;
          xxxSendMessage((struct tagWND *)v79, 0x2E6u);
        }
      }
      if ( (unsigned int)IsWindowDesktopComposed(v79) )
      {
        v524 = *(_DWORD *)(*(_QWORD *)v520 + 28LL);
        v525 = *(_QWORD *)v79;
        v526 = (void *)ReferenceDwmApiPort(v523);
        _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(SGDGetSessionState(v527) + 32) + 13248LL));
        if ( v526 )
        {
          v644 = 0LL;
          v645 = 0LL;
          v646 = 0;
          v642 = 3932180;
          v643 = 0x8000;
          v647 = 1073741846;
          v648 = v525;
          v649 = -16;
          v650 = v524;
          LpcRequestPort(v526, &v642);
          ObfDereferenceObject(v526);
        }
        DwmChildRectChange((struct tagWND *)v79);
        DirtyVisRgnTrackers(v79);
        v529 = *(__int64 **)(v79 + 120);
        v530 = 0LL;
        if ( v529 )
          v530 = *v529;
        v531 = *(_QWORD *)v79;
        v532 = (void *)ReferenceDwmApiPort(v528);
        _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(SGDGetSessionState(v533) + 32) + 13248LL));
        if ( v532 )
        {
          v653 = 0LL;
          v654 = 0LL;
          v655 = 0;
          v651 = 3932180;
          v652 = 0x8000;
          v656 = 1073741878;
          v657 = v531;
          v658 = v530;
          EtwUpdateEvent(v531, 1073741878LL);
          LpcRequestPort(v532, &v651);
          ObfDereferenceObject(v532);
        }
        v520 = v79 + 40;
      }
      xxxWindowEvent(0x8000u, (struct tagWND *)v79, 0, 0, 0);
      if ( (*(_BYTE *)(*(_QWORD *)v520 + 16LL) & 0x10) == 0 )
      {
        v591 = 0LL;
        GetClientRect(v79, &v591);
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(
          (struct tagWND *)v79,
          5u,
          0LL,
          (__int128 *)((unsigned __int16)(WORD4(v591) - v591) | ((unsigned __int16)(WORD6(v591) - WORD2(v591)) << 16)),
          0,
          0,
          0LL,
          1,
          0);
        if ( v562 )
        {
          v534 = 0LL;
          v535 = *(_QWORD *)(v79 + 24);
          if ( v535 )
          {
            v536 = *(_QWORD *)(v535 + 8);
            if ( v536 )
              v534 = *(struct tagWND **)(v536 + 24);
          }
          if ( v534 != v562 )
          {
            LODWORD(v687) = v687 - v590;
            DWORD1(v687) -= DWORD1(v590);
          }
        }
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(
          (struct tagWND *)v79,
          3u,
          0LL,
          (__int128 *)((unsigned __int16)v687 | (WORD2(v687) << 16)),
          0,
          0,
          0LL,
          1,
          0);
      }
      v537 = *(_BYTE *)(*(_QWORD *)v520 + 31LL);
      if ( (v537 & 0x20) != 0 )
      {
        SetMinimize((struct tagWND *)v79);
        v538 = 7LL;
      }
      else
      {
        if ( (v537 & 1) == 0 )
          goto LABEL_1083;
        SetOrClrWF(0, (__int64 *)v79, 0xF01u, 1);
        v538 = 3LL;
      }
      xxxMinMaximize(v79, v538);
LABEL_1083:
      v539 = 0;
      v691 = 0LL;
      if ( IsTopLevelWindow(v79) && (*(_BYTE *)(*(_QWORD *)v520 + 31LL) & 0x10) != 0 )
      {
        v541 = MonitorFromWindow(v540, 2LL);
        if ( v541 )
        {
          v542 = *(_QWORD *)v520;
          if ( (*(_BYTE *)(*(_QWORD *)v520 + 30LL) & 0xC4) == 0xC4 )
            v543 = *(_OWORD *)(v542 + 104);
          else
            v543 = *(_OWORD *)(v542 + 88);
          *(_OWORD *)v688 = v543;
          v635 = *(_OWORD *)GetMonitorRectForWindow(&v635, v541, v79);
          UnionRect(&v691, v688, &v635);
          v544 = v691 - (unsigned __int64)v688[0];
          if ( (void *)v691 == v688[0] )
            v544 = *((_QWORD *)&v691 + 1) - (unsigned __int64)v688[1];
          v539 = v544 == 0;
        }
        if ( v539 != ((*v574 & 0x400) != 0) )
        {
          operator^=(v574, 1024LL);
          if ( gpqForeground && *(_QWORD *)(gpqForeground + 128LL) == v79 )
          {
            if ( v539 )
              EtwTraceForegroundWindowFullScreenStart(0LL);
            else
              EtwTraceForegroundWindowFullScreenStop(0LL);
          }
          PostShellHookMessagesEx(!v539 + 53, *(_QWORD *)v79, 0LL);
        }
      }
      else if ( (*v574 & 0x400) != 0 )
      {
        RemoveWindowFullScreen(v79);
      }
      if ( (*(_BYTE *)(*(_QWORD *)v520 + 31LL) & 0xC0) == 0x40 && (*(_BYTE *)(*(_QWORD *)v520 + 24LL) & 4) == 0 )
      {
        v545 = *(_QWORD *)(v79 + 104);
        if ( v545 )
        {
          *(_QWORD *)&v630 = *(_QWORD *)(v563 + 416);
          *(_QWORD *)(v563 + 416) = &v630;
          *((_QWORD *)&v630 + 1) = v545;
          HMLockObject(v545);
          xxxSendTransformableMessage(
            *(_QWORD *)(v79 + 104),
            528,
            (*(unsigned __int16 *)(*(_QWORD *)v520 + 320LL) << 16) | 1,
            *(_QWORD *)v79,
            0);
          ThreadUnlock1(v547, v546, v548);
        }
      }
      xxxInheritWindowMonitor((struct tagWND *)v79, 0LL, 0);
      if ( (a5 & 0x10000000) != 0 )
        xxxShowWindow((struct tagWND *)v79, v581 | gdwPUDFlags & 0x10000u);
      v551 = *(_QWORD *)v520;
      if ( (*(_BYTE *)(*(_QWORD *)v520 + 31LL) & 0xC0) == 0 || (*(_BYTE *)(v551 + 26) & 4) != 0 )
      {
        v552 = v575;
        v551 = *((unsigned int *)*v575 + 171);
        if ( (_DWORD)v551 )
        {
          xxxSendMessage((struct tagWND *)v79, 0x32u);
          *((_DWORD *)*v552 + 171) = 0;
        }
      }
      if ( v582 )
        ThreadUnlock1(v551, v549, v550);
      ClassUnlock(*(struct tagCLS **)v570[0]);
      v556 = ThreadUnlock1(v554, v553, v555);
      v557 = v556;
      if ( !v556 || (*(_BYTE *)(_HMPheFromObject(v556) + 25) & 1) != 0 )
        v557 = 0LL;
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v577);
      SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v570);
      return v557;
    }
    v514 = 0;
    v515 = 0;
    v516 = 0;
    if ( (v513 & 0xB1CF0000) != 0 )
    {
      v514 = -16;
      v515 = v508;
    }
    else if ( (v510 & 0x4E27A9) != 0 )
    {
      v514 = -20;
      v515 = v509;
    }
    else
    {
      if ( (v512 & 0x12C0) == 0 )
      {
LABEL_1052:
        if ( v516 )
        {
          DirtyVisRgnTrackers(v79);
          v517 = *(_QWORD *)v79;
          v519 = (void *)ReferenceDwmApiPort(v518);
          DwmAsyncChildStyleChange(v519, v517, v514, v515);
        }
        if ( (v513 & 0xC40000) != 0 || (v510 & 0x200A0381) != 0 )
          WindowMargins::CheckForChanges((struct tagWND *)v79, 1LL, v509);
        goto LABEL_1057;
      }
      v514 = -268435456;
      v515 = v511;
    }
    v516 = 1;
    goto LABEL_1052;
  }
  v492 = 9;
LABEL_1035:
  if ( v582 )
    ThreadUnlock1(v484, TopLevelWindow, v483);
  if ( ThreadUnlock1(v484, TopLevelWindow, v483) )
    xxxDestroyWindow((__int64 *)v79);
  v501 = *(struct tagCLS **)v570[0];
  v502 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(v502 + 16) = v613;
  ClassUnlockWorker(v501);
  if ( v492 )
    TraceLoggingCreateWindowFailed(
      v492,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
LABEL_65:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v577);
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v570);
  return 0LL;
}
