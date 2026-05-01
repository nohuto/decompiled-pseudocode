/*
 * XREFs of ?IsCortanaAllowedOnSKU@CortanaAvailability@@YAJPEAE@Z @ 0x18026A148
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x180269F48 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180039910 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18008C580 (-MemoryFree@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     memcpy_0 @ 0x180091327 (memcpy_0.c)
 *     wcscmp_0 @ 0x1800948B1 (wcscmp_0.c)
 *     ??1SH_HANDLE@@QEAA@XZ @ 0x18014FAC0 (--1SH_HANDLE@@QEAA@XZ.c)
 *     _alloca_probe @ 0x1801610C0 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x1804E7724 (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x1804E7758 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x1804E7788 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 *     RtlUIntAdd @ 0x1804E77B0 (RtlUIntAdd.c)
 *     RtlULongLongAdd @ 0x1804E77D0 (RtlULongLongAdd.c)
 *     StringCchLengthW @ 0x1804E77F4 (StringCchLengthW.c)
 */

__int64 __fastcall CortanaAvailability::IsCortanaAllowedOnSKU(CortanaAvailability *this, unsigned __int8 *a2)
{
  int v2; // eax
  WCHAR *v3; // r14
  _BYTE *v4; // r15
  int v5; // esi
  unsigned __int8 *v6; // r12
  int v7; // eax
  int v8; // ebx
  int v9; // r11d
  __int64 v10; // r13
  int v11; // r10d
  int v12; // r9d
  int v13; // ecx
  int v14; // r10d
  int v15; // r11d
  int v16; // r9d
  unsigned int v17; // r8d
  int v18; // r11d
  unsigned int v19; // r8d
  int v20; // r11d
  int v21; // r8d
  unsigned int v22; // r11d
  int v23; // r8d
  int v24; // r11d
  int v25; // r8d
  unsigned int v26; // r11d
  int v27; // edx
  int v28; // r11d
  unsigned int v29; // ebx
  int v30; // r11d
  int v31; // ebx
  int v32; // r11d
  int v33; // ebx
  unsigned int v34; // r11d
  int v35; // ebx
  int v36; // r11d
  int v37; // ebx
  unsigned int v38; // r11d
  int v39; // ebx
  int v40; // edx
  int v41; // ecx
  int v42; // ebx
  int v43; // edx
  int v44; // r11d
  int v45; // r11d
  int v46; // ebx
  int v47; // r11d
  int v48; // ebx
  int v49; // r11d
  int v50; // ebx
  char v51; // al
  unsigned __int64 v52; // rcx
  int v53; // esi
  unsigned int v54; // r13d
  int v55; // edi
  LPCWSTR v56; // rdi
  __int64 v57; // rax
  const WCHAR *v58; // rdx
  const WCHAR *v59; // rdi
  char *v60; // rbx
  __int64 v61; // rcx
  unsigned __int64 v62; // rcx
  unsigned int v63; // r15d
  unsigned int i; // r14d
  __int64 v65; // rax
  const CHAR *v66; // rdx
  void **ProcAddress; // rcx
  HANDLE ProcessHeap; // rax
  __int64 v69; // rbx
  HMODULE *v70; // rdi
  int v71; // esi
  signed int LastError; // edi
  __int64 v73; // r14
  bool v74; // sf
  __int64 v75; // r9
  wchar_t *j; // rbx
  signed int v77; // eax
  unsigned int (__fastcall *v78)(WARBIRD_DELAY_LOAD *__hidden, int); // rdi
  DWORD CurrentThreadId; // eax
  __int64 v80; // r14
  bool v81; // sf
  __int64 v82; // r9
  wchar_t *k; // rbx
  signed int v84; // eax
  HANDLE CurrentProcess; // rax
  int v86; // eax
  int v87; // r15d
  int v88; // ebx
  int v89; // eax
  HMODULE *v90; // rdi
  __int64 v91; // rsi
  int v92; // edi
  unsigned __int16 *v93; // r13
  unsigned __int16 *v94; // r12
  HANDLE v95; // rax
  unsigned __int16 *v96; // rbx
  _OWORD *v97; // rax
  HANDLE v98; // rax
  int v99; // eax
  unsigned int v100; // edi
  int v101; // eax
  unsigned int v102; // r11d
  int v103; // eax
  int v104; // eax
  unsigned int v105; // r11d
  int v106; // r9d
  int v107; // eax
  int v108; // eax
  unsigned int v109; // r11d
  int v110; // r9d
  int v111; // eax
  int v112; // eax
  size_t v113; // rdx
  int v114; // r9d
  unsigned int v115; // r11d
  int v116; // eax
  int v117; // eax
  unsigned int v118; // r11d
  int v119; // eax
  int v120; // eax
  unsigned int v121; // r11d
  int v122; // r9d
  int v123; // eax
  int v124; // eax
  int v125; // r9d
  unsigned int v126; // edi
  HANDLE v127; // rax
  _DWORD *v128; // rdi
  __int64 v129; // r11
  int v130; // eax
  _DWORD *v131; // rax
  int v132; // eax
  __int64 v133; // rdx
  __int64 v134; // r11
  _DWORD *v135; // rdi
  unsigned int v136; // r9d
  int v137; // r10d
  _OWORD *v138; // rax
  int v139; // eax
  __int64 v140; // rdx
  _DWORD *v141; // rdi
  int v142; // eax
  unsigned int v143; // r9d
  int v144; // r10d
  _QWORD *v145; // rax
  int v146; // eax
  __int64 v147; // rdx
  size_t v148; // rdx
  _DWORD *v149; // rdi
  int v150; // eax
  unsigned int v151; // r9d
  int v152; // r10d
  void *v153; // rdi
  HANDLE v154; // rax
  void *v155; // rdi
  HANDLE v156; // rax
  HANDLE v157; // rax
  HANDLE v158; // rax
  void *v159; // r13
  DWORD ModuleFileNameW; // eax
  unsigned __int64 *v161; // rax
  __int64 v162; // r11
  int v163; // eax
  __int64 v164; // rdx
  _DWORD *v165; // rdi
  int v166; // eax
  __int64 v167; // rcx
  unsigned int v168; // r9d
  int v169; // r11d
  __int64 v170; // r10
  void *v171; // rcx
  int v172; // eax
  __int64 v173; // rdx
  __int64 v174; // r11
  _DWORD *v175; // rdi
  unsigned int v176; // r9d
  int v177; // r10d
  int *v178; // rax
  int v179; // eax
  __int64 v180; // rdx
  unsigned int v181; // r11d
  _DWORD *v182; // rdi
  int v183; // eax
  unsigned int v184; // r9d
  int v185; // r10d
  _DWORD *v186; // rax
  int v187; // eax
  __int64 v188; // rcx
  unsigned int v189; // r9d
  int v190; // eax
  unsigned int v191; // r9d
  unsigned int v192; // edi
  unsigned int v193; // r11d
  int v194; // eax
  unsigned int v195; // r11d
  int v196; // eax
  unsigned int v197; // r11d
  int v198; // eax
  unsigned int v199; // r11d
  int v200; // eax
  unsigned int v201; // eax
  unsigned __int16 *v202; // rdi
  unsigned int v203; // r12d
  unsigned int v204; // r13d
  int v205; // r15d
  unsigned int v206; // eax
  unsigned int v207; // edi
  HANDLE v208; // rax
  _DWORD *v209; // rdi
  unsigned int v210; // r11d
  void *v211; // rcx
  HANDLE v212; // rax
  _QWORD *v213; // rbx
  int v214; // r15d
  unsigned __int64 v215; // r15
  _BYTE *v216; // r13
  unsigned __int8 v217; // al
  int v218; // r11d
  unsigned __int64 m; // rcx
  int v220; // r10d
  unsigned __int16 *v221; // r8
  _BYTE *v222; // r12
  unsigned int v223; // r9d
  unsigned int v224; // edx
  int v225; // r10d
  char v226; // r9
  int v227; // edi
  int v228; // ecx
  unsigned int v229; // r10d
  int v230; // r11d
  unsigned int v231; // ecx
  unsigned int v232; // edi
  char v233; // r14
  unsigned __int64 v234; // r11
  unsigned __int8 *v235; // rdx
  int v236; // r14d
  int v237; // ebx
  _BYTE *v238; // rax
  int v239; // r12d
  int v240; // r15d
  int v241; // r8d
  int v242; // edi
  int v243; // r10d
  int v244; // r9d
  int v245; // r10d
  int v246; // r9d
  int v247; // r10d
  unsigned int v248; // r9d
  int v249; // r10d
  int v250; // r9d
  int v251; // r10d
  int v252; // r9d
  int v253; // r10d
  int v254; // r9d
  unsigned int v255; // r10d
  unsigned int v256; // r9d
  int v257; // r10d
  int v258; // r9d
  int v259; // r10d
  int v260; // r9d
  int v261; // r10d
  int v262; // r9d
  int v263; // r10d
  int v264; // r9d
  unsigned int v265; // r10d
  int v266; // r9d
  unsigned int v267; // r10d
  int v268; // r9d
  int v269; // r10d
  int v270; // r9d
  int v271; // r10d
  int v272; // r9d
  int v273; // r10d
  int v274; // r9d
  int v275; // r10d
  HANDLE v276; // rax
  _QWORD *v277; // rdi
  HANDLE v278; // rax
  void *v279; // rax
  HANDLE v280; // rax
  _OWORD *v281; // rax
  HANDLE v282; // rax
  _QWORD *v283; // rcx
  void *v284; // r12
  HANDLE v285; // rax
  void *v286; // r12
  HANDLE v287; // rax
  void *v288; // r12
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
  int v301; // r15d
  unsigned int v302; // r12d
  unsigned int v303; // eax
  unsigned int v304; // edi
  HANDLE v305; // rax
  _DWORD *v306; // rdi
  void *v307; // rcx
  void *v308; // rcx
  HANDLE v309; // rax
  int v310; // eax
  unsigned int v311; // ecx
  unsigned int v312; // eax
  unsigned int v313; // edi
  int v314; // eax
  unsigned int *v315; // rcx
  unsigned int v316; // ebx
  int v317; // r9d
  int v318; // r9d
  unsigned int *v319; // rax
  unsigned int *v320; // rcx
  unsigned int v321; // ebx
  int v322; // r9d
  int v323; // r9d
  unsigned int *v324; // rax
  unsigned int v325; // r10d
  unsigned int v326; // r11d
  unsigned int v327; // eax
  unsigned int v328; // edi
  HANDLE v329; // rax
  unsigned int *v330; // rax
  unsigned int *v331; // rbx
  signed int v332; // eax
  unsigned int v333; // edi
  FARPROC v334; // rax
  int v335; // eax
  int v336; // r15d
  unsigned int *v337; // rbx
  int *v338; // rdi
  SIZE_T v339; // r13
  unsigned int v340; // r10d
  unsigned int *v341; // rcx
  __int64 v342; // r10
  SIZE_T v343; // rbx
  unsigned int v344; // r10d
  __int64 v345; // r10
  SIZE_T v346; // r12
  int v347; // eax
  unsigned int v348; // r10d
  unsigned int *v349; // r9
  HANDLE v350; // rax
  _QWORD *v351; // rdi
  HANDLE v352; // rax
  void *v353; // rax
  HANDLE v354; // rax
  void *v355; // rax
  void *v356; // rbx
  size_t v357; // r15
  HANDLE v358; // rax
  void *v359; // rax
  void *v360; // rbx
  HANDLE v361; // rax
  void *v362; // rbx
  HANDLE v363; // rax
  void *v364; // rbx
  HANDLE v365; // rax
  HANDLE v366; // rax
  _QWORD *v367; // rdi
  void *v368; // rbx
  HANDLE v369; // rax
  void *v370; // rbx
  HANDLE v371; // rax
  void *v372; // rbx
  HANDLE v373; // rax
  HANDLE v374; // rax
  char *v375; // r15
  __int64 v376; // rbx
  unsigned __int64 v377; // rbx
  void *v378; // rax
  unsigned int v379; // r9d
  _BYTE *v380; // r11
  unsigned __int8 v381; // al
  char *v382; // r8
  _BYTE *v383; // r13
  int v384; // r10d
  unsigned int v385; // edx
  int v386; // r15d
  char v387; // r9
  int v388; // edi
  int v389; // ecx
  unsigned int v390; // r10d
  int v391; // r15d
  int v392; // ecx
  unsigned int v393; // edi
  char v394; // si
  unsigned __int64 v395; // r15
  _BYTE *v396; // r11
  int v397; // esi
  unsigned __int8 *v398; // rbx
  int v399; // r12d
  int v400; // r13d
  unsigned int v401; // eax
  int v402; // r8d
  int v403; // edi
  int v404; // ecx
  int v405; // r8d
  int v406; // r9d
  int v407; // edi
  unsigned int v408; // r10d
  int v409; // r9d
  unsigned int v410; // r10d
  int v411; // r9d
  int v412; // r10d
  unsigned int v413; // r9d
  int v414; // r10d
  int v415; // r9d
  int v416; // r10d
  unsigned int v417; // r9d
  int v418; // r10d
  int v419; // r9d
  unsigned int v420; // r10d
  int v421; // r9d
  int v422; // r10d
  int v423; // r9d
  int v424; // r10d
  int v425; // r9d
  int v426; // r10d
  int v427; // r9d
  int v428; // r10d
  unsigned int v429; // r9d
  int v430; // r10d
  int v431; // edx
  int v432; // ecx
  int v433; // r10d
  int v434; // edx
  int v435; // r9d
  int v436; // r9d
  int v437; // r10d
  int v438; // r9d
  int v439; // r10d
  int v440; // r9d
  int v441; // r10d
  unsigned __int64 n; // rcx
  int v443; // ebx
  int *v444; // r13
  HANDLE v445; // rax
  int v446; // r15d
  unsigned int v447; // r11d
  void *v448; // r9
  __int64 v449; // r11
  void *v450; // rbx
  __int64 v451; // rdx
  SIZE_T v452; // r12
  void *v453; // r13
  int v454; // edi
  unsigned int *v455; // rdi
  unsigned int *v456; // r10
  unsigned __int64 v457; // r10
  int v458; // eax
  unsigned int v459; // r9d
  HANDLE v460; // rax
  HANDLE v461; // rax
  _QWORD *v462; // rbx
  void *v463; // rdi
  HANDLE v464; // rax
  void *v465; // rdi
  HANDLE v466; // rax
  void *v467; // rdi
  HANDLE v468; // rax
  HANDLE v469; // rax
  HANDLE v470; // rax
  HANDLE v471; // rax
  void *v472; // rdi
  HANDLE v473; // rax
  void *v474; // rdi
  HANDLE v475; // rax
  void *v476; // rdi
  HANDLE v477; // rax
  HANDLE v478; // rax
  HANDLE v479; // rax
  __int64 v480; // r11
  int v481; // r9d
  int *v482; // rax
  int *v483; // rcx
  int v484; // edi
  unsigned int v485; // r9d
  int v486; // edi
  int *v487; // rax
  int *v488; // rcx
  unsigned int v489; // edi
  unsigned int v490; // r9d
  int v491; // edi
  int *v492; // rax
  LPVOID v493; // rcx
  unsigned int v494; // edi
  unsigned int v495; // r9d
  int v496; // r10d
  void *v497; // rdi
  int *v498; // rcx
  unsigned int v499; // r11d
  int v500; // r9d
  int v501; // r11d
  int v502; // r9d
  int *v503; // rax
  unsigned int *v504; // rcx
  unsigned int v505; // ebx
  unsigned int v506; // r10d
  unsigned int v507; // r11d
  int v508; // r9d
  int v509; // r9d
  unsigned int *v510; // rax
  int v511; // ecx
  __int64 v512; // rax
  unsigned int v513; // edi
  int v514; // eax
  char *v515; // rax
  int v516; // r12d
  _BYTE *v517; // r14
  unsigned __int8 *v518; // rsi
  int v519; // edi
  int v520; // ebx
  __int64 v521; // r15
  int v522; // r11d
  int v523; // r10d
  int v524; // ecx
  int v525; // r11d
  int v526; // ebx
  int v527; // r10d
  unsigned int v528; // r9d
  int v529; // ebx
  unsigned int v530; // r9d
  int v531; // ebx
  int v532; // r9d
  unsigned int v533; // ebx
  int v534; // r9d
  int v535; // ebx
  int v536; // r9d
  unsigned int v537; // ebx
  int v538; // edx
  int v539; // ebx
  unsigned int v540; // r13d
  int v541; // ebx
  int v542; // r13d
  int v543; // ebx
  int v544; // r13d
  unsigned int v545; // ebx
  int v546; // r13d
  int v547; // ebx
  int v548; // r13d
  unsigned int v549; // ebx
  int v550; // r13d
  int v551; // edx
  int v552; // ecx
  int v553; // r13d
  int v554; // edx
  int v555; // ebx
  int v556; // ebx
  int v557; // r13d
  int v558; // ebx
  int v559; // r13d
  int v560; // ebx
  int v561; // r13d
  unsigned __int64 v562; // rcx
  void *v563; // rdx
  char v564; // al
  int v565; // r12d
  int v566; // ebx
  LPCWSTR v567; // rbx
  const WCHAR *v568; // rdx
  __int64 v569; // rax
  const WCHAR *v570; // rbx
  char *v571; // r13
  __int64 v572; // rcx
  unsigned __int64 v573; // rcx
  unsigned int v574; // eax
  unsigned int v575; // ecx
  const CHAR *v576; // rdx
  __int64 v577; // rax
  void **v578; // rcx
  WCHAR *v579; // rbx
  HANDLE v580; // rax
  HMODULE *v581; // rbx
  __int64 v582; // r12
  int v583; // eax
  char *v584; // rax
  int v585; // r12d
  _BYTE *v586; // r14
  int v587; // edi
  unsigned __int8 *v588; // rsi
  int v589; // ebx
  __int64 v590; // r15
  int v591; // r11d
  int v592; // r10d
  int v593; // ecx
  int v594; // r11d
  int v595; // ebx
  int v596; // r10d
  unsigned int v597; // r9d
  int v598; // ebx
  unsigned int v599; // r9d
  int v600; // ebx
  int v601; // r9d
  unsigned int v602; // ebx
  int v603; // r9d
  int v604; // ebx
  int v605; // r9d
  unsigned int v606; // ebx
  int v607; // edx
  int v608; // ebx
  unsigned int v609; // r13d
  int v610; // ebx
  int v611; // r13d
  int v612; // ebx
  int v613; // r13d
  unsigned int v614; // ebx
  int v615; // r13d
  int v616; // ebx
  int v617; // r13d
  unsigned int v618; // ebx
  int v619; // r13d
  int v620; // edx
  int v621; // ecx
  int v622; // r13d
  int v623; // edx
  int v624; // ebx
  int v625; // ebx
  int v626; // r13d
  int v627; // ebx
  int v628; // r13d
  int v629; // ebx
  int v630; // r13d
  char v631; // al
  unsigned __int64 v632; // rcx
  int v633; // r12d
  WCHAR *v634; // rdx
  int v635; // ebx
  LPCWSTR v636; // rbx
  const WCHAR *v637; // rdx
  __int64 v638; // rax
  const WCHAR *v639; // rbx
  char *v640; // r13
  __int64 v641; // rcx
  unsigned __int64 v642; // rcx
  unsigned int v643; // eax
  unsigned int v644; // ecx
  const CHAR *v645; // rdx
  __int64 v646; // rax
  void **v647; // rcx
  WCHAR *v648; // rbx
  HANDLE v649; // rax
  HMODULE *v650; // rbx
  __int64 v651; // r12
  int v652; // r13d
  __int64 v653; // rdi
  signed int v654; // eax
  signed int v655; // r12d
  signed int v656; // eax
  WARBIRD_DELAY_LOAD *v657; // rbx
  _DWORD *v658; // r13
  _DWORD *v659; // rdi
  unsigned int kk; // esi
  __int64 v661; // rax
  unsigned int v662; // r10d
  unsigned int v663; // r9d
  __int64 v664; // r8
  unsigned int v665; // ecx
  unsigned int *v666; // rdx
  __int64 v667; // rdi
  const wchar_t *v668; // rcx
  __int64 v669; // r8
  const wchar_t **v670; // rdx
  __int64 v671; // rax
  char *v672; // rax
  unsigned __int8 *v673; // r14
  int v674; // ebx
  int v675; // r15d
  int v676; // r11d
  int v677; // r10d
  _BYTE *v678; // r13
  __int64 v679; // rsi
  int v680; // r9d
  int v681; // r8d
  int v682; // eax
  int v683; // r9d
  int v684; // r10d
  int v685; // r8d
  unsigned int v686; // edi
  int v687; // r10d
  unsigned int v688; // edi
  int v689; // r10d
  int v690; // edi
  unsigned int v691; // r10d
  int v692; // edi
  int v693; // r10d
  int v694; // edi
  unsigned int v695; // r10d
  int v696; // edi
  int v697; // r10d
  unsigned int v698; // r11d
  int v699; // r10d
  int v700; // r11d
  int v701; // r10d
  int v702; // r11d
  unsigned int v703; // r10d
  int v704; // r11d
  int v705; // r10d
  int v706; // r11d
  unsigned int v707; // r10d
  int v708; // r11d
  int v709; // ecx
  int v710; // eax
  int v711; // r11d
  int v712; // ecx
  int v713; // r10d
  int v714; // r10d
  int v715; // r11d
  int v716; // r10d
  int v717; // r11d
  int v718; // r10d
  int v719; // r11d
  unsigned __int64 v720; // rax
  void *v721; // rbx
  __m128i v722; // xmm1
  __m128i v723; // xmm0
  __m128i v724; // xmm0
  __m128i v725; // xmm1
  __m128i v726; // xmm1
  __m128i v727; // xmm1
  _BYTE *v728; // rdx
  _QWORD *v729; // rdi
  __int64 v730; // r8
  unsigned int mm; // ecx
  __int64 v732; // rax
  void **v733; // rdi
  void **v734; // rbx
  __int64 v735; // r13
  _WORD *v736; // rdi
  __int64 v737; // rcx
  int v738; // edi
  signed int v739; // eax
  __int16 *v740; // rcx
  char *v741; // rdx
  unsigned int v742; // r8d
  __int16 v743; // r9
  _WORD *v744; // rcx
  __int64 v745; // rax
  __int64 v746; // r13
  __int64 v747; // rax
  int v748; // eax
  void *v749; // rcx
  __int64 v750; // rax
  signed int v751; // eax
  signed int v752; // eax
  unsigned int v753; // edi
  char *v754; // rbx
  __int64 v755; // r13
  signed int v756; // eax
  int v757; // ebx
  int v758; // eax
  __int64 v759; // rbx
  HMODULE *v760; // rdi
  unsigned int v761; // edi
  CToastCenterExperienceManager *v762; // r12
  __int64 v763; // rax
  int v764; // edi
  int v765; // eax
  void *v766; // r13
  __int64 v767; // rax
  __int64 v768; // rax
  WARBIRD_DELAY_LOAD *v769; // r12
  signed int v770; // ebx
  signed int v771; // eax
  int v772; // eax
  __int64 v773; // rax
  signed int v774; // eax
  unsigned __int16 *v775; // rax
  __int64 v776; // rbx
  signed int v777; // eax
  int v778; // eax
  __int64 v779; // rax
  signed int v780; // eax
  int v781; // ebx
  unsigned int v782; // edx
  int v783; // eax
  int v784; // r13d
  void *v785; // rdi
  int v786; // ebx
  void *v787; // rdi
  __int64 v788; // rdx
  signed int v789; // eax
  unsigned int v790; // r13d
  void *v791; // rdi
  __int64 v792; // rbx
  int v793; // eax
  unsigned __int64 v794; // rdx
  int v795; // eax
  __int64 v796; // rax
  bool v797; // sf
  int v798; // edx
  int v799; // r12d
  int v800; // ebx
  int v801; // edi
  CToastCenterExperienceManager *v802; // rax
  int v803; // edx
  int v804; // ecx
  CToastCenterExperienceManager *v805; // rax
  bool v806; // zf
  char *v807; // rcx
  __int64 v808; // rax
  unsigned int (__fastcall *v809)(WARBIRD_DELAY_LOAD *__hidden, int); // rdi
  __int64 v810; // rax
  int v811; // edi
  __int64 v812; // r9
  int v813; // edx
  int v814; // r8d
  int v815; // ecx
  int v816; // r13d
  int v817; // r11d
  unsigned __int8 *v818; // rdx
  int v819; // eax
  unsigned __int16 *v820; // rax
  unsigned __int8 *v821; // r9
  int v822; // edi
  signed __int64 v823; // r10
  int v824; // r8d
  int v825; // edi
  int v826; // edx
  int v827; // edi
  int v828; // edx
  void *v829; // r13
  LPVOID v830; // r12
  __int64 v831; // rax
  __int64 v832; // rax
  WARBIRD_DELAY_LOAD *v833; // r12
  signed int v834; // ebx
  signed int v835; // eax
  __int64 v836; // rcx
  __int64 v837; // rax
  unsigned int (__fastcall *v838)(WARBIRD_DELAY_LOAD *__hidden, int); // rdi
  __int64 v839; // rax
  int v840; // eax
  int v841; // r8d
  int v842; // edi
  int v843; // edx
  int v844; // ecx
  int v845; // r13d
  int v846; // r11d
  char v847; // r15
  __int64 v848; // rdi
  unsigned __int16 *v849; // rax
  unsigned __int8 *v850; // r9
  int v851; // r8d
  char *v852; // r10
  int v853; // r8d
  int v854; // edi
  int v855; // edx
  int v856; // edi
  int v857; // edx
  int v858; // edi
  int v859; // ecx
  CToastCenterExperienceManager *v860; // rdi
  char v861; // al
  int v862; // ebx
  unsigned int v863; // r12d
  int v864; // edx
  int v865; // r13d
  int v866; // edi
  __int64 v867; // rax
  void *v868; // r13
  void *v869; // r13
  __int64 v870; // rax
  void *v871; // rax
  int v872; // edi
  void *v873; // rax
  bool v874; // sf
  int v875; // eax
  CToastCenterExperienceManager *v876; // rdi
  __int64 v877; // rcx
  __int64 v878; // rax
  unsigned int (__fastcall *v879)(WARBIRD_DELAY_LOAD *__hidden, int); // rdi
  __int64 v880; // rax
  WARBIRD_DELAY_LOAD *v881; // rdi
  int v882; // r8d
  int v883; // r9d
  int v884; // edx
  int v885; // ecx
  int v886; // ebx
  int v887; // r11d
  char *v888; // rdi
  char *v889; // rax
  unsigned __int8 *v890; // r9
  int v891; // r8d
  __int64 v892; // r10
  int v893; // r8d
  int v894; // edi
  int v895; // edx
  int v896; // edi
  int v897; // edx
  int v898; // edi
  int v899; // ecx
  void *v900; // rdi
  void *v901; // r13
  __int64 v902; // rax
  void *v903; // rax
  int v904; // edi
  signed int v905; // ebx
  void *v906; // rax
  signed int v907; // eax
  int v908; // eax
  CToastCenterExperienceManager *v909; // rdi
  __int64 v910; // rcx
  __int64 v911; // rax
  unsigned int (__fastcall *v912)(WARBIRD_DELAY_LOAD *__hidden, int); // rdi
  __int64 v913; // rax
  WARBIRD_DELAY_LOAD *v914; // rdi
  int v915; // eax
  int v916; // r8d
  int v917; // r9d
  int v918; // edx
  int v919; // ecx
  __int64 v920; // r10
  int v921; // r13d
  int v922; // r11d
  int v923; // edx
  unsigned __int8 *v924; // rdi
  char *v925; // rax
  unsigned __int8 *v926; // r9
  int v927; // r8d
  __int64 v928; // r10
  int v929; // r8d
  int v930; // edi
  int v931; // edx
  int v932; // edi
  int v933; // edx
  int v934; // edi
  int v935; // ecx
  __int64 v936; // rcx
  __int64 v937; // rcx
  __int64 v938; // rcx
  int v939; // eax
  HMODULE *v940; // rdi
  __int64 v941; // rbx
  int v942; // eax
  char *v943; // rax
  _BYTE *v944; // rsi
  int v945; // r14d
  __int64 v946; // rax
  int v947; // r15d
  int v948; // ebx
  unsigned __int8 *v949; // r12
  int v950; // r11d
  int v951; // r10d
  int v952; // r9d
  int v953; // ecx
  int v954; // r10d
  int v955; // r11d
  int v956; // r9d
  unsigned int v957; // r8d
  int v958; // r11d
  unsigned int v959; // r8d
  int v960; // r11d
  int v961; // r8d
  unsigned int v962; // r11d
  int v963; // r8d
  int v964; // r11d
  int v965; // r8d
  unsigned int v966; // r11d
  int v967; // r8d
  int v968; // r11d
  unsigned int v969; // ebx
  int v970; // r11d
  int v971; // ebx
  int v972; // r11d
  int v973; // ebx
  unsigned int v974; // r11d
  int v975; // ebx
  int v976; // r11d
  int v977; // ebx
  unsigned int v978; // r11d
  int v979; // ebx
  int v980; // edx
  int v981; // ecx
  int v982; // ebx
  int v983; // edx
  int v984; // r11d
  int v985; // r11d
  int v986; // ebx
  int v987; // r11d
  int v988; // ebx
  int v989; // r11d
  int v990; // ebx
  int v991; // r12d
  unsigned __int64 v992; // rcx
  void *v993; // r13
  char v994; // al
  int v995; // edi
  LPCWSTR v996; // rdi
  const WCHAR *v997; // rdx
  __int64 v998; // rax
  const WCHAR *v999; // rdi
  char *v1000; // rbx
  __int64 v1001; // rcx
  unsigned __int64 v1002; // rcx
  unsigned int v1003; // eax
  const CHAR *v1004; // rdx
  __int64 v1005; // rax
  void **v1006; // rcx
  WCHAR *v1007; // rdi
  HANDLE v1008; // rax
  HMODULE *v1009; // rdi
  __int64 v1010; // rbx
  HMODULE *v1011; // rdi
  __int64 v1012; // rbx
  int v1013; // eax
  void *v1014; // r12
  HANDLE v1015; // rax
  _OWORD *v1016; // rbx
  _OWORD *v1017; // rax
  HANDLE v1018; // rax
  _QWORD *v1019; // rax
  _QWORD *v1020; // r12
  unsigned int v1021; // r9d
  int v1022; // eax
  unsigned int v1023; // r9d
  int v1024; // r10d
  int v1025; // eax
  unsigned int v1026; // r9d
  int v1027; // r10d
  int v1028; // eax
  int v1029; // r10d
  unsigned int v1030; // edi
  HANDLE v1031; // rax
  unsigned int *v1032; // rax
  unsigned int *v1033; // rdi
  unsigned int v1034; // r9d
  void *v1035; // r11
  int *v1036; // rax
  int v1037; // r10d
  unsigned int v1038; // r9d
  void *v1039; // r11
  int v1040; // ebx
  unsigned int v1041; // edi
  _DWORD *v1042; // rdi
  int v1043; // r9d
  unsigned int v1044; // r10d
  int v1045; // r8d
  _OWORD *v1046; // rax
  __int64 v1047; // rcx
  __int128 v1048; // xmm1
  unsigned int v1049; // r9d
  void *v1050; // r11
  unsigned int v1051; // edi
  unsigned int *v1052; // r9
  __int64 v1053; // r9
  int v1054; // r10d
  int v1055; // r8d
  _DWORD *v1056; // r9
  _QWORD *v1057; // rax
  unsigned int v1058; // r9d
  unsigned int *v1059; // r9
  __int64 v1060; // r9
  int v1061; // r10d
  _DWORD *v1062; // r9
  unsigned __int64 *v1063; // rax
  __int64 v1064; // rcx
  unsigned int v1065; // edi
  void *v1066; // r11
  _DWORD *v1067; // r12
  int *v1068; // r13
  int v1069; // edi
  unsigned int v1070; // r9d
  unsigned __int64 v1071; // r10
  void *v1072; // r11
  unsigned int v1073; // eax
  unsigned int v1074; // edi
  HANDLE v1075; // rax
  char *v1076; // rax
  char *v1077; // rbx
  unsigned int v1078; // r9d
  void *v1079; // rcx
  HANDLE v1080; // rax
  int v1081; // edi
  _QWORD *v1082; // r13
  int v1083; // edi
  unsigned __int64 v1084; // rbx
  unsigned __int8 *v1085; // r8
  unsigned __int8 v1086; // al
  unsigned __int64 v1087; // rcx
  _BYTE *v1088; // r11
  int v1089; // r9d
  signed int v1090; // r10d
  unsigned int v1091; // edx
  char v1092; // r9
  int v1093; // r14d
  int v1094; // edi
  int v1095; // ecx
  unsigned int v1096; // r9d
  unsigned int v1097; // ecx
  unsigned int v1098; // edi
  int v1099; // r14d
  char v1100; // si
  unsigned __int64 v1101; // rcx
  _BYTE *v1102; // rbx
  int v1103; // r14d
  unsigned __int64 v1104; // r11
  int v1105; // r12d
  int v1106; // r13d
  unsigned __int8 *v1107; // rax
  int v1108; // r8d
  int v1109; // edi
  int v1110; // ecx
  int v1111; // r8d
  int v1112; // edi
  int v1113; // r9d
  int v1114; // r10d
  int v1115; // r9d
  int v1116; // r10d
  int v1117; // r9d
  unsigned int v1118; // r10d
  int v1119; // r9d
  int v1120; // r10d
  int v1121; // r9d
  int v1122; // r10d
  int v1123; // r9d
  int v1124; // r10d
  unsigned int v1125; // r9d
  unsigned int v1126; // r10d
  int v1127; // r9d
  int v1128; // r10d
  int v1129; // r9d
  int v1130; // r10d
  int v1131; // r9d
  int v1132; // r10d
  int v1133; // r9d
  int v1134; // r10d
  unsigned int v1135; // r9d
  int v1136; // r10d
  int v1137; // r9d
  int v1138; // r10d
  int v1139; // r9d
  int v1140; // r10d
  int v1141; // r9d
  int v1142; // r10d
  int v1143; // r9d
  int v1144; // r10d
  int v1145; // r9d
  unsigned int v1146; // esi
  HANDLE v1147; // rax
  _DWORD *v1148; // rax
  _DWORD *v1149; // rbx
  HANDLE v1150; // rax
  void *v1151; // rax
  HANDLE v1152; // rax
  _OWORD *v1153; // rax
  HANDLE v1154; // rax
  _QWORD *v1155; // rax
  void *v1156; // rsi
  HANDLE v1157; // rax
  void *v1158; // rsi
  HANDLE v1159; // rax
  void *v1160; // rsi
  HANDLE v1161; // rax
  HANDLE v1162; // rax
  void *v1163; // rbx
  HANDLE v1164; // rax
  void *v1165; // rbx
  HANDLE v1166; // rax
  void *v1167; // rbx
  HANDLE v1168; // rax
  void *v1169; // rbx
  HANDLE v1170; // rax
  HANDLE v1171; // rax
  const void **v1172; // rbx
  __int64 v1173; // r13
  int v1174; // edi
  unsigned int *v1175; // r11
  unsigned int v1176; // eax
  unsigned int v1177; // edi
  HANDLE v1178; // rax
  _DWORD *v1179; // rax
  void *v1180; // rsi
  int v1181; // eax
  void *v1182; // rcx
  int v1183; // eax
  void *v1184; // rcx
  int v1185; // eax
  HANDLE v1186; // rax
  int v1187; // eax
  unsigned int v1188; // ecx
  unsigned int v1189; // eax
  int v1190; // eax
  unsigned int v1191; // r9d
  unsigned int *v1192; // rcx
  int v1193; // ebx
  unsigned int v1194; // esi
  unsigned int v1195; // ebx
  unsigned int *v1196; // rax
  unsigned int *v1197; // rcx
  int v1198; // ebx
  unsigned int v1199; // esi
  unsigned int v1200; // r9d
  unsigned int v1201; // ebx
  unsigned int *v1202; // rax
  __int64 v1203; // r9
  unsigned int v1204; // r10d
  unsigned int v1205; // r11d
  unsigned int v1206; // eax
  void *v1207; // rbx
  HANDLE v1208; // rax
  _QWORD *v1209; // rbx
  void *v1210; // rsi
  HANDLE v1211; // rax
  void *v1212; // rsi
  HANDLE v1213; // rax
  void *v1214; // rsi
  HANDLE v1215; // rax
  HANDLE v1216; // rax
  void *v1217; // rbx
  HANDLE v1218; // rax
  void *v1219; // rbx
  HANDLE v1220; // rax
  void *v1221; // rbx
  HANDLE v1222; // rax
  void *v1223; // rbx
  HANDLE v1224; // rax
  void *v1225; // rbx
  HANDLE v1226; // rax
  HANDLE v1227; // rax
  HANDLE v1228; // rax
  unsigned int *v1229; // rdi
  unsigned int v1230; // r9d
  int v1231; // r10d
  int *v1232; // r11
  int *v1233; // rax
  int v1234; // r9d
  unsigned int v1235; // edi
  HANDLE v1236; // rax
  int *v1237; // rax
  int *v1238; // rbx
  signed int v1239; // eax
  unsigned int v1240; // r9d
  FARPROC v1241; // rax
  int v1242; // eax
  void *v1243; // r11
  int v1244; // edi
  int v1245; // r9d
  SIZE_T v1246; // r10
  unsigned int v1247; // r10d
  int v1248; // r9d
  SIZE_T v1249; // rsi
  int v1250; // r9d
  int v1251; // r9d
  SIZE_T v1252; // r13
  int v1253; // r9d
  int v1254; // r9d
  int v1255; // r10d
  HANDLE v1256; // rax
  _QWORD *v1257; // rax
  _QWORD *v1258; // rbx
  void *v1259; // rdi
  HANDLE v1260; // rax
  void *v1261; // rax
  void *v1262; // rdi
  HANDLE v1263; // rax
  void *v1264; // rax
  void *v1265; // rdi
  HANDLE v1266; // rax
  void *v1267; // rax
  void *v1268; // rsi
  HANDLE v1269; // rax
  void *v1270; // rsi
  HANDLE v1271; // rax
  void *v1272; // rsi
  HANDLE v1273; // rax
  HANDLE v1274; // rax
  _QWORD *v1275; // rbx
  void *v1276; // rsi
  HANDLE v1277; // rax
  void *v1278; // rsi
  HANDLE v1279; // rax
  void *v1280; // rsi
  HANDLE v1281; // rax
  HANDLE v1282; // rax
  int *v1283; // rbx
  unsigned int v1284; // esi
  unsigned __int64 v1285; // r13
  void *v1286; // rax
  _BYTE *v1287; // rdi
  unsigned __int8 *v1288; // r9
  unsigned __int8 v1289; // al
  _BYTE *v1290; // rbx
  unsigned int v1291; // edx
  int v1292; // r10d
  char v1293; // r14
  int v1294; // r8d
  int v1295; // ecx
  unsigned int v1296; // r10d
  unsigned int v1297; // r11d
  unsigned int v1298; // ecx
  unsigned int v1299; // r8d
  int v1300; // r14d
  char v1301; // r15
  _BYTE *v1302; // r13
  int v1303; // esi
  unsigned __int8 *v1304; // r12
  int v1305; // edx
  int v1306; // ebx
  unsigned int v1307; // r15d
  char *v1308; // rax
  int v1309; // r9d
  int v1310; // r8d
  int v1311; // ecx
  int v1312; // r9d
  int v1313; // r10d
  int v1314; // r8d
  unsigned int v1315; // edi
  int v1316; // r10d
  unsigned int v1317; // edi
  int v1318; // r10d
  int v1319; // edi
  unsigned int v1320; // r10d
  int v1321; // edi
  int v1322; // r10d
  int v1323; // edi
  unsigned int v1324; // r10d
  int v1325; // edi
  int v1326; // r10d
  unsigned int v1327; // r11d
  int v1328; // r10d
  int v1329; // r11d
  int v1330; // r10d
  int v1331; // r11d
  int v1332; // r10d
  int v1333; // r11d
  int v1334; // r10d
  int v1335; // r11d
  unsigned int v1336; // r10d
  int v1337; // r11d
  int v1338; // edx
  int v1339; // ecx
  int v1340; // r11d
  int v1341; // edx
  int v1342; // r10d
  int v1343; // r10d
  int v1344; // r11d
  int v1345; // r10d
  int v1346; // r11d
  int v1347; // r10d
  int v1348; // r11d
  unsigned __int64 nn; // rcx
  int v1350; // r14d
  HANDLE v1351; // rax
  int v1352; // edi
  unsigned int v1353; // r9d
  __int64 v1354; // r9
  SIZE_T v1355; // r13
  unsigned int v1356; // r9d
  void *v1357; // r11
  void *v1358; // rbx
  void *v1359; // rsi
  unsigned __int64 v1360; // r9
  unsigned __int64 v1361; // r11
  unsigned int *v1362; // r9
  unsigned __int64 v1363; // r11
  int v1364; // eax
  __int64 v1365; // r9
  unsigned int v1366; // r10d
  HANDLE v1367; // rax
  int v1368; // edi
  _QWORD *v1369; // r11
  _QWORD *v1370; // rax
  void *v1371; // rdi
  HANDLE v1372; // rax
  void *v1373; // rdi
  HANDLE v1374; // rax
  HANDLE v1375; // rax
  HANDLE v1376; // rax
  unsigned __int8 v1378; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1379; // [rsp+60h] [rbp-A0h]
  unsigned int v1380; // [rsp+64h] [rbp-9Ch]
  int v1381; // [rsp+64h] [rbp-9Ch]
  unsigned int v1382; // [rsp+64h] [rbp-9Ch]
  int v1383; // [rsp+64h] [rbp-9Ch]
  int v1384; // [rsp+64h] [rbp-9Ch]
  int v1385; // [rsp+64h] [rbp-9Ch]
  __int64 v1386; // [rsp+64h] [rbp-9Ch]
  int v1387; // [rsp+68h] [rbp-98h]
  int ii; // [rsp+68h] [rbp-98h]
  unsigned int v1389; // [rsp+68h] [rbp-98h]
  int v1390; // [rsp+68h] [rbp-98h]
  int v1391; // [rsp+68h] [rbp-98h]
  int v1392; // [rsp+68h] [rbp-98h]
  int v1393; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v1394; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1395; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1396; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1397; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1398; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1399; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1400; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1401; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1402; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1403; // [rsp+70h] [rbp-90h]
  int v1404; // [rsp+70h] [rbp-90h]
  int v1405; // [rsp+70h] [rbp-90h]
  int v1406; // [rsp+70h] [rbp-90h]
  unsigned int v1407; // [rsp+70h] [rbp-90h]
  int v1408; // [rsp+70h] [rbp-90h]
  int v1409; // [rsp+70h] [rbp-90h]
  int v1410; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1411; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1412; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1413; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1414; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1415; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1416; // [rsp+78h] [rbp-88h]
  int v1417; // [rsp+78h] [rbp-88h]
  int v1418; // [rsp+78h] [rbp-88h]
  int v1419; // [rsp+78h] [rbp-88h]
  int v1420; // [rsp+78h] [rbp-88h]
  int v1421; // [rsp+78h] [rbp-88h]
  unsigned int v1422; // [rsp+78h] [rbp-88h]
  int v1423; // [rsp+78h] [rbp-88h]
  int v1424; // [rsp+78h] [rbp-88h]
  int v1425; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1426; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v1427; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v1428; // [rsp+80h] [rbp-80h]
  int v1429; // [rsp+80h] [rbp-80h]
  int v1430; // [rsp+80h] [rbp-80h]
  int v1431; // [rsp+80h] [rbp-80h]
  int v1432; // [rsp+80h] [rbp-80h]
  unsigned int v1433; // [rsp+80h] [rbp-80h]
  unsigned int v1434; // [rsp+80h] [rbp-80h]
  int v1435; // [rsp+80h] [rbp-80h]
  __int64 v1436; // [rsp+88h] [rbp-78h]
  int v1437; // [rsp+88h] [rbp-78h]
  int v1438; // [rsp+88h] [rbp-78h]
  int v1439; // [rsp+88h] [rbp-78h]
  void *v1440; // [rsp+90h] [rbp-70h]
  const WCHAR *v1441; // [rsp+90h] [rbp-70h]
  WARBIRD_DELAY_LOAD *v1442; // [rsp+90h] [rbp-70h]
  char *v1443; // [rsp+90h] [rbp-70h]
  unsigned __int8 *v1444; // [rsp+90h] [rbp-70h]
  LPVOID v1445; // [rsp+90h] [rbp-70h]
  int v1446; // [rsp+90h] [rbp-70h]
  int v1447; // [rsp+90h] [rbp-70h]
  unsigned int v1448; // [rsp+90h] [rbp-70h]
  int v1449; // [rsp+90h] [rbp-70h]
  int v1450; // [rsp+98h] [rbp-68h]
  unsigned int v1451; // [rsp+98h] [rbp-68h]
  unsigned int v1452; // [rsp+98h] [rbp-68h]
  int v1453; // [rsp+98h] [rbp-68h]
  int v1454; // [rsp+98h] [rbp-68h]
  int v1455; // [rsp+98h] [rbp-68h]
  int v1456; // [rsp+98h] [rbp-68h]
  int v1457; // [rsp+98h] [rbp-68h]
  SIZE_T v1458; // [rsp+A0h] [rbp-60h]
  void *v1459; // [rsp+A0h] [rbp-60h]
  int v1460; // [rsp+A0h] [rbp-60h]
  int v1461; // [rsp+A0h] [rbp-60h]
  int v1462; // [rsp+A0h] [rbp-60h]
  unsigned int v1463; // [rsp+A0h] [rbp-60h]
  int v1464; // [rsp+A0h] [rbp-60h]
  unsigned int v1465; // [rsp+A0h] [rbp-60h]
  int v1466; // [rsp+A0h] [rbp-60h]
  HLOCAL v1467; // [rsp+A8h] [rbp-58h]
  unsigned int v1468; // [rsp+A8h] [rbp-58h]
  unsigned int v1469; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v1470; // [rsp+B0h] [rbp-50h]
  int v1471; // [rsp+B0h] [rbp-50h]
  unsigned int v1472; // [rsp+B0h] [rbp-50h]
  unsigned int jj; // [rsp+B0h] [rbp-50h]
  char v1474; // [rsp+B0h] [rbp-50h]
  int v1475; // [rsp+B0h] [rbp-50h]
  int v1476; // [rsp+B8h] [rbp-48h]
  int v1477; // [rsp+B8h] [rbp-48h]
  unsigned int v1478; // [rsp+B8h] [rbp-48h]
  int v1479; // [rsp+B8h] [rbp-48h]
  __int64 v1480; // [rsp+B8h] [rbp-48h]
  const void *Src; // [rsp+C0h] [rbp-40h]
  char *Srca; // [rsp+C0h] [rbp-40h]
  unsigned int Srcb; // [rsp+C0h] [rbp-40h]
  int Srcc; // [rsp+C0h] [rbp-40h]
  int Srcd; // [rsp+C0h] [rbp-40h]
  unsigned int *v1486; // [rsp+C8h] [rbp-38h]
  _WORD *v1487; // [rsp+C8h] [rbp-38h]
  __int64 v1488; // [rsp+C8h] [rbp-38h]
  __int64 v1489; // [rsp+C8h] [rbp-38h]
  int v1490; // [rsp+C8h] [rbp-38h]
  int v1491; // [rsp+C8h] [rbp-38h]
  SIZE_T v1492; // [rsp+D0h] [rbp-30h]
  SIZE_T v1493; // [rsp+D0h] [rbp-30h]
  _BYTE *v1494; // [rsp+D0h] [rbp-30h]
  SIZE_T v1495; // [rsp+D0h] [rbp-30h]
  SIZE_T v1496; // [rsp+D0h] [rbp-30h]
  __int64 v1497; // [rsp+D8h] [rbp-28h]
  char *v1498; // [rsp+D8h] [rbp-28h]
  unsigned __int16 *v1499; // [rsp+D8h] [rbp-28h]
  __int64 v1500; // [rsp+D8h] [rbp-28h]
  int v1501; // [rsp+D8h] [rbp-28h]
  _OWORD *v1502; // [rsp+D8h] [rbp-28h]
  int v1503; // [rsp+E0h] [rbp-20h]
  int v1504; // [rsp+E0h] [rbp-20h]
  int v1505; // [rsp+E0h] [rbp-20h]
  int *v1506; // [rsp+E8h] [rbp-18h]
  __int64 v1507; // [rsp+E8h] [rbp-18h]
  int v1508; // [rsp+E8h] [rbp-18h]
  unsigned int v1509; // [rsp+E8h] [rbp-18h]
  char *v1510; // [rsp+E8h] [rbp-18h]
  void *v1511; // [rsp+F0h] [rbp-10h] BYREF
  void *v1512; // [rsp+F8h] [rbp-8h]
  LPVOID v1513; // [rsp+100h] [rbp+0h]
  __int64 v1514; // [rsp+108h] [rbp+8h]
  void *v1515; // [rsp+110h] [rbp+10h]
  unsigned int v1516; // [rsp+118h] [rbp+18h] BYREF
  int v1517; // [rsp+11Ch] [rbp+1Ch] BYREF
  int v1518; // [rsp+120h] [rbp+20h]
  LPVOID v1519; // [rsp+128h] [rbp+28h]
  LPVOID v1520; // [rsp+130h] [rbp+30h]
  LPVOID v1521; // [rsp+138h] [rbp+38h]
  int v1522; // [rsp+140h] [rbp+40h]
  unsigned int v1523; // [rsp+148h] [rbp+48h] BYREF
  unsigned int v1524; // [rsp+14Ch] [rbp+4Ch]
  unsigned int v1525; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v1526; // [rsp+154h] [rbp+54h] BYREF
  unsigned int v1527; // [rsp+158h] [rbp+58h]
  unsigned int v1528; // [rsp+15Ch] [rbp+5Ch] BYREF
  unsigned int v1529; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v1530; // [rsp+164h] [rbp+64h]
  unsigned int v1531; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v1532; // [rsp+16Ch] [rbp+6Ch] BYREF
  unsigned int v1533; // [rsp+170h] [rbp+70h]
  unsigned int v1534; // [rsp+174h] [rbp+74h] BYREF
  int v1535; // [rsp+178h] [rbp+78h]
  unsigned int v1536; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v1537; // [rsp+184h] [rbp+84h]
  unsigned int v1538; // [rsp+188h] [rbp+88h] BYREF
  int v1539; // [rsp+190h] [rbp+90h]
  unsigned int v1540; // [rsp+198h] [rbp+98h] BYREF
  unsigned int v1541; // [rsp+19Ch] [rbp+9Ch]
  unsigned int v1542; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v1543; // [rsp+1A4h] [rbp+A4h] BYREF
  unsigned int v1544; // [rsp+1A8h] [rbp+A8h]
  unsigned int v1545; // [rsp+1ACh] [rbp+ACh] BYREF
  unsigned int v1546; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v1547; // [rsp+1B4h] [rbp+B4h] BYREF
  unsigned int v1548; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v1549; // [rsp+1BCh] [rbp+BCh] BYREF
  unsigned int v1550; // [rsp+1C0h] [rbp+C0h]
  unsigned int v1551; // [rsp+1C4h] [rbp+C4h] BYREF
  unsigned int v1552; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned int v1553; // [rsp+1CCh] [rbp+CCh]
  int v1554; // [rsp+1D0h] [rbp+D0h]
  int v1555; // [rsp+1D4h] [rbp+D4h]
  unsigned int v1556; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned int v1557; // [rsp+1DCh] [rbp+DCh]
  unsigned int v1558; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned int v1559; // [rsp+1E4h] [rbp+E4h] BYREF
  unsigned int v1560; // [rsp+1E8h] [rbp+E8h]
  unsigned int v1561; // [rsp+1ECh] [rbp+ECh] BYREF
  _DWORD v1562[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int v1563; // [rsp+1F8h] [rbp+F8h]
  int v1564; // [rsp+1FCh] [rbp+FCh]
  int v1565; // [rsp+200h] [rbp+100h]
  int v1566; // [rsp+204h] [rbp+104h]
  int v1567; // [rsp+208h] [rbp+108h]
  int v1568; // [rsp+20Ch] [rbp+10Ch]
  int v1569; // [rsp+210h] [rbp+110h]
  int v1570; // [rsp+214h] [rbp+114h]
  int v1571; // [rsp+218h] [rbp+118h]
  int v1572; // [rsp+21Ch] [rbp+11Ch]
  int v1573; // [rsp+220h] [rbp+120h]
  unsigned int v1574; // [rsp+224h] [rbp+124h] BYREF
  unsigned int v1575; // [rsp+228h] [rbp+128h] BYREF
  int v1576; // [rsp+22Ch] [rbp+12Ch]
  int v1577; // [rsp+230h] [rbp+130h]
  unsigned int v1578; // [rsp+234h] [rbp+134h]
  int v1579; // [rsp+238h] [rbp+138h]
  unsigned int v1580; // [rsp+23Ch] [rbp+13Ch] BYREF
  unsigned int v1581; // [rsp+240h] [rbp+140h] BYREF
  unsigned int v1582; // [rsp+244h] [rbp+144h] BYREF
  int v1583; // [rsp+248h] [rbp+148h]
  unsigned int v1584; // [rsp+24Ch] [rbp+14Ch] BYREF
  unsigned int v1585; // [rsp+250h] [rbp+150h] BYREF
  unsigned int v1586; // [rsp+254h] [rbp+154h] BYREF
  unsigned int v1587; // [rsp+258h] [rbp+158h] BYREF
  _DWORD v1588[3]; // [rsp+25Ch] [rbp+15Ch] BYREF
  int v1589; // [rsp+268h] [rbp+168h]
  unsigned int v1590; // [rsp+270h] [rbp+170h] BYREF
  unsigned int v1591; // [rsp+274h] [rbp+174h]
  unsigned int v1592; // [rsp+278h] [rbp+178h] BYREF
  unsigned int v1593; // [rsp+27Ch] [rbp+17Ch] BYREF
  unsigned int v1594; // [rsp+280h] [rbp+180h]
  unsigned int v1595; // [rsp+284h] [rbp+184h] BYREF
  unsigned int v1596; // [rsp+288h] [rbp+188h] BYREF
  int v1597; // [rsp+28Ch] [rbp+18Ch]
  unsigned int v1598; // [rsp+290h] [rbp+190h] BYREF
  unsigned int v1599; // [rsp+294h] [rbp+194h] BYREF
  unsigned int v1600; // [rsp+298h] [rbp+198h] BYREF
  _DWORD v1601[2]; // [rsp+29Ch] [rbp+19Ch] BYREF
  unsigned int v1602; // [rsp+2A4h] [rbp+1A4h]
  unsigned int v1603; // [rsp+2A8h] [rbp+1A8h]
  unsigned int v1604; // [rsp+2ACh] [rbp+1ACh] BYREF
  unsigned int v1605; // [rsp+2B0h] [rbp+1B0h] BYREF
  unsigned int v1606; // [rsp+2B4h] [rbp+1B4h]
  unsigned int v1607; // [rsp+2B8h] [rbp+1B8h]
  unsigned int v1608; // [rsp+2BCh] [rbp+1BCh]
  unsigned int v1609; // [rsp+2C0h] [rbp+1C0h] BYREF
  unsigned int v1610; // [rsp+2C4h] [rbp+1C4h]
  unsigned int v1611; // [rsp+2C8h] [rbp+1C8h] BYREF
  unsigned int v1612; // [rsp+2CCh] [rbp+1CCh] BYREF
  unsigned int v1613; // [rsp+2D0h] [rbp+1D0h]
  unsigned int v1614; // [rsp+2D4h] [rbp+1D4h]
  _DWORD v1615[2]; // [rsp+2D8h] [rbp+1D8h] BYREF
  _DWORD v1616[2]; // [rsp+2E0h] [rbp+1E0h] BYREF
  int v1617; // [rsp+2E8h] [rbp+1E8h]
  int v1618; // [rsp+2ECh] [rbp+1ECh]
  unsigned int v1619; // [rsp+2F0h] [rbp+1F0h]
  unsigned int dwBytes; // [rsp+2F4h] [rbp+1F4h] BYREF
  unsigned int dwBytes_4; // [rsp+2F8h] [rbp+1F8h] BYREF
  unsigned int v1622; // [rsp+2FCh] [rbp+1FCh]
  unsigned int v1623; // [rsp+300h] [rbp+200h] BYREF
  __int64 v1624; // [rsp+308h] [rbp+208h]
  unsigned int v1625; // [rsp+310h] [rbp+210h] BYREF
  unsigned int v1626; // [rsp+314h] [rbp+214h] BYREF
  unsigned int v1627; // [rsp+318h] [rbp+218h] BYREF
  unsigned int v1628; // [rsp+31Ch] [rbp+21Ch] BYREF
  unsigned int v1629; // [rsp+320h] [rbp+220h] BYREF
  unsigned int v1630; // [rsp+324h] [rbp+224h] BYREF
  _QWORD *v1631; // [rsp+328h] [rbp+228h]
  unsigned __int64 v1632; // [rsp+330h] [rbp+230h]
  size_t pcchLength; // [rsp+338h] [rbp+238h] BYREF
  _DWORD *v1634; // [rsp+340h] [rbp+240h] BYREF
  _DWORD *v1635; // [rsp+348h] [rbp+248h] BYREF
  unsigned __int64 v1636; // [rsp+350h] [rbp+250h]
  _DWORD *v1637; // [rsp+358h] [rbp+258h] BYREF
  size_t v1638; // [rsp+360h] [rbp+260h] BYREF
  _DWORD *v1639; // [rsp+368h] [rbp+268h] BYREF
  _DWORD *v1640; // [rsp+370h] [rbp+270h] BYREF
  _DWORD *v1641; // [rsp+378h] [rbp+278h] BYREF
  LPVOID v1642; // [rsp+380h] [rbp+280h]
  unsigned __int64 v1643; // [rsp+388h] [rbp+288h]
  void *v1644; // [rsp+390h] [rbp+290h] BYREF
  LPVOID v1645; // [rsp+398h] [rbp+298h]
  SIZE_T v1646; // [rsp+3A0h] [rbp+2A0h]
  __int64 *v1647; // [rsp+3A8h] [rbp+2A8h]
  __int64 v1648; // [rsp+3B0h] [rbp+2B0h]
  _OWORD *v1649; // [rsp+3B8h] [rbp+2B8h]
  __int64 v1650; // [rsp+3C0h] [rbp+2C0h]
  void *v1651; // [rsp+3C8h] [rbp+2C8h] BYREF
  unsigned int *v1652; // [rsp+3D0h] [rbp+2D0h]
  unsigned int *v1653; // [rsp+3D8h] [rbp+2D8h]
  unsigned int *v1654; // [rsp+3E0h] [rbp+2E0h] BYREF
  unsigned int *v1655; // [rsp+3E8h] [rbp+2E8h] BYREF
  HMODULE phModule; // [rsp+3F0h] [rbp+2F0h] BYREF
  void *v1657; // [rsp+3F8h] [rbp+2F8h] BYREF
  int *v1658; // [rsp+400h] [rbp+300h]
  CortanaAvailability *v1659; // [rsp+408h] [rbp+308h]
  int *v1660; // [rsp+410h] [rbp+310h] BYREF
  void *v1661; // [rsp+418h] [rbp+318h] BYREF
  unsigned __int64 v1662; // [rsp+420h] [rbp+320h] BYREF
  unsigned __int64 v1663; // [rsp+428h] [rbp+328h] BYREF
  unsigned int *v1664; // [rsp+430h] [rbp+330h] BYREF
  int *v1665; // [rsp+438h] [rbp+338h] BYREF
  int *v1666; // [rsp+440h] [rbp+340h]
  int *v1667; // [rsp+448h] [rbp+348h] BYREF
  int *v1668; // [rsp+450h] [rbp+350h]
  __int64 v1669; // [rsp+458h] [rbp+358h]
  int *v1670; // [rsp+460h] [rbp+360h] BYREF
  int *v1671; // [rsp+468h] [rbp+368h]
  LPVOID v1672; // [rsp+470h] [rbp+370h] BYREF
  void *v1673; // [rsp+478h] [rbp+378h]
  int *v1674; // [rsp+480h] [rbp+380h] BYREF
  int *v1675; // [rsp+488h] [rbp+388h]
  unsigned int *v1676; // [rsp+490h] [rbp+390h] BYREF
  unsigned int *v1677; // [rsp+498h] [rbp+398h]
  void *v1678; // [rsp+4A0h] [rbp+3A0h] BYREF
  LPCWSTR lpModuleName; // [rsp+4A8h] [rbp+3A8h]
  LPCWSTR v1680; // [rsp+4B0h] [rbp+3B0h]
  unsigned __int64 v1681; // [rsp+4B8h] [rbp+3B8h]
  void **v1682; // [rsp+4C0h] [rbp+3C0h] BYREF
  LPCWSTR v1683; // [rsp+4C8h] [rbp+3C8h]
  unsigned __int64 v1684; // [rsp+4D0h] [rbp+3D0h]
  _DWORD *v1685; // [rsp+4D8h] [rbp+3D8h] BYREF
  _BYTE *v1686; // [rsp+4E0h] [rbp+3E0h] BYREF
  unsigned __int64 v1687; // [rsp+4E8h] [rbp+3E8h]
  void **v1688; // [rsp+4F0h] [rbp+3F0h] BYREF
  WARBIRD_DELAY_LOAD *v1689; // [rsp+4F8h] [rbp+3F8h] BYREF
  _DWORD *v1690; // [rsp+500h] [rbp+400h] BYREF
  __int64 v1691; // [rsp+508h] [rbp+408h]
  __int64 v1692; // [rsp+510h] [rbp+410h] BYREF
  __int64 v1693; // [rsp+518h] [rbp+418h] BYREF
  __int64 v1694; // [rsp+520h] [rbp+420h] BYREF
  unsigned __int64 v1695; // [rsp+528h] [rbp+428h]
  wchar_t *String1; // [rsp+530h] [rbp+430h] BYREF
  wchar_t *v1697; // [rsp+538h] [rbp+438h] BYREF
  wchar_t *v1698; // [rsp+540h] [rbp+440h] BYREF
  __int64 v1699; // [rsp+548h] [rbp+448h] BYREF
  wchar_t *v1700; // [rsp+550h] [rbp+450h] BYREF
  _OWORD *v1701; // [rsp+558h] [rbp+458h]
  __int64 v1702; // [rsp+560h] [rbp+460h] BYREF
  LPCWSTR v1703; // [rsp+568h] [rbp+468h]
  unsigned __int64 v1704; // [rsp+570h] [rbp+470h]
  _OWORD *v1705; // [rsp+578h] [rbp+478h]
  _QWORD *v1706; // [rsp+580h] [rbp+480h]
  unsigned __int64 v1707; // [rsp+588h] [rbp+488h]
  _DWORD *v1708; // [rsp+590h] [rbp+490h] BYREF
  unsigned int *v1709; // [rsp+598h] [rbp+498h] BYREF
  unsigned __int64 v1710; // [rsp+5A0h] [rbp+4A0h]
  unsigned int *v1711; // [rsp+5A8h] [rbp+4A8h] BYREF
  LPVOID v1712; // [rsp+5B0h] [rbp+4B0h]
  unsigned __int64 v1713; // [rsp+5B8h] [rbp+4B8h]
  void *v1714; // [rsp+5C0h] [rbp+4C0h] BYREF
  LPVOID v1715; // [rsp+5C8h] [rbp+4C8h]
  char *v1716; // [rsp+5D0h] [rbp+4D0h]
  __int64 *v1717; // [rsp+5D8h] [rbp+4D8h]
  __int64 v1718; // [rsp+5E0h] [rbp+4E0h]
  _OWORD *v1719; // [rsp+5E8h] [rbp+4E8h]
  __int64 v1720; // [rsp+5F0h] [rbp+4F0h]
  void *v1721; // [rsp+5F8h] [rbp+4F8h] BYREF
  unsigned int *v1722; // [rsp+600h] [rbp+500h]
  unsigned int *v1723; // [rsp+608h] [rbp+508h]
  unsigned int *v1724; // [rsp+610h] [rbp+510h] BYREF
  unsigned int *v1725; // [rsp+618h] [rbp+518h] BYREF
  HMODULE hModule; // [rsp+620h] [rbp+520h] BYREF
  void *v1727; // [rsp+628h] [rbp+528h] BYREF
  int *v1728; // [rsp+630h] [rbp+530h]
  void *v1729; // [rsp+638h] [rbp+538h] BYREF
  unsigned __int64 v1730; // [rsp+640h] [rbp+540h] BYREF
  unsigned __int64 v1731; // [rsp+648h] [rbp+548h] BYREF
  unsigned __int64 v1732; // [rsp+650h] [rbp+550h] BYREF
  _QWORD v1733[2]; // [rsp+658h] [rbp+558h] BYREF
  _QWORD v1734[4]; // [rsp+668h] [rbp+568h] BYREF
  _DWORD *v1735; // [rsp+688h] [rbp+588h] BYREF
  __int128 v1736; // [rsp+690h] [rbp+590h]
  __int128 v1737; // [rsp+6A0h] [rbp+5A0h]
  _OWORD *v1738; // [rsp+6B8h] [rbp+5B8h] BYREF
  unsigned __int64 *v1739; // [rsp+6C8h] [rbp+5C8h] BYREF
  size_t Size; // [rsp+6D0h] [rbp+5D0h] BYREF
  LPVOID lpMem; // [rsp+6D8h] [rbp+5D8h]
  LPVOID v1742[3]; // [rsp+6E0h] [rbp+5E0h]
  _QWORD *v1743; // [rsp+6F8h] [rbp+5F8h] BYREF
  _OWORD *v1744; // [rsp+708h] [rbp+608h] BYREF
  _QWORD *v1745; // [rsp+718h] [rbp+618h] BYREF
  unsigned __int64 *v1746; // [rsp+728h] [rbp+628h] BYREF
  void *v1747; // [rsp+738h] [rbp+638h] BYREF
  int *v1748; // [rsp+748h] [rbp+648h] BYREF
  _DWORD *v1749; // [rsp+758h] [rbp+658h] BYREF
  size_t v1750; // [rsp+760h] [rbp+660h] BYREF
  void *v1751; // [rsp+768h] [rbp+668h]
  __int128 v1752; // [rsp+770h] [rbp+670h]
  __int128 v1753; // [rsp+780h] [rbp+680h] BYREF
  LPVOID v1754[3]; // [rsp+790h] [rbp+690h]
  int *v1755; // [rsp+7A8h] [rbp+6A8h] BYREF
  _QWORD v1756[2]; // [rsp+7B0h] [rbp+6B0h] BYREF
  unsigned int v1757; // [rsp+7C0h] [rbp+6C0h]
  unsigned int v1758; // [rsp+7C4h] [rbp+6C4h]
  int v1759; // [rsp+7C8h] [rbp+6C8h]
  _QWORD v1760[2]; // [rsp+7D0h] [rbp+6D0h] BYREF
  unsigned int v1761; // [rsp+7E0h] [rbp+6E0h]
  unsigned int v1762; // [rsp+7E4h] [rbp+6E4h]
  int v1763; // [rsp+7E8h] [rbp+6E8h]
  _BYTE v1764[24]; // [rsp+7F0h] [rbp+6F0h] BYREF
  __int64 v1765; // [rsp+808h] [rbp+708h]
  _BYTE v1766[4]; // [rsp+860h] [rbp+760h] BYREF
  int v1767; // [rsp+864h] [rbp+764h]
  int v1768; // [rsp+868h] [rbp+768h]
  __int16 v1769; // [rsp+872h] [rbp+772h]
  __int64 v1770; // [rsp+878h] [rbp+778h]
  _BYTE v1771[4]; // [rsp+8D0h] [rbp+7D0h] BYREF
  int v1772; // [rsp+8D4h] [rbp+7D4h]
  int v1773; // [rsp+8D8h] [rbp+7D8h]
  unsigned __int16 *v1774; // [rsp+8E8h] [rbp+7E8h]
  _BYTE v1775[24]; // [rsp+940h] [rbp+840h] BYREF
  char *v1776; // [rsp+958h] [rbp+858h]
  _BYTE v1777[4]; // [rsp+9B0h] [rbp+8B0h] BYREF
  int v1778; // [rsp+9B4h] [rbp+8B4h]
  int v1779; // [rsp+9B8h] [rbp+8B8h]
  unsigned __int16 *v1780; // [rsp+9C8h] [rbp+8C8h]
  _BYTE v1781[24]; // [rsp+A20h] [rbp+920h] BYREF
  __int64 v1782; // [rsp+A38h] [rbp+938h]
  _BYTE v1783[4]; // [rsp+A90h] [rbp+990h] BYREF
  int v1784; // [rsp+A94h] [rbp+994h]
  int v1785; // [rsp+A98h] [rbp+998h]
  void *v1786; // [rsp+AA8h] [rbp+9A8h]
  _BYTE v1787[4]; // [rsp+B00h] [rbp+A00h] BYREF
  int v1788; // [rsp+B04h] [rbp+A04h]
  int v1789; // [rsp+B08h] [rbp+A08h]
  void *v1790; // [rsp+B18h] [rbp+A18h]
  _BYTE v1791[24]; // [rsp+B70h] [rbp+A70h] BYREF
  __int64 v1792; // [rsp+B88h] [rbp+A88h]
  int v1793; // [rsp+BE0h] [rbp+AE0h] BYREF
  int v1794; // [rsp+BE4h] [rbp+AE4h]
  void *v1795; // [rsp+BE8h] [rbp+AE8h]
  void *v1796; // [rsp+BF0h] [rbp+AF0h]
  void *v1797; // [rsp+BF8h] [rbp+AF8h]
  unsigned __int16 *v1798; // [rsp+C00h] [rbp+B00h]
  unsigned __int16 *v1799; // [rsp+C08h] [rbp+B08h]
  __int64 v1800; // [rsp+C10h] [rbp+B10h]
  int v1801; // [rsp+C18h] [rbp+B18h]
  __int128 v1802; // [rsp+C1Ch] [rbp+B1Ch] BYREF
  __int128 v1803; // [rsp+C2Ch] [rbp+B2Ch] BYREF
  unsigned int v1804; // [rsp+C3Ch] [rbp+B3Ch] BYREF
  unsigned int v1805; // [rsp+C40h] [rbp+B40h]
  unsigned int v1806; // [rsp+C44h] [rbp+B44h]
  unsigned int v1807; // [rsp+C48h] [rbp+B48h]
  __int64 v1808; // [rsp+C50h] [rbp+B50h]
  unsigned __int64 v1809; // [rsp+C58h] [rbp+B58h]
  unsigned __int64 v1810; // [rsp+C60h] [rbp+B60h]
  __int64 v1811; // [rsp+C68h] [rbp+B68h]
  __int128 v1812; // [rsp+C70h] [rbp+B70h] BYREF
  __int128 v1813; // [rsp+C80h] [rbp+B80h]
  __int128 v1814; // [rsp+C90h] [rbp+B90h] BYREF
  __int128 v1815; // [rsp+CA0h] [rbp+BA0h] BYREF
  __int64 v1816; // [rsp+CB0h] [rbp+BB0h] BYREF
  unsigned int v1817; // [rsp+CB8h] [rbp+BB8h]
  int v1818; // [rsp+CBCh] [rbp+BBCh]
  __int128 v1819; // [rsp+CC0h] [rbp+BC0h] BYREF
  char v1820[12]; // [rsp+CD0h] [rbp+BD0h] BYREF
  unsigned int v1821; // [rsp+CDCh] [rbp+BDCh]
  __int128 v1822; // [rsp+CF0h] [rbp+BF0h] BYREF
  __int128 v1823; // [rsp+D00h] [rbp+C00h] BYREF
  __int64 v1824; // [rsp+D10h] [rbp+C10h]
  __int128 v1825; // [rsp+D18h] [rbp+C18h] BYREF
  __int128 v1826; // [rsp+D28h] [rbp+C28h] BYREF
  __int64 v1827; // [rsp+D38h] [rbp+C38h]
  __int128 v1828; // [rsp+D40h] [rbp+C40h] BYREF
  __int128 v1829; // [rsp+D50h] [rbp+C50h]
  __int64 v1830; // [rsp+D60h] [rbp+C60h]
  int v1831; // [rsp+D68h] [rbp+C68h]
  __int128 v1832; // [rsp+D70h] [rbp+C70h] BYREF
  __int128 v1833; // [rsp+D80h] [rbp+C80h]
  __int64 v1834; // [rsp+D90h] [rbp+C90h]
  int v1835; // [rsp+D98h] [rbp+C98h]
  __int128 v1836; // [rsp+DA0h] [rbp+CA0h] BYREF
  __int128 v1837; // [rsp+DB0h] [rbp+CB0h]
  __int64 v1838; // [rsp+DC0h] [rbp+CC0h]
  int v1839; // [rsp+DC8h] [rbp+CC8h]
  __int128 v1840; // [rsp+DD0h] [rbp+CD0h] BYREF
  __int128 v1841; // [rsp+DE0h] [rbp+CE0h]
  __int64 v1842; // [rsp+DF0h] [rbp+CF0h]
  int v1843; // [rsp+DF8h] [rbp+CF8h]
  __int128 v1844; // [rsp+E00h] [rbp+D00h] BYREF
  __int128 v1845; // [rsp+E10h] [rbp+D10h]
  __int64 v1846; // [rsp+E20h] [rbp+D20h]
  int v1847; // [rsp+E28h] [rbp+D28h]
  _DWORD v1848[6]; // [rsp+E30h] [rbp+D30h] BYREF
  char v1849; // [rsp+E4Ah] [rbp+D4Ah]
  unsigned __int16 v1850[34]; // [rsp+E4Ch] [rbp+D4Ch] BYREF
  _DWORD v1851[6]; // [rsp+E90h] [rbp+D90h] BYREF
  char v1852; // [rsp+EAAh] [rbp+DAAh]
  unsigned __int16 v1853[34]; // [rsp+EACh] [rbp+DACh] BYREF
  _DWORD v1854[6]; // [rsp+EF0h] [rbp+DF0h] BYREF
  char v1855; // [rsp+F0Ah] [rbp+E0Ah]
  unsigned __int16 v1856[34]; // [rsp+F0Ch] [rbp+E0Ch] BYREF
  _BYTE v1857[68]; // [rsp+F50h] [rbp+E50h] BYREF
  __int16 v1858; // [rsp+F94h] [rbp+E94h]
  unsigned __int16 v1859; // [rsp+FF6h] [rbp+EF6h]
  __int64 v1860; // [rsp+FFCh] [rbp+EFCh]
  _QWORD v1861[6]; // [rsp+1030h] [rbp+F30h] BYREF
  int v1862; // [rsp+1060h] [rbp+F60h] BYREF
  __int128 v1863; // [rsp+1068h] [rbp+F68h]
  __int128 v1864; // [rsp+1078h] [rbp+F78h]
  __int128 v1865; // [rsp+1088h] [rbp+F88h]
  __int64 v1866; // [rsp+1098h] [rbp+F98h]
  _QWORD v1867[20]; // [rsp+10A0h] [rbp+FA0h] BYREF
  _WORD v1868[8]; // [rsp+1140h] [rbp+1040h] BYREF
  _BYTE v1869[176]; // [rsp+1150h] [rbp+1050h] BYREF
  WCHAR Filename[264]; // [rsp+1200h] [rbp+1100h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1448h] [rbp+1348h]

  v1659 = this;
  v1660 = 0LL;
  v1573 = 1;
  v1576 = 0;
  v1577 = 0;
  v1578 = 0;
  v1511 = 0LL;
  v1579 = 0;
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v2 = g_WarbirdSecureFunctionsRefCount;
  v1518 = -1;
  if ( g_WarbirdSecureFunctionsRefCount )
    goto LABEL_46;
  v1476 = 0;
  lpModuleName = 0LL;
  v1695 = 0LL;
  v3 = (WCHAR *)MemoryAlloc(0x338uLL);
  if ( v3 )
  {
    v4 = (char *)v3 + 7;
    v5 = 0;
    v6 = (unsigned __int8 *)&unk_180569112;
    v7 = -1;
    v8 = 0;
    v9 = 0;
    v10 = 103LL;
    do
    {
      v11 = *(v6 - 1) | (*(v6 - 2) << 8);
      v12 = v6[2] << 8;
      v13 = *v6;
      v6 += 8;
      v14 = *(v6 - 7) | ((v13 | (v11 << 8)) << 8);
      v15 = v14 ^ v9;
      v16 = *(v6 - 3) | ((*(v6 - 4) | ((*(v6 - 5) | v12) << 8)) << 8);
      v17 = v16 ^ v8 ^ v15 ^ 0xAC987321;
      v18 = (__ROL4__(v17, 10) + 4991 * __ROL4__(v17 + 1419157410, 5)) ^ v15;
      v19 = (43881 * __ROR4__(v18 + 133239679, 9) - __ROL4__(v18, 2)) ^ v17;
      v20 = (24670 * v19 - (v19 >> 13) - 123127970) ^ v18;
      v21 = (2033 * __ROL4__(v20 ^ 0xAB69, 6) - __ROL4__(v20, 2)) ^ v19;
      v22 = (133239679 - (v21 ^ 0xAB69605E)) ^ v20;
      v23 = (43881 * (v22 ^ 0x137F)) ^ __ROR4__(v22, 6) ^ v21;
      v24 = (__ROL4__(v23, 2) + 24670 * __ROR4__(v23 + 133239679, 15)) ^ v22;
      v25 = (2033 * __ROR4__(v24 + 1419157410, 14) - __ROL4__(v24, 8)) ^ v23;
      v26 = __ROR4__(v25, 10) ^ (4991 * __ROR4__(v25 ^ 0xAB69605E, 12)) ^ v24;
      v27 = v25 ^ (v26 >> 10) ^ (43881 * (v26 ^ 0x7F1));
      v28 = (2033 * (__ROR4__(~v27, 5) + 24670)) ^ v26;
      v29 = v27 ^ (v28 - 2033) ^ 0xAB69605E;
      v30 = ((v29 >> 2) + 4991 * __ROL4__(v27 ^ (v28 - 2033) ^ 0xAB6967AF, 2)) ^ v28;
      v31 = (__ROL4__(v30, 7) + 43881 * __ROR4__(v30 - 133239679, 6)) ^ v29;
      v32 = (24670 * (v31 ^ 0x137F) + __ROR4__(v31, 9)) ^ v30;
      v33 = (__ROL4__(v32, 7) + 2033 * __ROL4__(v32 ^ 0xAB69, 5)) ^ v31;
      v34 = v33 ^ v32 ^ 0xAC987321;
      v35 = (4991 * __ROR4__(v34, 3) - 219010071) ^ v33;
      v36 = (24670 * __ROR4__(v35 - 133239679, 1) - __ROR4__(v35, 6)) ^ v34;
      v37 = (__ROL4__(v36, 14) + 2033 * __ROL4__(v36 - 1419157410, 3)) ^ v35;
      v38 = (4991 * __ROL4__(v37 - 1419157410, 15) - __ROR4__(v37, 14)) ^ v36;
      v39 = (v38 >> 3) ^ (43881 * (v38 ^ 0x605E)) ^ v37;
      v40 = 24670 * __ROL4__(v39 ^ 0x7F1137F, 4);
      v41 = v39;
      v42 = v7 ^ v39;
      v7 = v16;
      v43 = v5 ^ __ROL4__(v41, 2) ^ v40;
      v5 = v14;
      v44 = v43 ^ v38;
      *(v4 - 4) = v44;
      *v4 = v42;
      v4 += 8;
      v45 = __ROR4__(v44, 8);
      *(v4 - 13) = v45;
      v46 = __ROR4__(v42, 8);
      *(v4 - 9) = v46;
      v47 = __ROR4__(v45, 8);
      *(v4 - 14) = v47;
      v48 = __ROR4__(v46, 8);
      *(v4 - 10) = v48;
      v49 = __ROR4__(v47, 8);
      v50 = __ROR4__(v48, 8);
      *(v4 - 15) = v49;
      *(v4 - 11) = v50;
      v8 = __ROR4__(v50, 8);
      v9 = __ROR4__(v49, 8);
      --v10;
    }
    while ( v10 );
    v51 = 0;
    v52 = 0LL;
    v53 = 0;
    v54 = 0;
    do
      v51 ^= *((_BYTE *)v3 + v52++);
    while ( v52 < 0x338 );
    if ( v51 == 64LL )
    {
      lpModuleName = v3;
      v3 = 0LL;
      v1695 = 824LL;
      v55 = 0;
    }
    else
    {
      v55 = -1073425151;
    }
    if ( v3 )
      MemoryFree(v3);
    if ( v55 >= 0 )
    {
      v56 = lpModuleName;
      HIBYTE(lpModuleName[v1695 / 2 - 1]) = 0;
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      if ( !*(_BYTE *)v56 )
        goto LABEL_37;
      while ( 1 )
      {
        v57 = -1LL;
        v58 = v56;
        v53 = 0;
        do
          ++v57;
        while ( v56[v57] );
        v59 = &v56[v57];
        v60 = (char *)&WARBIRD::g_arModuleInfo + 24 * v54;
        if ( !GetModuleHandleExW(0, v58, (HMODULE *)v60) )
          break;
        if ( **(_WORD **)v60 == 23117
          && (v61 = *(int *)(*(_QWORD *)v60 + 60LL), (unsigned int)v61 < 0x10000000)
          && (v62 = *(_QWORD *)v60 + v61, v62 >= *(_QWORD *)v60)
          && *(_DWORD *)v62 == 17744 )
        {
          if ( ((*(_WORD *)(v62 + 24) - 267) & 0xFEFF) != 0 )
          {
            v53 = -1073741811;
          }
          else
          {
            *(_QWORD *)(v60 + 12) = *(_QWORD *)(v62 + 136);
            *((_DWORD *)v60 + 2) = *(_DWORD *)(v62 + 80);
          }
        }
        else
        {
          v53 = -1073741701;
        }
        v63 = *(_DWORD *)(v59 + 1);
        v56 = v59 + 3;
        for ( i = 0; i < v63; ++i )
        {
          v65 = -1LL;
          v66 = (const CHAR *)v56;
          do
            ++v65;
          while ( *((_BYTE *)v56 + v65) );
          v56 = (LPCWSTR)((char *)v56 + v65 + 1);
          if ( v53 >= 0 )
          {
            ProcAddress = (void **)GetProcAddress(*(HMODULE *)v60, v66);
            if ( !ProcAddress )
              goto LABEL_37;
            (&WARBIRD::g_FuncAddress)[v1476] = ProcAddress;
          }
          ++v1476;
        }
        ++v54;
        if ( !*(_BYTE *)v56 )
          goto LABEL_37;
      }
    }
  }
  v53 = -1073741702;
LABEL_37:
  if ( lpModuleName )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, (LPVOID)lpModuleName);
  }
  if ( v53 >= 0 )
  {
    v2 = g_WarbirdSecureFunctionsRefCount;
LABEL_46:
    g_WarbirdSecureFunctionsRefCount = v2 + 1;
    goto LABEL_47;
  }
  v69 = 4LL;
  v70 = (HMODULE *)&WARBIRD::g_arModuleInfo;
  do
  {
    if ( *v70 )
      FreeLibrary(*v70);
    v70 += 3;
    --v69;
  }
  while ( v69 );
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  memcpy_0(&WARBIRD::g_FuncAddress, off_180509E10, 0x170uLL);
LABEL_47:
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  String1 = 0LL;
  v71 = 0;
  v1697 = 0LL;
  LastError = 0;
  if ( !NtCurrentPeb()->SessionId )
    goto LABEL_95;
  v73 = ((__int64 (*)(void))off_180646210[0])();
  if ( !v73 )
  {
LABEL_49:
    LastError = GetLastError();
    v74 = LastError < 0;
    if ( LastError > 0 )
    {
      LastError = (unsigned __int16)LastError | 0x80070000;
      v74 = LastError < 0;
    }
    if ( !v74 )
      LastError = -2147467259;
    goto LABEL_96;
  }
  v1698 = 0LL;
  v75 = 0LL;
  for ( j = 0LL; ; v1698 = j )
  {
    if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_180646230[0])(
           v73,
           2LL,
           j,
           v75,
           &v1580) )
    {
      String1 = j;
      goto LABEL_66;
    }
    v77 = GetLastError();
    if ( v77 != 122 )
      break;
    if ( j )
      goto LABEL_60;
    j = (wchar_t *)MemoryAlloc(v1580);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1698);
    if ( !j )
    {
      LastError = -2147024882;
LABEL_66:
      v1698 = 0LL;
      goto LABEL_67;
    }
    v75 = v1580;
  }
  if ( !v77 )
  {
LABEL_60:
    LastError = -2147467259;
    goto LABEL_67;
  }
  if ( v77 > 0 )
    LastError = (unsigned __int16)v77 | 0x80070000;
  else
    LastError = v77;
LABEL_67:
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1698);
  if ( LastError >= 0 )
  {
    v78 = off_180646228[0];
    CurrentThreadId = GetCurrentThreadId();
    v80 = ((__int64 (__fastcall *)(_QWORD))v78)(CurrentThreadId);
    if ( !v80 )
    {
      LastError = GetLastError();
      v81 = LastError < 0;
      if ( LastError > 0 )
      {
        LastError = (unsigned __int16)LastError | 0x80070000;
        v81 = LastError < 0;
      }
      if ( !v81 )
        LastError = -2147467259;
      goto LABEL_96;
    }
    v1700 = 0LL;
    LastError = 0;
    v82 = 0LL;
    for ( k = 0LL; ; v1700 = k )
    {
      if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_180646230[0])(
             v80,
             2LL,
             k,
             v82,
             &v1582) )
      {
        v1697 = k;
        goto LABEL_86;
      }
      v84 = GetLastError();
      if ( v84 != 122 )
        break;
      if ( k )
        goto LABEL_80;
      k = (wchar_t *)MemoryAlloc(v1582);
      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1700);
      if ( !k )
      {
        LastError = -2147024882;
LABEL_86:
        v1700 = 0LL;
        goto LABEL_87;
      }
      v82 = v1582;
    }
    if ( !v84 )
    {
LABEL_80:
      LastError = -2147467259;
      goto LABEL_87;
    }
    LastError = v84 > 0 ? (unsigned __int16)v84 | 0x80070000 : v84;
LABEL_87:
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1700);
    if ( LastError >= 0 )
    {
      if ( String1 && !wcscmp_0(String1, L"WinSta0") && v1697 && !wcscmp_0(v1697, L"Default") )
      {
        v1517 = 0;
        CurrentProcess = GetCurrentProcess();
        if ( !(unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1517) )
          goto LABEL_49;
        if ( (v1517 & 0xF) == 0 )
          v71 = 1;
      }
LABEL_95:
      v1579 = v71;
    }
  }
LABEL_96:
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1697);
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&String1);
  v86 = v1579;
  if ( LastError < 0 )
    v86 = 0;
  v1579 = v86;
  v1467 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1511);
  if ( !v1467 )
  {
    v1511 = 0LL;
    v87 = -2147024882;
LABEL_100:
    v88 = v1517;
    goto LABEL_101;
  }
  v93 = 0LL;
  lpMem = 0LL;
  v94 = 0LL;
  v1583 = 0;
  v1597 = 0;
  v1511 = v1467;
  v1701 = &`WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher;
  *(_OWORD *)v1742 = 0LL;
  v95 = GetProcessHeap();
  v96 = (unsigned __int16 *)HeapAlloc(v95, 8u, 0xA0uLL);
  v87 = -1073741801;
  if ( !v96 )
  {
LABEL_114:
    v1503 = v87;
    goto LABEL_201;
  }
  v97 = v1701;
  v93 = v96;
  v1411 = v96;
  *(_OWORD *)v96 = *v1701;
  *((_OWORD *)v96 + 1) = v97[1];
  *((_OWORD *)v96 + 2) = v97[2];
  *((_OWORD *)v96 + 3) = v97[3];
  *((_OWORD *)v96 + 4) = v97[4];
  *((_OWORD *)v96 + 5) = v97[5];
  *((_OWORD *)v96 + 6) = v97[6];
  *((_OWORD *)v96 + 7) = v97[7];
  *((_OWORD *)v96 + 8) = v97[8];
  *((_OWORD *)v96 + 9) = v97[9];
  v1631 = &`WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
  v98 = GetProcessHeap();
  v94 = (unsigned __int16 *)HeapAlloc(v98, 8u, 8uLL);
  if ( !v94 )
  {
    v1503 = -1073741801;
    v94 = 0LL;
    goto LABEL_201;
  }
  v1394 = v94;
  *(_QWORD *)v94 = *v1631;
  v1632 = __rdtsc();
  dwBytes = 0;
  v99 = RtlUIntAdd(4LL, 4LL, &dwBytes_4);
  v100 = v1622;
  v87 = v99;
  v1503 = v99;
  if ( v99 >= 0 )
    v100 = dwBytes_4;
  v1622 = v100;
  if ( v99 >= 0 )
  {
    v101 = RtlUIntAdd(0LL, v100, &dwBytes);
    v87 = v101 | 0x10000000;
    v1503 = v101 | 0x10000000;
    if ( v101 >= 0 )
    {
      v103 = RtlUIntAdd(v102, 160LL, &v1623);
      v1503 = v103;
      v87 = v103;
      if ( v103 >= 0 )
        v100 = v1623;
      v1622 = v100;
      if ( v103 >= 0 )
      {
        v104 = RtlUIntAdd(dwBytes, v100, &dwBytes);
        v87 = v106 | v104;
        v1503 = v106 | v104;
        if ( (v106 | v104) >= 0 )
        {
          v107 = RtlUIntAdd(v105, v105 + 4, &v1625);
          v1503 = v107;
          v87 = v107;
          if ( v107 >= 0 )
            v100 = v1625;
          v1622 = v100;
          if ( v107 >= 0 )
          {
            v108 = RtlUIntAdd(dwBytes, v100, &dwBytes);
            v87 = v110 | v108;
            v1503 = v110 | v108;
            if ( (v110 | v108) >= 0 )
            {
              v111 = RtlUIntAdd(v109, v109 + 4, &v1626);
              v1503 = v111;
              v87 = v111;
              if ( v111 >= 0 )
                v100 = v1626;
              v1622 = v100;
              if ( v111 >= 0 )
              {
                v112 = RtlUIntAdd(dwBytes, v100, &dwBytes);
                v87 = v114 | v112;
                v1503 = v114 | v112;
                if ( (v114 | v112) >= 0 )
                {
                  if ( StringCchLengthW(L"Cortana-AllowCortana-Enabled", v113, &pcchLength) < 0 )
                  {
                    v87 = -1073741762;
                    goto LABEL_114;
                  }
                  v116 = RtlUIntAdd(v115, (unsigned int)(2 * ++pcchLength), &v1627);
                  v1503 = v116;
                  v87 = v116;
                  if ( v116 >= 0 )
                    v100 = v1627;
                  v1622 = v100;
                  if ( v116 < 0 )
                    goto LABEL_201;
                  v117 = RtlUIntAdd(dwBytes, v100, &dwBytes);
                  v87 = v117 | 0x10000000;
                  v1503 = v117 | 0x10000000;
                  if ( v117 < 0 )
                    goto LABEL_201;
                  v119 = RtlUIntAdd(v118, v118, &v1628);
                  v1503 = v119;
                  v87 = v119;
                  if ( v119 >= 0 )
                    v100 = v1628;
                  v1622 = v100;
                  if ( v119 < 0 )
                    goto LABEL_201;
                  v120 = RtlUIntAdd(dwBytes, v100, &dwBytes);
                  v87 = v122 | v120;
                  v1503 = v122 | v120;
                  if ( (v122 | v120) < 0 )
                    goto LABEL_201;
                  v123 = RtlUIntAdd(v121, v121, &v1629);
                  v1503 = v123;
                  v87 = v123;
                  if ( v123 >= 0 )
                    v100 = v1629;
                  v1622 = v100;
                  if ( v123 < 0 )
                    goto LABEL_201;
                  v124 = RtlUIntAdd(dwBytes, v100, &dwBytes);
                  v87 = v125 | v124;
                  v1503 = v125 | v124;
                  if ( (v125 | v124) < 0 )
                    goto LABEL_201;
                  HIDWORD(Size) = dwBytes;
                  v126 = dwBytes;
                  v127 = GetProcessHeap();
                  v128 = HeapAlloc(v127, 8u, v126);
                  if ( !v128 )
                  {
                    v87 = -1073741801;
                    goto LABEL_114;
                  }
                  lpMem = v128;
                  LODWORD(Size) = 0;
                  v1522 = 0;
                  v87 = RtlULongLongAdd(v128, 4LL, &v1735);
                  v1503 = v87;
                  v130 = 0;
                  if ( v87 >= 0 )
                  {
                    if ( v128 + 2 > (_DWORD *)((char *)v128 + HIDWORD(Size)) )
                    {
LABEL_151:
                      v87 = -1073741789;
                      goto LABEL_114;
                    }
                    v131 = v1735;
                    *v128 = v129;
                    *v131 = v1522;
                    v130 = Size + 1;
                    LODWORD(Size) = Size + 1;
                  }
                  if ( v87 < 0 )
                    goto LABEL_201;
                  if ( lpMem )
                  {
                    v135 = lpMem;
                    v1634 = lpMem;
                    if ( v130 )
                    {
                      do
                      {
                        v87 = RtlUIntAdd((unsigned int)v129, (unsigned int)*v135, &v1525);
                        v1503 = v87;
                        if ( v87 >= 0 )
                          v136 = v1525;
                        v1524 = v136;
                        if ( v87 < 0 )
                          goto LABEL_201;
                        v87 = RtlULongLongAdd(v135, v136, &v1634);
                        v1503 = v87;
                        if ( v87 < 0 )
                          goto LABEL_201;
                        v135 = v1634;
                      }
                      while ( v137 + 1 < (unsigned int)Size );
                    }
                    v87 = RtlULongLongAdd(v135, v129, &v1744);
                    v1503 = v87;
                    if ( v87 < 0 )
                      goto LABEL_201;
                    if ( v135 + 41 > (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
                      goto LABEL_151;
                    v138 = v1744;
                    *v135 = 160;
                    *v138 = *(_OWORD *)v96;
                    v138[1] = *((_OWORD *)v96 + 1);
                    v138[2] = *((_OWORD *)v96 + 2);
                    v138[3] = *((_OWORD *)v96 + 3);
                    v138[4] = *((_OWORD *)v96 + 4);
                    v138[5] = *((_OWORD *)v96 + 5);
                    v138[6] = *((_OWORD *)v96 + 6);
                    v138[7] = *((_OWORD *)v96 + 7);
                    v138[8] = *((_OWORD *)v96 + 8);
                    v138[9] = *((_OWORD *)v96 + 9);
                    LODWORD(Size) = Size + 1;
                  }
                  else
                  {
                    v132 = RtlUIntAdd((unsigned int)v129, 160LL, &v1523);
                    v133 = v1524;
                    v87 = v132;
                    v1503 = v132;
                    if ( v132 >= 0 )
                      v133 = v1523;
                    v1524 = v133;
                    if ( v132 < 0 )
                      goto LABEL_201;
                    v87 = RtlUIntAdd(HIDWORD(Size), v133, (char *)&Size + 4);
                    v1503 = v87;
                    if ( v87 < 0 )
                      goto LABEL_201;
                    LODWORD(Size) = Size + 1;
                  }
                  if ( lpMem )
                  {
                    v141 = lpMem;
                    v1635 = lpMem;
                    if ( (_DWORD)Size )
                    {
                      while ( 1 )
                      {
                        v142 = RtlUIntAdd((unsigned int)v134, (unsigned int)*v141, &v1528);
                        v1503 = v142;
                        v87 = v142;
                        if ( v142 >= 0 )
                          v143 = v1528;
                        v1527 = v143;
                        if ( v142 < 0 )
                          break;
                        v1503 = RtlULongLongAdd(v141, v143, &v1635);
                        v87 = v1503;
                        if ( v1503 < 0 )
                          break;
                        v141 = v1635;
                        if ( v144 + 1 >= (unsigned int)Size )
                          goto LABEL_181;
                      }
                    }
                    else
                    {
LABEL_181:
                      v1503 = RtlULongLongAdd(v141, v134, &v1745);
                      v87 = v1503;
                      if ( v1503 >= 0 )
                      {
                        if ( v141 + 3 > (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
                          goto LABEL_151;
                        v145 = v1745;
                        *v141 = 8;
                        *v145 = *(_QWORD *)v94;
                        LODWORD(Size) = Size + 1;
                      }
                    }
                  }
                  else
                  {
                    v139 = RtlUIntAdd((unsigned int)v134, 8LL, &v1526);
                    v140 = v1527;
                    v87 = v139;
                    v1503 = v139;
                    if ( v139 >= 0 )
                      v140 = v1526;
                    v1527 = v140;
                    if ( v139 >= 0 )
                    {
                      v1503 = RtlUIntAdd(HIDWORD(Size), v140, (char *)&Size + 4);
                      v87 = v1503;
                      if ( v1503 < 0 )
                        goto LABEL_201;
                      LODWORD(Size) = Size + 1;
                      goto LABEL_185;
                    }
                  }
                  if ( v87 < 0 )
                    goto LABEL_201;
LABEL_185:
                  v1636 = v1632;
                  if ( lpMem )
                  {
                    v149 = lpMem;
                    v1637 = lpMem;
                    if ( (_DWORD)Size )
                    {
                      do
                      {
                        v150 = RtlUIntAdd((unsigned int)v134, (unsigned int)*v149, &v1531);
                        v1503 = v150;
                        v87 = v150;
                        if ( v150 >= 0 )
                          v151 = v1531;
                        v1530 = v151;
                        if ( v150 < 0 )
                          goto LABEL_201;
                        v1503 = RtlULongLongAdd(v149, v151, &v1637);
                        v87 = v1503;
                        if ( v1503 < 0 )
                          goto LABEL_201;
                        v149 = v1637;
                      }
                      while ( v152 + 1 < (unsigned int)Size );
                    }
                    v1503 = RtlULongLongAdd(v149, v134, &v1746);
                    v87 = v1503;
                    if ( v1503 < 0 )
                      goto LABEL_201;
                    if ( v149 + 3 > (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
                    {
                      v87 = -1073741789;
LABEL_200:
                      v1503 = v87;
                      goto LABEL_201;
                    }
                    v161 = v1746;
                    *v149 = 8;
                    *v161 = v1636;
                    LODWORD(Size) = Size + 1;
                  }
                  else
                  {
                    v146 = RtlUIntAdd((unsigned int)v134, 8LL, &v1529);
                    v147 = v1530;
                    v87 = v146;
                    v1503 = v146;
                    if ( v146 >= 0 )
                      v147 = v1529;
                    v1530 = v147;
                    if ( v146 < 0 )
                      goto LABEL_201;
                    v1503 = RtlUIntAdd(HIDWORD(Size), v147, (char *)&Size + 4);
                    v87 = v1503;
                    if ( v1503 < 0 )
                      goto LABEL_201;
                    LODWORD(Size) = Size + 1;
                  }
                  if ( StringCchLengthW(L"Cortana-AllowCortana-Enabled", v148, &v1638) < 0 )
                  {
                    v87 = -1073741762;
                    goto LABEL_200;
                  }
                  v1503 = RtlULongLongAdd(v1638, 1LL, &v1638);
                  v87 = v1503;
                  if ( v1503 < 0 )
                    goto LABEL_201;
                  if ( 2 * (_DWORD)v1638 )
                  {
                    if ( lpMem )
                    {
                      v165 = lpMem;
                      v1639 = lpMem;
                      if ( (_DWORD)Size )
                      {
                        while ( 1 )
                        {
                          v166 = RtlUIntAdd(4LL, (unsigned int)*v165, &v1534);
                          v1503 = v166;
                          v87 = v166;
                          if ( v166 >= 0 )
                            v168 = v1534;
                          v1533 = v168;
                          if ( v166 < 0 )
                            break;
                          v1503 = RtlULongLongAdd(v165, v168, &v1639);
                          v87 = v1503;
                          if ( v1503 < 0 )
                            goto LABEL_237;
                          v165 = v1639;
                          if ( v169 + 1 >= (unsigned int)Size )
                            goto LABEL_233;
                        }
                        v162 = v167;
                      }
                      else
                      {
LABEL_233:
                        v1503 = RtlULongLongAdd(v165, 4LL, &v1747);
                        v87 = v1503;
                        if ( v1503 < 0 )
                          goto LABEL_201;
                        if ( (char *)v165 + v170 + 4 <= (char *)lpMem + HIDWORD(Size) )
                        {
                          v171 = v1747;
                          *v165 = v170;
                          memcpy_0(v171, L"Cortana-AllowCortana-Enabled", (unsigned int)v170);
                          LODWORD(Size) = Size + 1;
LABEL_237:
                          v162 = 4LL;
                        }
                        else
                        {
                          v87 = -1073741789;
                          v1503 = -1073741789;
                        }
                      }
                    }
                    else
                    {
                      v163 = RtlUIntAdd((unsigned int)v162, (unsigned int)(2 * v1638), &v1532);
                      v164 = v1533;
                      v87 = v163;
                      v1503 = v163;
                      if ( v163 >= 0 )
                        v164 = v1532;
                      v1533 = v164;
                      if ( v163 < 0 )
                        goto LABEL_201;
                      v87 = RtlUIntAdd(HIDWORD(Size), v164, (char *)&Size + 4);
                      v1503 = v87;
                      if ( v87 < 0 )
                        goto LABEL_201;
                      LODWORD(Size) = Size + 1;
                      v87 = 0;
                      v1503 = 0;
                    }
                  }
                  else
                  {
                    v87 = -1073741811;
                    v1503 = -1073741811;
                  }
                  if ( v87 < 0 )
                    goto LABEL_201;
                  v1535 = v1579;
                  if ( lpMem )
                  {
                    v175 = lpMem;
                    v1640 = lpMem;
                    if ( (_DWORD)Size )
                    {
                      do
                      {
                        v87 = RtlUIntAdd((unsigned int)v162, (unsigned int)*v175, &v1538);
                        v1503 = v87;
                        if ( v87 >= 0 )
                          v176 = v1538;
                        v1537 = v176;
                        if ( v87 < 0 )
                          goto LABEL_201;
                        v87 = RtlULongLongAdd(v175, v176, &v1640);
                        v1503 = v87;
                        if ( v87 < 0 )
                          goto LABEL_201;
                        v175 = v1640;
                      }
                      while ( v177 + 1 < (unsigned int)Size );
                    }
                    v87 = RtlULongLongAdd(v175, v162, &v1748);
                    v1503 = v87;
                    if ( v87 < 0 )
                      goto LABEL_201;
                    if ( v175 + 2 > (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
                      goto LABEL_255;
                    v178 = v1748;
                    *v175 = v174;
                    *v178 = v1535;
                    LODWORD(Size) = Size + 1;
                  }
                  else
                  {
                    v172 = RtlUIntAdd((unsigned int)v162, (unsigned int)v162, &v1536);
                    v173 = v1537;
                    v87 = v172;
                    v1503 = v172;
                    if ( v172 >= 0 )
                      v173 = v1536;
                    v1537 = v173;
                    if ( v172 < 0 )
                      goto LABEL_201;
                    v87 = RtlUIntAdd(HIDWORD(Size), v173, (char *)&Size + 4);
                    v1503 = v87;
                    if ( v87 < 0 )
                      goto LABEL_201;
                    LODWORD(Size) = Size + 1;
                  }
                  v1539 = v174;
                  if ( !lpMem )
                  {
                    v179 = RtlUIntAdd((unsigned int)v174, (unsigned int)v174, &v1540);
                    v180 = v1541;
                    v87 = v179;
                    v1503 = v179;
                    if ( v179 >= 0 )
                      v180 = v1540;
                    v1541 = v180;
                    if ( v179 < 0 )
                      goto LABEL_699;
                    v1503 = RtlUIntAdd(HIDWORD(Size), v180, (char *)&Size + 4);
                    v87 = v1503;
                    if ( v1503 < 0 )
                      goto LABEL_699;
                    LODWORD(Size) = Size + 1;
LABEL_272:
                    v187 = RtlUIntAdd(v181, v181, &v1543);
                    v189 = v1544;
                    v87 = v187;
                    v1503 = v187;
                    if ( v187 >= 0 )
                      v189 = v1543;
                    v1544 = v189;
                    if ( v187 < 0 )
                      goto LABEL_297;
                    v1545 = v189;
                    v190 = RtlUIntAdd(v188, 8LL, &v1546);
                    v1503 = v190;
                    v192 = v191;
                    v87 = v190;
                    if ( v190 >= 0 )
                      v192 = v1546;
                    v1544 = v192;
                    if ( v190 < 0 )
                      goto LABEL_297;
                    v1503 = RtlUIntAdd(v191, v192, &v1545);
                    v87 = v1503;
                    if ( v1503 < 0 )
                      goto LABEL_297;
                    v194 = RtlUIntAdd(v193, v193, &v1547);
                    v1503 = v194;
                    v87 = v194;
                    if ( v194 >= 0 )
                      v192 = v1547;
                    v1544 = v192;
                    if ( v194 < 0 )
                      goto LABEL_297;
                    v1503 = RtlUIntAdd(v1545, v192, &v1545);
                    v87 = v1503;
                    if ( v1503 < 0 )
                      goto LABEL_297;
                    v196 = RtlUIntAdd(v195, v195, &v1548);
                    v1503 = v196;
                    v87 = v196;
                    if ( v196 >= 0 )
                      v192 = v1548;
                    v1544 = v192;
                    if ( v196 < 0 )
                      goto LABEL_297;
                    v1503 = RtlUIntAdd(v1545, v192, &v1545);
                    v87 = v1503;
                    if ( v1503 < 0 )
                      goto LABEL_297;
                    v198 = RtlUIntAdd(v197, v197, &v1549);
                    v1503 = v198;
                    v87 = v198;
                    if ( v198 >= 0 )
                      v192 = v1549;
                    v1544 = v192;
                    if ( v198 < 0 )
                      goto LABEL_297;
                    v1503 = RtlUIntAdd(v1545, v192, &v1545);
                    v87 = v1503;
                    if ( v1503 < 0 )
                      goto LABEL_297;
                    v200 = RtlUIntAdd(v199, v199, &v1516);
                    v1503 = v200;
                    v87 = v200;
                    if ( v200 >= 0 )
                      v192 = v1516;
                    v1544 = v192;
                    if ( v200 < 0 )
                    {
LABEL_297:
                      v201 = v1516;
                    }
                    else
                    {
                      v87 = RtlUIntAdd(v1545, v192, &v1545);
                      v1503 = v87;
                      v201 = v1516;
                      if ( v87 >= 0 )
                        v201 = v1545;
                    }
                    v1380 = v201;
                    if ( v87 < 0 )
                      goto LABEL_201;
                    v202 = 0LL;
                    v1426 = 0LL;
                    v203 = 0;
                    v1642 = 0LL;
                    v1440 = 0LL;
                    v204 = 0;
                    v1436 = 0LL;
                    v1563 = 0;
                    v1486 = 0LL;
                    v1506 = 0LL;
                    v1550 = 0;
                    v1643 = __rdtsc();
                    v1551 = 8;
                    v205 = RtlUIntAdd(8LL, HIDWORD(Size), &v1551);
                    if ( v205 >= 0 )
                    {
                      v206 = (v1551 + 7) & 0xFFFFFFF8;
                      if ( v206 >= v1551 )
                      {
                        v1551 = (v1551 + 7) & 0xFFFFFFF8;
                        v207 = v206;
                        v208 = GetProcessHeap();
                        v209 = HeapAlloc(v208, 8u, v207);
                        if ( v209 )
                        {
                          v1644 = v209;
                          *v209 = Size;
                          v205 = RtlULongLongAdd(v209, 4LL, &v1644);
                          if ( v205 >= 0 )
                          {
                            v211 = v1644;
                            *(_DWORD *)v1644 = HIDWORD(Size);
                            v205 = RtlULongLongAdd(v211, v210, &v1644);
                            if ( v205 >= 0 )
                            {
                              *(_QWORD *)((char *)v209 + v1551 - 8) = v1643;
                              memcpy_0(v1644, lpMem, HIDWORD(Size));
                              v203 = v1551;
                              v1426 = (unsigned __int16 *)v209;
                              v209 = 0LL;
                            }
                          }
                          if ( v209 )
                          {
                            v212 = GetProcessHeap();
                            HeapFree(v212, 0, v209);
                          }
                          v202 = v1426;
                        }
                        else
                        {
                          v205 = -1073741801;
                          v202 = 0LL;
                        }
                      }
                      else
                      {
                        v205 = -1073741675;
                      }
                    }
                    v87 = v205 | 0x10000000;
                    v1503 = v87;
                    if ( v87 < 0 )
                      goto LABEL_587;
                    v1645 = 0LL;
                    v213 = 0LL;
                    if ( v202 )
                    {
                      v215 = v203;
                      v1470 = v203;
                      if ( v203 && (v1458 = v203 + 8LL, v216 = MemoryAlloc(v1458), v217 = 0, v216) )
                      {
                        v218 = 0;
                        for ( m = 0LL; m < v203; v217 ^= *((_BYTE *)v202 + m++) )
                          ;
                        v1378 = v217;
                        v220 = -1;
                        v1809 = 0xC81ECB17B1B54A58uLL;
                        v1504 = 0;
                        v1477 = 0;
                        v221 = v202;
                        v222 = v216;
                        v223 = 0;
                        v224 = v215 & 7;
                        if ( (v215 & 7) != 0 )
                        {
                          v225 = 0;
                          v1477 = 0;
                          v226 = 56;
                          do
                          {
                            v227 = *(unsigned __int8 *)v221;
                            v221 = (unsigned __int16 *)((char *)v221 + 1);
                            if ( v225 >= 4 )
                            {
                              v228 = v1477;
                              v218 |= v227 << v226;
                            }
                            else
                            {
                              v228 = (v227 << (v226 - 32)) | v1477;
                              v1477 = v228;
                            }
                            ++v225;
                            v226 -= 8;
                          }
                          while ( v225 < (int)v224 );
                          v1504 = v218;
                          v223 = v228 ^ 0xB17A307A;
                          v229 = v218 ^ 0x42F6B18D;
                          v230 = 0;
                          v231 = v228 ^ 0xB17A307A;
                          v232 = v229;
                          if ( (v215 & 7) != 0 )
                          {
                            do
                            {
                              if ( v230 >= 4 )
                              {
                                v232 = __ROL4__(v232, 8);
                                v233 = v232;
                              }
                              else
                              {
                                v231 = __ROL4__(v231, 8);
                                v233 = v231;
                              }
                              *v222 = v233;
                              ++v230;
                              ++v222;
                            }
                            while ( v230 < (int)v224 );
                          }
                          if ( v224 <= 4 )
                          {
                            v220 = 0;
                            if ( v224 < 4 )
                              v223 = v223 >> (8 * (4 - v224)) << (8 * (4 - v224));
                          }
                          else
                          {
                            v220 = v229 >> (8 * (8 - v224)) << (8 * (8 - v224));
                          }
                        }
                        v234 = v215 >> 3;
                        if ( v215 >> 3 )
                        {
                          v235 = (unsigned __int8 *)(v221 + 1);
                          v236 = v1504;
                          v237 = v1477;
                          v1450 = WORD1(v1809);
                          v238 = v222 + 7;
                          v239 = HIDWORD(v1809);
                          v240 = WORD2(v1809);
                          do
                          {
                            v241 = v235[1] | ((*v235 | ((*(v235 - 1) | (*(v235 - 2) << 8)) << 8)) << 8);
                            v242 = v235[5] | ((v235[4] | ((v235[3] | (v235[2] << 8)) << 8)) << 8);
                            v243 = v242 ^ v220;
                            v244 = v241 ^ v239 ^ (v243 - 19032) ^ v223;
                            v245 = (__ROR4__(v244, 7) + WORD1(v1809) * __ROR4__(v244 ^ v239, 15)) ^ v243;
                            v246 = (v240 * __ROR4__(v245 - 1313519016, 9) - __ROR4__(v245, 10)) ^ v244;
                            v247 = (__ROL4__(v246, 5) + HIWORD(v1809) * __ROL4__(v246 ^ v240, 4)) ^ v245;
                            v248 = (v239 - (v247 ^ 0xB1B54A58)) ^ v246;
                            v249 = (WORD1(v1809) * (v248 - 19032) - (v248 >> 6)) ^ v247;
                            v250 = (19032 * (v240 ^ __ROR4__(v249, 15))) ^ v248;
                            v251 = (v240 * (HIWORD(v1809) + __ROR4__(~v250, 3))) ^ v249;
                            v252 = (v251 - 19032 - v239) ^ v250;
                            v253 = (v1450 * (v252 ^ HIWORD(v1809))) ^ __ROR4__(v252, 10) ^ v251;
                            v254 = __ROR4__(v253, 3) ^ (v240 * __ROL4__(v253 ^ 0x4A58, 6)) ^ v252;
                            v255 = (19032 * (__ROR4__(v254, 15) - HIWORD(v1809))) ^ v253;
                            v256 = (v255 >> 15) ^ (19032 * __ROL4__(v255 - v240, 3)) ^ (v255 >> 1) ^ (19032 * (v255 ^ HIWORD(v1809))) ^ v254;
                            v257 = (WORD1(v1809) * (v256 - v240) - (v256 >> 13)) ^ v255;
                            v258 = __ROR4__(v257, 11) ^ (v240 * __ROR4__(-1313519016 - v257, 9)) ^ v256;
                            v259 = (v258 + 1313519016 - HIWORD(v1809)) ^ v257;
                            v260 = (19032 * (v259 ^ WORD1(v1809)) - __ROR4__(v259, 7)) ^ v258;
                            v261 = (WORD1(v1809) * __ROL4__(HIWORD(v1809) ^ v260, 4) - __ROR4__(v260, 16)) ^ v259;
                            v262 = (__ROR4__(v261, 4) + v240 * __ROR4__(-1313519016 - v261, 10)) ^ v260;
                            v263 = __ROR4__(v262, 9) ^ (HIWORD(v1809) * __ROR4__(v262 + 1313519016, 4)) ^ v261;
                            v264 = (19032 * __ROL4__(v263 ^ v239, 8) - __ROL4__(v263, 2)) ^ v262;
                            v265 = (WORD1(v1809) * __ROR4__(v239 - v264, 11) - __ROR4__(v264, 12)) ^ v263;
                            v266 = (v265 >> 8) ^ (v240 * (v265 ^ WORD1(v1809))) ^ v264;
                            v235 += 8;
                            v267 = v266 ^ v239 ^ 0xB1B54A58 ^ v265;
                            v268 = v237 ^ v266;
                            *(v238 - 4) = v268;
                            v269 = v236 ^ v267;
                            *v238 = v269;
                            v237 = v241;
                            v270 = __ROR4__(v268, 8);
                            v236 = v242;
                            *(v238 - 5) = v270;
                            v238 += 8;
                            v271 = __ROR4__(v269, 8);
                            *(v238 - 9) = v271;
                            v272 = __ROR4__(v270, 8);
                            *(v238 - 14) = v272;
                            v273 = __ROR4__(v271, 8);
                            *(v238 - 10) = v273;
                            v274 = __ROR4__(v272, 8);
                            v275 = __ROR4__(v273, 8);
                            *(v238 - 15) = v274;
                            *(v238 - 11) = v275;
                            v220 = __ROR4__(v275, 8);
                            v223 = __ROR4__(v274, 8);
                            --v234;
                          }
                          while ( v234 );
                          v217 = v1378;
                          v213 = 0LL;
                          v215 = v1470;
                        }
                        *(_QWORD *)&v216[v215] = v217;
                        v1646 = v1458;
                        v1645 = v216;
                        v1648 = 8LL;
                        v1647 = &`WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                        v1650 = 160LL;
                        v1649 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher;
                        v276 = GetProcessHeap();
                        v277 = HeapAlloc(v276, 8u, 0x30uLL);
                        if ( v277 )
                        {
                          *(_DWORD *)v277 = v1458;
                          v278 = GetProcessHeap();
                          v279 = HeapAlloc(v278, 8u, (unsigned int)v1458);
                          if ( !v279 )
                            goto LABEL_339;
                          v277[1] = v279;
                          memcpy_0(v279, v216, (unsigned int)v1458);
                          *((_DWORD *)v277 + 4) = 160;
                          v280 = GetProcessHeap();
                          v281 = HeapAlloc(v280, 8u, 0xA0uLL);
                          if ( !v281 )
                            goto LABEL_339;
                          v277[3] = v281;
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
                          *((_DWORD *)v277 + 8) = 8;
                          v282 = GetProcessHeap();
                          v283 = HeapAlloc(v282, 8u, 8uLL);
                          if ( v283 )
                          {
                            v277[5] = v283;
                            v214 = 0;
                            v213 = v277;
                            *v283 = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                            v277 = 0LL;
                          }
                          else
                          {
LABEL_339:
                            v214 = -1073741801;
                          }
                          if ( v277 )
                          {
                            v284 = (void *)v277[1];
                            if ( v284 )
                            {
                              v285 = GetProcessHeap();
                              HeapFree(v285, 0, v284);
                              v277[1] = 0LL;
                            }
                            v286 = (void *)v277[3];
                            if ( v286 )
                            {
                              v287 = GetProcessHeap();
                              HeapFree(v287, 0, v286);
                              v277[3] = 0LL;
                            }
                            v288 = (void *)v277[5];
                            if ( v288 )
                            {
                              v289 = GetProcessHeap();
                              HeapFree(v289, 0, v288);
                              v277[5] = 0LL;
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
                          v1642 = v213;
                          v213 = 0LL;
                        }
                      }
                      else
                      {
                        v214 = -1073741823;
                      }
                      v291 = v1645;
                      if ( v1645 )
                      {
                        v292 = GetProcessHeap();
                        HeapFree(v292, 0, v291);
                        v1645 = 0LL;
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
                      v204 = 0;
                    }
                    else
                    {
                      v214 = -1073741811;
                    }
                    v87 = v214 | 0x10000000;
                    v1503 = v87;
                    if ( v87 < 0 )
                      goto LABEL_587;
                    v300 = (const void **)v1642;
                    v1552 = 4;
                    v301 = RtlUIntAdd(4LL, *(unsigned int *)v1642, &v1552);
                    if ( v301 < 0
                      || (v301 = RtlUIntAdd(v1552, 4LL, &v1552), v301 < 0)
                      || (v301 = RtlUIntAdd(v1552, *((unsigned int *)v300 + 4), &v1552), v301 < 0) )
                    {
                      v302 = 0;
                    }
                    else
                    {
                      v302 = 0;
                      v301 = RtlUIntAdd(v1552, 4LL, &v1552);
                      if ( v301 >= 0 )
                      {
                        v301 = RtlUIntAdd(v1552, *((unsigned int *)v300 + 8), &v1552);
                        v303 = v1553;
                        if ( v301 >= 0 )
                          v303 = v1552;
                        v1553 = v303;
LABEL_375:
                        if ( v301 >= 0 )
                        {
                          v304 = v303;
                          v305 = GetProcessHeap();
                          v306 = HeapAlloc(v305, 8u, v304);
                          if ( v306 )
                          {
                            *v306 = *(_DWORD *)v300;
                            v1651 = v306;
                            v301 = RtlULongLongAdd(v306, 4LL, &v1651);
                            if ( v301 >= 0 )
                            {
                              memcpy_0(v1651, v300[1], *(unsigned int *)v300);
                              v301 = RtlULongLongAdd(v1651, *(unsigned int *)v300, &v1651);
                              if ( v301 >= 0 )
                              {
                                v307 = v1651;
                                *(_DWORD *)v1651 = *((_DWORD *)v300 + 4);
                                v301 = RtlULongLongAdd(v307, 4LL, &v1651);
                                if ( v301 >= 0 )
                                {
                                  memcpy_0(v1651, v300[3], *((unsigned int *)v300 + 4));
                                  v301 = RtlULongLongAdd(v1651, *((unsigned int *)v300 + 4), &v1651);
                                  if ( v301 >= 0 )
                                  {
                                    v308 = v1651;
                                    *(_DWORD *)v1651 = *((_DWORD *)v300 + 8);
                                    v301 = RtlULongLongAdd(v308, 4LL, &v1651);
                                    if ( v301 >= 0 )
                                    {
                                      memcpy_0(v1651, v300[5], *((unsigned int *)v300 + 8));
                                      v301 = RtlULongLongAdd(v1651, *((unsigned int *)v300 + 8), &v1651);
                                      if ( v301 >= 0 )
                                      {
                                        v204 = v1553;
                                        v1440 = v306;
                                        v306 = 0LL;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            if ( v306 )
                            {
                              v309 = GetProcessHeap();
                              HeapFree(v309, 0, v306);
                            }
                          }
                          else
                          {
                            v301 = -1073741801;
                          }
                        }
                        v87 = v301 | 0x10000000;
                        v1503 = v87;
                        if ( v87 < 0 )
                          goto LABEL_587;
                        v1652 = 0LL;
                        v1554 = 0;
                        v1653 = 0LL;
                        v1555 = 0;
                        v1556 = 8;
                        v310 = RtlUIntAdd(8LL, v1380, &v1556);
                        v87 = v310 | 0x10000000;
                        v1503 = v310 | 0x10000000;
                        if ( v310 >= 0 )
                        {
                          v312 = (v1556 + 7) & 0xFFFFFFF8;
                          if ( v312 >= v1556 )
                          {
                            v1558 = (v1556 + 7) & 0xFFFFFFF8;
                            v314 = RtlUIntAdd(v312, v311, &v1558);
                            v313 = v1557;
                            v87 = v314;
                            v1503 = v314;
                            if ( v314 >= 0 )
                              v313 = v1558;
                            v1557 = v313;
                          }
                          else
                          {
                            v313 = v1557;
                            v87 = -1073741675;
                            v1503 = -1073741675;
                          }
                          if ( v87 < 0 )
                            goto LABEL_587;
                          if ( !lpMem || (unsigned int)Size <= 1 )
                            goto LABEL_396;
                          v315 = (unsigned int *)lpMem;
                          v1654 = (unsigned int *)lpMem;
                          do
                          {
                            v316 = *v315;
                            v1503 = RtlULongLongAdd(v315, 4LL, &v1654);
                            v87 = v1503;
                            if ( v1503 < 0 )
                              goto LABEL_406;
                            v1503 = RtlULongLongAdd(v1654, v316, &v1654);
                            v87 = v1503;
                            if ( v1503 < 0 )
                              goto LABEL_406;
                            v315 = v1654;
                          }
                          while ( v317 == -1 );
                          v1503 = RtlULongLongAdd(v1654, 4LL, &v1654);
                          v87 = v1503;
                          if ( v1503 >= 0 )
                          {
                            v319 = v1654;
                            v1554 = v318;
                            if ( !v318 )
                              v319 = 0LL;
                            v1654 = v319;
                            v1652 = v319;
                          }
LABEL_406:
                          if ( v87 < 0 )
                            goto LABEL_587;
                          if ( (unsigned int)Size > 2 )
                          {
                            v320 = (unsigned int *)lpMem;
                            v1655 = (unsigned int *)lpMem;
                            do
                            {
                              v321 = *v320;
                              v1503 = RtlULongLongAdd(v320, 4LL, &v1655);
                              v87 = v1503;
                              if ( v1503 < 0 )
                                goto LABEL_416;
                              v1503 = RtlULongLongAdd(v1655, v321, &v1655);
                              v87 = v1503;
                              if ( v1503 < 0 )
                                goto LABEL_416;
                              v320 = v1655;
                            }
                            while ( (unsigned int)(v322 + 1) < 2 );
                            v1503 = RtlULongLongAdd(v1655, 4LL, &v1655);
                            v87 = v1503;
                            if ( v1503 >= 0 )
                            {
                              v324 = v1655;
                              v1555 = v323;
                              if ( !v323 )
                                v324 = 0LL;
                              v1655 = v324;
                              v1653 = v324;
                            }
LABEL_416:
                            if ( v87 < 0 )
                              goto LABEL_587;
                            v1559 = 4;
                            v1503 = RtlUIntAdd(4LL, v313, &v1559);
                            v87 = v1503;
                            if ( v1503 < 0
                              || (v1503 = RtlUIntAdd(v1559, 4LL, &v1559), v87 = v1503, v1503 < 0)
                              || (v1503 = RtlUIntAdd(v1559, v325, &v1559), v87 = v1503, v1503 < 0)
                              || (v1503 = RtlUIntAdd(v1559, 4LL, &v1559), v87 = v1503, v1503 < 0) )
                            {
                              v327 = v1560;
                            }
                            else
                            {
                              v87 = RtlUIntAdd(v1559, v326, &v1559);
                              v1503 = v87;
                              v327 = v1560;
                              if ( v87 >= 0 )
                                v327 = v1559;
                              v1560 = v327;
                            }
                            if ( v87 < 0 )
                              goto LABEL_587;
                            if ( v327 > 0x400000 )
                            {
                              v87 = -2147418113;
LABEL_586:
                              v1503 = v87;
                              goto LABEL_587;
                            }
                            v1563 = v327;
                          }
                          else
                          {
LABEL_396:
                            v87 = -1073741811;
                            v1503 = -1073741811;
                          }
                        }
                        if ( v87 < 0 )
                          goto LABEL_587;
                        v328 = v1563;
                        v329 = GetProcessHeap();
                        v330 = (unsigned int *)HeapAlloc(v329, 8u, v328);
                        if ( v330 )
                        {
                          v331 = v330;
                          v1436 = (__int64)v330;
                          v87 = 0x10000000;
                        }
                        else
                        {
                          v331 = 0LL;
                          v87 = -805306345;
                        }
                        v1503 = v87;
                        if ( v87 < 0 )
                          goto LABEL_587;
                        if ( !v1440 || !v331 )
                        {
                          v87 = -2147024809;
                          goto LABEL_586;
                        }
                        v1756[0] = v1440;
                        v1758 = v1563;
                        v1757 = v204;
                        v1756[1] = v331;
                        v1759 = 0;
                        if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                          && (v334 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
                        {
                          v335 = ((__int64 (__fastcall *)(__int64, _QWORD *))v334)(134LL, v1756);
                          v333 = v1563;
                          v87 = v335 | 0x10000000;
                          if ( v335 >= 0 )
                            v333 = v1758;
                          v1563 = v333;
                        }
                        else
                        {
                          v332 = GetLastError();
                          v1503 = v332;
                          v87 = v332;
                          if ( v332 > 0 )
                          {
                            v87 = (unsigned __int16)v332 | 0x80070000;
                            v1503 = v87;
                          }
                          v333 = v1563;
                          if ( v87 < 0 )
                            goto LABEL_447;
                          v87 = -2147467259;
                        }
                        v1503 = v87;
LABEL_447:
                        if ( v87 == -805306333 )
                        {
                          v87 = -2147024774;
                          v1503 = -2147024774;
                          goto LABEL_587;
                        }
                        if ( v87 < 0 )
                          goto LABEL_587;
                        v1492 = 0LL;
                        v1561 = 0;
                        v1657 = v331;
                        if ( v333 < 4 )
                        {
LABEL_451:
                          v336 = -1073741762;
LABEL_452:
                          v337 = 0LL;
                          goto LABEL_453;
                        }
                        v339 = *v331;
                        v336 = RtlULongLongAdd(v331, 4LL, &v1657);
                        if ( v336 < 0 )
                          goto LABEL_452;
                        v336 = RtlUIntAdd(0LL, v340, &v1561);
                        if ( v336 < 0 )
                          goto LABEL_460;
                        if ( v333 - v1561 < (unsigned int)v339 )
                        {
                          v336 = -1073741762;
LABEL_460:
                          v337 = v341;
                          goto LABEL_453;
                        }
                        Src = v1657;
                        v336 = RtlULongLongAdd(v1657, v339, &v1657);
                        if ( v336 < 0 )
                          goto LABEL_452;
                        v336 = RtlUIntAdd(v1561, (unsigned int)v339, &v1561);
                        if ( v336 < 0 )
                          goto LABEL_452;
                        if ( v333 - v1561 < (unsigned int)v342 )
                          goto LABEL_451;
                        v343 = *(unsigned int *)v1657;
                        v336 = RtlULongLongAdd(v1657, v342, &v1657);
                        if ( v336 < 0 )
                          goto LABEL_452;
                        v336 = RtlUIntAdd(v1561, v344, &v1561);
                        if ( v336 < 0 )
                          goto LABEL_452;
                        if ( v333 - v1561 < (unsigned int)v343 )
                          goto LABEL_451;
                        v1459 = v1657;
                        v336 = RtlULongLongAdd(v1657, (unsigned int)v343, &v1657);
                        if ( v336 < 0 )
                          goto LABEL_452;
                        v336 = RtlUIntAdd(v1561, (unsigned int)v343, &v1561);
                        if ( v336 < 0 )
                          goto LABEL_452;
                        if ( v333 - v1561 < (unsigned int)v345 )
                          goto LABEL_451;
                        v346 = *(unsigned int *)v1657;
                        v347 = RtlULongLongAdd(v1657, v345, &v1657);
                        v349 = 0LL;
                        v336 = v347;
                        if ( v347 < 0 )
                          goto LABEL_474;
                        v336 = RtlUIntAdd(v1561, v348, &v1561);
                        if ( v336 < 0 )
                          goto LABEL_474;
                        if ( v333 - v1561 < (unsigned int)v346 )
                          goto LABEL_473;
                        v336 = RtlUIntAdd(v1561, (unsigned int)v346, &v1561);
                        if ( v336 < 0 )
                          goto LABEL_474;
                        if ( v333 != v1561 || (unsigned int)(v346 + v343 + v339) + 12LL != v333 )
                        {
LABEL_473:
                          v336 = -1073741762;
LABEL_474:
                          v337 = v349;
                          v302 = 0;
                          goto LABEL_453;
                        }
                        v350 = GetProcessHeap();
                        v351 = HeapAlloc(v350, 8u, 0x30uLL);
                        if ( !v351 )
                        {
                          v336 = -1073741801;
                          v302 = 0;
LABEL_503:
                          v337 = (unsigned int *)v1492;
                          v367 = 0LL;
                          if ( v336 < 0 )
                          {
                            v367 = (_QWORD *)v1492;
                            v337 = 0LL;
                          }
                          v1486 = v337;
                          if ( v367 )
                          {
                            v368 = (void *)v367[1];
                            if ( v368 )
                            {
                              v369 = GetProcessHeap();
                              HeapFree(v369, 0, v368);
                              v367[1] = 0LL;
                            }
                            v370 = (void *)v367[3];
                            if ( v370 )
                            {
                              v371 = GetProcessHeap();
                              HeapFree(v371, 0, v370);
                              v367[3] = 0LL;
                            }
                            v372 = (void *)v367[5];
                            if ( v372 )
                            {
                              v373 = GetProcessHeap();
                              HeapFree(v373, 0, v372);
                              v367[5] = 0LL;
                            }
                            v374 = GetProcessHeap();
                            HeapFree(v374, 0, v367);
                            v337 = v1486;
                          }
LABEL_453:
                          v87 = v336 | 0x10000000;
                          v1503 = v87;
                          if ( v87 < 0 )
                            goto LABEL_587;
                          v1658 = 0LL;
                          v338 = 0LL;
                          if ( !v337 || (v375 = (char *)*((_QWORD *)v337 + 1), (Srca = v375) == 0LL) || !*v337 )
                          {
                            v87 = -805306355;
                            goto LABEL_586;
                          }
                          v376 = *v337;
                          if ( v376 )
                          {
                            v377 = v376 - 8;
                            v1512 = (void *)v377;
                            v378 = MemoryAlloc(v377);
                            v379 = 0;
                            v1513 = v378;
                            v380 = v378;
                            if ( v378 )
                            {
                              v1808 = 0x7F1137FAB69605ELL;
                              v381 = 0;
                              v382 = v375;
                              v383 = v380;
                              v384 = 0;
                              v385 = v377 & 7;
                              if ( (v377 & 7) != 0 )
                              {
                                v1380 = 0;
                                v386 = 0;
                                v387 = 56;
                                do
                                {
                                  v388 = (unsigned __int8)*v382++;
                                  if ( v384 >= 4 )
                                  {
                                    v389 = v1380;
                                    v386 |= v388 << v387;
                                  }
                                  else
                                  {
                                    v389 = (v388 << (v387 - 32)) | v1380;
                                    v1380 = v389;
                                  }
                                  ++v384;
                                  v387 -= 8;
                                }
                                while ( v384 < (int)v385 );
                                v1505 = v386;
                                v379 = v389 ^ 0x92F65A5;
                                v390 = v386 ^ 0x699A899C;
                                v391 = 0;
                                v392 = v389 ^ 0x92F65A5;
                                v393 = v390;
                                if ( (v377 & 7) != 0 )
                                {
                                  do
                                  {
                                    if ( v391 >= 4 )
                                    {
                                      v393 = __ROL4__(v393, 8);
                                      v394 = v393;
                                    }
                                    else
                                    {
                                      v392 = __ROL4__(v392, 8);
                                      v394 = v392;
                                    }
                                    *v383 = v394;
                                    ++v391;
                                    ++v383;
                                  }
                                  while ( v391 < (int)v385 );
                                }
                                if ( v385 <= 4 )
                                {
                                  v384 = 0;
                                  if ( v385 < 4 )
                                    v379 = v379 >> (8 * (4 - v385)) << (8 * (4 - v385));
                                }
                                else
                                {
                                  v384 = v390 >> (8 * (8 - v385)) << (8 * (8 - v385));
                                }
                              }
                              else
                              {
                                v1505 = -1;
                                v1380 = 0;
                              }
                              v395 = v377 >> 3;
                              if ( v377 >> 3 )
                              {
                                v396 = v383 + 7;
                                v397 = v1505;
                                v398 = (unsigned __int8 *)(v382 + 2);
                                v399 = v1380;
                                v1387 = WORD2(v1808);
                                v400 = HIDWORD(v1808);
                                v1460 = WORD1(v1808);
                                v401 = HIDWORD(v1808) ^ 0xAB69605E;
                                do
                                {
                                  v402 = *(v398 - 1) | (*(v398 - 2) << 8);
                                  v403 = v398[2] << 8;
                                  v404 = *v398;
                                  v398 += 8;
                                  v405 = *(v398 - 7) | ((v404 | (v402 << 8)) << 8);
                                  v406 = v405 ^ v379;
                                  v407 = *(v398 - 3) | ((*(v398 - 4) | ((*(v398 - 5) | v403) << 8)) << 8);
                                  v408 = v406 ^ v400 ^ 0xAB69605E ^ v407 ^ v384;
                                  v409 = (__ROL4__(v408, 10) + v1387 * __ROL4__(v408 + 1419157410, 5)) ^ v406;
                                  v410 = (WORD1(v1808) * __ROR4__(v409 + v400, 9) - __ROL4__(v409, 2)) ^ v408;
                                  v411 = (24670 * (v410 - v1387) - (v410 >> 13)) ^ v409;
                                  v412 = (HIWORD(v1808) * __ROL4__(v411 ^ WORD1(v1808), 6) - __ROL4__(v411, 2)) ^ v410;
                                  v413 = (v400 - (v412 ^ 0xAB69605E)) ^ v411;
                                  v414 = (v1460 * (v413 ^ v1387)) ^ __ROR4__(v413, 6) ^ v412;
                                  v415 = (__ROL4__(v414, 2) + 24670 * __ROR4__(v414 + v400, 15)) ^ v413;
                                  v416 = (HIWORD(v1808) * __ROR4__(v415 + 1419157410, 14) - __ROL4__(v415, 8)) ^ v414;
                                  v417 = __ROR4__(v416, 10) ^ (v1387 * __ROR4__(v416 ^ 0xAB69605E, 12)) ^ v415;
                                  v418 = (v417 >> 10) ^ (WORD1(v1808) * (v417 ^ HIWORD(v1808))) ^ v416;
                                  v419 = (HIWORD(v1808) * (__ROR4__(~v418, 5) + 24670)) ^ v417;
                                  v420 = (v419 - HIWORD(v1808)) ^ 0xAB69605E ^ v418;
                                  v421 = ((v420 >> 2) + v1387 * __ROL4__(v420 ^ HIWORD(v1808), 2)) ^ v419;
                                  v422 = (__ROL4__(v421, 7) + WORD1(v1808) * __ROR4__(v421 - v400, 6)) ^ v420;
                                  v423 = (24670 * (v422 ^ v1387) + __ROR4__(v422, 9)) ^ v421;
                                  v424 = (__ROL4__(v423, 7) + HIWORD(v1808) * __ROL4__(v423 ^ WORD1(v1808), 5)) ^ v422;
                                  v425 = v424 ^ v401 ^ v423;
                                  v426 = (v1387 * (__ROR4__(v425, 3) - WORD1(v1808))) ^ v424;
                                  v427 = (24670 * __ROR4__(v426 - v400, 1) - __ROR4__(v426, 6)) ^ v425;
                                  v428 = (__ROL4__(v427, 14) + HIWORD(v1808) * __ROL4__(v427 - 1419157410, 3)) ^ v426;
                                  v429 = (v1387 * __ROL4__(v428 - 1419157410, 15) - __ROR4__(v428, 14)) ^ v427;
                                  v430 = (v429 >> 3) ^ (WORD1(v1808) * (v429 ^ 0x605E)) ^ v428;
                                  v431 = v430 ^ v400;
                                  v432 = v430;
                                  v433 = v397 ^ v430;
                                  v397 = v407;
                                  v434 = v399 ^ __ROL4__(v432, 2) ^ (24670 * __ROL4__(v431, 4));
                                  v399 = v405;
                                  v435 = v434 ^ v429;
                                  *(v396 - 4) = v435;
                                  *v396 = v433;
                                  v396 += 8;
                                  v436 = __ROR4__(v435, 8);
                                  *(v396 - 13) = v436;
                                  v437 = __ROR4__(v433, 8);
                                  *(v396 - 9) = v437;
                                  v438 = __ROR4__(v436, 8);
                                  *(v396 - 14) = v438;
                                  v439 = __ROR4__(v437, 8);
                                  *(v396 - 10) = v439;
                                  v440 = __ROR4__(v438, 8);
                                  v441 = __ROR4__(v439, 8);
                                  *(v396 - 15) = v440;
                                  *(v396 - 11) = v441;
                                  v384 = __ROR4__(v441, 8);
                                  v379 = __ROR4__(v440, 8);
                                  --v395;
                                }
                                while ( v395 );
                                v381 = 0;
                                v377 = (unsigned __int64)v1512;
                                v302 = 0;
                                v380 = v1513;
                              }
                              for ( n = 0LL; n < v377; ++n )
                                v381 ^= v380[n];
                              if ( v381 == *(_QWORD *)&Srca[v377] )
                              {
                                v338 = (int *)v380;
                                v1658 = (int *)v380;
                                v302 = v377;
                                v380 = 0LL;
                                v443 = 0;
                              }
                              else
                              {
                                v338 = v1658;
                                v443 = -1073425151;
                              }
                              if ( v380 )
                              {
                                MemoryFree(v380);
                                v338 = v1658;
                              }
                              if ( v443 >= 0 )
                              {
                                v444 = v338;
                                v1506 = v338;
                                v338 = 0LL;
                                v1658 = 0LL;
                                v1550 = v302;
                                v87 = 0x10000000;
                                goto LABEL_548;
                              }
                            }
                            else
                            {
                              v338 = v1658;
                            }
                          }
                          v302 = v1550;
                          v87 = -805306367;
                          v444 = 0LL;
LABEL_548:
                          v1503 = v87;
                          if ( v338 )
                          {
                            v445 = GetProcessHeap();
                            HeapFree(v445, 0, v338);
                            v302 = v1550;
                            v1658 = 0LL;
                          }
                          if ( v87 >= 0 )
                          {
                            v1562[0] = 0;
                            v1661 = v444;
                            if ( v302 >= 4 )
                            {
                              v1471 = *v444;
                              v446 = RtlULongLongAdd(v444, 4LL, &v1661);
                              if ( v446 < 0 )
                                goto LABEL_585;
                              v446 = RtlUIntAdd(0LL, 4LL, v1562);
                              if ( v446 < 0 )
                                goto LABEL_585;
                              if ( v302 - v1562[0] >= 4 )
                              {
                                v446 = RtlULongLongAdd(v1661, 4LL, &v1661);
                                if ( v446 < 0 )
                                  goto LABEL_585;
                                v446 = RtlUIntAdd(v1562[0], 4LL, v1562);
                                if ( v446 < 0 )
                                  goto LABEL_585;
                                if ( v302 - v1562[0] >= v447 )
                                {
                                  v446 = RtlUIntAdd(v1562[0], v447, v1562);
                                  if ( v446 < 0 )
                                    goto LABEL_585;
                                  v450 = v1661;
                                  v451 = v302;
                                  v452 = (unsigned int)v449;
                                  if ( (char *)v444 + v451 >= (char *)v1661 + v449
                                    && (unsigned __int64)(v451 + (char *)v444 - v449 - (_BYTE *)v1661) < 8 )
                                  {
                                    v1461 = (int)v448;
                                    v453 = v448;
                                    v446 = (int)v448;
                                    v454 = (int)v448;
                                    if ( !v1661 )
                                    {
LABEL_574:
                                      if ( (_DWORD)v449 )
                                      {
                                        v460 = GetProcessHeap();
                                        v453 = HeapAlloc(v460, 8u, v452);
                                        if ( !v453 )
                                        {
                                          v446 = -1073741801;
                                          goto LABEL_582;
                                        }
                                        v446 = 0;
                                      }
                                      if ( v450 )
                                        memcpy_0(v453, v450, v452);
                                      v1742[1] = v453;
                                      LODWORD(v1742[0]) = v454;
LABEL_582:
                                      if ( v446 < 0 || v1471 == LODWORD(v1742[0]) )
                                        goto LABEL_585;
                                      goto LABEL_584;
                                    }
                                    v455 = (unsigned int *)v1661;
                                    v446 = RtlULongLongAdd(v1661, (unsigned int)v449, &v1662);
                                    if ( v446 < 0 )
                                      goto LABEL_582;
                                    v456 = (unsigned int *)v1662;
                                    if ( (unsigned __int64)v450 < v1662 )
                                    {
                                      do
                                      {
                                        v446 = RtlULongLongAdd(v455, 4LL, &v1663);
                                        if ( v446 < 0 )
                                          goto LABEL_585;
                                        if ( v1663 > v457 )
                                          goto LABEL_577;
                                        v458 = RtlUIntAdd(4LL, *v455, &v1581);
                                        v446 = v458;
                                        if ( v458 >= 0 )
                                          v459 = v1581;
                                        v1562[1] = v459;
                                        if ( v458 < 0 )
                                          goto LABEL_585;
                                        v446 = RtlULongLongAdd(v455, v459, &v1664);
                                        if ( v446 < 0 )
                                          goto LABEL_585;
                                        v455 = v1664;
                                        if ( v1664 > v456 )
                                          goto LABEL_577;
                                        ++v1461;
                                      }
                                      while ( v1664 < v456 );
                                    }
                                    if ( v455 == v456 )
                                    {
                                      v454 = v1461;
                                      goto LABEL_574;
                                    }
LABEL_577:
                                    v446 = -1073741811;
LABEL_585:
                                    v87 = v446 | 0x10000000;
                                    goto LABEL_586;
                                  }
                                }
                              }
                            }
LABEL_584:
                            v446 = -1073741762;
                            goto LABEL_585;
                          }
LABEL_587:
                          if ( v1426 )
                          {
                            v461 = GetProcessHeap();
                            HeapFree(v461, 0, v1426);
                          }
                          v462 = v1642;
                          if ( v1642 )
                          {
                            v463 = (void *)*((_QWORD *)v1642 + 1);
                            if ( v463 )
                            {
                              v464 = GetProcessHeap();
                              HeapFree(v464, 0, v463);
                              v462[1] = 0LL;
                            }
                            v465 = (void *)v462[3];
                            if ( v465 )
                            {
                              v466 = GetProcessHeap();
                              HeapFree(v466, 0, v465);
                              v462[3] = 0LL;
                            }
                            v467 = (void *)v462[5];
                            if ( v467 )
                            {
                              v468 = GetProcessHeap();
                              HeapFree(v468, 0, v467);
                              v462[5] = 0LL;
                            }
                            v469 = GetProcessHeap();
                            HeapFree(v469, 0, v462);
                            v1642 = 0LL;
                          }
                          if ( v1440 )
                          {
                            v470 = GetProcessHeap();
                            HeapFree(v470, 0, v1440);
                          }
                          if ( v1436 )
                          {
                            v471 = GetProcessHeap();
                            HeapFree(v471, 0, (LPVOID)v1436);
                          }
                          if ( v1486 )
                          {
                            v472 = (void *)*((_QWORD *)v1486 + 1);
                            if ( v472 )
                            {
                              v473 = GetProcessHeap();
                              HeapFree(v473, 0, v472);
                              *((_QWORD *)v1486 + 1) = 0LL;
                            }
                            v474 = (void *)*((_QWORD *)v1486 + 3);
                            if ( v474 )
                            {
                              v475 = GetProcessHeap();
                              HeapFree(v475, 0, v474);
                              *((_QWORD *)v1486 + 3) = 0LL;
                            }
                            v476 = (void *)*((_QWORD *)v1486 + 5);
                            if ( v476 )
                            {
                              v477 = GetProcessHeap();
                              HeapFree(v477, 0, v476);
                              *((_QWORD *)v1486 + 5) = 0LL;
                            }
                            v478 = GetProcessHeap();
                            HeapFree(v478, 0, v1486);
                          }
                          if ( v1506 )
                          {
                            v479 = GetProcessHeap();
                            HeapFree(v479, 0, v1506);
                          }
                          if ( v87 < 0 )
                            goto LABEL_698;
                          if ( !LODWORD(v1742[0]) )
                            goto LABEL_704;
                          v480 = 4LL;
                          if ( v1742[1] )
                          {
                            v1665 = (int *)v1742[1];
                            v1503 = RtlULongLongAdd(v1742[1], 4LL, &v1665);
                            v87 = v1503;
                            if ( v1503 < 0 )
                            {
                              v481 = v1564;
                              v482 = v1666;
                            }
                            else
                            {
                              v482 = v1665;
                              v1564 = v481;
                              if ( !v481 )
                                v482 = 0LL;
                              v1665 = v482;
                              v1666 = v482;
                            }
                            if ( v1503 < 0 )
                              goto LABEL_698;
                            if ( v481 != (_DWORD)v480 )
                              goto LABEL_696;
                            v1597 = *v482;
                          }
                          else
                          {
                            v87 = -1073741811;
                            v1503 = -1073741811;
                          }
                          if ( v87 < 0 )
                            goto LABEL_698;
                          v87 = v1597;
                          if ( v1597 == -805306333 )
                            v87 = -2147024774;
                          v1503 = v87;
                          v1597 = v87;
                          if ( v87 != -2147024774 && v87 < 0 )
                            goto LABEL_698;
                          if ( LODWORD(v1742[0]) != 6 )
                            goto LABEL_704;
                          if ( v1742[1] )
                          {
                            v483 = (int *)v1742[1];
                            v484 = 0;
                            v1667 = (int *)v1742[1];
                            do
                            {
                              v1503 = RtlULongLongAdd(v483, v480, &v1667);
                              v87 = v1503;
                              if ( v1503 < 0 )
                                goto LABEL_639;
                              v1503 = RtlULongLongAdd(v1667, v485, &v1667);
                              v87 = v1503;
                              if ( v1503 < 0 )
                                goto LABEL_639;
                              v483 = v1667;
                              ++v484;
                            }
                            while ( !v484 );
                            v486 = *v1667;
                            v1503 = RtlULongLongAdd(v1667, v480, &v1667);
                            v87 = v1503;
                            if ( v1503 < 0 )
                            {
LABEL_639:
                              v486 = v1565;
                              v487 = v1668;
                            }
                            else
                            {
                              v487 = v1667;
                              v1565 = v486;
                              if ( !v486 )
                                v487 = 0LL;
                              v1667 = v487;
                              v1668 = v487;
                            }
                            if ( v87 < 0 )
                              goto LABEL_698;
                            if ( v486 != 8 )
                              goto LABEL_696;
                            v1669 = *(_QWORD *)v487;
                          }
                          else
                          {
                            v87 = -1073741811;
                            v1503 = -1073741811;
                          }
                          if ( v87 < 0 )
                            goto LABEL_698;
                          if ( v1742[1] )
                          {
                            v488 = (int *)v1742[1];
                            v489 = 0;
                            v1670 = (int *)v1742[1];
                            do
                            {
                              v1503 = RtlULongLongAdd(v488, v480, &v1670);
                              v87 = v1503;
                              if ( v1503 < 0 )
                                goto LABEL_654;
                              v1503 = RtlULongLongAdd(v1670, v490, &v1670);
                              v87 = v1503;
                              if ( v1503 < 0 )
                                goto LABEL_654;
                              v488 = v1670;
                              ++v489;
                            }
                            while ( v489 < 2 );
                            v491 = *v1670;
                            v1503 = RtlULongLongAdd(v1670, v480, &v1670);
                            v87 = v1503;
                            if ( v1503 < 0 )
                            {
LABEL_654:
                              v491 = v1566;
                              v492 = v1671;
                            }
                            else
                            {
                              v492 = v1670;
                              v1566 = v491;
                              if ( !v491 )
                                v492 = 0LL;
                              v1670 = v492;
                              v1671 = v492;
                            }
                            if ( v87 < 0 )
                              goto LABEL_698;
                            if ( v491 != (_DWORD)v480 )
                              goto LABEL_696;
                            v1567 = *v492;
                          }
                          else
                          {
                            v87 = -1073741811;
                            v1503 = -1073741811;
                          }
                          if ( v87 < 0 )
                            goto LABEL_698;
                          if ( !v1742[1] )
                          {
                            v87 = -1073741811;
                            goto LABEL_697;
                          }
                          v493 = v1742[1];
                          v494 = 0;
                          v1672 = v1742[1];
                          do
                          {
                            v1503 = RtlULongLongAdd(v493, v480, &v1672);
                            v87 = v1503;
                            if ( v1503 < 0 )
                              goto LABEL_669;
                            v1503 = RtlULongLongAdd(v1672, v495, &v1672);
                            v87 = v1503;
                            if ( v1503 < 0 )
                              goto LABEL_669;
                            v493 = v1672;
                            ++v494;
                          }
                          while ( v494 < 3 );
                          v1503 = RtlULongLongAdd(v1672, v480, &v1672);
                          v87 = v1503;
                          if ( v1503 < 0 )
                          {
LABEL_669:
                            v497 = v1673;
                          }
                          else
                          {
                            v497 = v1672;
                            v1568 = v496;
                            if ( !v496 )
                              v497 = 0LL;
                            v1672 = v497;
                            v1673 = v497;
                          }
                          if ( v87 < 0 )
                            goto LABEL_698;
                          v498 = (int *)v1742[1];
                          v1674 = (int *)v1742[1];
                          while ( 1 )
                          {
                            v1503 = RtlULongLongAdd(v498, 4LL, &v1674);
                            v87 = v1503;
                            if ( v1503 < 0 )
                              break;
                            v1503 = RtlULongLongAdd(v1674, v499, &v1674);
                            v87 = v1503;
                            v501 = 4;
                            if ( v1503 < 0 )
                              goto LABEL_680;
                            v498 = v1674;
                            if ( (unsigned int)(v500 + 1) >= 4 )
                            {
                              v1503 = RtlULongLongAdd(v1674, 4LL, &v1674);
                              v87 = v1503;
                              if ( v1503 >= 0 )
                              {
                                v503 = v1674;
                                v1569 = v502;
                                if ( !v502 )
                                  v503 = 0LL;
                                v1674 = v503;
                                v1675 = v503;
LABEL_681:
                                if ( v87 >= 0 )
                                {
                                  if ( v502 == v501 )
                                  {
                                    v1570 = *v503;
                                    goto LABEL_684;
                                  }
LABEL_696:
                                  v87 = -1073741789;
LABEL_697:
                                  v1503 = v87;
LABEL_698:
                                  v93 = v1411;
LABEL_699:
                                  v94 = v1394;
                                  goto LABEL_201;
                                }
LABEL_684:
                                if ( v87 < 0 )
                                  goto LABEL_698;
                                v504 = (unsigned int *)v1742[1];
                                v1676 = (unsigned int *)v1742[1];
                                do
                                {
                                  v505 = *v504;
                                  v1503 = RtlULongLongAdd(v504, 4LL, &v1676);
                                  v87 = v1503;
                                  if ( v1503 < 0 )
                                    goto LABEL_693;
                                  v1503 = RtlULongLongAdd(v1676, v505, &v1676);
                                  v87 = v1503;
                                  if ( v1503 < 0 )
                                    goto LABEL_693;
                                  v504 = v1676;
                                }
                                while ( (unsigned int)(v508 + 1) < 5 );
                                v1503 = RtlULongLongAdd(v1676, 4LL, &v1676);
                                v87 = v1503;
                                if ( v1503 < 0 )
                                {
LABEL_693:
                                  v509 = v1571;
                                  v510 = v1677;
                                  goto LABEL_694;
                                }
                                v510 = v1676;
                                v1571 = v509;
                                if ( !v509 )
                                  v510 = 0LL;
                                v1676 = v510;
                                v1677 = v510;
LABEL_694:
                                if ( v87 < 0 )
                                {
                                  v511 = v1583;
                                }
                                else
                                {
                                  if ( v509 != 4 )
                                    goto LABEL_696;
                                  v511 = *v510;
                                  v1583 = *v510;
                                }
                                if ( v87 < 0 )
                                  goto LABEL_698;
                                if ( v1632 == v1669 )
                                {
                                  v1577 = v1567;
                                  v1578 = v507;
                                  v1579 = v511;
                                  if ( v507 <= 4 && v506 <= 4 )
                                  {
                                    memcpy_0(v1467, v497, v506);
                                    if ( v1597 )
                                      v87 = v1597;
                                  }
                                  else
                                  {
                                    v87 = -2147024774;
                                  }
                                  goto LABEL_697;
                                }
LABEL_704:
                                v87 = -1073425151;
                                goto LABEL_697;
                              }
LABEL_680:
                              v502 = v1569;
                              v503 = v1675;
                              goto LABEL_681;
                            }
                          }
                          v501 = 4;
                          goto LABEL_680;
                        }
                        if ( Src )
                        {
                          *(_DWORD *)v351 = v339;
                          v352 = GetProcessHeap();
                          v353 = HeapAlloc(v352, 8u, v339);
                          if ( !v353 )
                          {
LABEL_482:
                            v336 = -1073741801;
                            v302 = 0;
                            goto LABEL_495;
                          }
                          v351[1] = v353;
                          memcpy_0(v353, Src, v339);
                        }
                        else
                        {
                          *(_DWORD *)v351 = 0;
                          v351[1] = 0LL;
                        }
                        if ( v1459 )
                        {
                          *((_DWORD *)v351 + 4) = v343;
                          v354 = GetProcessHeap();
                          v355 = HeapAlloc(v354, 8u, v343);
                          if ( !v355 )
                            goto LABEL_482;
                          v351[3] = v355;
                          memcpy_0(v355, v1459, v343);
                        }
                        else
                        {
                          *((_DWORD *)v351 + 4) = 0;
                          v351[3] = 0LL;
                        }
                        v356 = v1657;
                        if ( v1657 )
                        {
                          *((_DWORD *)v351 + 8) = v346;
                          v357 = v346;
                          v358 = GetProcessHeap();
                          v359 = HeapAlloc(v358, 8u, v346);
                          v302 = 0;
                          if ( !v359 )
                          {
                            v336 = -1073741801;
                            goto LABEL_495;
                          }
                          v351[5] = v359;
                          memcpy_0(v359, v356, v357);
                        }
                        else
                        {
                          v302 = 0;
                          *((_DWORD *)v351 + 8) = 0;
                          v351[5] = 0LL;
                        }
                        v1492 = (SIZE_T)v351;
                        v336 = 0;
                        v351 = 0LL;
LABEL_495:
                        if ( v351 )
                        {
                          v360 = (void *)v351[1];
                          if ( v360 )
                          {
                            v361 = GetProcessHeap();
                            HeapFree(v361, 0, v360);
                            v351[1] = 0LL;
                          }
                          v362 = (void *)v351[3];
                          if ( v362 )
                          {
                            v363 = GetProcessHeap();
                            HeapFree(v363, 0, v362);
                            v351[3] = 0LL;
                          }
                          v364 = (void *)v351[5];
                          if ( v364 )
                          {
                            v365 = GetProcessHeap();
                            HeapFree(v365, 0, v364);
                            v351[5] = 0LL;
                          }
                          v366 = GetProcessHeap();
                          HeapFree(v366, 0, v351);
                        }
                        goto LABEL_503;
                      }
                    }
                    v303 = v1553;
                    goto LABEL_375;
                  }
                  v182 = lpMem;
                  v1641 = lpMem;
                  if ( (_DWORD)Size )
                  {
                    do
                    {
                      v183 = RtlUIntAdd((unsigned int)v174, (unsigned int)*v182, &v1542);
                      v1503 = v183;
                      v87 = v183;
                      if ( v183 >= 0 )
                        v184 = v1542;
                      v1541 = v184;
                      if ( v183 < 0 )
                        goto LABEL_699;
                      v1503 = RtlULongLongAdd(v182, v184, &v1641);
                      v87 = v1503;
                      if ( v1503 < 0 )
                        goto LABEL_699;
                      v182 = v1641;
                    }
                    while ( v185 + 1 < (unsigned int)Size );
                  }
                  v1503 = RtlULongLongAdd(v182, v174, &v1749);
                  v87 = v1503;
                  if ( v1503 < 0 )
                    goto LABEL_699;
                  if ( v182 + 2 <= (_DWORD *)((char *)lpMem + HIDWORD(Size)) )
                  {
                    v186 = v1749;
                    *v182 = v181;
                    *v186 = v1539;
                    LODWORD(Size) = Size + 1;
                    goto LABEL_272;
                  }
LABEL_255:
                  v87 = -1073741789;
                  v1503 = -1073741789;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_201:
  Size = 0LL;
  v153 = lpMem;
  if ( lpMem )
  {
    v154 = GetProcessHeap();
    HeapFree(v154, 0, v153);
    lpMem = 0LL;
  }
  v1742[0] = 0LL;
  v155 = v1742[1];
  if ( v1742[1] )
  {
    v156 = GetProcessHeap();
    HeapFree(v156, 0, v155);
    v1742[1] = 0LL;
  }
  if ( v93 )
  {
    v157 = GetProcessHeap();
    HeapFree(v157, 0, v93);
  }
  if ( v94 )
  {
    v158 = GetProcessHeap();
    HeapFree(v158, 0, v94);
  }
  if ( v87 < 0 )
    goto LABEL_100;
  v159 = 0LL;
  if ( !v1579 )
    goto LABEL_1714;
  v1678 = 0LL;
  g_WarbirdNotificationInformation = v1579;
  ModuleFileNameW = GetModuleFileNameW(&_ImageBase, &Filename, 0x104u);
  if ( ModuleFileNameW && (ModuleFileNameW != 260 || GetLastError() != 122) )
  {
    v1513 = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1806461F8[0])(0LL, 0LL, 1027LL);
    if ( !v1513 )
    {
      GetLastError();
      goto LABEL_1316;
    }
    v512 = ((__int64 (*)(void))off_180646198[0])();
    v513 = g_WarbirdNotificationInformation;
    g_WarbirdPaintInitTime = v512;
    v1472 = g_WarbirdNotificationInformation;
    memset_0(&v1793, 0, 0x70uLL);
    v1572 = 1;
    v1512 = 0LL;
    v1813 = 0LL;
    v1830 = 0LL;
    v1828 = 0LL;
    v1831 = 0;
    v1829 = 0LL;
    v1493 = 0LL;
    v1624 = 0LL;
    while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
      ;
    v514 = g_WarbirdSecureFunctionsRefCount;
    if ( !g_WarbirdSecureFunctionsRefCount )
    {
      v1462 = 0;
      v1380 = 0;
      v1680 = 0LL;
      v1681 = 0LL;
      v515 = (char *)MemoryAlloc(0x338uLL);
      v1395 = (unsigned __int16 *)v515;
      if ( !v515 )
        goto LABEL_749;
      v516 = -1;
      v517 = v515 + 7;
      v518 = (unsigned __int8 *)&unk_180569112;
      v519 = 0;
      v520 = 0;
      v521 = 103LL;
      do
      {
        v522 = *(v518 - 1) | (*(v518 - 2) << 8);
        v523 = v518[2] << 8;
        v524 = *v518;
        v518 += 8;
        v525 = *(v518 - 7) | ((v524 | (v522 << 8)) << 8);
        v526 = v525 ^ v520;
        v527 = *(v518 - 3) | ((*(v518 - 4) | ((*(v518 - 5) | v523) << 8)) << 8);
        v528 = v526 ^ (unsigned int)v159 ^ v527 ^ 0xAC987321;
        v529 = (__ROL4__(v528, 10) + 4991 * __ROL4__(v528 + 1419157410, 5)) ^ v526;
        v530 = (43881 * __ROR4__(v529 + 133239679, 9) - __ROL4__(v529, 2)) ^ v528;
        v531 = (24670 * v530 - (v530 >> 13) - 123127970) ^ v529;
        v532 = (2033 * __ROL4__(v531 ^ 0xAB69, 6) - __ROL4__(v531, 2)) ^ v530;
        v533 = (133239679 - (v532 ^ 0xAB69605E)) ^ v531;
        v534 = (43881 * (v533 ^ 0x137F)) ^ __ROR4__(v533, 6) ^ v532;
        v535 = (__ROL4__(v534, 2) + 24670 * __ROR4__(v534 + 133239679, 15)) ^ v533;
        v536 = (2033 * __ROR4__(v535 + 1419157410, 14) - __ROL4__(v535, 8)) ^ v534;
        v537 = __ROR4__(v536, 10) ^ (4991 * __ROR4__(v536 ^ 0xAB69605E, 12)) ^ v535;
        v538 = v536 ^ (v537 >> 10) ^ (43881 * (v537 ^ 0x7F1));
        v539 = (2033 * (__ROR4__(~v538, 5) + 24670)) ^ v537;
        v540 = v538 ^ (v539 - 2033) ^ 0xAB69605E;
        v541 = ((v540 >> 2) + 4991 * __ROL4__(v538 ^ (v539 - 2033) ^ 0xAB6967AF, 2)) ^ v539;
        v542 = (__ROL4__(v541, 7) + 43881 * __ROR4__(v541 - 133239679, 6)) ^ v540;
        v543 = (24670 * (v542 ^ 0x137F) + __ROR4__(v542, 9)) ^ v541;
        v544 = (__ROL4__(v543, 7) + 2033 * __ROL4__(v543 ^ 0xAB69, 5)) ^ v542;
        v545 = v544 ^ v543 ^ 0xAC987321;
        v546 = (4991 * __ROR4__(v545, 3) - 219010071) ^ v544;
        v547 = (24670 * __ROR4__(v546 - 133239679, 1) - __ROR4__(v546, 6)) ^ v545;
        v548 = (__ROL4__(v547, 14) + 2033 * __ROL4__(v547 - 1419157410, 3)) ^ v546;
        v549 = (4991 * __ROL4__(v548 - 1419157410, 15) - __ROR4__(v548, 14)) ^ v547;
        v550 = (v549 >> 3) ^ (43881 * (v549 ^ 0x605E)) ^ v548;
        v551 = 24670 * __ROL4__(v550 ^ 0x7F1137F, 4);
        v552 = v550;
        v553 = v516 ^ v550;
        v516 = v527;
        v554 = v519 ^ __ROL4__(v552, 2) ^ v551;
        v519 = v525;
        v555 = v554 ^ v549;
        *(v517 - 4) = v555;
        *v517 = v553;
        v517 += 8;
        v556 = __ROR4__(v555, 8);
        *(v517 - 13) = v556;
        v557 = __ROR4__(v553, 8);
        *(v517 - 9) = v557;
        v558 = __ROR4__(v556, 8);
        *(v517 - 14) = v558;
        v559 = __ROR4__(v557, 8);
        *(v517 - 10) = v559;
        v560 = __ROR4__(v558, 8);
        v561 = __ROR4__(v559, 8);
        *(v517 - 15) = v560;
        *(v517 - 11) = v561;
        LODWORD(v159) = __ROR4__(v561, 8);
        v520 = __ROR4__(v560, 8);
        --v521;
      }
      while ( v521 );
      v513 = v1472;
      LODWORD(v159) = 0;
      v87 = v1503;
      v562 = 0LL;
      v563 = v515;
      v564 = 0;
      v565 = 0;
      do
        v564 ^= *((_BYTE *)v1395 + v562++);
      while ( v562 < 0x338 );
      if ( v564 == 64LL )
      {
        v1680 = v1395;
        v566 = 0;
        v563 = 0LL;
        v1681 = 824LL;
      }
      else
      {
        v566 = -1073425151;
      }
      if ( v563 )
        MemoryFree(v563);
      if ( v566 < 0 )
        goto LABEL_749;
      v567 = v1680;
      HIBYTE(v1680[v1681 / 2 - 1]) = 0;
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      while ( *(_BYTE *)v567 )
      {
        v568 = v567;
        v569 = -1LL;
        do
          ++v569;
        while ( v567[v569] );
        v570 = &v567[v569];
        v571 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1380;
        if ( !GetModuleHandleExW(0, v568, (HMODULE *)v571) )
        {
          LODWORD(v159) = 0;
LABEL_749:
          v565 = -1073741702;
          break;
        }
        v565 = 0;
        if ( **(_WORD **)v571 == 23117
          && (v572 = *(int *)(*(_QWORD *)v571 + 60LL), (unsigned int)v572 < 0x10000000)
          && (v573 = *(_QWORD *)v571 + v572, v573 >= *(_QWORD *)v571)
          && *(_DWORD *)v573 == 17744 )
        {
          if ( ((*(_WORD *)(v573 + 24) - 267) & 0xFEFF) != 0 )
          {
            v565 = -1073741811;
          }
          else
          {
            *(_QWORD *)(v571 + 12) = *(_QWORD *)(v573 + 136);
            *((_DWORD *)v571 + 2) = *(_DWORD *)(v573 + 80);
          }
        }
        else
        {
          v565 = -1073741701;
        }
        v574 = *(_DWORD *)(v570 + 1);
        v575 = 0;
        v567 = v570 + 3;
        v1451 = v574;
        for ( ii = 0; v575 < v1451; ii = ++v575 )
        {
          v576 = (const CHAR *)v567;
          v577 = -1LL;
          do
            ++v577;
          while ( *((_BYTE *)v567 + v577) );
          v567 = (LPCWSTR)((char *)v567 + v577 + 1);
          if ( v565 >= 0 )
          {
            v578 = (void **)GetProcAddress(*(HMODULE *)v571, v576);
            if ( !v578 )
            {
              LODWORD(v159) = 0;
              goto LABEL_750;
            }
            (&WARBIRD::g_FuncAddress)[v1462] = v578;
            v575 = ii;
          }
          ++v1462;
        }
        ++v1380;
        LODWORD(v159) = 0;
      }
LABEL_750:
      v579 = (WCHAR *)v1680;
      if ( v1680 )
      {
        v580 = GetProcessHeap();
        HeapFree(v580, 0, v579);
      }
      if ( v565 < 0 )
      {
        v581 = (HMODULE *)&WARBIRD::g_arModuleInfo;
        v582 = 4LL;
        do
        {
          if ( *v581 )
            FreeLibrary(*v581);
          v581 += 3;
          --v582;
        }
        while ( v582 );
        memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
        memcpy_0(&WARBIRD::g_FuncAddress, off_180509E10, 0x170uLL);
LABEL_761:
        v1463 = 0;
        _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
        v1682 = 0LL;
        v1752 = 0LL;
        v1452 = 0;
        v1396 = 0LL;
        v1412 = 0LL;
        v1427 = 0LL;
        while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
          ;
        v583 = g_WarbirdSecureFunctionsRefCount;
        if ( !g_WarbirdSecureFunctionsRefCount )
        {
          v1380 = 0;
          v1478 = 0;
          v1683 = 0LL;
          v1684 = 0LL;
          v584 = (char *)MemoryAlloc(0x338uLL);
          v1441 = (const WCHAR *)v584;
          if ( !v584 )
            goto LABEL_797;
          v585 = -1;
          v586 = v584 + 7;
          v587 = 0;
          v588 = (unsigned __int8 *)&unk_180569112;
          v589 = 0;
          v590 = 103LL;
          do
          {
            v591 = *(v588 - 1) | (*(v588 - 2) << 8);
            v592 = v588[2] << 8;
            v593 = *v588;
            v588 += 8;
            v594 = *(v588 - 7) | ((v593 | (v591 << 8)) << 8);
            v595 = v594 ^ v589;
            v596 = *(v588 - 3) | ((*(v588 - 4) | ((*(v588 - 5) | v592) << 8)) << 8);
            v597 = v596 ^ (unsigned int)v159 ^ v595 ^ 0xAC987321;
            v598 = (__ROL4__(v597, 10) + 4991 * __ROL4__(v597 + 1419157410, 5)) ^ v595;
            v599 = (43881 * __ROR4__(v598 + 133239679, 9) - __ROL4__(v598, 2)) ^ v597;
            v600 = (24670 * v599 - (v599 >> 13) - 123127970) ^ v598;
            v601 = (2033 * __ROL4__(v600 ^ 0xAB69, 6) - __ROL4__(v600, 2)) ^ v599;
            v602 = (133239679 - (v601 ^ 0xAB69605E)) ^ v600;
            v603 = (43881 * (v602 ^ 0x137F)) ^ __ROR4__(v602, 6) ^ v601;
            v604 = (__ROL4__(v603, 2) + 24670 * __ROR4__(v603 + 133239679, 15)) ^ v602;
            v605 = (2033 * __ROR4__(v604 + 1419157410, 14) - __ROL4__(v604, 8)) ^ v603;
            v606 = __ROR4__(v605, 10) ^ (4991 * __ROR4__(v605 ^ 0xAB69605E, 12)) ^ v604;
            v607 = v605 ^ (v606 >> 10) ^ (43881 * (v606 ^ 0x7F1));
            v608 = (2033 * (__ROR4__(~v607, 5) + 24670)) ^ v606;
            v609 = v607 ^ (v608 - 2033) ^ 0xAB69605E;
            v610 = ((v609 >> 2) + 4991 * __ROL4__(v607 ^ (v608 - 2033) ^ 0xAB6967AF, 2)) ^ v608;
            v611 = (__ROL4__(v610, 7) + 43881 * __ROR4__(v610 - 133239679, 6)) ^ v609;
            v612 = (24670 * (v611 ^ 0x137F) + __ROR4__(v611, 9)) ^ v610;
            v613 = (__ROL4__(v612, 7) + 2033 * __ROL4__(v612 ^ 0xAB69, 5)) ^ v611;
            v614 = v613 ^ v612 ^ 0xAC987321;
            v615 = (4991 * __ROR4__(v614, 3) - 219010071) ^ v613;
            v616 = (24670 * __ROR4__(v615 - 133239679, 1) - __ROR4__(v615, 6)) ^ v614;
            v617 = (__ROL4__(v616, 14) + 2033 * __ROL4__(v616 - 1419157410, 3)) ^ v615;
            v618 = (4991 * __ROL4__(v617 - 1419157410, 15) - __ROR4__(v617, 14)) ^ v616;
            v619 = (v618 >> 3) ^ (43881 * (v618 ^ 0x605E)) ^ v617;
            v620 = 24670 * __ROL4__(v619 ^ 0x7F1137F, 4);
            v621 = v619;
            v622 = v585 ^ v619;
            v585 = v596;
            v623 = v587 ^ __ROL4__(v621, 2) ^ v620;
            v587 = v594;
            v624 = v623 ^ v618;
            *(v586 - 4) = v624;
            *v586 = v622;
            v586 += 8;
            v625 = __ROR4__(v624, 8);
            *(v586 - 13) = v625;
            v626 = __ROR4__(v622, 8);
            *(v586 - 9) = v626;
            v627 = __ROR4__(v625, 8);
            *(v586 - 14) = v627;
            v628 = __ROR4__(v626, 8);
            *(v586 - 10) = v628;
            v629 = __ROR4__(v627, 8);
            v630 = __ROR4__(v628, 8);
            *(v586 - 15) = v629;
            *(v586 - 11) = v630;
            LODWORD(v159) = __ROR4__(v630, 8);
            v589 = __ROR4__(v629, 8);
            --v590;
          }
          while ( v590 );
          v631 = 0;
          v513 = v1472;
          v632 = 0LL;
          v87 = v1503;
          v633 = 0;
          v634 = (WCHAR *)v1441;
          do
            v631 ^= *((_BYTE *)v1441 + v632++);
          while ( v632 < 0x338 );
          if ( v631 == 64LL )
          {
            v1683 = v1441;
            v635 = 0;
            v634 = 0LL;
            v1684 = 824LL;
          }
          else
          {
            v635 = -1073425151;
          }
          if ( v634 )
            MemoryFree(v634);
          if ( v635 >= 0 )
          {
            v636 = v1683;
            HIBYTE(v1683[v1684 / 2 - 1]) = 0;
            memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
            while ( *(_BYTE *)v636 )
            {
              v637 = v636;
              v638 = -1LL;
              do
                ++v638;
              while ( v636[v638] );
              v639 = &v636[v638];
              v640 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1478;
              if ( !GetModuleHandleExW(0, v637, (HMODULE *)v640) )
                goto LABEL_797;
              v633 = 0;
              if ( **(_WORD **)v640 == 23117
                && (v641 = *(int *)(*(_QWORD *)v640 + 60LL), (unsigned int)v641 < 0x10000000)
                && (v642 = *(_QWORD *)v640 + v641, v642 >= *(_QWORD *)v640)
                && *(_DWORD *)v642 == 17744 )
              {
                if ( ((*(_WORD *)(v642 + 24) - 267) & 0xFEFF) != 0 )
                {
                  v633 = -1073741811;
                }
                else
                {
                  *(_QWORD *)(v640 + 12) = *(_QWORD *)(v642 + 136);
                  *((_DWORD *)v640 + 2) = *(_DWORD *)(v642 + 80);
                }
              }
              else
              {
                v633 = -1073741701;
              }
              v643 = *(_DWORD *)(v639 + 1);
              v644 = 0;
              v636 = v639 + 3;
              Srcb = v643;
              for ( jj = 0; v644 < Srcb; jj = v644 )
              {
                v645 = (const CHAR *)v636;
                v646 = -1LL;
                do
                  ++v646;
                while ( *((_BYTE *)v636 + v646) );
                v636 = (LPCWSTR)((char *)v636 + v646 + 1);
                if ( v633 >= 0 )
                {
                  v647 = (void **)GetProcAddress(*(HMODULE *)v640, v645);
                  if ( !v647 )
                    goto LABEL_798;
                  (&WARBIRD::g_FuncAddress)[v1380] = v647;
                  v644 = jj;
                }
                ++v1380;
                ++v644;
              }
              ++v1478;
            }
          }
          else
          {
LABEL_797:
            v633 = -1073741702;
          }
LABEL_798:
          v648 = (WCHAR *)v1683;
          if ( v1683 )
          {
            v649 = GetProcessHeap();
            HeapFree(v649, 0, v648);
          }
          if ( v633 < 0 )
          {
            v650 = (HMODULE *)&WARBIRD::g_arModuleInfo;
            v651 = 4LL;
            do
            {
              if ( *v650 )
                FreeLibrary(*v650);
              v650 += 3;
              --v651;
            }
            while ( v651 );
            memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
            memcpy_0(&WARBIRD::g_FuncAddress, off_180509E10, 0x170uLL);
LABEL_809:
            _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
            v652 = v513 & 0xF;
            Srcc = v652;
            v1868[0] = (v513 >> 4) & 0xF;
            v1868[1] = (v513 >> 8) & 0xF;
            v1813 = 0LL;
            v1868[2] = (v513 >> 12) & 0xF;
            v653 = 0LL;
            v1474 = -1;
            v1442 = (WARBIRD_DELAY_LOAD *)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1806461F8[0])(
                                            0LL,
                                            0LL,
                                            1027LL);
            if ( !v1442 )
            {
              v654 = GetLastError();
              v655 = v654;
              if ( v654 > 0 )
                v655 = (unsigned __int16)v654 | 0x80070000;
              if ( v655 >= 0 )
                v655 = -2147467259;
LABEL_932:
              v757 = 1;
              while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                ;
              v758 = g_WarbirdSecureFunctionsRefCount;
              if ( g_WarbirdSecureFunctionsRefCount > 0 )
              {
                --g_WarbirdSecureFunctionsRefCount;
                if ( v758 == 1 )
                {
                  v759 = 4LL;
                  v760 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                  do
                  {
                    if ( *v760 )
                      FreeLibrary(*v760);
                    v760 += 3;
                    --v759;
                  }
                  while ( v759 );
                  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                  memcpy_0(&WARBIRD::g_FuncAddress, off_180509E10, 0x170uLL);
                  LODWORD(v653) = 0;
                  v757 = 1;
                }
              }
              _InterlockedExchange(&g_WarbirdSecureFunctionsLock, v653);
              SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1682);
              if ( v655 < 0 )
              {
                v159 = 0LL;
                goto LABEL_1232;
              }
              v761 = v1813;
              v1691 = v1813;
              memset_0(v1766, 0, 0x68uLL);
              v762 = (CToastCenterExperienceManager *)v1513;
              v763 = ((__int64 (__fastcall *)(LPVOID, __int64))off_180646150[0])(v1513, 7LL);
              if ( !v763
                || !((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_180646168[0])(v763, 104LL, v1766)
                || v1769 != 32
                || !v1770
                || v1767 <= 0
                || v1768 <= 0 )
              {
                v757 = 0;
              }
              v1572 = v757;
              if ( v757 || v652 == 1 )
              {
                ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180646250)(&v1802, v761, HIDWORD(v1691));
                ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180646250)(&v1803, v761, HIDWORD(v1691));
                if ( v652 == 1 )
                  v1624 = ((__int64 (__fastcall *)(_QWORD))off_180646128[0])(v1794 == 0 ? 0xB26720 : 0);
              }
              v764 = 0;
              v1469 = off_180646180(v762, (struct CSingleViewShellExperience *)1);
              v765 = 2064;
              if ( v1793 )
                v765 = 133138;
              v1464 = v765;
              if ( v1572 )
              {
                v766 = v1795;
                v1453 = v1794;
                v1397 = v1798;
                memset_0(v1771, 0, 0x68uLL);
                memset_0(v1775, 0, 0x68uLL);
                v1413 = 0LL;
                v1383 = 0;
                v1391 = 0;
                v1834 = 0LL;
                v1835 = 0;
                v1832 = 0LL;
                v1833 = 0LL;
                v1814 = 0LL;
                if ( !v766 )
                {
LABEL_1130:
                  v159 = 0LL;
                  goto LABEL_1151;
                }
                v767 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_180646150[0])(v762, 7LL);
                if ( v767 )
                {
                  if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_180646168[0])(v767, 104LL, v1771) )
                  {
                    v1413 = v1774;
                    v1383 = v1772;
                    v1391 = v1773;
                  }
                  v768 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_180646110[0])(v762);
                  v769 = (WARBIRD_DELAY_LOAD *)v768;
                  if ( v768 )
                  {
                    DWORD1(v1832) = DWORD2(v1802) - v1802;
                    v770 = 0;
                    DWORD2(v1832) = DWORD1(v1802) - HIDWORD(v1802);
                    v1692 = 0LL;
                    v1833 = 0LL;
                    v1834 = 0LL;
                    v1835 = 0;
                    LODWORD(v1832) = 40;
                    HIDWORD(v1832) = 2097153;
                    v1428 = (unsigned __int16 *)((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180646118[0])(
                                                  v768,
                                                  &v1832,
                                                  0LL,
                                                  &v1692,
                                                  0LL,
                                                  0);
                    if ( v1428 )
                    {
                      v806 = ((unsigned int (__fastcall *)(unsigned __int16 *, __int64, _BYTE *))off_180646168[0])(
                               v1428,
                               104LL,
                               v1775) == 0;
                      v807 = 0LL;
                      if ( !v806 )
                        v807 = v1776;
                      DWORD2(v1814) = DWORD2(v1802) - v1802;
                      HIDWORD(v1814) = HIDWORD(v1802) - DWORD1(v1802);
                      v1443 = v807;
                      off_180646178(v769, (int)v1428);
                      off_180646180(v769, (struct CSingleViewShellExperience *)1);
                      v808 = ((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, unsigned __int16 *))off_180646178)(
                               v769,
                               v1397);
                      v809 = off_1806461E8[0];
                      v1401 = (unsigned __int16 *)v808;
                      v810 = ((__int64 (__fastcall *)(_QWORD))off_180646170[0])(0LL);
                      ((void (__fastcall *)(WARBIRD_DELAY_LOAD *, __int128 *, __int64))v809)(v769, &v1814, v810);
                      ((void (__fastcall *)(WARBIRD_DELAY_LOAD *, void *, __int64, __int128 *, int, _QWORD))off_1806461D8)(
                        v769,
                        v766,
                        0xFFFFFFFFLL,
                        &v1814,
                        v1464,
                        0LL);
                      if ( Srcc == 1 )
                      {
                        if ( v1453 )
                          v1455 = ((__int64 (__fastcall *)(__int64))off_180646218[0])(8LL);
                        else
                          v1455 = 0xFFFFFF;
                      }
                      else
                      {
                        v1455 = -5723992;
                      }
                      v811 = 0;
                      v812 = v1383;
                      v813 = -(int)v1802;
                      v814 = 0;
                      if ( (int)v1802 >= 0 )
                      {
                        v811 = v1802;
                        v813 = 0;
                      }
                      v815 = -DWORD1(v1802);
                      if ( (SDWORD1(v1802) & 0x80000000) == 0 )
                      {
                        v815 = 0;
                        v814 = DWORD1(v1802);
                      }
                      v816 = DWORD2(v1814) - v813;
                      if ( DWORD2(v1814) - v813 >= v1383 - v811 )
                        v816 = v1383 - v811;
                      v817 = HIDWORD(v1814) - v815;
                      if ( HIDWORD(v1814) - v815 >= v1391 - v814 )
                        v817 = v1391 - v814;
                      if ( v816 > 0 && v817 > 0 )
                      {
                        v818 = (unsigned __int8 *)&v1443[4 * v813 + 4 * (__int64)(v815 * DWORD2(v1814))];
                        v819 = v814 * v1383;
                        v1444 = v818;
                        v1384 = 0;
                        v820 = &v1413[2 * v811 + 2 * (__int64)v819];
                        v1436 = 4LL * SDWORD2(v1814);
                        v1488 = 2 * v812;
                        v1414 = v820;
                        do
                        {
                          v1392 = 0;
                          v821 = v818 + 2;
                          v822 = 0;
                          v823 = (char *)v820 - (char *)v818;
                          do
                          {
                            if ( (unsigned __int8)((*v821 + *(v821 - 2) + 2 * (unsigned int)*(v821 - 1)) >> 2) != 0xFF )
                            {
                              v824 = (unsigned __int8)~((*v821 + *(v821 - 2) + 2 * (unsigned int)*(v821 - 1)) >> 2);
                              v821[v823] -= ~((*v821 + *(v821 - 2) + 2 * (unsigned int)*(v821 - 1)) >> 2)
                                          * (v1455 - v821[v823]);
                              v825 = v821[v823 - 1];
                              v826 = (unsigned __int64)(2155905153LL * v824 * (BYTE1(v1455) - v825)) >> 32;
                              v821[v823 - 1] = v825 + (v826 >> 7 < 0) + (v826 >> 7);
                              v827 = v821[v823 - 2];
                              v828 = (unsigned __int64)(2155905153LL * v824 * (BYTE2(v1455) - v827)) >> 32;
                              v821[v823 - 2] = v827 + (v828 >> 7 < 0) + (v828 >> 7);
                              v822 = v1392;
                              v821[v823 + 1] += v824 * (255 - v821[v823 + 1]) / 255;
                            }
                            ++v822;
                            v821 += 4;
                            v1392 = v822;
                          }
                          while ( v822 < v816 );
                          v818 = &v1444[v1436];
                          v820 = &v1414[v1488];
                          v1444 += v1436;
                          v1414 = (unsigned __int16 *)((char *)v1414 + v1488 * 2);
                          ++v1384;
                        }
                        while ( v1384 < v817 );
                        v87 = v1503;
                        v770 = 0;
                      }
                      ((void (__fastcall *)(unsigned __int16 *))off_180646138)(v1428);
                      v159 = 0LL;
                      if ( v1401 )
                        off_180646178(v769, (int)v1401);
                    }
                    else
                    {
                      v771 = GetLastError();
                      v159 = 0LL;
                      v770 = v771;
                      if ( v771 > 0 )
                        v770 = (unsigned __int16)v771 | 0x80070000;
                      if ( v770 >= 0 )
                        v770 = -2147467259;
                    }
                    ((void (__fastcall *)(WARBIRD_DELAY_LOAD *))off_180646130[0])(v769);
                    if ( v770 < 0 )
                      goto LABEL_1151;
                    v829 = v1796;
                    v1456 = v1794;
                    v1402 = v1799;
                    memset_0(v1777, 0, 0x68uLL);
                    memset_0(v1781, 0, 0x68uLL);
                    v1415 = 0LL;
                    v1385 = 0;
                    v1393 = 0;
                    v1838 = 0LL;
                    v1839 = 0;
                    v1836 = 0LL;
                    v1837 = 0LL;
                    v1815 = 0LL;
                    if ( !v829 )
                      goto LABEL_1130;
                    v830 = v1513;
                    v831 = ((__int64 (__fastcall *)(LPVOID, __int64))off_180646150[0])(v1513, 7LL);
                    if ( v831 )
                    {
                      if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_180646168[0])(
                             v831,
                             104LL,
                             v1777) )
                      {
                        v1415 = v1780;
                        v1385 = v1778;
                        v1393 = v1779;
                      }
                      v832 = ((__int64 (__fastcall *)(LPVOID))off_180646110[0])(v830);
                      v833 = (WARBIRD_DELAY_LOAD *)v832;
                      if ( v832 )
                      {
                        DWORD1(v1836) = DWORD2(v1803) - v1803;
                        v834 = 0;
                        DWORD2(v1836) = DWORD1(v1803) - HIDWORD(v1803);
                        v1693 = 0LL;
                        v1837 = 0LL;
                        v1838 = 0LL;
                        v1839 = 0;
                        LODWORD(v1836) = 40;
                        HIDWORD(v1836) = 2097153;
                        v1445 = (LPVOID)((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180646118[0])(
                                          v832,
                                          &v1836,
                                          0LL,
                                          &v1693,
                                          0LL,
                                          0);
                        if ( !v1445 )
                        {
                          v835 = GetLastError();
                          v159 = 0LL;
                          v834 = v835;
                          if ( v835 > 0 )
                            v834 = (unsigned __int16)v835 | 0x80070000;
                          if ( v834 >= 0 )
                            v834 = -2147467259;
                          goto LABEL_1123;
                        }
                        v806 = ((unsigned int (__fastcall *)(LPVOID, __int64, _BYTE *))off_180646168[0])(
                                 v1445,
                                 104LL,
                                 v1781) == 0;
                        v836 = 0LL;
                        if ( !v806 )
                          v836 = v1782;
                        DWORD2(v1815) = DWORD2(v1803) - v1803;
                        HIDWORD(v1815) = HIDWORD(v1803) - DWORD1(v1803);
                        v1436 = v836;
                        off_180646178(v833, (int)v1445);
                        off_180646180(v833, (struct CSingleViewShellExperience *)1);
                        v837 = ((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, unsigned __int16 *))off_180646178)(
                                 v833,
                                 v1402);
                        v838 = off_1806461E8[0];
                        v1403 = (unsigned __int16 *)v837;
                        v839 = ((__int64 (__fastcall *)(_QWORD))off_180646170[0])(0LL);
                        ((void (__fastcall *)(WARBIRD_DELAY_LOAD *, __int128 *, __int64))v838)(v833, &v1815, v839);
                        ((void (__fastcall *)(WARBIRD_DELAY_LOAD *, void *, __int64, __int128 *, int, _QWORD))off_1806461D8)(
                          v833,
                          v829,
                          0xFFFFFFFFLL,
                          &v1815,
                          v1464,
                          0LL);
                        if ( Srcc == 1 )
                        {
                          if ( !v1456 )
                          {
                            Srcd = 0xFFFFFF;
LABEL_1104:
                            v841 = 0;
                            v842 = -(int)v1803;
                            v843 = 0;
                            if ( (int)v1803 >= 0 )
                            {
                              v841 = v1803;
                              v842 = 0;
                            }
                            v844 = -DWORD1(v1803);
                            if ( (SDWORD1(v1803) & 0x80000000) == 0 )
                            {
                              v844 = 0;
                              v843 = DWORD1(v1803);
                            }
                            v845 = DWORD2(v1815) - v842;
                            if ( DWORD2(v1815) - v842 >= v1385 - v841 )
                              v845 = v1385 - v841;
                            v846 = HIDWORD(v1815) - v844;
                            if ( HIDWORD(v1815) - v844 >= v1393 - v843 )
                              v846 = v1393 - v843;
                            if ( v845 > 0 && v846 > 0 )
                            {
                              v847 = v1474;
                              v1466 = 0;
                              v848 = v1436 + 4 * (v842 + (__int64)(DWORD2(v1815) * v844));
                              v1436 = v848;
                              v849 = &v1415[2 * v841 + 2 * (__int64)(v1385 * v843)];
                              v1489 = 4LL * SDWORD2(v1815);
                              v1507 = 2LL * v1385;
                              v1416 = v849;
                              do
                              {
                                v1475 = 0;
                                v850 = (unsigned __int8 *)(v848 + 2);
                                v851 = 0;
                                v852 = (char *)v849 - v848;
                                do
                                {
                                  if ( (unsigned __int8)((*v850 + *(v850 - 2) + 2 * (unsigned int)*(v850 - 1)) >> 2) != 0xFF )
                                  {
                                    v853 = (unsigned __int8)~((*v850 + *(v850 - 2) + 2 * (unsigned int)*(v850 - 1)) >> 2);
                                    v850[(_QWORD)v852] -= ~((*v850 + *(v850 - 2) + 2 * (unsigned int)*(v850 - 1)) >> 2)
                                                        * (v847 - v850[(_QWORD)v852]);
                                    v854 = v850[(_QWORD)v852 - 1];
                                    v855 = (unsigned __int64)(2155905153LL * v853 * (BYTE1(Srcd) - v854)) >> 32;
                                    v850[(_QWORD)v852 - 1] = v854 + (v855 >> 7 < 0) + (v855 >> 7);
                                    v856 = v850[(_QWORD)v852 - 2];
                                    v857 = (unsigned __int64)(2155905153LL * v853 * (BYTE2(Srcd) - v856)) >> 32;
                                    v850[(_QWORD)v852 - 2] = v856 + (v857 >> 7 < 0) + (v857 >> 7);
                                    v858 = v850[(_QWORD)v852 + 1];
                                    v859 = v853 * (255 - v858);
                                    v851 = v1475;
                                    v850[(_QWORD)v852 + 1] = v858 + v859 / 255;
                                  }
                                  ++v851;
                                  v850 += 4;
                                  v1475 = v851;
                                }
                                while ( v851 < v845 );
                                v848 = v1489 + v1436;
                                v849 = &v1416[v1507];
                                v1436 += v1489;
                                v1416 = (unsigned __int16 *)((char *)v1416 + v1507 * 2);
                                ++v1466;
                              }
                              while ( v1466 < v846 );
                              v87 = v1503;
                              v834 = 0;
                            }
                            ((void (__fastcall *)(LPVOID))off_180646138)(v1445);
                            v159 = 0LL;
                            if ( v1403 )
                              off_180646178(v833, (int)v1403);
LABEL_1123:
                            ((void (__fastcall *)(WARBIRD_DELAY_LOAD *))off_180646130[0])(v833);
                            if ( v834 >= 0 )
                            {
                              v860 = (CToastCenterExperienceManager *)v1513;
                              goto LABEL_1230;
                            }
LABEL_1151:
                            if ( v1624 )
                              ((void (__fastcall *)(__int64))off_180646138)(v1624);
LABEL_1232:
                            if ( v1795 )
                            {
                              v936 = -1LL;
                              do
                                ++v936;
                              while ( *((_WORD *)v1795 + v936) );
                              memset(v1795, 0, 2 * v936 + 2);
                              MemoryFree(v1795);
                              v1795 = 0LL;
                            }
                            if ( v1796 )
                            {
                              v937 = -1LL;
                              do
                                ++v937;
                              while ( *((_WORD *)v1796 + v937) );
                              memset(v1796, 0, 2 * v937 + 2);
                              MemoryFree(v1796);
                              v1796 = 0LL;
                            }
                            if ( v1797 )
                            {
                              v938 = -1LL;
                              do
                                ++v938;
                              while ( *((_WORD *)v1797 + v938) );
                              memset(v1797, 0, 2 * v938 + 2);
                              MemoryFree(v1797);
                              v1797 = 0LL;
                            }
                            if ( v1798 )
                            {
                              ((void (*)(void))off_180646138)();
                              v1798 = 0LL;
                            }
                            if ( v1799 )
                            {
                              ((void (*)(void))off_180646138)();
                              v1799 = 0LL;
                            }
                            if ( v1800 )
                            {
                              ((void (*)(void))off_180646138)();
                              v1800 = 0LL;
                            }
                            while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                              ;
                            v939 = g_WarbirdSecureFunctionsRefCount;
                            if ( g_WarbirdSecureFunctionsRefCount > 0 )
                            {
                              --g_WarbirdSecureFunctionsRefCount;
                              if ( v939 == 1 )
                              {
                                v940 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                                v941 = 4LL;
                                do
                                {
                                  if ( *v940 )
                                    FreeLibrary(*v940);
                                  v940 += 3;
                                  --v941;
                                }
                                while ( v941 );
                                memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                                memcpy_0(&WARBIRD::g_FuncAddress, off_180509E10, 0x170uLL);
                              }
                            }
                            _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                            v1406 = g_WarbirdNotificationInformation;
                            v1501 = ((__int64 (*)(void))off_180646198[0])() - g_WarbirdPaintInitTime;
                            v1866 = 0LL;
                            v1863 = 0LL;
                            v1864 = 0LL;
                            v1865 = 0LL;
                            while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                              ;
                            v942 = g_WarbirdSecureFunctionsRefCount;
                            if ( g_WarbirdSecureFunctionsRefCount )
                              goto LABEL_1306;
                            v1421 = 0;
                            v1448 = 0;
                            v1703 = 0LL;
                            v1704 = 0LL;
                            v943 = (char *)MemoryAlloc(0x338uLL);
                            v1515 = v943;
                            if ( v943 )
                            {
                              v944 = v943 + 7;
                              v945 = 0;
                              v946 = 103LL;
                              v947 = -1;
                              v948 = 0;
                              v949 = (unsigned __int8 *)&unk_180569112;
                              v950 = 0;
                              do
                              {
                                v951 = *(v949 - 1) | (*(v949 - 2) << 8);
                                v952 = v949[2] << 8;
                                v953 = *v949;
                                v949 += 8;
                                v954 = *(v949 - 7) | ((v953 | (v951 << 8)) << 8);
                                v955 = v954 ^ v950;
                                v956 = *(v949 - 3) | ((*(v949 - 4) | ((*(v949 - 5) | v952) << 8)) << 8);
                                v957 = v955 ^ v956 ^ v948 ^ 0xAC987321;
                                v958 = (__ROL4__(v957, 10) + 4991 * __ROL4__(v957 + 1419157410, 5)) ^ v955;
                                v959 = (43881 * __ROR4__(v958 + 133239679, 9) - __ROL4__(v958, 2)) ^ v957;
                                v960 = (24670 * v959 - (v959 >> 13) - 123127970) ^ v958;
                                v961 = (2033 * __ROL4__(v960 ^ 0xAB69, 6) - __ROL4__(v960, 2)) ^ v959;
                                v962 = (133239679 - (v961 ^ 0xAB69605E)) ^ v960;
                                v963 = (43881 * (v962 ^ 0x137F)) ^ __ROR4__(v962, 6) ^ v961;
                                v964 = (__ROL4__(v963, 2) + 24670 * __ROR4__(v963 + 133239679, 15)) ^ v962;
                                v965 = (2033 * __ROR4__(v964 + 1419157410, 14) - __ROL4__(v964, 8)) ^ v963;
                                v966 = __ROR4__(v965, 10) ^ (4991 * __ROR4__(v965 ^ 0xAB69605E, 12)) ^ v964;
                                v967 = (v966 >> 10) ^ (43881 * (v966 ^ 0x7F1)) ^ v965;
                                v968 = (2033 * (__ROR4__(~v967, 5) + 24670)) ^ v966;
                                v969 = v967 ^ (v968 - 2033) ^ 0xAB69605E;
                                v970 = ((v969 >> 2) + 4991 * __ROL4__(v967 ^ (v968 - 2033) ^ 0xAB6967AF, 2)) ^ v968;
                                v971 = (__ROL4__(v970, 7) + 43881 * __ROR4__(v970 - 133239679, 6)) ^ v969;
                                v972 = (24670 * (v971 ^ 0x137F) + __ROR4__(v971, 9)) ^ v970;
                                v973 = (__ROL4__(v972, 7) + 2033 * __ROL4__(v972 ^ 0xAB69, 5)) ^ v971;
                                v974 = v972 ^ v973 ^ 0xAC987321;
                                v975 = (4991 * __ROR4__(v974, 3) - 219010071) ^ v973;
                                v976 = (24670 * __ROR4__(v975 - 133239679, 1) - __ROR4__(v975, 6)) ^ v974;
                                v977 = (__ROL4__(v976, 14) + 2033 * __ROL4__(v976 - 1419157410, 3)) ^ v975;
                                v978 = (4991 * __ROL4__(v977 - 1419157410, 15) - __ROR4__(v977, 14)) ^ v976;
                                v979 = (v978 >> 3) ^ (43881 * (v978 ^ 0x605E)) ^ v977;
                                v980 = 24670 * __ROL4__(v979 ^ 0x7F1137F, 4);
                                v981 = v979;
                                v982 = v947 ^ v979;
                                v947 = v956;
                                v983 = v945 ^ __ROL4__(v981, 2) ^ v980;
                                v945 = v954;
                                v984 = v983 ^ v978;
                                *(v944 - 4) = v984;
                                *v944 = v982;
                                v944 += 8;
                                v985 = __ROR4__(v984, 8);
                                *(v944 - 13) = v985;
                                v986 = __ROR4__(v982, 8);
                                *(v944 - 9) = v986;
                                v987 = __ROR4__(v985, 8);
                                *(v944 - 14) = v987;
                                v988 = __ROR4__(v986, 8);
                                *(v944 - 10) = v988;
                                v989 = __ROR4__(v987, 8);
                                v990 = __ROR4__(v988, 8);
                                *(v944 - 15) = v989;
                                *(v944 - 11) = v990;
                                v948 = __ROR4__(v990, 8);
                                v950 = __ROR4__(v989, 8);
                                --v946;
                              }
                              while ( v946 );
                              v87 = v1503;
                              v991 = 0;
                              v992 = 0LL;
                              v993 = v1515;
                              v994 = 0;
                              do
                                v994 ^= *((_BYTE *)v1515 + v992++);
                              while ( v992 < 0x338 );
                              if ( v994 == 64LL )
                              {
                                v1703 = (LPCWSTR)v1515;
                                v995 = 0;
                                v993 = 0LL;
                                v1704 = 824LL;
                              }
                              else
                              {
                                v995 = -1073425151;
                              }
                              if ( v993 )
                                MemoryFree(v993);
                              v159 = 0LL;
                              if ( v995 >= 0 )
                              {
                                v996 = v1703;
                                HIBYTE(v1703[v1704 / 2 - 1]) = 0;
                                memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                                while ( *(_BYTE *)v996 )
                                {
                                  v997 = v996;
                                  v998 = -1LL;
                                  do
                                    ++v998;
                                  while ( v996[v998] );
                                  v999 = &v996[v998];
                                  v1000 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1448;
                                  if ( !GetModuleHandleExW(0, v997, (HMODULE *)v1000) )
                                    goto LABEL_1296;
                                  v991 = 0;
                                  if ( **(_WORD **)v1000 == 23117
                                    && (v1001 = *(int *)(*(_QWORD *)v1000 + 60LL), (unsigned int)v1001 < 0x10000000)
                                    && (v1002 = *(_QWORD *)v1000 + v1001, v1002 >= *(_QWORD *)v1000)
                                    && *(_DWORD *)v1002 == 17744 )
                                  {
                                    if ( ((*(_WORD *)(v1002 + 24) - 267) & 0xFEFF) != 0 )
                                    {
                                      v991 = -1073741811;
                                    }
                                    else
                                    {
                                      *(_QWORD *)(v1000 + 12) = *(_QWORD *)(v1002 + 136);
                                      *((_DWORD *)v1000 + 2) = *(_DWORD *)(v1002 + 80);
                                    }
                                  }
                                  else
                                  {
                                    v991 = -1073741701;
                                  }
                                  v1003 = *(_DWORD *)(v999 + 1);
                                  v996 = v999 + 3;
                                  v1433 = v1003;
                                  if ( v1003 )
                                  {
                                    do
                                    {
                                      v1004 = (const CHAR *)v996;
                                      v1005 = -1LL;
                                      do
                                        ++v1005;
                                      while ( *((_BYTE *)v996 + v1005) );
                                      v996 = (LPCWSTR)((char *)v996 + v1005 + 1);
                                      if ( v991 >= 0 )
                                      {
                                        v1006 = (void **)GetProcAddress(*(HMODULE *)v1000, v1004);
                                        if ( !v1006 )
                                        {
                                          v159 = 0LL;
                                          goto LABEL_1297;
                                        }
                                        (&WARBIRD::g_FuncAddress)[v1421] = v1006;
                                      }
                                      ++v1421;
                                      LODWORD(v159) = (_DWORD)v159 + 1;
                                    }
                                    while ( (unsigned int)v159 < v1433 );
                                  }
                                  ++v1448;
                                  v159 = 0LL;
                                }
                                goto LABEL_1297;
                              }
                            }
                            else
                            {
                              v159 = 0LL;
                            }
LABEL_1296:
                            v991 = -1073741702;
LABEL_1297:
                            v1007 = (WCHAR *)v1703;
                            if ( v1703 )
                            {
                              v1008 = GetProcessHeap();
                              HeapFree(v1008, 0, v1007);
                            }
                            if ( v991 < 0 )
                            {
                              v1009 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                              v1010 = 4LL;
                              do
                              {
                                if ( *v1009 )
                                  FreeLibrary(*v1009);
                                v1009 += 3;
                                --v1010;
                              }
                              while ( v1010 );
                              v1011 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                              memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                              memcpy_0(&WARBIRD::g_FuncAddress, off_180509E10, 0x170uLL);
                              goto LABEL_1307;
                            }
                            v942 = g_WarbirdSecureFunctionsRefCount;
LABEL_1306:
                            v1011 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                            g_WarbirdSecureFunctionsRefCount = v942 + 1;
LABEL_1307:
                            v1012 = 4LL;
                            _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                            LODWORD(v1866) = v1406;
                            LODWORD(v1863) = v1501;
                            v1862 = 1;
                            LODWORD(v1864) = -1721306479;
                            DWORD2(v1863) = 1;
                            LODWORD(v1865) = 1;
                            DWORD2(v1864) = 1;
                            DWORD2(v1865) = 1;
                            ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1806461D0)(
                              0LL,
                              8225LL,
                              4LL,
                              &v1862);
                            while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                              ;
                            v1013 = g_WarbirdSecureFunctionsRefCount;
                            if ( g_WarbirdSecureFunctionsRefCount > 0 )
                            {
                              --g_WarbirdSecureFunctionsRefCount;
                              if ( v1013 == 1 )
                              {
                                do
                                {
                                  if ( *v1011 )
                                    FreeLibrary(*v1011);
                                  v1011 += 3;
                                  --v1012;
                                }
                                while ( v1012 );
                                memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                                memcpy_0(&WARBIRD::g_FuncAddress, off_180509E10, 0x170uLL);
                              }
                            }
                            _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                            off_180646260[0](0LL, (int)v1513);
                            v1467 = v1511;
                            goto LABEL_1316;
                          }
                          v840 = ((__int64 (__fastcall *)(__int64))off_180646218[0])(8LL);
                        }
                        else
                        {
                          v840 = -5723992;
                        }
                        Srcd = v840;
                        v1474 = v840;
                        goto LABEL_1104;
                      }
                    }
                  }
                }
LABEL_1129:
                GetLastError();
                goto LABEL_1130;
              }
              if ( v1794 || (v861 = -64, v652 == 1) )
                v861 = -1;
              BYTE2(v1457) = v861;
              HIBYTE(v1457) = 1;
              v862 = 0;
              *(_QWORD *)&v1736 = 0LL;
              LOWORD(v1457) = 0;
              LODWORD(v1737) = 0;
              v1512 = (void *)((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_180646110[0])(v762);
              if ( !v1512 )
                goto LABEL_1129;
              if ( v652 == 1 )
              {
                v863 = DWORD2(v1803) - v1803;
                if ( DWORD2(v1803) - (int)v1803 <= DWORD2(v1802) - (int)v1802 )
                  v863 = DWORD2(v1802) - v1802;
                v864 = HIDWORD(v1803) - DWORD1(v1802);
                LODWORD(v1386) = v863;
                v865 = 0;
                HIDWORD(v1386) = HIDWORD(v1803) - DWORD1(v1802);
                if ( v1793 )
                {
                  v862 = v1802 + v863 - DWORD2(v1802);
                  LODWORD(v1736) = v862;
                  LODWORD(v1737) = v1803 + v863 - DWORD2(v1803);
                  v865 = v1737;
                  v764 = v862;
                }
                v1508 = DWORD2(v1803) + v865 - v1803;
                DWORD2(v1737) = v1508;
                v866 = DWORD2(v1802) + v764 - v1802;
                DWORD2(v1736) = v866;
                v1490 = DWORD1(v1803) - DWORD1(v1802);
                DWORD1(v1737) = DWORD1(v1803) - DWORD1(v1802);
                LODWORD(v1436) = HIDWORD(v1803) - DWORD1(v1802);
                HIDWORD(v1737) = HIDWORD(v1803) - DWORD1(v1802);
                v652 = Srcc;
                v1479 = HIDWORD(v1802) - DWORD1(v1802);
                HIDWORD(v1736) = HIDWORD(v1802) - DWORD1(v1802);
              }
              else
              {
                v863 = DWORD2(v1813);
                v864 = HIDWORD(v1813);
                v1736 = v1802;
                v866 = DWORD2(v1802);
                v862 = v1802;
                v1737 = v1803;
                v1479 = HIDWORD(v1802);
                LODWORD(v1436) = HIDWORD(v1803);
                v1508 = DWORD2(v1803);
                v1386 = *((_QWORD *)&v1813 + 1);
                v1490 = DWORD1(v1803);
              }
              LODWORD(v1828) = 40;
              v1694 = 0LL;
              DWORD2(v1828) = -v864;
              v1830 = 0LL;
              v1831 = 0;
              v1829 = 0LL;
              DWORD1(v1828) = v863;
              HIDWORD(v1828) = 2097153;
              v867 = ((__int64 (__fastcall *)(void *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180646118[0])(
                       v1512,
                       &v1828,
                       0LL,
                       &v1694,
                       0LL,
                       0);
              v1493 = v867;
              if ( !v867 )
              {
                GetLastError();
                v159 = 0LL;
LABEL_1149:
                if ( v1512 )
                  ((void (__fastcall *)(void *))off_180646130[0])(v1512);
                goto LABEL_1151;
              }
              off_180646178((WARBIRD_DELAY_LOAD *)v1512, v867);
              if ( v652 == 1 && v1624 )
              {
                v1816 = 0LL;
                v1818 = HIDWORD(v1386);
                v1817 = v863;
                off_1806461E8[0]((WARBIRD_DELAY_LOAD *)v1512, (int)&v1816);
              }
              v868 = v1795;
              v1446 = v1794;
              v1514 = (__int64)v1798;
              v1519 = v1795;
              memset_0(v1783, 0, 0x68uLL);
              memset_0(v1764, 0, 0x68uLL);
              v1520 = 0LL;
              v1429 = 0;
              v1417 = 0;
              v1842 = 0LL;
              v1843 = 0;
              v1840 = 0LL;
              v1841 = 0LL;
              v1812 = 0LL;
              if ( !v868 )
              {
LABEL_1146:
                v159 = 0LL;
                goto LABEL_1147;
              }
              v869 = v1512;
              v870 = ((__int64 (__fastcall *)(void *, __int64))off_180646150[0])(v1512, 7LL);
              if ( !v870 )
              {
LABEL_1145:
                GetLastError();
                goto LABEL_1146;
              }
              if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_180646168[0])(v870, 104LL, v1783) )
              {
                v1520 = v1786;
                v1429 = v1784;
                v1417 = v1785;
              }
              v871 = (void *)((__int64 (__fastcall *)(void *))off_180646110[0])(v869);
              v159 = 0LL;
              v1521 = v871;
              if ( !v871 )
                goto LABEL_1156;
              DWORD2(v1840) = DWORD1(v1736) - v1479;
              v872 = v866 - v862;
              v1842 = 0LL;
              v1843 = 0;
              v1699 = 0LL;
              v1841 = 0LL;
              LODWORD(v1840) = 40;
              DWORD1(v1840) = v872;
              HIDWORD(v1840) = 2097153;
              v873 = (void *)((__int64 (__fastcall *)(void *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180646118[0])(
                               v871,
                               &v1840,
                               0LL,
                               &v1699,
                               0LL,
                               0);
              v1515 = v873;
              if ( v873 )
              {
                v875 = ((__int64 (__fastcall *)(void *, __int64, _BYTE *))off_180646168[0])(v873, 104LL, v1764);
                DWORD2(v1812) = v872;
                v876 = (CToastCenterExperienceManager *)v1521;
                v877 = 0LL;
                if ( v875 )
                  v877 = v1765;
                HIDWORD(v1812) = v1479 - DWORD1(v1736);
                v1497 = v877;
                off_180646178((WARBIRD_DELAY_LOAD *)v1521, (int)v1515);
                off_180646180(v876, (struct CSingleViewShellExperience *)1);
                v878 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_180646178)(v876, v1514);
                v879 = off_1806461E8[0];
                v1514 = v878;
                v880 = ((__int64 (__fastcall *)(_QWORD))off_180646170[0])(0LL);
                ((void (__fastcall *)(LPVOID, __int128 *, __int64))v879)(v1521, &v1812, v880);
                v881 = (WARBIRD_DELAY_LOAD *)v1521;
                ((void (__fastcall *)(LPVOID, LPVOID, __int64, __int128 *, int, _QWORD))off_1806461D8)(
                  v1521,
                  v1519,
                  0xFFFFFFFFLL,
                  &v1812,
                  v1464,
                  0LL);
                if ( Srcc == 1 )
                {
                  if ( v1446 )
                    v1447 = ((__int64 (__fastcall *)(__int64))off_180646218[0])(8LL);
                  else
                    v1447 = 0xFFFFFF;
                }
                else
                {
                  v1447 = -5723992;
                }
                v882 = -v862;
                v883 = 0;
                v884 = 0;
                if ( v862 >= 0 )
                {
                  v883 = v862;
                  v882 = 0;
                }
                v885 = -DWORD1(v1736);
                if ( (SDWORD1(v1736) & 0x80000000) == 0 )
                {
                  v884 = DWORD1(v1736);
                  v885 = 0;
                }
                v886 = DWORD2(v1812) - v882;
                if ( DWORD2(v1812) - v882 >= v1429 - v883 )
                  v886 = v1429 - v883;
                v887 = HIDWORD(v1812) - v885;
                if ( HIDWORD(v1812) - v885 >= v1417 - v884 )
                  v887 = v1417 - v884;
                if ( v886 > 0 && v887 > 0 )
                {
                  v1418 = 0;
                  v888 = (char *)(v1497 + 4 * (v882 + (__int64)(DWORD2(v1812) * v885)));
                  v1498 = v888;
                  v889 = (char *)v1520 + 4 * v883 + 4 * (__int64)(v1429 * v884);
                  v1519 = (LPVOID)(4LL * SDWORD2(v1812));
                  v1480 = 4LL * v1429;
                  v1520 = v889;
                  do
                  {
                    v1430 = 0;
                    v890 = (unsigned __int8 *)(v888 + 2);
                    v891 = 0;
                    v892 = v889 - v888;
                    do
                    {
                      if ( (unsigned __int8)((*v890 + *(v890 - 2) + 2 * (unsigned int)*(v890 - 1)) >> 2) != 0xFF )
                      {
                        v893 = (unsigned __int8)~((*v890 + *(v890 - 2) + 2 * (unsigned int)*(v890 - 1)) >> 2);
                        v890[v892] -= ~((*v890 + *(v890 - 2) + 2 * (unsigned int)*(v890 - 1)) >> 2)
                                    * (v1447 - v890[v892]);
                        v894 = v890[v892 - 1];
                        v895 = (unsigned __int64)(2155905153LL * v893 * (BYTE1(v1447) - v894)) >> 32;
                        v890[v892 - 1] = v894 + (v895 >> 7 < 0) + (v895 >> 7);
                        v896 = v890[v892 - 2];
                        v897 = (unsigned __int64)(2155905153LL * v893 * (BYTE2(v1447) - v896)) >> 32;
                        v890[v892 - 2] = v896 + (v897 >> 7 < 0) + (v897 >> 7);
                        v898 = v890[v892 + 1];
                        v899 = v893 * (255 - v898);
                        v891 = v1430;
                        v890[v892 + 1] = v898 + v899 / 255;
                      }
                      ++v891;
                      v890 += 4;
                      v1430 = v891;
                    }
                    while ( v891 < v886 );
                    v888 = &v1498[(_QWORD)v1519];
                    v889 = (char *)v1520 + v1480;
                    v1498 = &v1498[(_QWORD)v1519];
                    v1520 = (char *)v1520 + v1480;
                    ++v1418;
                  }
                  while ( v1418 < v887 );
                  v87 = v1503;
                  v863 = v1386;
                  LODWORD(v159) = 0;
                  v881 = (WARBIRD_DELAY_LOAD *)v1521;
                }
                ((void (__fastcall *)(void *))off_180646138)(v1515);
                if ( v1514 )
                  off_180646178(v881, v1514);
              }
              else
              {
                LODWORD(v159) = GetLastError();
                v874 = (int)v159 < 0;
                if ( (int)v159 > 0 )
                {
                  LODWORD(v159) = (unsigned __int16)v159 | 0x80070000;
                  v874 = (int)v159 < 0;
                }
                if ( !v874 )
                  LODWORD(v159) = -2147467259;
              }
              ((void (__fastcall *)(LPVOID))off_180646130[0])(v1521);
              if ( (int)v159 < 0 )
                goto LABEL_1146;
              v900 = v1796;
              v1404 = v1794;
              v1499 = v1799;
              v1515 = v1796;
              memset_0(v1787, 0, 0x68uLL);
              memset_0(v1791, 0, 0x68uLL);
              v159 = 0LL;
              v1521 = 0LL;
              v1419 = 0;
              v1431 = 0;
              v1846 = 0LL;
              v1847 = 0;
              v1844 = 0LL;
              v1845 = 0LL;
              v1819 = 0LL;
              if ( !v900 )
                goto LABEL_1147;
              v901 = v1512;
              v902 = ((__int64 (__fastcall *)(void *, __int64))off_180646150[0])(v1512, 7LL);
              if ( !v902 )
                goto LABEL_1145;
              if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_180646168[0])(v902, 104LL, v1787) )
              {
                v1521 = v1790;
                v1419 = v1788;
                v1431 = v1789;
              }
              v903 = (void *)((__int64 (__fastcall *)(void *))off_180646110[0])(v901);
              v159 = 0LL;
              v1520 = v903;
              if ( !v903 )
              {
LABEL_1156:
                GetLastError();
                goto LABEL_1147;
              }
              v904 = v1508 - v1737;
              v1702 = 0LL;
              v905 = 0;
              v1846 = 0LL;
              v1847 = 0;
              DWORD2(v1844) = v1490 - v1436;
              v1845 = 0LL;
              LODWORD(v1844) = 40;
              DWORD1(v1844) = v1508 - v1737;
              HIDWORD(v1844) = 2097153;
              v906 = (void *)((__int64 (__fastcall *)(void *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180646118[0])(
                               v903,
                               &v1844,
                               0LL,
                               &v1702,
                               0LL,
                               0);
              v1519 = v906;
              if ( !v906 )
              {
                v907 = GetLastError();
                v159 = 0LL;
                v905 = v907;
                if ( v907 > 0 )
                  v905 = (unsigned __int16)v907 | 0x80070000;
                if ( v905 >= 0 )
                  v905 = -2147467259;
LABEL_1226:
                ((void (__fastcall *)(LPVOID))off_180646130[0])(v1520);
                if ( v905 < 0 )
                  goto LABEL_1147;
                v860 = (CToastCenterExperienceManager *)v1513;
                if ( Srcc == 1 )
                  ((void (__fastcall *)(LPVOID, _QWORD, _QWORD, _QWORD, _DWORD, void *, _DWORD, _DWORD, int))WARBIRD::g_FuncAddress)(
                    v1513,
                    (unsigned int)v1802,
                    DWORD1(v1802),
                    v863,
                    HIDWORD(v1386),
                    v1512,
                    0,
                    0,
                    13369376);
                else
                  ((void (__fastcall *)(LPVOID, _QWORD, _QWORD, _QWORD, _DWORD, void *, _DWORD, _DWORD, unsigned int, _DWORD, int))off_180646140[0])(
                    v1513,
                    (unsigned int)v1813,
                    DWORD1(v1813),
                    v863,
                    HIDWORD(v1386),
                    v1512,
                    0,
                    0,
                    v863,
                    HIDWORD(v1386),
                    v1457);
LABEL_1230:
                off_180646180(v860, (struct CSingleViewShellExperience *)v1469);
LABEL_1147:
                if ( v1493 )
                  ((void (__fastcall *)(SIZE_T))off_180646138)(v1493);
                goto LABEL_1149;
              }
              v908 = ((__int64 (__fastcall *)(void *, __int64, _BYTE *))off_180646168[0])(v906, 104LL, v1791);
              DWORD2(v1819) = v904;
              v909 = (CToastCenterExperienceManager *)v1520;
              v910 = 0LL;
              if ( v908 )
                v910 = v1792;
              HIDWORD(v1819) = v1436 - v1490;
              v1514 = v910;
              off_180646178((WARBIRD_DELAY_LOAD *)v1520, (int)v1519);
              off_180646180(v909, (struct CSingleViewShellExperience *)1);
              v911 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_180646178)(
                       v909,
                       v1499);
              v912 = off_1806461E8[0];
              v1500 = v911;
              v913 = ((__int64 (__fastcall *)(_QWORD))off_180646170[0])(0LL);
              ((void (__fastcall *)(LPVOID, __int128 *, __int64))v912)(v1520, &v1819, v913);
              v914 = (WARBIRD_DELAY_LOAD *)v1520;
              ((void (__fastcall *)(LPVOID, void *, __int64, __int128 *, int, _QWORD))off_1806461D8)(
                v1520,
                v1515,
                0xFFFFFFFFLL,
                &v1819,
                v1464,
                0LL);
              if ( Srcc == 1 )
              {
                if ( !v1404 )
                {
                  v1405 = 0xFFFFFF;
LABEL_1207:
                  v916 = -(int)v1737;
                  v917 = 0;
                  v918 = 0;
                  if ( (int)v1737 >= 0 )
                  {
                    v917 = v1737;
                    v916 = 0;
                  }
                  v919 = -v1490;
                  if ( v1490 >= 0 )
                  {
                    v918 = v1490;
                    v919 = 0;
                  }
                  v920 = v1419;
                  v921 = DWORD2(v1819) - v916;
                  if ( DWORD2(v1819) - v916 >= v1419 - v917 )
                    v921 = v1419 - v917;
                  v922 = HIDWORD(v1819) - v919;
                  if ( HIDWORD(v1819) - v919 >= v1431 - v918 )
                    v922 = v1431 - v918;
                  if ( v921 > 0 && v922 > 0 )
                  {
                    v923 = v1419 * v918;
                    v1420 = 0;
                    v924 = (unsigned __int8 *)(v1514 + 4 * (v916 + (__int64)(DWORD2(v1819) * v919)));
                    v1515 = v924;
                    v925 = (char *)v1521 + 4 * v917 + 4 * (__int64)v923;
                    v1514 = 4LL * SDWORD2(v1819);
                    v1436 = 4 * v920;
                    v1521 = v925;
                    do
                    {
                      v1432 = 0;
                      v926 = v924 + 2;
                      v927 = 0;
                      v928 = v925 - (char *)v924;
                      do
                      {
                        if ( (unsigned __int8)((*v926 + *(v926 - 2) + 2 * (unsigned int)*(v926 - 1)) >> 2) != 0xFF )
                        {
                          v929 = (unsigned __int8)~((*v926 + *(v926 - 2) + 2 * (unsigned int)*(v926 - 1)) >> 2);
                          v926[v928] -= ~((*v926 + *(v926 - 2) + 2 * (unsigned int)*(v926 - 1)) >> 2)
                                      * (v1474 - v926[v928]);
                          v930 = v926[v928 - 1];
                          v931 = (unsigned __int64)(2155905153LL * v929 * (BYTE1(v1405) - v930)) >> 32;
                          v926[v928 - 1] = v930 + (v931 >> 7 < 0) + (v931 >> 7);
                          v932 = v926[v928 - 2];
                          v933 = (unsigned __int64)(2155905153LL * v929 * (BYTE2(v1405) - v932)) >> 32;
                          v926[v928 - 2] = v932 + (v933 >> 7 < 0) + (v933 >> 7);
                          v934 = v926[v928 + 1];
                          v935 = v929 * (255 - v934);
                          v927 = v1432;
                          v926[v928 + 1] = v934 + v935 / 255;
                        }
                        ++v927;
                        v926 += 4;
                        v1432 = v927;
                      }
                      while ( v927 < v921 );
                      v924 = (unsigned __int8 *)v1515 + v1514;
                      v925 = (char *)v1521 + v1436;
                      v1515 = (char *)v1515 + v1514;
                      v1521 = (char *)v1521 + v1436;
                      ++v1420;
                    }
                    while ( v1420 < v922 );
                    v87 = v1503;
                    v905 = 0;
                    v863 = v1386;
                    v914 = (WARBIRD_DELAY_LOAD *)v1520;
                  }
                  ((void (__fastcall *)(LPVOID))off_180646138)(v1519);
                  v159 = 0LL;
                  if ( v1500 )
                    off_180646178(v914, v1500);
                  goto LABEL_1226;
                }
                v915 = ((__int64 (__fastcall *)(__int64))off_180646218[0])(8LL);
              }
              else
              {
                v915 = -5723992;
              }
              v1405 = v915;
              v1474 = v915;
              goto LABEL_1207;
            }
            v1685 = 0LL;
            v1686 = 0LL;
            v655 = 0;
            v1687 = 0LL;
            v1688 = 0LL;
            v1689 = 0LL;
            v1690 = 0LL;
            v1574 = 0;
            if ( !((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1806461A0[0])(
                    8LL,
                    &v1575,
                    0LL,
                    &v1574) )
              goto LABEL_815;
            v657 = (WARBIRD_DELAY_LOAD *)MemoryAlloc(2LL * v1574);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1689);
            if ( v657 )
            {
              v1689 = v657;
              v658 = MemoryAlloc(4LL * (v1575 + 1));
              SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1690);
              if ( v658 )
              {
                v1690 = v658;
                if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, WARBIRD_DELAY_LOAD *, unsigned int *))off_1806461A0[0])(
                       8LL,
                       &v1575,
                       v657,
                       &v1574) )
                {
                  v659 = v658;
                  if ( v1575 )
                  {
                    for ( kk = 0; kk < v1575; ++kk )
                    {
                      *v659 = off_1806461B0(v657, 0);
                      v661 = -1LL;
                      do
                        ++v661;
                      while ( *((_WORD *)v657 + v661) );
                      ++v659;
                      v657 = (WARBIRD_DELAY_LOAD *)((char *)v657 + 2 * v661 + 2);
                    }
                    v87 = v1503;
                  }
                  *v659 = 1033;
                  v653 = (__int64)v658;
                  v1685 = v658;
                  v1380 = v1575 + 1;
                  v1690 = 0LL;
LABEL_832:
                  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1690);
                  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1689);
                  if ( v655 >= 0 )
                  {
                    v662 = 0;
                    v663 = 0;
                    v1389 = 0;
                    if ( v1380 )
                    {
                      v664 = 0LL;
                      while ( 2 )
                      {
                        v665 = 0;
                        v666 = `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray;
                        do
                        {
                          if ( *(_DWORD *)(v653 + v664) == *v666 )
                          {
                            v662 = v665;
                            v1389 = v665;
                            goto LABEL_841;
                          }
                          ++v665;
                          ++v666;
                        }
                        while ( v665 < 0x26 );
                        ++v663;
                        v664 += 4LL;
                        if ( v663 < v1380 )
                          continue;
                        break;
                      }
                    }
LABEL_841:
                    v667 = v662;
                    v1381 = 0;
                    if ( ((unsigned int (__fastcall *)(_QWORD, _BYTE *, __int64))off_1806461A8[0])(
                           `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray[v662],
                           v1869,
                           85LL)
                      && ((int (__fastcall *)(_BYTE *, __int64, char *))off_180646190[0])(v1869, 88LL, &v1820) > 0 )
                    {
                      v1381 = (v1821 >> 27) & 1;
                    }
                    v668 = L"Segoe UI Light";
                    v669 = 19LL;
                    v670 = (const wchar_t **)v1867;
                    do
                    {
                      *v670 = v668;
                      v671 = -1LL;
                      do
                        ++v671;
                      while ( v668[v671] );
                      ++v670;
                      v668 += v671 + 1;
                      --v669;
                    }
                    while ( v669 );
                    v1396 = (unsigned __int16 *)v1867[*((unsigned __int8 *)&`CUxDisplayStringsT<CEmptyType>::GetFontsForLCIDIndex'::`2'::LangFontIndexMapping
                                                      + 3 * v667)];
                    v1412 = (unsigned __int16 *)v1867[(unsigned __int8)byte_18056EDD1[3 * v667]];
                    v1427 = (unsigned __int16 *)v1867[(unsigned __int8)byte_18056EDD2[3 * v667]];
                    v672 = (char *)MemoryAlloc(0x1C90uLL);
                    v1436 = (__int64)v672;
                    if ( v672 )
                    {
                      v673 = (unsigned __int8 *)&unk_1805CABA2;
                      v674 = -1;
                      v675 = 0;
                      v676 = 0;
                      v677 = 0;
                      v678 = v672 + 7;
                      v679 = 914LL;
                      do
                      {
                        v680 = *(v673 - 1) | (*(v673 - 2) << 8);
                        v681 = v673[2] << 8;
                        v682 = *v673;
                        v673 += 8;
                        v683 = *(v673 - 7) | ((v682 | (v680 << 8)) << 8);
                        v684 = v683 ^ v677;
                        v685 = *(v673 - 3) | ((*(v673 - 4) | ((*(v673 - 5) | v681) << 8)) << 8);
                        v686 = v684 ^ v685 ^ v676 ^ 0xAC987321;
                        v687 = (__ROL4__(v686, 10) + 4991 * __ROL4__(v686 + 1419157410, 5)) ^ v684;
                        v688 = (43881 * __ROR4__(v687 + 133239679, 9) - __ROL4__(v687, 2)) ^ v686;
                        v689 = (24670 * v688 - (v688 >> 13) - 123127970) ^ v687;
                        v690 = (2033 * __ROL4__(v689 ^ 0xAB69, 6) - __ROL4__(v689, 2)) ^ v688;
                        v691 = (133239679 - (v690 ^ 0xAB69605E)) ^ v689;
                        v692 = (43881 * (v691 ^ 0x137F)) ^ __ROR4__(v691, 6) ^ v690;
                        v693 = (__ROL4__(v692, 2) + 24670 * __ROR4__(v692 + 133239679, 15)) ^ v691;
                        v694 = (2033 * __ROR4__(v693 + 1419157410, 14) - __ROL4__(v693, 8)) ^ v692;
                        v695 = __ROR4__(v694, 10) ^ (4991 * __ROR4__(v694 ^ 0xAB69605E, 12)) ^ v693;
                        v696 = (v695 >> 10) ^ (43881 * (v695 ^ 0x7F1)) ^ v694;
                        v697 = (2033 * (__ROR4__(~v696, 5) + 24670)) ^ v695;
                        v698 = v696 ^ (v697 - 2033) ^ 0xAB69605E;
                        v699 = ((v698 >> 2) + 4991 * __ROL4__(v696 ^ (v697 - 2033) ^ 0xAB6967AF, 2)) ^ v697;
                        v700 = (__ROL4__(v699, 7) + 43881 * __ROR4__(v699 - 133239679, 6)) ^ v698;
                        v701 = (24670 * (v700 ^ 0x137F) + __ROR4__(v700, 9)) ^ v699;
                        v702 = (__ROL4__(v701, 7) + 2033 * __ROL4__(v701 ^ 0xAB69, 5)) ^ v700;
                        v703 = v702 ^ v701 ^ 0xAC987321;
                        v704 = (4991 * __ROR4__(v703, 3) - 219010071) ^ v702;
                        v705 = (24670 * __ROR4__(v704 - 133239679, 1) - __ROR4__(v704, 6)) ^ v703;
                        v706 = (__ROL4__(v705, 14) + 2033 * __ROL4__(v705 - 1419157410, 3)) ^ v704;
                        v707 = (4991 * __ROL4__(v706 - 1419157410, 15) - __ROR4__(v706, 14)) ^ v705;
                        v708 = (v707 >> 3) ^ (43881 * (v707 ^ 0x605E)) ^ v706;
                        v709 = 24670 * __ROL4__(v708 ^ 0x7F1137F, 4);
                        v710 = v708;
                        v711 = v674 ^ v708;
                        v674 = v685;
                        v712 = v675 ^ __ROL4__(v710, 2) ^ v709;
                        v675 = v683;
                        v713 = v712 ^ v707;
                        *(v678 - 4) = v713;
                        *v678 = v711;
                        v678 += 8;
                        v714 = __ROR4__(v713, 8);
                        *(v678 - 13) = v714;
                        v715 = __ROR4__(v711, 8);
                        *(v678 - 9) = v715;
                        v716 = __ROR4__(v714, 8);
                        *(v678 - 14) = v716;
                        v717 = __ROR4__(v715, 8);
                        *(v678 - 10) = v717;
                        v718 = __ROR4__(v716, 8);
                        v719 = __ROR4__(v717, 8);
                        *(v678 - 15) = v718;
                        *(v678 - 11) = v719;
                        v676 = __ROR4__(v719, 8);
                        v677 = __ROR4__(v718, 8);
                        --v679;
                      }
                      while ( v679 );
                      v87 = v1503;
                      v655 = 0;
                      v720 = 0LL;
                      v721 = (void *)v1436;
                      v722 = 0LL;
                      do
                      {
                        v723 = _mm_loadu_si128((const __m128i *)(v720 + v1436));
                        v720 += 16LL;
                        v724 = _mm_xor_si128(v723, v722);
                        v722 = v724;
                      }
                      while ( v720 < 0x1C90 );
                      v725 = _mm_xor_si128(v724, _mm_srli_si128(v724, 8));
                      v726 = _mm_xor_si128(v725, _mm_srli_si128(v725, 4));
                      v727 = _mm_xor_si128(v726, _mm_srli_si128(v726, 2));
                      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_xor_si128(v727, _mm_srli_si128(v727, 1))) == 127LL )
                      {
                        v1686 = (_BYTE *)v1436;
                        v721 = 0LL;
                        v1687 = 7312LL;
                      }
                      else
                      {
                        v655 = -1073425151;
                      }
                      if ( v721 )
                        MemoryFree(v721);
                      if ( v655 >= 0 )
                      {
                        v728 = v1686;
                        v729 = v1861;
                        v730 = 6LL;
                        do
                        {
                          for ( mm = 0; mm < 0x26; ++mm )
                          {
                            if ( v1389 == mm )
                              *v729 = v728;
                            v732 = -1LL;
                            do
                              ++v732;
                            while ( v728[v732] );
                            v728 += v732 + 1;
                          }
                          ++v729;
                          --v730;
                        }
                        while ( v730 );
                        v733 = (void **)MemoryAlloc(0x18uLL);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1688);
                        if ( v733 )
                        {
                          v1468 = 0;
                          v740 = v1868;
                          v734 = v733;
                          v1487 = v1868;
                          v741 = (char *)v733;
                          v1688 = v733;
                          *(_OWORD *)v733 = 0LL;
                          v742 = 0;
                          v733[2] = 0LL;
                          v735 = 3LL;
                          v1436 = (__int64)v733;
                          while ( 2 )
                          {
                            v743 = *v740;
                            v744 = &`CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::wStringIds;
                            v745 = 0LL;
                            while ( v743 != *v744 )
                            {
                              v745 = (unsigned int)(v745 + 1);
                              ++v744;
                              if ( (unsigned int)v745 >= 6 )
                                goto LABEL_898;
                            }
                            v746 = v1861[v745];
                            v747 = -1LL;
                            do
                              ++v747;
                            while ( *(_BYTE *)(v747 + v746) );
                            v748 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))off_1806461C0[0])(
                                     65001LL,
                                     0LL,
                                     v746,
                                     (unsigned int)(v747 + 1),
                                     0LL,
                                     0);
                            v1390 = v748;
                            if ( !v748 )
                            {
                              v752 = GetLastError();
                              v655 = v752;
                              if ( v752 > 0 )
                                v655 = (unsigned __int16)v752 | 0x80070000;
                              v735 = 3LL;
                              if ( v655 >= 0 )
                                v655 = -2147467259;
                              goto LABEL_871;
                            }
                            v749 = MemoryAlloc(2LL * v748);
                            *(_QWORD *)v1436 = v749;
                            if ( !v749 )
                            {
                              v655 = -2147024882;
                              goto LABEL_870;
                            }
                            v750 = -1LL;
                            do
                              ++v750;
                            while ( *(_BYTE *)(v750 + v746) );
                            if ( !((unsigned int (__fastcall *)(__int64, _QWORD, __int64, _QWORD, void *, int))off_1806461C0[0])(
                                    65001LL,
                                    0LL,
                                    v746,
                                    (unsigned int)(v750 + 1),
                                    v749,
                                    v1390) )
                            {
                              v751 = GetLastError();
                              v655 = v751;
                              if ( v751 > 0 )
                                v655 = (unsigned __int16)v751 | 0x80070000;
                              if ( v655 >= 0 )
                                v655 = -2147467259;
                              goto LABEL_870;
                            }
                            v741 = (char *)v1436;
                            v735 = 3LL;
                            v742 = v1468;
LABEL_898:
                            ++v742;
                            v740 = v1487 + 1;
                            v1468 = v742;
                            v741 += 8;
                            ++v1487;
                            v1436 = (__int64)v741;
                            if ( v742 < 3 )
                              continue;
                            break;
                          }
                          v734 = 0LL;
                          v1688 = 0LL;
                          v1682 = v733;
                          v1793 = v1381;
                        }
                        else
                        {
                          v734 = 0LL;
                          v655 = -2147024882;
                          v1688 = 0LL;
LABEL_870:
                          v735 = 3LL;
                        }
LABEL_871:
                        if ( v734 )
                        {
                          do
                          {
                            v736 = *v734;
                            if ( *v734 )
                            {
                              v737 = -1LL;
                              do
                                ++v737;
                              while ( v736[v737] );
                              memset(v736, 0, 2 * v737 + 2);
                              MemoryFree(*v734);
                            }
                            ++v734;
                            --v735;
                          }
                          while ( v735 );
                        }
                      }
                    }
                    else
                    {
                      v655 = -2147024882;
                    }
                  }
                  if ( v1686 )
                    memset(v1686, 0, v1687);
                  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1688);
                  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1686);
                  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1685);
                  if ( v655 < 0 )
                    goto LABEL_929;
                  v738 = 0;
                  v655 = 0;
                  v1795 = *v1682;
                  v1796 = v1682[1];
                  v1797 = v1682[2];
                  v1753 = 0LL;
                  LODWORD(v1753) = 16;
                  if ( (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_180646268)(
                                       66LL,
                                       0LL,
                                       &v1753,
                                       0LL) )
                  {
                    v738 = BYTE4(v1753) & 1;
                  }
                  else
                  {
                    v739 = GetLastError();
                    v655 = v739;
                    if ( v739 > 0 )
                      v655 = (unsigned __int16)v739 | 0x80070000;
                    if ( v655 >= 0 )
                      v655 = -2147467259;
                  }
                  v652 = Srcc;
                  v1794 = v738;
                  if ( v655 < 0 )
                  {
                    LODWORD(v653) = 0;
                    goto LABEL_931;
                  }
                  if ( Srcc == 1 )
                  {
                    v1463 = 42;
                  }
                  else
                  {
                    if ( Srcc != 2 )
                    {
                      if ( Srcc == 3 )
                      {
                        v1463 = 225;
                        v1452 = 225;
                      }
LABEL_918:
                      v753 = 96;
                      v1382 = 96;
                      memset_0(v1857, 0, 0xDCuLL);
                      v1858 = 220;
                      v655 = 0;
                      if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _BYTE *))off_1806461E0[0])(
                             0LL,
                             0xFFFFFFFFLL,
                             v1857) )
                      {
                        v753 = v1859;
                        *((_QWORD *)&v1752 + 1) = v1860;
                        if ( v1859 < 0x60u )
                          v753 = 96;
                        v1382 = v753;
                      }
                      v754 = (char *)v1396;
                      if ( Srcc != 1 )
                        v754 = (char *)v1427;
                      memset_0(v1848, 0, 0x5CuLL);
                      v755 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1806461F8[0])(0LL, 0LL, 1027LL);
                      if ( !v755 )
                      {
                        v756 = GetLastError();
                        v655 = v756;
                        if ( v756 > 0 )
                          v655 = (unsigned __int16)v756 | 0x80070000;
                        if ( v655 >= 0 )
                          v655 = -2147467259;
LABEL_929:
                        LODWORD(v653) = 0;
LABEL_930:
                        v652 = Srcc;
LABEL_931:
                        off_180646260[0](0LL, (int)v1442);
                        goto LABEL_932;
                      }
                      v772 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1806461B8)(v1463, v753, 72LL);
                      v1848[4] = 400;
                      v1849 = 5;
                      v1848[0] = -v772;
                      StringCchCopyW((char *)&v1850, 32LL, v754);
                      v773 = ((__int64 (__fastcall *)(_DWORD *))off_180646120[0])(v1848);
                      if ( v773 )
                      {
                        v1798 = (unsigned __int16 *)v773;
                      }
                      else
                      {
                        v774 = GetLastError();
                        v655 = v774;
                        if ( v774 > 0 )
                          v655 = (unsigned __int16)v774 | 0x80070000;
                        if ( v655 >= 0 )
                          v655 = -2147467259;
                      }
                      off_180646260[0](0LL, v755);
                      if ( v655 < 0 )
                        goto LABEL_929;
                      v652 = Srcc;
                      v775 = v1396;
                      if ( Srcc != 1 )
                        v775 = v1427;
                      v1398 = v775;
                      memset_0(v1851, 0, 0x5CuLL);
                      v655 = 0;
                      v776 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1806461F8[0])(0LL, 0LL, 1027LL);
                      if ( !v776 )
                      {
                        v777 = GetLastError();
                        LODWORD(v653) = 0;
                        v655 = v777;
                        if ( v777 > 0 )
                          v655 = (unsigned __int16)v777 | 0x80070000;
                        if ( v655 < 0 )
                          goto LABEL_931;
                        goto LABEL_979;
                      }
                      v778 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1806461B8)(v1452, v753, 72LL);
                      v1851[4] = 400;
                      v1851[0] = -v778;
                      v1852 = 5;
                      StringCchCopyW((char *)&v1853, 32LL, (char *)v1398);
                      v779 = ((__int64 (__fastcall *)(_DWORD *))off_180646120[0])(v1851);
                      LODWORD(v653) = 0;
                      if ( v779 )
                      {
                        v1799 = (unsigned __int16 *)v779;
                      }
                      else
                      {
                        v780 = GetLastError();
                        v655 = v780;
                        if ( v780 > 0 )
                          v655 = (unsigned __int16)v780 | 0x80070000;
                        if ( v655 >= 0 )
                          v655 = -2147467259;
                      }
                      off_180646260[0](0LL, v776);
                      if ( v655 < 0 )
                        goto LABEL_931;
                      v781 = 0;
                      v782 = 0;
                      if ( Srcc != 1 )
                      {
                        if ( Srcc == 2 )
                        {
                          v782 = 0;
                          v781 = SDWORD2(v1752) / 4;
LABEL_991:
                          *((_QWORD *)&v1813 + 1) = __PAIR64__(v782, v781);
                          if ( Srcc == 1 )
                          {
                            v783 = 150;
                            v1454 = 32;
                          }
                          else
                          {
                            if ( (unsigned int)(Srcc - 2) > 1 )
                            {
                              v1454 = 42;
                              v784 = 42;
                              v783 = 42;
                              goto LABEL_998;
                            }
                            v783 = 0;
                            v1454 = 0;
                          }
                          v784 = 0;
LABEL_998:
                          v1465 = v783;
                          v785 = v1795;
                          v655 = 0;
                          v786 = v781 - v783 - v784;
                          DWORD2(v1803) = v786;
                          DWORD2(v1802) = v786;
                          v1399 = (unsigned __int16 *)((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, unsigned __int16 *))off_180646178)(
                                                        v1442,
                                                        v1798);
                          if ( !(unsigned int)((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, void *, __int64, __int128 *, int, _QWORD))off_1806461D8)(
                                                v1442,
                                                v785,
                                                0xFFFFFFFFLL,
                                                &v1802,
                                                3152,
                                                0LL) )
                            v655 = -2147467259;
                          if ( v1399 )
                            off_180646178(v1442, (int)v1399);
                          LODWORD(v653) = 0;
                          if ( v655 < 0 )
                            goto LABEL_930;
                          v655 = 0;
                          v787 = v1796;
                          v1400 = (unsigned __int16 *)((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, unsigned __int16 *))off_180646178)(
                                                        v1442,
                                                        v1799);
                          if ( !(unsigned int)((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, void *, __int64, __int128 *, int, _QWORD))off_1806461D8)(
                                                v1442,
                                                v787,
                                                0xFFFFFFFFLL,
                                                &v1803,
                                                3152,
                                                0LL) )
                            v655 = -2147467259;
                          if ( v1400 )
                            off_180646178(v1442, (int)v1400);
                          LODWORD(v653) = 0;
                          if ( v655 < 0 )
                            goto LABEL_930;
                          if ( (unsigned int)(Srcc - 2) <= 1 )
                          {
                            v786 = DWORD2(v1803);
                            if ( SDWORD2(v1802) > SDWORD2(v1803) )
                              v786 = DWORD2(v1802);
                          }
                          if ( v1793 )
                          {
                            off_180646250(
                              (CToastCenterExperienceManager *)&v1802,
                              (struct CSingleViewShellExperience *)(unsigned int)(v786 + v784 - DWORD2(v1802)));
                            v788 = (unsigned int)(v786 + v784 - DWORD2(v1803));
                          }
                          else
                          {
                            off_180646250(
                              (CToastCenterExperienceManager *)&v1802,
                              (struct CSingleViewShellExperience *)v1465);
                            v788 = v1465;
                          }
                          ((void (__fastcall *)(__int128 *, __int64, _QWORD))off_180646250)(
                            &v1803,
                            v788,
                            (unsigned int)(HIDWORD(v1802) + v1454));
                          v652 = Srcc;
                          if ( (unsigned int)(Srcc - 2) <= 1 )
                          {
                            *((_QWORD *)&v1813 + 1) = __PAIR64__(HIDWORD(v1803), v786);
                            v1801 = -5723992;
                          }
                          else if ( Srcc == 1 )
                          {
                            v1801 = 0xFFFFFF;
                            memset_0(v1854, 0, 0x5CuLL);
                            v655 = 0;
                            v653 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1806461F8[0])(0LL, 0LL, 1027LL);
                            if ( v653 )
                            {
                              v790 = v1382;
                              v795 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1806461B8)(11LL, v1382);
                              v1854[4] = 400;
                              v1854[0] = -v795;
                              v1855 = 5;
                              StringCchCopyW((char *)&v1856, 32LL, (char *)v1412);
                              v796 = ((__int64 (__fastcall *)(_DWORD *))off_180646120[0])(v1854);
                              if ( v796 )
                              {
                                v1800 = v796;
                              }
                              else
                              {
                                v655 = GetLastError();
                                v797 = v655 < 0;
                                if ( v655 > 0 )
                                {
                                  v655 = (unsigned __int16)v655 | 0x80070000;
                                  v797 = v655 < 0;
                                }
                                if ( !v797 )
                                  v655 = -2147467259;
                              }
                              off_180646260[0](0LL, v653);
                              LODWORD(v653) = 0;
                            }
                            else
                            {
                              v789 = GetLastError();
                              v655 = v789;
                              if ( v789 > 0 )
                                v655 = (unsigned __int16)v789 | 0x80070000;
                              if ( v655 >= 0 )
                              {
LABEL_979:
                                v655 = -2147467259;
                                goto LABEL_931;
                              }
                              v790 = v1382;
                            }
                            if ( v655 < 0 )
                              goto LABEL_930;
                            v655 = 0;
                            v791 = v1797;
                            v1806 = v786;
                            v792 = ((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, __int64))off_180646178)(v1442, v1800);
                            if ( !(unsigned int)((__int64 (__fastcall *)(WARBIRD_DELAY_LOAD *, void *, __int64, unsigned int *, int, _QWORD))off_1806461D8)(
                                                  v1442,
                                                  v791,
                                                  0xFFFFFFFFLL,
                                                  &v1804,
                                                  1120,
                                                  0LL) )
                              v655 = -2147467259;
                            if ( v792 )
                              off_180646178(v1442, v792);
                            LODWORD(v653) = 0;
                            if ( v655 < 0 )
                              goto LABEL_930;
                            v793 = v1806 + 24;
                            if ( (int)(v1806 + 24) < 90 )
                              v793 = 90;
                            v1806 = v793;
                            v1807 = 32;
                            v1804 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1806461B8)(v1804, v790, 96LL);
                            v1805 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1806461B8)(v1805, v790, 96LL);
                            v1806 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1806461B8)(v1806, v790, 96LL);
                            v1807 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1806461B8)(v1807, v790, 96LL);
                            if ( v1793 )
                            {
                              v794 = (unsigned int)v1802;
                              if ( (int)v1802 >= (int)v1803 )
                                v794 = (unsigned int)v1803;
                            }
                            else
                            {
                              v798 = DWORD2(v1802);
                              if ( SDWORD2(v1802) <= SDWORD2(v1803) )
                                v798 = DWORD2(v1803);
                              v794 = v1804 + v798 - v1806;
                            }
                            off_180646250(
                              (CToastCenterExperienceManager *)&v1804,
                              (struct CSingleViewShellExperience *)v794);
                            v652 = Srcc;
                          }
                          v799 = v1793;
                          v800 = HIDWORD(v1813);
                          v801 = DWORD2(v1813);
                          switch ( v652 )
                          {
                            case 1:
                              LODWORD(v653) = 0;
                              *(_QWORD *)&v1813 = 0LL;
                              goto LABEL_1051;
                            case 2:
                              v1827 = 0LL;
                              v1825 = 0LL;
                              v1826 = 0LL;
                              v805 = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(_QWORD))off_180646248[0])(0LL);
                              LODWORD(v1825) = 40;
                              if ( !(unsigned int)off_180646208(v805, (struct CSingleViewShellExperience *)&v1825) )
                                goto LABEL_1050;
                              off_180646240[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1826 + 4));
                              off_180646240[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1826 + 12));
                              if ( v799 )
                                v803 = DWORD1(v1826) + 5 * HIDWORD(v1826) / 100;
                              else
                                v803 = 95 * (HIDWORD(v1826) - v801) / 100;
                              v804 = 95 * (v1827 - v800);
                              break;
                            case 3:
                              v1824 = 0LL;
                              v1822 = 0LL;
                              v1823 = 0LL;
                              v802 = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(_QWORD))off_180646248[0])(0LL);
                              LODWORD(v1822) = 40;
                              if ( !(unsigned int)off_180646208(v802, (struct CSingleViewShellExperience *)&v1822) )
                                goto LABEL_1050;
                              off_180646240[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1823 + 4));
                              off_180646240[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1823 + 12));
                              v803 = 50 * (HIDWORD(v1823) - v801) / 100;
                              v804 = 50 * (v1824 - v800);
                              break;
                            default:
                              goto LABEL_1050;
                          }
                          LODWORD(v1813) = v803;
                          DWORD1(v1813) = v804 / 100;
LABEL_1050:
                          LODWORD(v653) = 0;
LABEL_1051:
                          v655 = 0;
                          goto LABEL_931;
                        }
                        if ( Srcc != 3 )
                          goto LABEL_991;
                      }
                      v781 = DWORD2(v1752);
                      v782 = HIDWORD(v1752);
                      goto LABEL_991;
                    }
                    v1463 = 15;
                  }
                  v1452 = 11;
                  goto LABEL_918;
                }
LABEL_815:
                v656 = GetLastError();
                v655 = v656;
                if ( v656 > 0 )
                  v655 = (unsigned __int16)v656 | 0x80070000;
                if ( v655 >= 0 )
                  v655 = -2147467259;
                goto LABEL_832;
              }
              v1690 = 0LL;
            }
            else
            {
              v1689 = 0LL;
            }
            v655 = -2147024882;
            goto LABEL_832;
          }
          v583 = g_WarbirdSecureFunctionsRefCount;
        }
        g_WarbirdSecureFunctionsRefCount = v583 + 1;
        goto LABEL_809;
      }
      v514 = g_WarbirdSecureFunctionsRefCount;
    }
    g_WarbirdSecureFunctionsRefCount = v514 + 1;
    goto LABEL_761;
  }
LABEL_1316:
  SH_HANDLE::~SH_HANDLE(&v1678);
  if ( v1579 )
  {
    v1751 = 0LL;
    v1014 = 0LL;
    v1705 = &`WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher;
    *(_OWORD *)v1754 = 0LL;
    v1015 = GetProcessHeap();
    v1016 = HeapAlloc(v1015, 8u, 0xA0uLL);
    if ( v1016 )
    {
      v1017 = v1705;
      v1502 = v1016;
      *v1016 = *v1705;
      v1016[1] = v1017[1];
      v1016[2] = v1017[2];
      v1016[3] = v1017[3];
      v1016[4] = v1017[4];
      v1016[5] = v1017[5];
      v1016[6] = v1017[6];
      v1016[7] = v1017[7];
      v1016[8] = v1017[8];
      v1016[9] = v1017[9];
      v1706 = &`WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
      v1018 = GetProcessHeap();
      v1019 = HeapAlloc(v1018, 8u, 8uLL);
      v1020 = v1019;
      if ( v1019 )
      {
        v159 = v1019;
        v1515 = v1019;
        *v1019 = *v1706;
        v1707 = __rdtsc();
        v1584 = 0;
        if ( (int)RtlUIntAdd(4LL, 4LL, &v1585) >= 0
          && (int)RtlUIntAdd(0LL, v1585, &v1584) >= 0
          && (int)RtlUIntAdd(v1021, 160LL, &v1586) >= 0 )
        {
          v1022 = RtlUIntAdd(v1584, v1586, &v1584);
          if ( (v1024 | v1022) >= 0 && (int)RtlUIntAdd(v1023, 8LL, &v1587) >= 0 )
          {
            v1025 = RtlUIntAdd(v1584, v1587, &v1584);
            if ( (v1027 | v1025) >= 0 && (int)RtlUIntAdd(v1026, 8LL, v1588) >= 0 )
            {
              v1588[1] = v1588[0];
              v1028 = RtlUIntAdd(v1584, v1588[0], &v1584);
              if ( (v1029 | v1028) >= 0 )
              {
                HIDWORD(v1750) = v1584;
                v1030 = v1584;
                v1031 = GetProcessHeap();
                v1032 = (unsigned int *)HeapAlloc(v1031, 8u, v1030);
                v1033 = v1032;
                if ( v1032 )
                {
                  v1751 = v1032;
                  LODWORD(v1750) = 0;
                  v1589 = 4;
                  if ( (int)RtlULongLongAdd(v1032, 4LL, &v1755) >= 0
                    && v1033 + 2 <= (unsigned int *)((char *)v1033 + HIDWORD(v1750)) )
                  {
                    v1036 = v1755;
                    *v1033 = v1034;
                    *v1036 = v1589;
                    v1037 = v1750 + 1;
                    LODWORD(v1750) = v1750 + 1;
                    if ( v1751 == v1035 )
                    {
                      if ( (int)RtlUIntAdd(v1034, 160LL, &v1590) < 0 )
                        goto LABEL_1705;
                      v1591 = v1590;
                      if ( (int)RtlUIntAdd(HIDWORD(v1750), v1590, (char *)&v1750 + 4) >= 0 )
                      {
                        v1040 = (_DWORD)v1039 + 1;
                        v1041 = (_DWORD)v1039 + 1 + v1750;
                        LODWORD(v1750) = v1041;
                        goto LABEL_1342;
                      }
                    }
                    else
                    {
                      v1042 = v1751;
                      v1708 = v1751;
                      if ( v1037 )
                      {
                        while ( (int)RtlUIntAdd(4LL, (unsigned int)*v1042, &v1592) >= 0 )
                        {
                          v1591 = v1592;
                          if ( (int)RtlULongLongAdd(v1042, v1592, &v1708) < 0 )
                            goto LABEL_1334;
                          v1042 = v1708;
                          if ( v1043 + 1 >= v1044 )
                            goto LABEL_1339;
                        }
                        goto LABEL_1705;
                      }
LABEL_1339:
                      v1045 = RtlULongLongAdd(v1042, 4LL, &v1738);
                      if ( v1045 >= 0 && v1042 + 41 <= (_DWORD *)((char *)v1751 + HIDWORD(v1750)) )
                      {
                        v1046 = v1738;
                        v1047 = v1038 + 124;
                        *v1042 = 160;
                        *v1046 = *v1016;
                        v1046[1] = v1016[1];
                        v1046[2] = v1016[2];
                        v1046[3] = v1016[3];
                        v1046[4] = v1016[4];
                        v1046[5] = v1016[5];
                        v1046[6] = v1016[6];
                        *(_OWORD *)((char *)v1046 + v1047 - 16) = v1016[7];
                        *(_OWORD *)((char *)v1046 + v1047) = *(_OWORD *)((char *)v1016 + v1047);
                        v1048 = *(_OWORD *)((char *)v1016 + v1047 + 16);
                        v1040 = v1038 - 3;
                        *(_OWORD *)((char *)v1046 + v1047 + 16) = v1048;
                        v1041 = v1038 - 3 + v1750;
                        LODWORD(v1750) = v1041;
LABEL_1342:
                        if ( v1751 == v1039 )
                        {
                          if ( (int)RtlUIntAdd(v1038, 8LL, &v1593) < 0 )
                            goto LABEL_1705;
                          v1594 = v1593;
                          if ( (int)RtlUIntAdd(HIDWORD(v1750), v1593, (char *)&v1750 + 4) < 0 )
                            goto LABEL_1705;
                          v1051 = v1040 + v1750;
                          LODWORD(v1750) = v1040 + v1750;
                        }
                        else
                        {
                          v1052 = (unsigned int *)v1751;
                          v1709 = (unsigned int *)v1751;
                          if ( v1041 )
                          {
                            while ( (int)RtlUIntAdd(4LL, *v1052, &v1595) >= 0 )
                            {
                              v1594 = v1595;
                              if ( (int)RtlULongLongAdd(v1053, v1595, &v1709) < 0 )
                                break;
                              v1052 = v1709;
                              if ( v1040 + v1054 >= v1041 )
                                goto LABEL_1350;
                            }
                            goto LABEL_1705;
                          }
LABEL_1350:
                          v1055 = RtlULongLongAdd(v1052, 4LL, &v1743);
                          if ( v1055 < 0 || v1056 + 3 > (_DWORD *)((char *)v1751 + HIDWORD(v1750)) )
                            goto LABEL_1705;
                          v1057 = v1743;
                          *v1056 = 8;
                          *v1057 = *v1020;
                          v1051 = v1040 + v1750;
                          LODWORD(v1750) = v1040 + v1750;
                          v1049 = 4;
                        }
                        v1710 = v1707;
                        if ( v1751 == v1050 )
                        {
                          if ( (int)RtlUIntAdd(v1049, 8LL, &v1596) < 0 )
                            goto LABEL_1705;
                          v1614 = v1596;
                          if ( (int)RtlUIntAdd(HIDWORD(v1750), v1596, (char *)&v1750 + 4) < 0 )
                            goto LABEL_1705;
                        }
                        else
                        {
                          v1059 = (unsigned int *)v1751;
                          v1711 = (unsigned int *)v1751;
                          if ( v1051 )
                          {
                            while ( (int)RtlUIntAdd(4LL, *v1059, &v1598) >= 0 )
                            {
                              v1614 = v1598;
                              if ( (int)RtlULongLongAdd(v1060, v1598, &v1711) < 0 )
                                break;
                              v1059 = v1711;
                              if ( v1040 + v1061 >= v1051 )
                                goto LABEL_1361;
                            }
                            goto LABEL_1705;
                          }
LABEL_1361:
                          if ( (int)RtlULongLongAdd(v1059, 4LL, &v1739) < 0
                            || v1062 + 3 > (_DWORD *)((char *)v1751 + HIDWORD(v1750)) )
                          {
                            goto LABEL_1705;
                          }
                          v1063 = v1739;
                          *v1062 = 8;
                          v1058 = 4;
                          *v1063 = v1710;
                        }
                        LODWORD(v1750) = v1040 + v1750;
                        if ( (int)RtlUIntAdd(v1058, v1058, &v1599) >= 0 )
                        {
                          v1065 = v1599;
                          v1600 = v1599;
                          if ( (int)RtlUIntAdd(v1064, 8LL, v1601) >= 0 )
                          {
                            v1601[1] = v1601[0];
                            if ( (int)RtlUIntAdd(v1065, v1601[0], &v1600) >= 0 )
                            {
                              v1407 = v1600;
                              v1521 = v1066;
                              v1067 = v1066;
                              v1422 = (unsigned int)v1066;
                              v1068 = (int *)v1066;
                              v1712 = v1066;
                              v1520 = v1066;
                              v1434 = (unsigned int)v1066;
                              v1519 = v1066;
                              v1602 = (unsigned int)v1066;
                              v1514 = (__int64)v1066;
                              v1624 = (__int64)v1066;
                              v1603 = (unsigned int)v1066;
                              v1713 = __rdtsc();
                              v1604 = 8;
                              v1069 = RtlUIntAdd(8LL, HIDWORD(v1750), &v1604);
                              if ( v1069 >= 0 )
                              {
                                v1073 = (v1604 + 7) & 0xFFFFFFF8;
                                if ( v1073 >= v1604 )
                                {
                                  v1604 = (v1604 + 7) & 0xFFFFFFF8;
                                  v1074 = v1073;
                                  v1075 = GetProcessHeap();
                                  v1076 = (char *)HeapAlloc(v1075, 8u, v1074);
                                  v1072 = 0LL;
                                  v1077 = v1076;
                                  if ( v1076 )
                                  {
                                    v1714 = v1076;
                                    *(_DWORD *)v1076 = v1750;
                                    v1069 = RtlULongLongAdd(v1076, 4LL, &v1714);
                                    if ( v1069 < 0
                                      || (v1079 = v1714,
                                          *(_DWORD *)v1714 = HIDWORD(v1750),
                                          v1069 = RtlULongLongAdd(v1079, v1078, &v1714),
                                          v1069 < 0) )
                                    {
                                      v1070 = (unsigned int)v1072;
                                      v1071 = (unsigned int)v1072;
                                    }
                                    else
                                    {
                                      *(_QWORD *)&v1077[v1604 - 8] = v1713;
                                      memcpy_0(v1714, v1751, HIDWORD(v1750));
                                      v1070 = v1604;
                                      v1072 = 0LL;
                                      v1071 = (unsigned __int64)v1077;
                                      v1521 = v1077;
                                      v1077 = 0LL;
                                      v1422 = v1604;
                                    }
                                    if ( v1077 )
                                    {
                                      v1080 = GetProcessHeap();
                                      HeapFree(v1080, 0, v1077);
                                      v1070 = v1422;
                                      v1072 = 0LL;
                                      v1071 = (unsigned __int64)v1521;
                                    }
                                  }
                                  else
                                  {
                                    v1070 = 0;
                                    v1069 = -1073741801;
                                    v1071 = 0LL;
                                  }
                                }
                                else
                                {
                                  v1069 = -1073741675;
                                }
                              }
                              v1081 = v1069 | 0x10000000;
                              if ( v1081 < 0 )
                                goto LABEL_1499;
                              v1715 = v1072;
                              v1082 = v1072;
                              v1513 = v1072;
                              if ( v1071 )
                              {
                                v1084 = v1070;
                                v1512 = (void *)v1070;
                                if ( v1070 && (v1494 = MemoryAlloc(v1070 + 8LL)) != 0LL )
                                {
                                  v1085 = (unsigned __int8 *)v1521;
                                  v1086 = 0;
                                  v1379 = 0;
                                  v1087 = 0LL;
                                  if ( v1084 )
                                  {
                                    do
                                      v1086 ^= *((_BYTE *)v1521 + v1087++);
                                    while ( v1087 < v1084 );
                                    v1379 = v1086;
                                  }
                                  v1810 = 0xC81ECB17B1B54A58uLL;
                                  v1088 = v1494;
                                  v1423 = 0;
                                  v1449 = 0;
                                  v1089 = -1;
                                  v1090 = 0;
                                  v1091 = v1084 & 7;
                                  if ( (v1084 & 7) != 0 )
                                  {
                                    v1423 = 0;
                                    v1092 = 56;
                                    v1093 = 0;
                                    do
                                    {
                                      v1094 = *v1085++;
                                      if ( v1090 >= 4 )
                                      {
                                        v1095 = (v1094 << v1092) | v1423;
                                        v1423 = v1095;
                                      }
                                      else
                                      {
                                        v1095 = v1423;
                                        v1093 |= v1094 << (v1092 - 32);
                                      }
                                      ++v1090;
                                      v1092 -= 8;
                                    }
                                    while ( v1090 < (int)v1091 );
                                    v87 = v1503;
                                    v1449 = v1093;
                                    v1437 = (unsigned int)v1067 & v1436;
                                    v1090 = v1093 ^ 0xB17A307A;
                                    v1096 = v1095 ^ 0x42F6B18D;
                                    v1097 = v1093 ^ 0xB17A307A;
                                    v1098 = v1096;
                                    if ( (v1084 & 7) != 0 )
                                    {
                                      v1099 = v1437;
                                      do
                                      {
                                        v1511 = v1088 + 1;
                                        if ( v1099 >= 4 )
                                        {
                                          v1098 = __ROL4__(v1098, 8);
                                          v1100 = v1098;
                                        }
                                        else
                                        {
                                          v1097 = __ROL4__(v1097, 8);
                                          v1100 = v1097;
                                        }
                                        *v1088 = v1100;
                                        ++v1099;
                                        v1088 = v1511;
                                      }
                                      while ( v1099 < (int)v1091 );
                                      v87 = v1503;
                                      v1067 = (_DWORD *)v1514;
                                    }
                                    if ( v1091 <= 4 )
                                    {
                                      v1089 = 0;
                                      if ( v1091 < 4 )
                                        v1090 = (unsigned int)v1090 >> (8 * (4 - v1091)) << (8 * (4 - v1091));
                                    }
                                    else
                                    {
                                      v1089 = v1096 >> (8 * (8 - v1091)) << (8 * (8 - v1091));
                                    }
                                  }
                                  v1101 = v1084 >> 3;
                                  if ( v1084 >> 3 )
                                  {
                                    v1102 = v1088 + 7;
                                    v1103 = v1423;
                                    v1104 = v1101;
                                    v1105 = v1449;
                                    v1106 = WORD2(v1810);
                                    v1438 = HIWORD(v1810);
                                    v1491 = WORD1(v1810);
                                    v1509 = HIDWORD(v1810) ^ 0xB1B54A58;
                                    v1107 = v1085 + 2;
                                    do
                                    {
                                      v1108 = *(v1107 - 1) | (*(v1107 - 2) << 8);
                                      v1109 = v1107[2] << 8;
                                      v1110 = *v1107;
                                      v1107 += 8;
                                      v1111 = *(v1107 - 7) | ((v1110 | (v1108 << 8)) << 8);
                                      v1112 = *(v1107 - 3) | ((*(v1107 - 4) | ((*(v1107 - 5) | v1109) << 8)) << 8);
                                      v1113 = v1112 ^ v1089;
                                      v1114 = HIDWORD(v1810) ^ v1111 ^ (v1113 - 19032) ^ v1090;
                                      v1115 = (__ROR4__(v1114, 7) + WORD1(v1810) * __ROR4__(HIDWORD(v1810) ^ v1114, 15)) ^ v1113;
                                      v1116 = (v1106 * __ROR4__(v1115 - 1313519016, 9) - __ROR4__(v1115, 10)) ^ v1114;
                                      v1117 = (__ROL4__(v1116, 5) + HIWORD(v1810) * __ROL4__(v1106 ^ v1116, 4)) ^ v1115;
                                      v1118 = (HIDWORD(v1810) - (v1117 ^ 0xB1B54A58)) ^ v1116;
                                      v1119 = (WORD1(v1810) * (v1118 - 19032) - (v1118 >> 6)) ^ v1117;
                                      v1120 = (19032 * (v1106 ^ __ROR4__(v1119, 15))) ^ v1118;
                                      v1121 = (v1106 * (HIWORD(v1810) + __ROR4__(~v1120, 3))) ^ v1119;
                                      v1122 = (v1121 - 19032 - HIDWORD(v1810)) ^ v1120;
                                      v1123 = (v1491 * (v1438 ^ v1122)) ^ __ROR4__(v1122, 10) ^ v1121;
                                      v1124 = __ROR4__(v1123, 3) ^ (v1106 * __ROL4__(v1123 ^ 0x4A58, 6)) ^ v1122;
                                      v1125 = (19032 * (__ROR4__(v1124, 15) - HIWORD(v1810))) ^ v1123;
                                      v1126 = (v1125 >> 15) ^ (19032 * __ROL4__(v1125 - v1106, 3)) ^ (v1125 >> 1) ^ (19032 * (HIWORD(v1810) ^ v1125)) ^ v1124;
                                      v1127 = (WORD1(v1810) * (v1126 - v1106) - (v1126 >> 13)) ^ v1125;
                                      v1128 = __ROR4__(v1127, 11) ^ (v1106 * __ROR4__(-1313519016 - v1127, 9)) ^ v1126;
                                      v1129 = (v1128 - HIWORD(v1810) + 1313519016) ^ v1127;
                                      v1130 = (19032 * (v1491 ^ v1129) - __ROR4__(v1129, 7)) ^ v1128;
                                      v1131 = (WORD1(v1810) * __ROL4__(HIWORD(v1810) ^ v1130, 4) - __ROR4__(v1130, 16)) ^ v1129;
                                      v1132 = (__ROR4__(v1131, 4) + v1106 * __ROR4__(-1313519016 - v1131, 10)) ^ v1130;
                                      v1133 = __ROR4__(v1132, 9) ^ (HIWORD(v1810) * __ROR4__(v1132 + 1313519016, 4)) ^ v1131;
                                      v1134 = (19032 * __ROL4__(HIDWORD(v1810) ^ v1133, 8) - __ROL4__(v1133, 2)) ^ v1132;
                                      v1135 = (WORD1(v1810) * __ROR4__(HIDWORD(v1810) - v1134, 11) - __ROR4__(v1134, 12)) ^ v1133;
                                      v1136 = (v1135 >> 8) ^ (v1106 * (WORD1(v1810) ^ v1135)) ^ v1134;
                                      v1137 = v1136 ^ v1135;
                                      v1138 = v1105 ^ v1136;
                                      v1105 = v1111;
                                      *(v1102 - 4) = v1138;
                                      v1139 = v1103 ^ v1509 ^ v1137;
                                      *v1102 = v1139;
                                      v1103 = v1112;
                                      v1140 = __ROR4__(v1138, 8);
                                      *(v1102 - 5) = v1140;
                                      v1102 += 8;
                                      v1141 = __ROR4__(v1139, 8);
                                      *(v1102 - 9) = v1141;
                                      v1142 = __ROR4__(v1140, 8);
                                      *(v1102 - 14) = v1142;
                                      v1143 = __ROR4__(v1141, 8);
                                      *(v1102 - 10) = v1143;
                                      v1144 = __ROR4__(v1142, 8);
                                      v1145 = __ROR4__(v1143, 8);
                                      *(v1102 - 15) = v1144;
                                      *(v1102 - 11) = v1145;
                                      v1089 = __ROR4__(v1145, 8);
                                      v1090 = __ROR4__(v1144, 8);
                                      --v1104;
                                    }
                                    while ( v1104 );
                                    v1086 = v1379;
                                    v87 = v1503;
                                    v1067 = (_DWORD *)v1514;
                                    v1082 = v1513;
                                    v1084 = (unsigned __int64)v1512;
                                  }
                                  v1146 = v1084 + 8;
                                  *(_QWORD *)&v1494[v1084] = v1086;
                                  v1715 = v1494;
                                  v1716 = (char *)(v1084 + 8);
                                  v1717 = &`WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                                  v1718 = 8LL;
                                  v1720 = 160LL;
                                  v1719 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher;
                                  v1147 = GetProcessHeap();
                                  v1148 = HeapAlloc(v1147, 8u, 0x30uLL);
                                  v1149 = v1148;
                                  if ( v1148 )
                                  {
                                    *v1148 = v1146;
                                    v1150 = GetProcessHeap();
                                    v1151 = HeapAlloc(v1150, 8u, v1146);
                                    if ( !v1151 )
                                      goto LABEL_1410;
                                    *((_QWORD *)v1149 + 1) = v1151;
                                    memcpy_0(v1151, v1494, v1146);
                                    v1149[4] = 160;
                                    v1152 = GetProcessHeap();
                                    v1153 = HeapAlloc(v1152, 8u, 0xA0uLL);
                                    if ( !v1153 )
                                      goto LABEL_1410;
                                    *((_QWORD *)v1149 + 3) = v1153;
                                    *v1153 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
                                    v1153[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
                                    v1153[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
                                    v1153[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
                                    v1153[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
                                    v1153[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
                                    v1153[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
                                    v1153[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
                                    v1153[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
                                    v1153[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
                                    v1149[8] = 8;
                                    v1154 = GetProcessHeap();
                                    v1155 = HeapAlloc(v1154, 8u, 8uLL);
                                    if ( v1155 )
                                    {
                                      *((_QWORD *)v1149 + 5) = v1155;
                                      v1082 = v1149;
                                      *v1155 = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                                      v1083 = 0;
                                      v1149 = 0LL;
                                    }
                                    else
                                    {
LABEL_1410:
                                      v1083 = -1073741801;
                                    }
                                    if ( v1149 )
                                    {
                                      v1156 = (void *)*((_QWORD *)v1149 + 1);
                                      if ( v1156 )
                                      {
                                        v1157 = GetProcessHeap();
                                        HeapFree(v1157, 0, v1156);
                                        *((_QWORD *)v1149 + 1) = 0LL;
                                      }
                                      v1158 = (void *)*((_QWORD *)v1149 + 3);
                                      if ( v1158 )
                                      {
                                        v1159 = GetProcessHeap();
                                        HeapFree(v1159, 0, v1158);
                                        *((_QWORD *)v1149 + 3) = 0LL;
                                      }
                                      v1160 = (void *)*((_QWORD *)v1149 + 5);
                                      if ( v1160 )
                                      {
                                        v1161 = GetProcessHeap();
                                        HeapFree(v1161, 0, v1160);
                                        *((_QWORD *)v1149 + 5) = 0LL;
                                      }
                                      v1162 = GetProcessHeap();
                                      HeapFree(v1162, 0, v1149);
                                    }
                                  }
                                  else
                                  {
                                    v1083 = -1073741801;
                                  }
                                  if ( v1083 >= 0 )
                                  {
                                    v1712 = v1082;
                                    v1082 = 0LL;
                                  }
                                }
                                else
                                {
                                  v1083 = -1073741823;
                                }
                                v1163 = v1715;
                                if ( v1715 )
                                {
                                  v1164 = GetProcessHeap();
                                  HeapFree(v1164, 0, v1163);
                                  v1715 = 0LL;
                                }
                                if ( v1082 )
                                {
                                  v1165 = (void *)v1082[1];
                                  if ( v1165 )
                                  {
                                    v1166 = GetProcessHeap();
                                    HeapFree(v1166, 0, v1165);
                                    v1082[1] = 0LL;
                                  }
                                  v1167 = (void *)v1082[3];
                                  if ( v1167 )
                                  {
                                    v1168 = GetProcessHeap();
                                    HeapFree(v1168, 0, v1167);
                                    v1082[3] = 0LL;
                                  }
                                  v1169 = (void *)v1082[5];
                                  if ( v1169 )
                                  {
                                    v1170 = GetProcessHeap();
                                    HeapFree(v1170, 0, v1169);
                                    v1082[5] = 0LL;
                                  }
                                  v1171 = GetProcessHeap();
                                  HeapFree(v1171, 0, v1082);
                                }
                              }
                              else
                              {
                                v1083 = -1073741811;
                              }
                              v1081 = v1083 | 0x10000000;
                              if ( v1081 < 0 )
                                goto LABEL_1498;
                              v1172 = (const void **)v1712;
                              v1173 = 4LL;
                              v1605 = 4;
                              v1174 = RtlUIntAdd(4LL, *(unsigned int *)v1712, &v1605);
                              if ( v1174 < 0
                                || (v1174 = RtlUIntAdd(v1605, 4LL, &v1605), v1174 < 0)
                                || (v1174 = RtlUIntAdd(v1605, *((unsigned int *)v1172 + 4), &v1605), v1174 < 0)
                                || (v1174 = RtlUIntAdd(v1605, 4LL, &v1605), v1174 < 0) )
                              {
                                v1176 = v1606;
                              }
                              else
                              {
                                v1174 = RtlUIntAdd(v1605, *((unsigned int *)v1172 + 8), &v1605);
                                v1176 = v1606;
                                if ( v1174 >= 0 )
                                  v1176 = v1605;
                                v1606 = v1176;
                              }
                              if ( v1174 >= 0 )
                              {
                                v1177 = v1176;
                                v1178 = GetProcessHeap();
                                v1179 = HeapAlloc(v1178, 8u, v1177);
                                v1175 = 0LL;
                                v1180 = v1179;
                                if ( v1179 )
                                {
                                  *v1179 = *(_DWORD *)v1172;
                                  v1721 = v1179;
                                  v1174 = RtlULongLongAdd(v1179, 4LL, &v1721);
                                  if ( v1174 >= 0 )
                                  {
                                    memcpy_0(v1721, v1172[1], *(unsigned int *)v1172);
                                    v1181 = RtlULongLongAdd(v1721, *(unsigned int *)v1172, &v1721);
                                    v1175 = 0LL;
                                    v1174 = v1181;
                                    if ( v1181 >= 0 )
                                    {
                                      v1182 = v1721;
                                      *(_DWORD *)v1721 = *((_DWORD *)v1172 + 4);
                                      v1174 = RtlULongLongAdd(v1182, 4LL, &v1721);
                                      if ( v1174 >= 0 )
                                      {
                                        memcpy_0(v1721, v1172[3], *((unsigned int *)v1172 + 4));
                                        v1183 = RtlULongLongAdd(v1721, *((unsigned int *)v1172 + 4), &v1721);
                                        v1175 = 0LL;
                                        v1174 = v1183;
                                        if ( v1183 >= 0 )
                                        {
                                          v1184 = v1721;
                                          *(_DWORD *)v1721 = *((_DWORD *)v1172 + 8);
                                          v1174 = RtlULongLongAdd(v1184, 4LL, &v1721);
                                          if ( v1174 >= 0 )
                                          {
                                            memcpy_0(v1721, v1172[5], *((unsigned int *)v1172 + 8));
                                            v1185 = RtlULongLongAdd(v1721, *((unsigned int *)v1172 + 8), &v1721);
                                            v1175 = 0LL;
                                            v1174 = v1185;
                                            if ( v1185 >= 0 )
                                            {
                                              v1520 = v1180;
                                              v1180 = 0LL;
                                              v1434 = v1606;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  if ( v1180 )
                                  {
                                    v1186 = GetProcessHeap();
                                    HeapFree(v1186, 0, v1180);
                                    v1175 = 0LL;
                                  }
                                }
                                else
                                {
                                  v1174 = -1073741801;
                                }
                              }
                              v1081 = v1174 | 0x10000000;
                              if ( v1081 < 0 )
                                goto LABEL_1498;
                              v1722 = v1175;
                              v1607 = (unsigned int)v1175;
                              v1723 = v1175;
                              v1608 = (unsigned int)v1175;
                              v1609 = 8;
                              v1187 = RtlUIntAdd(8LL, v1407, &v1609);
                              v1081 = v1187 | 0x10000000;
                              if ( v1187 < 0 )
                                goto LABEL_1539;
                              v1189 = (v1609 + 7) & 0xFFFFFFF8;
                              if ( v1189 >= v1609 )
                              {
                                v1611 = (v1609 + 7) & 0xFFFFFFF8;
                                v1190 = RtlUIntAdd(v1189, v1188, &v1611);
                                v1191 = v1610;
                                v1081 = v1190;
                                if ( v1190 >= 0 )
                                  v1191 = v1611;
                                v1610 = v1191;
                              }
                              else
                              {
                                v1081 = -1073741675;
                              }
                              if ( v1081 < 0 )
                              {
LABEL_1542:
                                v1173 = 4LL;
                                goto LABEL_1539;
                              }
                              if ( v1751 && (unsigned int)v1750 > 1 )
                              {
                                v1192 = (unsigned int *)v1751;
                                v1193 = 0;
                                v1724 = (unsigned int *)v1751;
                                while ( 1 )
                                {
                                  v1194 = *v1192;
                                  v1081 = RtlULongLongAdd(v1192, 4LL, &v1724);
                                  if ( v1081 < 0 )
                                    break;
                                  v1081 = RtlULongLongAdd(v1724, v1194, &v1724);
                                  if ( v1081 < 0 )
                                    break;
                                  v1192 = v1724;
                                  if ( ++v1193 )
                                  {
                                    v1195 = *v1724;
                                    v1081 = RtlULongLongAdd(v1724, 4LL, &v1724);
                                    if ( v1081 >= 0 )
                                    {
                                      v1196 = v1724;
                                      v1607 = v1195;
                                      if ( !v1195 )
                                        v1196 = 0LL;
                                      v1724 = v1196;
                                      v1722 = v1196;
                                    }
                                    break;
                                  }
                                }
                                if ( v1081 < 0 )
                                  goto LABEL_1466;
                                if ( (unsigned int)v1750 > 2 )
                                {
                                  v1197 = (unsigned int *)v1751;
                                  v1198 = 0;
                                  v1725 = (unsigned int *)v1751;
                                  while ( 1 )
                                  {
                                    v1199 = *v1197;
                                    v1081 = RtlULongLongAdd(v1197, 4LL, &v1725);
                                    if ( v1081 < 0 )
                                      break;
                                    v1081 = RtlULongLongAdd(v1725, v1199, &v1725);
                                    if ( v1081 < 0 )
                                      break;
                                    v1197 = v1725;
                                    if ( (unsigned int)++v1198 >= 2 )
                                    {
                                      v1201 = *v1725;
                                      v1081 = RtlULongLongAdd(v1725, 4LL, &v1725);
                                      if ( v1081 >= 0 )
                                      {
                                        v1202 = v1725;
                                        v1608 = v1201;
                                        if ( !v1201 )
                                          v1202 = 0LL;
                                        v1725 = v1202;
                                        v1723 = v1202;
                                      }
                                      break;
                                    }
                                  }
                                  if ( v1081 >= 0 )
                                  {
                                    v1612 = 4;
                                    v1081 = RtlUIntAdd(4LL, v1200, &v1612);
                                    if ( v1081 < 0
                                      || (v1081 = RtlUIntAdd(v1612, (unsigned int)v1203, &v1612), v1081 < 0)
                                      || (v1081 = RtlUIntAdd(v1612, v1204, &v1612), v1081 < 0)
                                      || (v1081 = RtlUIntAdd(v1612, (unsigned int)v1203, &v1612), v1081 < 0) )
                                    {
                                      v1206 = v1613;
                                    }
                                    else
                                    {
                                      v1081 = RtlUIntAdd(v1612, v1205, &v1612);
                                      v1206 = v1613;
                                      if ( v1081 >= 0 )
                                        v1206 = v1612;
                                      v1613 = v1206;
                                    }
                                    if ( v1081 >= 0 )
                                    {
                                      if ( v1206 > 0x400000 )
                                      {
                                        v1081 = -2147418113;
LABEL_1498:
                                        v1068 = (int *)v1624;
LABEL_1499:
                                        v1207 = v1521;
                                        if ( v1521 )
                                        {
                                          v1208 = GetProcessHeap();
                                          HeapFree(v1208, 0, v1207);
                                        }
                                        v1209 = v1712;
                                        if ( v1712 )
                                        {
                                          v1210 = (void *)*((_QWORD *)v1712 + 1);
                                          if ( v1210 )
                                          {
                                            v1211 = GetProcessHeap();
                                            HeapFree(v1211, 0, v1210);
                                            v1209[1] = 0LL;
                                          }
                                          v1212 = (void *)v1209[3];
                                          if ( v1212 )
                                          {
                                            v1213 = GetProcessHeap();
                                            HeapFree(v1213, 0, v1212);
                                            v1209[3] = 0LL;
                                          }
                                          v1214 = (void *)v1209[5];
                                          if ( v1214 )
                                          {
                                            v1215 = GetProcessHeap();
                                            HeapFree(v1215, 0, v1214);
                                            v1209[5] = 0LL;
                                          }
                                          v1216 = GetProcessHeap();
                                          HeapFree(v1216, 0, v1209);
                                          v1712 = 0LL;
                                        }
                                        v1217 = v1520;
                                        if ( v1520 )
                                        {
                                          v1218 = GetProcessHeap();
                                          HeapFree(v1218, 0, v1217);
                                        }
                                        v1219 = v1519;
                                        if ( v1519 )
                                        {
                                          v1220 = GetProcessHeap();
                                          HeapFree(v1220, 0, v1219);
                                        }
                                        if ( v1067 )
                                        {
                                          v1221 = (void *)*((_QWORD *)v1067 + 1);
                                          if ( v1221 )
                                          {
                                            v1222 = GetProcessHeap();
                                            HeapFree(v1222, 0, v1221);
                                            *((_QWORD *)v1067 + 1) = 0LL;
                                          }
                                          v1223 = (void *)*((_QWORD *)v1067 + 3);
                                          if ( v1223 )
                                          {
                                            v1224 = GetProcessHeap();
                                            HeapFree(v1224, 0, v1223);
                                            *((_QWORD *)v1067 + 3) = 0LL;
                                          }
                                          v1225 = (void *)*((_QWORD *)v1067 + 5);
                                          if ( v1225 )
                                          {
                                            v1226 = GetProcessHeap();
                                            HeapFree(v1226, 0, v1225);
                                            *((_QWORD *)v1067 + 5) = 0LL;
                                          }
                                          v1227 = GetProcessHeap();
                                          HeapFree(v1227, 0, v1067);
                                        }
                                        if ( v1068 )
                                        {
                                          v1228 = GetProcessHeap();
                                          HeapFree(v1228, 0, v1068);
                                        }
                                        if ( v1081 >= 0 )
                                        {
                                          if ( LODWORD(v1754[0]) )
                                          {
                                            v1229 = (unsigned int *)v1754[1];
                                            if ( v1754[1] )
                                            {
                                              v1733[0] = v1754[1];
                                              if ( (int)RtlULongLongAdd(v1754[1], 4LL, v1733) >= 0 )
                                              {
                                                v1233 = (int *)v1733[0];
                                                v1616[1] = v1231;
                                                if ( !v1231 )
                                                  v1233 = v1232;
                                                v1733[0] = v1233;
                                                v1733[1] = v1233;
                                                if ( v1231 == 4 )
                                                {
                                                  v1617 = *v1233;
                                                  if ( v1617 >= 0 && v1230 > 1 )
                                                  {
                                                    for ( v1734[0] = v1229;
                                                          (int)RtlULongLongAdd(v1229, 4LL, v1734) >= 0
                                                       && (int)RtlULongLongAdd(v1734[0], *v1229, v1734) >= 0;
                                                          v1229 = (unsigned int *)v1734[0] )
                                                    {
                                                      if ( v1234 != -1 )
                                                      {
                                                        v1368 = *(_DWORD *)v1734[0];
                                                        if ( (int)RtlULongLongAdd(v1734[0], 4LL, v1734) >= 0 )
                                                        {
                                                          v1370 = (_QWORD *)v1734[0];
                                                          v1618 = v1368;
                                                          if ( !v1368 )
                                                            v1370 = v1369;
                                                          v1734[0] = v1370;
                                                          v1734[1] = v1370;
                                                          if ( v1368 == 8 )
                                                            v1734[2] = *v1370;
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
                                        v159 = v1515;
                                        goto LABEL_1705;
                                      }
                                      v1602 = v1206;
                                    }
                                    v1173 = v1203;
LABEL_1539:
                                    if ( v1081 < 0 )
                                      goto LABEL_1498;
                                    v1235 = v1602;
                                    v1236 = GetProcessHeap();
                                    v1237 = (int *)HeapAlloc(v1236, 8u, v1235);
                                    if ( v1237 )
                                    {
                                      v1238 = v1237;
                                      v1519 = v1237;
                                      v1081 = 0x10000000;
                                    }
                                    else
                                    {
                                      v1081 = -805306345;
                                      v1238 = 0LL;
                                    }
                                    if ( v1081 >= 0 )
                                    {
                                      if ( v1520 && v1238 )
                                      {
                                        v1760[0] = v1520;
                                        v1761 = v1434;
                                        v1762 = v1602;
                                        v1760[1] = v1238;
                                        v1763 = 0;
                                        if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                                          && (v1241 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
                                        {
                                          v1242 = ((__int64 (__fastcall *)(__int64, _QWORD *))v1241)(134LL, v1760);
                                          v1240 = v1602;
                                          v1081 = v1242 | 0x10000000;
                                          if ( v1242 >= 0 )
                                            v1240 = v1762;
                                          v1602 = v1240;
                                        }
                                        else
                                        {
                                          v1239 = GetLastError();
                                          v1081 = v1239;
                                          if ( v1239 > 0 )
                                            v1081 = (unsigned __int16)v1239 | 0x80070000;
                                          if ( v1081 >= 0 )
                                            v1081 = -2147467259;
                                          v1240 = v1602;
                                        }
                                        v1243 = 0LL;
                                        if ( v1081 == -805306333 )
                                        {
                                          v1081 = -2147024774;
LABEL_1562:
                                          v1068 = 0LL;
                                          goto LABEL_1499;
                                        }
                                        if ( v1081 < 0 )
                                          goto LABEL_1562;
                                        v1513 = 0LL;
                                        v1630 = 0;
                                        v1727 = v1238;
                                        if ( v1240 < (unsigned int)v1173 )
                                          goto LABEL_1565;
                                        v1408 = *v1238;
                                        v1244 = RtlULongLongAdd(v1238, v1173, &v1727);
                                        if ( v1244 < 0
                                          || (v1244 = RtlUIntAdd(0LL, (unsigned int)v1173, &v1630), v1244 < 0) )
                                        {
LABEL_1618:
                                          v1081 = v1244 | 0x10000000;
                                          if ( v1081 < 0 )
                                            goto LABEL_1498;
                                          v1513 = v1243;
                                          v1283 = (int *)v1243;
                                          v1728 = (int *)v1243;
                                          v1284 = (unsigned int)v1243;
                                          if ( !v1067
                                            || (v1512 = (void *)*((_QWORD *)v1067 + 1)) == 0LL
                                            || *v1067 == (_DWORD)v1243 )
                                          {
                                            v1081 = -805306355;
                                            goto LABEL_1498;
                                          }
                                          v1409 = (int)v1243;
                                          if ( *v1067 )
                                          {
                                            v1285 = (unsigned int)*v1067 - 8LL;
                                            v1496 = v1285;
                                            v1286 = MemoryAlloc(v1285);
                                            LODWORD(v1243) = 0;
                                            v1511 = v1286;
                                            v1287 = v1286;
                                            if ( v1286 )
                                            {
                                              v1288 = (unsigned __int8 *)v1512;
                                              v1811 = 0x7F1137FAB69605ELL;
                                              v1289 = 0;
                                              v1290 = v1287;
                                              v1424 = 0;
                                              v1291 = v1285 & 7;
                                              if ( (v1285 & 7) != 0 )
                                              {
                                                v1518 = 0;
                                                v1292 = 0;
                                                v1293 = 56;
                                                do
                                                {
                                                  v1294 = *v1288++;
                                                  if ( v1292 >= 4 )
                                                  {
                                                    v1295 = (v1294 << v1293) | v1518;
                                                    v1518 = v1295;
                                                  }
                                                  else
                                                  {
                                                    v1295 = v1518;
                                                    LODWORD(v1243) = (v1294 << (v1293 - 32)) | (unsigned int)v1243;
                                                  }
                                                  ++v1292;
                                                  v1293 -= 8;
                                                }
                                                while ( v1292 < (int)v1291 );
                                                v87 = v1503;
                                                v1284 = (unsigned int)v1513;
                                                v1424 = (int)v1243;
                                                v1296 = (unsigned int)v1243 ^ 0x92F65A5;
                                                v1297 = v1295 ^ 0x699A899C;
                                                v1298 = v1296;
                                                v1299 = v1297;
                                                if ( (v1285 & 7) != 0 )
                                                {
                                                  v1300 = 0;
                                                  do
                                                  {
                                                    if ( v1300 >= 4 )
                                                    {
                                                      v1299 = __ROL4__(v1299, 8);
                                                      v1301 = v1299;
                                                    }
                                                    else
                                                    {
                                                      v1298 = __ROL4__(v1298, 8);
                                                      v1301 = v1298;
                                                    }
                                                    *v1290 = v1301;
                                                    ++v1300;
                                                    ++v1290;
                                                  }
                                                  while ( v1300 < (int)v1291 );
                                                  v87 = v1503;
                                                  v1067 = (_DWORD *)v1514;
                                                }
                                                if ( v1291 <= 4 )
                                                {
                                                  LODWORD(v1243) = 0;
                                                  if ( v1291 < 4 )
                                                    v1296 = v1296 >> (8 * (4 - v1291)) << (8 * (4 - v1291));
                                                }
                                                else
                                                {
                                                  LODWORD(v1243) = v1297 >> (8 * (8 - v1291)) << (8 * (8 - v1291));
                                                }
                                              }
                                              else
                                              {
                                                v1296 = 0;
                                              }
                                              v1510 = (char *)(v1285 >> 3);
                                              if ( v1285 >> 3 )
                                              {
                                                v1302 = v1290 + 7;
                                                v1303 = v1424;
                                                v1304 = v1288 + 2;
                                                v1305 = WORD2(v1811);
                                                v1435 = WORD2(v1811);
                                                v1306 = HIDWORD(v1811);
                                                v1307 = HIDWORD(v1811) ^ 0xAB69605E;
                                                v1439 = WORD1(v1811);
                                                v1308 = v1510;
                                                do
                                                {
                                                  v1309 = *(v1304 - 1) | (*(v1304 - 2) << 8);
                                                  v1310 = v1304[2] << 8;
                                                  v1311 = *v1304;
                                                  v1304 += 8;
                                                  v1312 = *(v1304 - 7) | ((v1311 | (v1309 << 8)) << 8);
                                                  v1313 = v1312 ^ v1296;
                                                  v1314 = *(v1304 - 3) | ((*(v1304 - 4) | ((*(v1304 - 5) | v1310) << 8)) << 8);
                                                  v1315 = v1306 ^ v1313 ^ v1314 ^ (unsigned int)v1243 ^ 0xAB69605E;
                                                  v1316 = (__ROL4__(v1315, 10) + v1305 * __ROL4__(v1315 + 1419157410, 5)) ^ v1313;
                                                  v1317 = (WORD1(v1811) * __ROR4__(v1306 + v1316, 9) - __ROL4__(v1316, 2)) ^ v1315;
                                                  v1318 = (24670 * (v1317 - v1435) - (v1317 >> 13)) ^ v1316;
                                                  v1319 = (HIWORD(v1811) * __ROL4__(WORD1(v1811) ^ v1318, 6)
                                                         - __ROL4__(v1318, 2)) ^ v1317;
                                                  v1320 = (v1306 - (v1319 ^ 0xAB69605E)) ^ v1318;
                                                  v1321 = (v1439 * (v1435 ^ v1320)) ^ __ROR4__(v1320, 6) ^ v1319;
                                                  v1322 = (__ROL4__(v1321, 2) + 24670 * __ROR4__(v1306 + v1321, 15)) ^ v1320;
                                                  v1323 = (HIWORD(v1811) * __ROR4__(v1322 + 1419157410, 14)
                                                         - __ROL4__(v1322, 8)) ^ v1321;
                                                  v1324 = __ROR4__(v1323, 10) ^ (v1435 * __ROR4__(
                                                                                           v1323 ^ 0xAB69605E,
                                                                                           12)) ^ v1322;
                                                  v1325 = (v1324 >> 10) ^ (WORD1(v1811) * (HIWORD(v1811) ^ v1324)) ^ v1323;
                                                  v1326 = (HIWORD(v1811) * (__ROR4__(~v1325, 5) + 24670)) ^ v1324;
                                                  v1327 = v1325 ^ (v1326 - HIWORD(v1811)) ^ 0xAB69605E;
                                                  v1328 = ((v1327 >> 2) + v1435 * __ROL4__(HIWORD(v1811) ^ v1327, 2)) ^ v1326;
                                                  v1329 = (__ROL4__(v1328, 7) + WORD1(v1811)
                                                                              * __ROR4__(v1328 - v1306, 6)) ^ v1327;
                                                  v1330 = (24670 * (v1435 ^ v1329) + __ROR4__(v1329, 9)) ^ v1328;
                                                  v1331 = (__ROL4__(v1330, 7)
                                                         + HIWORD(v1811) * __ROL4__(WORD1(v1811) ^ v1330, 5)) ^ v1329;
                                                  v1332 = v1307 ^ v1331 ^ v1330;
                                                  v1333 = (v1435 * (__ROR4__(v1332, 3) - WORD1(v1811))) ^ v1331;
                                                  v1334 = (24670 * __ROR4__(v1333 - v1306, 1) - __ROR4__(v1333, 6)) ^ v1332;
                                                  v1335 = (__ROL4__(v1334, 14)
                                                         + HIWORD(v1811) * __ROL4__(v1334 - 1419157410, 3)) ^ v1333;
                                                  v1336 = (v1435 * __ROL4__(v1335 - 1419157410, 15) - __ROR4__(v1335, 14)) ^ v1334;
                                                  v1337 = (v1336 >> 3) ^ (WORD1(v1811) * (v1336 ^ 0x605E)) ^ v1335;
                                                  v1338 = v1337 ^ v1306;
                                                  v1339 = v1337;
                                                  v1340 = v1518 ^ v1337;
                                                  v1518 = v1314;
                                                  v1341 = v1303 ^ __ROL4__(v1339, 2) ^ (24670 * __ROL4__(v1338, 4));
                                                  v1303 = v1312;
                                                  v1342 = v1341 ^ v1336;
                                                  v1305 = v1435;
                                                  *(v1302 - 4) = v1342;
                                                  *v1302 = v1340;
                                                  v1302 += 8;
                                                  v1343 = __ROR4__(v1342, 8);
                                                  *(v1302 - 13) = v1343;
                                                  v1344 = __ROR4__(v1340, 8);
                                                  *(v1302 - 9) = v1344;
                                                  v1345 = __ROR4__(v1343, 8);
                                                  *(v1302 - 14) = v1345;
                                                  v1346 = __ROR4__(v1344, 8);
                                                  *(v1302 - 10) = v1346;
                                                  v1347 = __ROR4__(v1345, 8);
                                                  v1348 = __ROR4__(v1346, 8);
                                                  *(v1302 - 15) = v1347;
                                                  *(v1302 - 11) = v1348;
                                                  LODWORD(v1243) = __ROR4__(v1348, 8);
                                                  v1296 = __ROR4__(v1347, 8);
                                                  --v1308;
                                                }
                                                while ( v1308 );
                                                v1289 = 0;
                                                v87 = v1503;
                                                v1067 = (_DWORD *)v1514;
                                                v1284 = (unsigned int)v1513;
                                                v1285 = v1496;
                                                v1287 = v1511;
                                              }
                                              LODWORD(v1243) = 0;
                                              for ( nn = 0LL; nn < v1285; ++nn )
                                                v1289 ^= v1287[nn];
                                              if ( v1289 == *(_QWORD *)((char *)v1512 + v1285) )
                                              {
                                                v1350 = v1409;
                                                v1283 = (int *)v1287;
                                                v1728 = (int *)v1287;
                                                v1287 = 0LL;
                                                v1284 = v1285;
                                              }
                                              else
                                              {
                                                v1283 = v1728;
                                                v1350 = -1073425151;
                                              }
                                              if ( v1287 )
                                              {
                                                MemoryFree(v1287);
                                                v1283 = v1728;
                                                LODWORD(v1243) = 0;
                                              }
                                              if ( v1350 >= 0 )
                                              {
                                                v1068 = v1283;
                                                v1624 = (__int64)v1283;
                                                v1283 = 0LL;
                                                v1603 = v1284;
                                                v1728 = 0LL;
                                                v1081 = 0x10000000;
LABEL_1658:
                                                if ( v1283 )
                                                {
                                                  v1351 = GetProcessHeap();
                                                  HeapFree(v1351, 0, v1283);
                                                  v1284 = v1603;
                                                  LODWORD(v1243) = 0;
                                                  v1728 = 0LL;
                                                }
                                                if ( v1081 < 0 )
                                                  goto LABEL_1499;
                                                v1615[0] = (_DWORD)v1243;
                                                v1729 = v1068;
                                                if ( v1284 < 4 )
                                                  goto LABEL_1662;
                                                v1410 = *v1068;
                                                v1352 = RtlULongLongAdd(v1068, 4LL, &v1729);
                                                if ( v1352 < 0 )
                                                  goto LABEL_1698;
                                                v1352 = RtlUIntAdd(0LL, v1353, v1615);
                                                if ( v1352 < 0 )
                                                  goto LABEL_1698;
                                                if ( v1284 - v1615[0] < (unsigned int)v1354 )
                                                {
LABEL_1662:
                                                  v1352 = -1073741762;
LABEL_1698:
                                                  v1081 = v1352 | 0x10000000;
                                                  goto LABEL_1499;
                                                }
                                                v1355 = *(unsigned int *)v1729;
                                                v1352 = RtlULongLongAdd(v1729, v1354, &v1729);
                                                if ( v1352 < 0
                                                  || (v1352 = RtlUIntAdd(v1615[0], v1356, v1615), v1352 < 0) )
                                                {
LABEL_1697:
                                                  v1068 = (int *)v1624;
                                                  goto LABEL_1698;
                                                }
                                                if ( v1284 - v1615[0] < (unsigned int)v1355 )
                                                  goto LABEL_1696;
                                                v1352 = RtlUIntAdd(v1615[0], (unsigned int)v1355, v1615);
                                                if ( v1352 < 0 )
                                                  goto LABEL_1697;
                                                v1358 = v1729;
                                                if ( v1624 + (unsigned __int64)v1284 < (unsigned __int64)v1729 + v1355
                                                  || v1284 + v1624 - v1355 - (unsigned __int64)v1729 >= 8 )
                                                {
LABEL_1696:
                                                  v1352 = -1073741762;
                                                  goto LABEL_1697;
                                                }
                                                v1425 = (int)v1357;
                                                v1359 = v1357;
                                                v1352 = (int)v1357;
                                                if ( v1729 )
                                                {
                                                  v1352 = RtlULongLongAdd(v1729, (unsigned int)v1355, &v1730);
                                                  if ( v1352 < 0 )
                                                    goto LABEL_1693;
                                                  v1361 = v1730;
                                                  if ( (unsigned __int64)v1358 < v1730 )
                                                  {
                                                    do
                                                    {
                                                      v1352 = RtlULongLongAdd(v1360, 4LL, &v1731);
                                                      if ( v1352 < 0 )
                                                        goto LABEL_1693;
                                                      if ( v1731 > v1363 )
                                                        goto LABEL_1687;
                                                      v1364 = RtlUIntAdd(4LL, *v1362, v1616);
                                                      v1352 = v1364;
                                                      if ( v1364 >= 0 )
                                                        v1366 = v1616[0];
                                                      v1615[1] = v1366;
                                                      if ( v1364 < 0 )
                                                        goto LABEL_1693;
                                                      v1352 = RtlULongLongAdd(v1365, v1366, &v1732);
                                                      if ( v1352 < 0 )
                                                        goto LABEL_1693;
                                                      v1360 = v1732;
                                                      if ( v1732 > v1361 )
                                                        goto LABEL_1687;
                                                      ++v1425;
                                                    }
                                                    while ( v1732 < v1361 );
                                                  }
                                                  if ( v1360 != v1361 )
                                                  {
LABEL_1687:
                                                    v1352 = -1073741811;
                                                    goto LABEL_1697;
                                                  }
                                                }
                                                if ( (_DWORD)v1355 )
                                                {
                                                  v1367 = GetProcessHeap();
                                                  v1359 = HeapAlloc(v1367, 8u, v1355);
                                                  if ( !v1359 )
                                                  {
                                                    v1352 = -1073741801;
                                                    goto LABEL_1693;
                                                  }
                                                  v1352 = 0;
                                                }
                                                if ( v1358 )
                                                  memcpy_0(v1359, v1358, v1355);
                                                LODWORD(v1754[0]) = v1425;
                                                v1754[1] = v1359;
LABEL_1693:
                                                if ( v1352 >= 0 )
                                                {
                                                  v1068 = (int *)v1624;
                                                  if ( v1410 == LODWORD(v1754[0]) )
                                                    goto LABEL_1698;
                                                  goto LABEL_1662;
                                                }
                                                goto LABEL_1697;
                                              }
                                            }
                                            else
                                            {
                                              v1283 = v1728;
                                            }
                                          }
                                          v1284 = v1603;
                                          v1081 = -805306367;
                                          v1068 = (int *)v1624;
                                          goto LABEL_1658;
                                        }
                                        if ( v1245 - v1630 < (unsigned int)v1246 )
                                          goto LABEL_1565;
                                        v1512 = v1727;
                                        v1495 = v1246;
                                        v1244 = RtlULongLongAdd(v1727, (unsigned int)v1246, &v1727);
                                        if ( v1244 < 0 )
                                          goto LABEL_1618;
                                        v1244 = RtlUIntAdd(v1630, v1247, &v1630);
                                        if ( v1244 < 0 )
                                          goto LABEL_1618;
                                        if ( v1248 - v1630 < (unsigned int)v1173 )
                                          goto LABEL_1565;
                                        v1249 = *(unsigned int *)v1727;
                                        v1244 = RtlULongLongAdd(v1727, v1173, &v1727);
                                        if ( v1244 < 0 )
                                          goto LABEL_1618;
                                        v1244 = RtlUIntAdd(v1630, (unsigned int)v1173, &v1630);
                                        if ( v1244 < 0 )
                                          goto LABEL_1618;
                                        if ( v1250 - v1630 < (unsigned int)v1249 )
                                          goto LABEL_1565;
                                        v1511 = v1727;
                                        v1244 = RtlULongLongAdd(v1727, (unsigned int)v1249, &v1727);
                                        if ( v1244 < 0 )
                                          goto LABEL_1618;
                                        v1244 = RtlUIntAdd(v1630, (unsigned int)v1249, &v1630);
                                        if ( v1244 < 0 )
                                          goto LABEL_1618;
                                        if ( v1251 - v1630 < (unsigned int)v1173 )
                                          goto LABEL_1565;
                                        v1252 = *(unsigned int *)v1727;
                                        v1244 = RtlULongLongAdd(v1727, 4LL, &v1727);
                                        if ( v1244 < 0 )
                                          goto LABEL_1618;
                                        v1244 = RtlUIntAdd(v1630, 4LL, &v1630);
                                        if ( v1244 < 0 )
                                          goto LABEL_1618;
                                        if ( v1253 - v1630 < (unsigned int)v1252 )
                                          goto LABEL_1565;
                                        v1244 = RtlUIntAdd(v1630, (unsigned int)v1252, &v1630);
                                        if ( v1244 < 0 )
                                          goto LABEL_1618;
                                        if ( v1254 != v1630 || (unsigned int)(v1252 + v1249 + v1255) + 12LL != v1254 )
                                        {
LABEL_1565:
                                          v1244 = -1073741762;
                                          goto LABEL_1618;
                                        }
                                        v1256 = GetProcessHeap();
                                        v1257 = HeapAlloc(v1256, 8u, 0x30uLL);
                                        v1243 = 0LL;
                                        v1258 = v1257;
                                        if ( !v1257 )
                                        {
                                          v1244 = -1073741801;
LABEL_1608:
                                          v1067 = v1513;
                                          v1275 = 0LL;
                                          if ( v1244 < 0 )
                                          {
                                            v1275 = v1513;
                                            v1067 = 0LL;
                                          }
                                          v1514 = (__int64)v1067;
                                          if ( v1275 )
                                          {
                                            v1276 = (void *)v1275[1];
                                            if ( v1276 )
                                            {
                                              v1277 = GetProcessHeap();
                                              HeapFree(v1277, 0, v1276);
                                              v1275[1] = 0LL;
                                            }
                                            v1278 = (void *)v1275[3];
                                            if ( v1278 )
                                            {
                                              v1279 = GetProcessHeap();
                                              HeapFree(v1279, 0, v1278);
                                              v1275[3] = 0LL;
                                            }
                                            v1280 = (void *)v1275[5];
                                            if ( v1280 )
                                            {
                                              v1281 = GetProcessHeap();
                                              HeapFree(v1281, 0, v1280);
                                              v1275[5] = 0LL;
                                            }
                                            v1282 = GetProcessHeap();
                                            HeapFree(v1282, 0, v1275);
                                            v1243 = 0LL;
                                            v1514 = (__int64)v1067;
                                          }
                                          goto LABEL_1618;
                                        }
                                        v1259 = v1512;
                                        if ( v1512 )
                                        {
                                          *(_DWORD *)v1257 = v1408;
                                          v1260 = GetProcessHeap();
                                          v1261 = HeapAlloc(v1260, 8u, v1495);
                                          v1243 = 0LL;
                                          if ( !v1261 )
                                          {
LABEL_1588:
                                            v1244 = -1073741801;
                                            goto LABEL_1600;
                                          }
                                          v1258[1] = v1261;
                                          memcpy_0(v1261, v1259, v1495);
                                          v1243 = 0LL;
                                        }
                                        else
                                        {
                                          *(_DWORD *)v1257 = 0;
                                          v1257[1] = 0LL;
                                        }
                                        v1262 = v1511;
                                        if ( v1511 )
                                        {
                                          *((_DWORD *)v1258 + 4) = v1249;
                                          v1263 = GetProcessHeap();
                                          v1264 = HeapAlloc(v1263, 8u, v1249);
                                          v1243 = 0LL;
                                          if ( !v1264 )
                                            goto LABEL_1588;
                                          v1258[3] = v1264;
                                          memcpy_0(v1264, v1262, v1249);
                                          v1243 = 0LL;
                                        }
                                        else
                                        {
                                          *((_DWORD *)v1258 + 4) = 0;
                                          v1258[3] = 0LL;
                                        }
                                        v1265 = v1727;
                                        if ( v1727 )
                                        {
                                          *((_DWORD *)v1258 + 8) = v1252;
                                          v1266 = GetProcessHeap();
                                          v1267 = HeapAlloc(v1266, 8u, v1252);
                                          v1243 = 0LL;
                                          if ( !v1267 )
                                            goto LABEL_1588;
                                          v1258[5] = v1267;
                                          memcpy_0(v1267, v1265, v1252);
                                          v1243 = 0LL;
                                        }
                                        else
                                        {
                                          *((_DWORD *)v1258 + 8) = 0;
                                          v1258[5] = 0LL;
                                        }
                                        v1513 = v1258;
                                        v1244 = 0;
                                        v1258 = 0LL;
LABEL_1600:
                                        if ( v1258 )
                                        {
                                          v1268 = (void *)v1258[1];
                                          if ( v1268 )
                                          {
                                            v1269 = GetProcessHeap();
                                            HeapFree(v1269, 0, v1268);
                                            v1258[1] = 0LL;
                                          }
                                          v1270 = (void *)v1258[3];
                                          if ( v1270 )
                                          {
                                            v1271 = GetProcessHeap();
                                            HeapFree(v1271, 0, v1270);
                                            v1258[3] = 0LL;
                                          }
                                          v1272 = (void *)v1258[5];
                                          if ( v1272 )
                                          {
                                            v1273 = GetProcessHeap();
                                            HeapFree(v1273, 0, v1272);
                                            v1258[5] = 0LL;
                                          }
                                          v1274 = GetProcessHeap();
                                          HeapFree(v1274, 0, v1258);
                                          v1243 = 0LL;
                                        }
                                        goto LABEL_1608;
                                      }
                                      v1081 = -2147024809;
                                    }
                                    v1068 = 0LL;
                                    goto LABEL_1499;
                                  }
                                  goto LABEL_1542;
                                }
                              }
                              v1081 = -1073741811;
LABEL_1466:
                              v1173 = 4LL;
                              goto LABEL_1539;
                            }
                          }
                        }
LABEL_1705:
                        v1014 = v1502;
                        goto LABEL_1706;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_1334:
      v1014 = v1016;
    }
LABEL_1706:
    v1750 = 0LL;
    v1371 = v1751;
    if ( v1751 )
    {
      v1372 = GetProcessHeap();
      HeapFree(v1372, 0, v1371);
      v1751 = 0LL;
    }
    v1754[0] = 0LL;
    v1373 = v1754[1];
    if ( v1754[1] )
    {
      v1374 = GetProcessHeap();
      HeapFree(v1374, 0, v1373);
      v1754[1] = 0LL;
    }
    if ( v1014 )
    {
      v1375 = GetProcessHeap();
      HeapFree(v1375, 0, v1014);
    }
    if ( v159 )
    {
      v1376 = GetProcessHeap();
      HeapFree(v1376, 0, v159);
    }
  }
LABEL_1714:
  v88 = v1577;
  v1619 = v1578;
  v1660 = (int *)v1467;
  v1511 = 0LL;
LABEL_101:
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v89 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount > 0 )
  {
    --g_WarbirdSecureFunctionsRefCount;
    if ( v89 == 1 )
    {
      v90 = (HMODULE *)&WARBIRD::g_arModuleInfo;
      v91 = 4LL;
      do
      {
        if ( *v90 )
          FreeLibrary(*v90);
        v90 += 3;
        --v91;
      }
      while ( v91 );
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      memcpy_0(&WARBIRD::g_FuncAddress, off_180509E10, 0x170uLL);
    }
  }
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1511);
  if ( v87 < 0 )
  {
    switch ( v87 )
    {
      case -805306316:
        v87 = -1073418222;
LABEL_112:
        v92 = v87;
        goto LABEL_1724;
      case -805306139:
      case -1073425151:
        v87 = -1073418201;
        break;
      case -805306306:
        v87 = -1073418200;
        goto LABEL_112;
    }
    if ( v87 != -2147024774 )
      goto LABEL_112;
    goto LABEL_1721;
  }
  if ( v88 != 4 )
  {
LABEL_1721:
    v92 = -1073418210;
    goto LABEL_1724;
  }
  v92 = v1576;
  v1573 = *v1660;
LABEL_1724:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1660);
  if ( v92 >= 0 )
  {
    *(_BYTE *)v1659 = v1573 != 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6D,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
      (const char *)(unsigned int)v92);
    return (unsigned int)v92;
  }
}
