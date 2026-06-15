/*
 * XREFs of sub_180023540 @ 0x180023540
 * Callers:
 *     sub_18002F780 @ 0x18002F780 (sub_18002F780.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18001FEF0 @ 0x18001FEF0 (sub_18001FEF0.c)
 *     sub_180020B78 @ 0x180020B78 (sub_180020B78.c)
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 *     sub_1800230F0 @ 0x1800230F0 (sub_1800230F0.c)
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 *     sub_180023350 @ 0x180023350 (sub_180023350.c)
 *     sub_1800233E0 @ 0x1800233E0 (sub_1800233E0.c)
 *     sub_1800273F8 @ 0x1800273F8 (sub_1800273F8.c)
 *     sub_180032210 @ 0x180032210 (sub_180032210.c)
 *     sub_1800322B0 @ 0x1800322B0 (sub_1800322B0.c)
 *     sub_1800326B0 @ 0x1800326B0 (sub_1800326B0.c)
 *     sub_180037744 @ 0x180037744 (sub_180037744.c)
 *     sub_18004B060 @ 0x18004B060 (sub_18004B060.c)
 *     sub_18004B990 @ 0x18004B990 (sub_18004B990.c)
 *     sub_18004BB48 @ 0x18004BB48 (sub_18004BB48.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180052550 @ 0x180052550 (sub_180052550.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_180067BDC @ 0x180067BDC (sub_180067BDC.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180069110 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _o___std_exception_destroy @ 0x18006AA7E (_o___std_exception_destroy.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_1800E2A84 @ 0x1800E2A84 (sub_1800E2A84.c)
 *     sub_1800E35E4 @ 0x1800E35E4 (sub_1800E35E4.c)
 *     sub_1800E36A0 @ 0x1800E36A0 (sub_1800E36A0.c)
 *     sub_1800E381C @ 0x1800E381C (sub_1800E381C.c)
 *     sub_1800E56A8 @ 0x1800E56A8 (sub_1800E56A8.c)
 *     sub_1800EC128 @ 0x1800EC128 (sub_1800EC128.c)
 *     sub_180118968 @ 0x180118968 (sub_180118968.c)
 *     sub_180118A38 @ 0x180118A38 (sub_180118A38.c)
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 *     sub_18011C680 @ 0x18011C680 (sub_18011C680.c)
 *     sub_18011E44C @ 0x18011E44C (sub_18011E44C.c)
 */

// Hidden C++ exception states: #wind=117
__int64 __fastcall sub_180023540(
        __int64 a1,
        int a2,
        unsigned int a3,
        signed int a4,
        _QWORD *a5,
        struct _RTL_CRITICAL_SECTION *a6,
        __int64 a7,
        __int64 a8,
        unsigned __int16 *a9,
        __int64 a10,
        _OWORD *a11,
        __int64 a12,
        __int64 a13,
        IUnknown **a14)
{
  int v14; // r12d
  __int64 v15; // r13
  __int64 v16; // r15
  signed int v17; // esi
  int v18; // edi
  int v19; // eax
  unsigned int v20; // ebx
  signed int v21; // ecx
  int v22; // r14d
  bool v23; // al
  unsigned __int64 v24; // rdi
  __int64 v25; // rbx
  int v26; // r12d
  __int64 v27; // r14
  int v28; // r15d
  int v29; // esi
  struct _RTL_CRITICAL_SECTION *v30; // rsi
  __int64 v31; // r14
  __int64 v32; // r15
  int v33; // r12d
  __int64 v34; // r14
  volatile signed __int32 *v35; // rbx
  __int64 v36; // rsi
  int v37; // r15d
  int v38; // r13d
  __int64 v39; // r12
  LPCRITICAL_SECTION v40; // rdx
  __int64 v41; // rax
  PRTL_CRITICAL_SECTION_DEBUG *v42; // rcx
  __int64 v43; // rax
  int v44; // r15d
  volatile signed __int32 *v45; // r12
  struct _RTL_CRITICAL_SECTION *v46; // rcx
  __int64 v47; // r12
  __int64 v48; // rax
  signed int v49; // edi
  BOOL v50; // ebx
  unsigned __int64 v51; // rbx
  __int64 v52; // r14
  volatile signed __int32 *v53; // rdi
  __int64 v54; // rsi
  int v55; // r15d
  int v56; // r13d
  LPCRITICAL_SECTION v57; // rdx
  __int64 v58; // rax
  PRTL_CRITICAL_SECTION_DEBUG *v59; // rcx
  __int64 v60; // rax
  int v61; // r15d
  __int64 v62; // rdi
  struct _RTL_CRITICAL_SECTION *v63; // rsi
  __int64 v64; // r14
  __int64 v65; // r15
  int v66; // r12d
  __int64 v67; // r14
  volatile signed __int32 *v68; // rdi
  __int64 v69; // rsi
  int v70; // r15d
  int v71; // r13d
  __int64 v72; // r12
  LPCRITICAL_SECTION v73; // rdx
  __int64 v74; // rax
  PRTL_CRITICAL_SECTION_DEBUG *v75; // rcx
  __int64 v76; // rax
  int v77; // r15d
  volatile signed __int32 *v78; // r12
  struct _RTL_CRITICAL_SECTION *v79; // rcx
  __int64 v80; // rbx
  __int64 v81; // rdx
  int v82; // r8d
  __int64 v83; // r9
  __int64 v84; // rax
  BOOL v85; // ebx
  int v86; // ecx
  LPCRITICAL_SECTION v87; // r12
  __int64 v88; // rbx
  __int64 v89; // rsi
  __int64 v90; // r14
  int v91; // r15d
  int v92; // r15d
  int i; // edi
  __int64 *v94; // rax
  int v95; // edi
  __int64 v96; // r14
  _QWORD *v97; // rcx
  __int64 v98; // r15
  int v99; // esi
  __int64 v100; // rax
  _OWORD *v101; // rax
  int v102; // esi
  unsigned int v103; // r14d
  LPCRITICAL_SECTION v104; // rdi
  BOOL v105; // ebx
  __int64 v106; // r15
  struct _RTL_CRITICAL_SECTION *v107; // r12
  __int64 v108; // r14
  __int64 v109; // rsi
  int v110; // ebx
  int v111; // r13d
  __int64 v112; // r12
  __int64 v113; // rdi
  __int64 v114; // rax
  _QWORD *v115; // rcx
  __int64 v116; // rax
  int v117; // ebx
  __int64 v118; // rdi
  volatile signed __int32 **v119; // rdi
  volatile signed __int32 *v120; // rbx
  struct _RTL_CRITICAL_SECTION *v121; // rcx
  __int64 v122; // rbx
  struct _RTL_CRITICAL_SECTION *v123; // rdi
  __int64 v124; // rsi
  __int64 v125; // r14
  int v126; // r15d
  int v127; // r15d
  __int64 v128; // r15
  struct _RTL_CRITICAL_SECTION *v129; // r12
  __int64 v130; // r14
  __int64 v131; // rsi
  int v132; // ebx
  int v133; // r13d
  __int64 v134; // r12
  __int64 v135; // rdi
  __int64 v136; // rax
  _QWORD *v137; // rcx
  __int64 v138; // rax
  int v139; // ebx
  __int64 v140; // rdi
  volatile signed __int32 **v141; // rdi
  volatile signed __int32 *v142; // rbx
  struct _RTL_CRITICAL_SECTION *v143; // rcx
  __int64 v144; // rbx
  int v145; // r8d
  __int64 v146; // r9
  __int64 v147; // rax
  int v148; // ebx
  __int64 v149; // rcx
  __int64 v150; // rcx
  unsigned __int64 v151; // rbx
  __int64 v152; // rdi
  struct _RTL_CRITICAL_SECTION *v153; // rsi
  __int64 v154; // r14
  __int64 v155; // r15
  int v156; // r12d
  __int64 v157; // r14
  volatile signed __int32 *v158; // rdi
  __int64 v159; // rsi
  int v160; // r15d
  int k; // r13d
  LPCRITICAL_SECTION v162; // rdx
  __int64 v163; // rax
  PRTL_CRITICAL_SECTION_DEBUG *v164; // rcx
  __int64 v165; // rax
  int v166; // r15d
  volatile signed __int32 *v167; // r12
  __int64 v168; // rdi
  int v169; // esi
  __int64 v170; // r14
  int v171; // ecx
  int v172; // esi
  __int64 v173; // r9
  __int64 *v174; // rdx
  int v175; // r8d
  int v176; // r11d
  __int64 v177; // r10
  __int64 v178; // rax
  __int64 v179; // r11
  signed int v180; // r15d
  BOOL v181; // edi
  __int64 v182; // rdi
  struct _RTL_CRITICAL_SECTION *v183; // rsi
  __int64 v184; // r14
  __int64 v185; // r15
  int v186; // r12d
  int v187; // r12d
  __int64 v188; // r14
  volatile signed __int32 *v189; // rdi
  __int64 v190; // rsi
  int v191; // r15d
  int v192; // r13d
  __int64 v193; // r12
  LPCRITICAL_SECTION v194; // rdx
  __int64 v195; // rax
  PRTL_CRITICAL_SECTION_DEBUG *v196; // rcx
  __int64 v197; // rax
  int v198; // r15d
  volatile signed __int32 *v199; // r12
  __int64 v200; // rdi
  __int64 v201; // rbx
  __int64 v202; // rbx
  __int64 v203; // rax
  int v204; // edi
  __int64 v205; // rsi
  int v206; // ecx
  int v207; // edi
  __int64 v208; // r9
  __int64 *v209; // rdx
  int v210; // r8d
  int v211; // r11d
  __int64 v212; // r10
  __int64 v213; // rax
  __int64 v214; // rdi
  int v215; // eax
  void *v216; // rcx
  bool v217; // zf
  void *v218; // rbx
  unsigned __int64 v219; // rcx
  unsigned __int64 v220; // rax
  unsigned __int64 v221; // rcx
  void *v222; // rax
  int v223; // eax
  int v224; // eax
  int (__fastcall ***v225)(_QWORD, void *, __int64 *); // rbx
  bool v226; // bl
  void *v227; // rcx
  BOOL v228; // edx
  int v229; // eax
  SIZE_T v230; // rbx
  void *v231; // rax
  HRESULT v232; // eax
  HRESULT v233; // eax
  __int64 v234; // r15
  unsigned __int64 v235; // rbx
  __int64 v236; // rdi
  struct _RTL_CRITICAL_SECTION *v237; // rsi
  __int64 v238; // r14
  int v239; // r12d
  int v240; // r12d
  __int64 v241; // r14
  volatile signed __int32 *v242; // rdi
  __int64 v243; // rsi
  int v244; // r13d
  __int64 v245; // r12
  LPCRITICAL_SECTION v246; // rdx
  __int64 v247; // rax
  PRTL_CRITICAL_SECTION_DEBUG *v248; // rcx
  __int64 v249; // rax
  int v250; // r15d
  volatile signed __int32 *v251; // r12
  _QWORD *v252; // r14
  __int128 v253; // xmm6
  __int64 v254; // rcx
  int v255; // r9d
  __int128 *v256; // rax
  __int128 *v257; // rcx
  void (__fastcall ***v258)(_QWORD, void *, __int64 *); // r9
  __int64 v259; // rcx
  int v260; // ebx
  BOOL v261; // ebx
  int v262; // ecx
  __int64 v263; // rax
  signed int v264; // edi
  BOOL v265; // ebx
  unsigned __int64 v266; // rbx
  __int64 v267; // r14
  volatile signed __int32 *v268; // rdi
  __int64 v269; // rsi
  int v270; // r13d
  __int64 v271; // r12
  LPCRITICAL_SECTION v272; // rdx
  __int64 v273; // rax
  PRTL_CRITICAL_SECTION_DEBUG *v274; // rcx
  __int64 v275; // rax
  int v276; // r15d
  volatile signed __int32 *v277; // r12
  __int64 v278; // rdi
  struct _RTL_CRITICAL_SECTION *v279; // rsi
  __int64 v280; // r14
  int v281; // r12d
  int v282; // r12d
  __int64 v283; // r14
  volatile signed __int32 *v284; // rdi
  __int64 v285; // rsi
  int v286; // r15d
  int v287; // r13d
  __int64 v288; // r12
  LPCRITICAL_SECTION v289; // rdx
  __int64 v290; // rax
  PRTL_CRITICAL_SECTION_DEBUG *v291; // rcx
  __int64 v292; // rax
  int v293; // r15d
  volatile signed __int32 *v294; // r12
  __int64 v295; // rbx
  int v296; // edx
  int v297; // r8d
  __int64 v298; // r9
  __int64 v299; // rax
  BOOL v300; // ebx
  int v301; // ecx
  unsigned __int64 v302; // r12
  __int64 v303; // rbx
  __int64 v304; // rsi
  __int64 v305; // r14
  int v306; // r15d
  int m; // edi
  int *v308; // r8
  int v309; // edi
  __int64 v310; // r14
  __int64 v311; // rdx
  int v312; // r9d
  __int64 v313; // r15
  int v314; // esi
  __int64 v315; // rax
  _OWORD *v316; // rax
  int v317; // esi
  LPCRITICAL_SECTION v318; // rdi
  BOOL v319; // ebx
  __int64 v320; // rsi
  __int64 v321; // rdi
  int v322; // ebx
  int v323; // r14d
  int v324; // r13d
  LPCRITICAL_SECTION v325; // rdx
  __int64 v326; // rax
  PRTL_CRITICAL_SECTION_DEBUG *v327; // rcx
  __int64 v328; // rax
  int v329; // r14d
  __int64 v330; // r15
  volatile signed __int32 **v331; // rdi
  __int64 v332; // rsi
  volatile signed __int32 *v333; // rbx
  __int64 v334; // rbx
  struct _RTL_CRITICAL_SECTION *v335; // rdi
  __int64 v336; // rsi
  __int64 v337; // r14
  int v338; // r15d
  __int64 v339; // rsi
  __int64 v340; // rdi
  int v341; // ebx
  int v342; // r14d
  int v343; // r13d
  LPCRITICAL_SECTION v344; // rdx
  __int64 v345; // rax
  PRTL_CRITICAL_SECTION_DEBUG *v346; // rcx
  __int64 v347; // rax
  int v348; // r14d
  __int64 v349; // r15
  volatile signed __int32 **v350; // rdi
  __int64 v351; // rsi
  volatile signed __int32 *v352; // rbx
  __int64 v353; // rbx
  int v354; // edx
  int v355; // r8d
  __int64 v356; // r9
  __int64 v357; // rax
  int v358; // ebx
  int v359; // ecx
  __int64 v360; // rcx
  unsigned __int64 v361; // rbx
  __int64 v362; // rdi
  struct _RTL_CRITICAL_SECTION *v363; // rsi
  __int64 v364; // r14
  int v365; // r12d
  int v366; // r12d
  __int64 v367; // r14
  volatile signed __int32 **v368; // rdi
  volatile signed __int32 *v369; // rsi
  int v370; // r13d
  __int64 v371; // r12
  volatile signed __int32 **v372; // rdx
  __int64 v373; // rax
  volatile signed __int32 **v374; // rcx
  volatile signed __int32 *v375; // rax
  int v376; // r15d
  volatile signed __int32 **v377; // r12
  unsigned int v378; // r9d
  unsigned __int16 *v379; // rbx
  __int64 v380; // rdx
  int v381; // r9d
  __int64 v382; // rax
  unsigned int v383; // r10d
  unsigned int v384; // ecx
  _DWORD *v385; // rax
  _DWORD *v386; // rax
  LPVOID v387; // rdx
  __int64 v388; // r8
  int v389; // eax
  IUnknown *v390; // rax
  void *v391; // rcx
  void *v392; // rcx
  void *v393; // rcx
  __int64 v395; // rdx
  __int64 v396; // r9
  __int64 v397; // r9
  __int64 v398; // rdx
  _QWORD *v399; // rax
  int v400; // eax
  _QWORD *v401; // rax
  __int64 v402; // r9
  __int64 v403; // rdx
  _QWORD *v404; // rax
  int v405; // eax
  __int64 v406; // rbx
  __int64 v407; // r9
  __int64 v408; // rdx
  _QWORD *v409; // rax
  int v410; // eax
  __int64 v411; // r9
  __int64 v412; // rdx
  _QWORD *v413; // rax
  int v414; // eax
  _QWORD *v415; // rax
  __int64 v416; // r9
  __int64 v417; // rdx
  _QWORD *v418; // rax
  int v419; // eax
  __int64 v420; // rdi
  __int64 v421; // r9
  __int64 v422; // rdx
  _QWORD *v423; // rax
  int v424; // eax
  void *v425; // rcx
  __int64 v426; // rdx
  _QWORD *v427; // rax
  __int64 v428; // r9
  __int64 v429; // rdx
  _QWORD *v430; // rax
  int v431; // eax
  __int64 v432; // r15
  int j; // esi
  __int64 *v434; // rax
  _QWORD *v435; // rax
  __int64 *v436; // rax
  __int64 v437; // rax
  _QWORD *v438; // r9
  __int64 v439; // r8
  _QWORD *v440; // rax
  int v441; // eax
  _QWORD *v442; // rax
  __int64 v443; // r9
  __int64 v444; // rdx
  _QWORD *v445; // rax
  int v446; // eax
  __int64 v447; // rbx
  _QWORD *v448; // rax
  int v449; // eax
  __int64 v450; // rax
  __int64 v451; // rax
  __int64 v452; // rax
  __int64 v453; // rax
  __int64 v454; // rax
  __int64 v455; // rax
  __int64 v456; // rax
  __int64 v457; // rax
  __int64 v458; // rax
  int (__fastcall ***v459)(_QWORD, void *, __int64 *); // rcx
  _QWORD *v460; // rax
  __int64 v461; // r9
  __int64 v462; // rdx
  _QWORD *v463; // rax
  int v464; // eax
  __int64 v465; // rdi
  __int64 v466; // r9
  __int64 v467; // rdx
  _QWORD *v468; // rax
  int v469; // eax
  __int64 **v470; // rax
  __int64 *v471; // rax
  volatile signed __int32 *v472; // rsi
  _QWORD *v473; // rax
  __int64 v474; // r9
  __int64 v475; // rdx
  _QWORD *v476; // rax
  int v477; // eax
  __int64 v478; // rdi
  __int64 v479; // r9
  __int64 v480; // rdx
  _QWORD *v481; // rax
  int v482; // eax
  __int64 **v483; // rax
  __int64 *v484; // rax
  volatile signed __int32 *v485; // rdi
  __int64 v486; // r9
  __int64 v487; // rdx
  __int64 v488; // rax
  __int64 v489; // rax
  __int64 v490; // rax
  __int64 v491; // rax
  __int64 v492; // rax
  __int64 v493; // rax
  bool v494; // bl
  void *v495; // rcx
  __int64 v496; // rax
  __int64 v497; // rax
  __int64 v498; // rax
  __int64 v499; // rax
  __int64 v500; // rax
  __int64 v501; // rax
  __int64 v502; // rax
  __int64 v503; // rax
  __int64 v504; // rdx
  __int64 v505; // rdx
  _QWORD *v506; // rax
  __int64 v507; // r9
  __int64 v508; // rdx
  _QWORD *v509; // rax
  int v510; // eax
  __int64 v511; // rdi
  __int64 v512; // r9
  __int64 v513; // rdx
  _QWORD *v514; // rax
  int v515; // eax
  __int64 v516; // r10
  int v517; // r8d
  int v518; // r9d
  __int64 v519; // rax
  __int64 v520; // rax
  __int64 v521; // rax
  __int64 v522; // rax
  __int64 v523; // rax
  __int64 v524; // rax
  __int64 v525; // r9
  __int64 v526; // rdx
  _QWORD *v527; // rax
  int v528; // eax
  _QWORD *v529; // rax
  __int64 v530; // r9
  __int64 v531; // rdx
  _QWORD *v532; // rax
  int v533; // eax
  __int64 v534; // rdi
  __int64 v535; // r9
  __int64 v536; // rdx
  _QWORD *v537; // rax
  int v538; // eax
  void *v539; // rcx
  __int64 v540; // rdx
  _QWORD *v541; // rax
  __int64 v542; // r9
  __int64 v543; // rdx
  _QWORD *v544; // rax
  int v545; // eax
  __int64 v546; // r15
  int n; // esi
  __int64 *v548; // rax
  _QWORD *v549; // rax
  __int64 *v550; // rax
  __int64 v551; // rax
  int v552; // r9d
  __int64 v553; // r9
  __int64 v554; // rdx
  _QWORD *v555; // rax
  int v556; // eax
  _QWORD *v557; // rax
  __int64 v558; // r9
  __int64 v559; // rdx
  _QWORD *v560; // rax
  int v561; // eax
  __int64 v562; // rbx
  __int64 v563; // r9
  __int64 v564; // rdx
  _QWORD *v565; // rax
  int v566; // eax
  __int64 v567; // rax
  __int64 v568; // rax
  __int64 v569; // rax
  __int64 v570; // rax
  __int64 v571; // rax
  __int64 v572; // rax
  __int64 v573; // rax
  __int64 v574; // rax
  __int64 v575; // rax
  IID *v576; // r8
  int v577; // eax
  _OWORD *v578; // r8
  _QWORD *v579; // rax
  __int64 v580; // r9
  __int64 v581; // rdx
  _QWORD *v582; // rax
  int v583; // eax
  __int64 v584; // rdi
  __int64 v585; // r9
  __int64 v586; // rdx
  _QWORD *v587; // rax
  int v588; // eax
  unsigned int v589; // ecx
  _DWORD *v590; // rax
  _DWORD *v591; // rax
  _DWORD *v592; // rax
  int v593; // eax
  __int64 v594; // rdx
  int v595; // edi
  int v596; // eax
  __int64 v597; // rax
  __int64 v598; // rax
  __int64 v599; // rax
  __int64 v600; // rax
  __int64 *v601; // rax
  unsigned __int64 v602; // r8
  int v603; // r8d
  int v604; // r9d
  unsigned int v605; // [rsp+70h] [rbp-90h]
  int v606; // [rsp+74h] [rbp-8Ch]
  bool v608; // [rsp+80h] [rbp-80h] BYREF
  char v609; // [rsp+81h] [rbp-7Fh] BYREF
  char v610; // [rsp+82h] [rbp-7Eh] BYREF
  char v611; // [rsp+83h] [rbp-7Dh] BYREF
  LPVOID v612; // [rsp+88h] [rbp-78h] BYREF
  signed int v613; // [rsp+90h] [rbp-70h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+98h] [rbp-68h]
  BOOL v615; // [rsp+A0h] [rbp-60h]
  LPCRITICAL_SECTION v616; // [rsp+A8h] [rbp-58h]
  LPCRITICAL_SECTION v617; // [rsp+B0h] [rbp-50h]
  signed int v618; // [rsp+B8h] [rbp-48h]
  bool v619; // [rsp+BCh] [rbp-44h] BYREF
  char v620; // [rsp+BDh] [rbp-43h] BYREF
  char v621; // [rsp+BEh] [rbp-42h] BYREF
  char v622; // [rsp+BFh] [rbp-41h] BYREF
  unsigned int v623; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v624; // [rsp+C4h] [rbp-3Ch] BYREF
  int v625; // [rsp+C8h] [rbp-38h]
  int v626; // [rsp+CCh] [rbp-34h]
  LPVOID pv; // [rsp+D0h] [rbp-30h]
  int v628; // [rsp+D8h] [rbp-28h]
  __int64 v629; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v630; // [rsp+E8h] [rbp-18h]
  __int64 v631; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v632; // [rsp+F8h] [rbp-8h]
  LPCRITICAL_SECTION v633; // [rsp+100h] [rbp+0h]
  __int64 v634; // [rsp+108h] [rbp+8h] BYREF
  LPVOID ppv; // [rsp+110h] [rbp+10h] BYREF
  __int64 v636; // [rsp+118h] [rbp+18h] BYREF
  __int64 v637; // [rsp+120h] [rbp+20h]
  __int64 v638; // [rsp+128h] [rbp+28h] BYREF
  __int64 v639; // [rsp+130h] [rbp+30h]
  __int64 v640; // [rsp+138h] [rbp+38h] BYREF
  __int64 v641; // [rsp+140h] [rbp+40h]
  __int64 v642; // [rsp+148h] [rbp+48h] BYREF
  __int64 v643; // [rsp+150h] [rbp+50h] BYREF
  __int64 v644; // [rsp+158h] [rbp+58h] BYREF
  __int64 v645; // [rsp+160h] [rbp+60h]
  unsigned __int16 *v646; // [rsp+168h] [rbp+68h]
  IUnknown *pProxy; // [rsp+170h] [rbp+70h] BYREF
  __int64 v648; // [rsp+178h] [rbp+78h]
  __int64 v649; // [rsp+180h] [rbp+80h] BYREF
  volatile signed __int32 *v650; // [rsp+188h] [rbp+88h] BYREF
  __int64 v651; // [rsp+190h] [rbp+90h]
  volatile signed __int32 **v652; // [rsp+198h] [rbp+98h] BYREF
  __int64 v653; // [rsp+1A0h] [rbp+A0h]
  __int64 v654; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v655; // [rsp+1B0h] [rbp+B0h]
  volatile signed __int32 *v656; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v657; // [rsp+1C0h] [rbp+C0h]
  volatile signed __int32 *v658; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v659; // [rsp+1D0h] [rbp+D0h]
  volatile signed __int32 *v660; // [rsp+1D8h] [rbp+D8h] BYREF
  int v661; // [rsp+1E0h] [rbp+E0h]
  int v662; // [rsp+1E4h] [rbp+E4h]
  volatile signed __int32 *v663; // [rsp+1E8h] [rbp+E8h] BYREF
  int v664; // [rsp+1F0h] [rbp+F0h]
  int v665; // [rsp+1F4h] [rbp+F4h]
  volatile signed __int32 *v666; // [rsp+1F8h] [rbp+F8h] BYREF
  int v667; // [rsp+200h] [rbp+100h]
  int v668; // [rsp+204h] [rbp+104h]
  __int64 v669; // [rsp+208h] [rbp+108h] BYREF
  __int64 v670; // [rsp+210h] [rbp+110h]
  volatile signed __int32 *v671; // [rsp+218h] [rbp+118h] BYREF
  __int64 v672; // [rsp+220h] [rbp+120h]
  volatile signed __int32 *v673; // [rsp+228h] [rbp+128h] BYREF
  int v674; // [rsp+230h] [rbp+130h]
  int v675; // [rsp+234h] [rbp+134h]
  int v676; // [rsp+238h] [rbp+138h] BYREF
  int v677; // [rsp+23Ch] [rbp+13Ch] BYREF
  unsigned int v678; // [rsp+240h] [rbp+140h]
  int v679; // [rsp+244h] [rbp+144h] BYREF
  LPVOID v680; // [rsp+248h] [rbp+148h] BYREF
  int (__fastcall ***v681)(_QWORD, void *, __int64 *); // [rsp+250h] [rbp+150h] BYREF
  LPVOID v682; // [rsp+258h] [rbp+158h] BYREF
  LPVOID v683; // [rsp+260h] [rbp+160h] BYREF
  __int64 v684; // [rsp+268h] [rbp+168h] BYREF
  __int64 v685; // [rsp+270h] [rbp+170h] BYREF
  __int64 v686; // [rsp+278h] [rbp+178h] BYREF
  __int64 v687; // [rsp+280h] [rbp+180h]
  __int64 v688; // [rsp+288h] [rbp+188h] BYREF
  __int64 v689; // [rsp+290h] [rbp+190h]
  __int64 v690; // [rsp+298h] [rbp+198h] BYREF
  unsigned int v691; // [rsp+2A0h] [rbp+1A0h]
  int v692; // [rsp+2A4h] [rbp+1A4h]
  __int64 v693; // [rsp+2A8h] [rbp+1A8h] BYREF
  __int64 v694; // [rsp+2B0h] [rbp+1B0h]
  __int64 v695; // [rsp+2B8h] [rbp+1B8h] BYREF
  unsigned int v696; // [rsp+2C0h] [rbp+1C0h]
  int v697; // [rsp+2C4h] [rbp+1C4h]
  __int64 v698; // [rsp+2C8h] [rbp+1C8h] BYREF
  __int64 v699; // [rsp+2D0h] [rbp+1D0h]
  __int64 v700; // [rsp+2D8h] [rbp+1D8h] BYREF
  __int64 v701; // [rsp+2E0h] [rbp+1E0h]
  __int64 v702; // [rsp+2E8h] [rbp+1E8h] BYREF
  __int64 v703; // [rsp+2F0h] [rbp+1F0h]
  __int64 v704; // [rsp+2F8h] [rbp+1F8h] BYREF
  unsigned int v705; // [rsp+300h] [rbp+200h]
  int v706; // [rsp+304h] [rbp+204h]
  __int64 v707; // [rsp+308h] [rbp+208h] BYREF
  __int64 v708; // [rsp+310h] [rbp+210h]
  __int64 v709; // [rsp+318h] [rbp+218h] BYREF
  __int64 v710; // [rsp+320h] [rbp+220h]
  __int64 v711; // [rsp+328h] [rbp+228h] BYREF
  __int64 v712; // [rsp+330h] [rbp+230h] BYREF
  _QWORD *v713; // [rsp+338h] [rbp+238h]
  int v714; // [rsp+340h] [rbp+240h] BYREF
  int v715; // [rsp+348h] [rbp+248h] BYREF
  signed int v716; // [rsp+350h] [rbp+250h] BYREF
  unsigned int v717; // [rsp+354h] [rbp+254h] BYREF
  unsigned int v718; // [rsp+358h] [rbp+258h] BYREF
  int v719; // [rsp+35Ch] [rbp+25Ch] BYREF
  int v720; // [rsp+360h] [rbp+260h] BYREF
  int v721; // [rsp+368h] [rbp+268h] BYREF
  int v722; // [rsp+370h] [rbp+270h] BYREF
  struct _RTL_CRITICAL_SECTION *v723; // [rsp+378h] [rbp+278h] BYREF
  struct _RTL_CRITICAL_SECTION *v724; // [rsp+380h] [rbp+280h] BYREF
  struct _RTL_CRITICAL_SECTION *v725; // [rsp+388h] [rbp+288h] BYREF
  struct _RTL_CRITICAL_SECTION *v726; // [rsp+390h] [rbp+290h] BYREF
  struct _RTL_CRITICAL_SECTION *v727; // [rsp+398h] [rbp+298h] BYREF
  struct _RTL_CRITICAL_SECTION *v728; // [rsp+3A0h] [rbp+2A0h] BYREF
  struct _RTL_CRITICAL_SECTION *v729; // [rsp+3A8h] [rbp+2A8h] BYREF
  struct _RTL_CRITICAL_SECTION *v730; // [rsp+3B0h] [rbp+2B0h] BYREF
  struct _RTL_CRITICAL_SECTION *v731; // [rsp+3B8h] [rbp+2B8h] BYREF
  struct _RTL_CRITICAL_SECTION *v732; // [rsp+3C0h] [rbp+2C0h] BYREF
  struct _RTL_CRITICAL_SECTION *v733; // [rsp+3C8h] [rbp+2C8h] BYREF
  struct _RTL_CRITICAL_SECTION *v734; // [rsp+3D0h] [rbp+2D0h] BYREF
  struct _RTL_CRITICAL_SECTION *v735; // [rsp+3D8h] [rbp+2D8h] BYREF
  struct _RTL_CRITICAL_SECTION *v736; // [rsp+3E0h] [rbp+2E0h] BYREF
  struct _RTL_CRITICAL_SECTION *v737; // [rsp+3E8h] [rbp+2E8h] BYREF
  __int128 v738; // [rsp+3F0h] [rbp+2F0h] BYREF
  LPVOID *v739; // [rsp+400h] [rbp+300h]
  void *v740; // [rsp+408h] [rbp+308h] BYREF
  char v741; // [rsp+410h] [rbp+310h]
  LPVOID *v742; // [rsp+418h] [rbp+318h]
  void *v743; // [rsp+420h] [rbp+320h] BYREF
  char v744; // [rsp+428h] [rbp+328h]
  IUnknown **v745; // [rsp+430h] [rbp+330h]
  void *v746; // [rsp+438h] [rbp+338h] BYREF
  __int128 v747; // [rsp+440h] [rbp+340h] BYREF
  PROPVARIANT pvar[2]; // [rsp+450h] [rbp+350h] BYREF
  __int64 v749; // [rsp+460h] [rbp+360h]
  PROPVARIANT v750[2]; // [rsp+468h] [rbp+368h] BYREF
  __int64 v751; // [rsp+478h] [rbp+378h]
  PROPVARIANT v752[2]; // [rsp+480h] [rbp+380h] BYREF
  __int64 v753; // [rsp+490h] [rbp+390h]
  PROPVARIANT v754[2]; // [rsp+498h] [rbp+398h] BYREF
  __int64 v755; // [rsp+4A8h] [rbp+3A8h]
  PROPVARIANT v756[2]; // [rsp+4B0h] [rbp+3B0h] BYREF
  __int64 v757; // [rsp+4C0h] [rbp+3C0h]
  PROPVARIANT v758[2]; // [rsp+4C8h] [rbp+3C8h] BYREF
  __int64 v759; // [rsp+4D8h] [rbp+3D8h]
  PROPVARIANT v760[2]; // [rsp+4E0h] [rbp+3E0h] BYREF
  __int64 v761; // [rsp+4F0h] [rbp+3F0h]
  PROPVARIANT v762[2]; // [rsp+4F8h] [rbp+3F8h] BYREF
  __int64 v763; // [rsp+508h] [rbp+408h]
  __int128 v764; // [rsp+510h] [rbp+410h]
  __int128 v765; // [rsp+520h] [rbp+420h]
  __int128 v766; // [rsp+530h] [rbp+430h] BYREF
  __int128 v767; // [rsp+540h] [rbp+440h]
  __int128 v768; // [rsp+550h] [rbp+450h]
  _QWORD v769[6]; // [rsp+560h] [rbp+460h] BYREF
  _QWORD v770[3]; // [rsp+590h] [rbp+490h] BYREF
  _QWORD v771[3]; // [rsp+5A8h] [rbp+4A8h] BYREF
  unsigned __int64 v772; // [rsp+5C0h] [rbp+4C0h]
  unsigned __int64 v773; // [rsp+5C8h] [rbp+4C8h]
  unsigned __int64 v774; // [rsp+5D0h] [rbp+4D0h]
  unsigned __int64 v775; // [rsp+5D8h] [rbp+4D8h]
  unsigned __int64 v776; // [rsp+5E0h] [rbp+4E0h]
  unsigned __int64 v777; // [rsp+5E8h] [rbp+4E8h]
  unsigned __int64 v778; // [rsp+5F0h] [rbp+4F0h]
  unsigned __int64 v779; // [rsp+5F8h] [rbp+4F8h]
  unsigned __int64 v780; // [rsp+600h] [rbp+500h]
  unsigned __int64 v781; // [rsp+608h] [rbp+508h]
  __int64 v782; // [rsp+610h] [rbp+510h]
  unsigned __int64 v783; // [rsp+618h] [rbp+518h]
  __int64 v784; // [rsp+620h] [rbp+520h]
  unsigned __int64 v785; // [rsp+628h] [rbp+528h]
  __int64 v786; // [rsp+630h] [rbp+530h]
  unsigned __int64 v787; // [rsp+638h] [rbp+538h]
  __int64 v788; // [rsp+640h] [rbp+540h]
  unsigned __int64 v789; // [rsp+648h] [rbp+548h]
  unsigned __int64 v790; // [rsp+650h] [rbp+550h]
  unsigned __int64 v791; // [rsp+658h] [rbp+558h]
  __int64 v792; // [rsp+660h] [rbp+560h]
  unsigned __int64 v793; // [rsp+668h] [rbp+568h]
  __int64 v794; // [rsp+670h] [rbp+570h]
  unsigned __int64 v795; // [rsp+678h] [rbp+578h]
  unsigned __int64 v796; // [rsp+680h] [rbp+580h]
  unsigned __int64 v797; // [rsp+688h] [rbp+588h]
  unsigned __int64 v798; // [rsp+690h] [rbp+590h]
  unsigned __int64 v799; // [rsp+698h] [rbp+598h]
  unsigned __int64 v800; // [rsp+6A0h] [rbp+5A0h]
  unsigned __int64 v801; // [rsp+6A8h] [rbp+5A8h]
  __int64 v802; // [rsp+6B0h] [rbp+5B0h]
  unsigned __int64 v803; // [rsp+6B8h] [rbp+5B8h]
  unsigned __int64 v804; // [rsp+6C0h] [rbp+5C0h]
  unsigned __int64 v805; // [rsp+6C8h] [rbp+5C8h]
  unsigned __int64 v806; // [rsp+6D0h] [rbp+5D0h]
  unsigned __int64 v807; // [rsp+6D8h] [rbp+5D8h]
  unsigned __int64 v808; // [rsp+6E0h] [rbp+5E0h]
  unsigned __int64 v809; // [rsp+6E8h] [rbp+5E8h]
  unsigned __int64 v810; // [rsp+6F0h] [rbp+5F0h]
  unsigned __int64 v811; // [rsp+6F8h] [rbp+5F8h]
  __int64 v812; // [rsp+700h] [rbp+600h]
  unsigned __int64 v813; // [rsp+708h] [rbp+608h]
  unsigned __int64 v814; // [rsp+710h] [rbp+610h]
  unsigned __int64 v815; // [rsp+718h] [rbp+618h]
  unsigned __int64 v816; // [rsp+720h] [rbp+620h]
  unsigned __int64 v817; // [rsp+728h] [rbp+628h]
  unsigned __int64 v818; // [rsp+730h] [rbp+630h]
  unsigned __int64 v819; // [rsp+738h] [rbp+638h]
  __int64 v820; // [rsp+740h] [rbp+640h]
  __int64 v821; // [rsp+748h] [rbp+648h]
  unsigned __int64 v822; // [rsp+750h] [rbp+650h]
  __int64 v823; // [rsp+758h] [rbp+658h]
  __int64 v824; // [rsp+760h] [rbp+660h]
  unsigned __int64 v825; // [rsp+768h] [rbp+668h]
  __int64 v826; // [rsp+770h] [rbp+670h]
  __int64 v827; // [rsp+778h] [rbp+678h]
  unsigned __int64 v828; // [rsp+780h] [rbp+680h]
  unsigned __int64 v829; // [rsp+788h] [rbp+688h]
  unsigned __int64 v830; // [rsp+790h] [rbp+690h]
  __int64 v831; // [rsp+798h] [rbp+698h]
  __int64 v832; // [rsp+7A0h] [rbp+6A0h]
  unsigned __int64 v833; // [rsp+7A8h] [rbp+6A8h]
  unsigned __int64 v834; // [rsp+7B0h] [rbp+6B0h]
  __int64 v835; // [rsp+7B8h] [rbp+6B8h]
  unsigned __int64 v836; // [rsp+7C0h] [rbp+6C0h]
  unsigned __int64 v837; // [rsp+7C8h] [rbp+6C8h]
  __int64 v838; // [rsp+7D0h] [rbp+6D0h]
  unsigned __int64 v839; // [rsp+7D8h] [rbp+6D8h]
  unsigned __int64 v840; // [rsp+7E0h] [rbp+6E0h]
  unsigned __int64 v841; // [rsp+7E8h] [rbp+6E8h]
  __int64 v842; // [rsp+7F0h] [rbp+6F0h]
  __int64 v843; // [rsp+7F8h] [rbp+6F8h]
  unsigned __int64 v844; // [rsp+800h] [rbp+700h]
  LPCRITICAL_SECTION v845; // [rsp+808h] [rbp+708h]
  __int64 v846; // [rsp+810h] [rbp+710h]
  unsigned __int64 v847; // [rsp+818h] [rbp+718h]
  LPCRITICAL_SECTION v848; // [rsp+820h] [rbp+720h]
  __int64 v849; // [rsp+828h] [rbp+728h]
  unsigned __int64 v850; // [rsp+830h] [rbp+730h]
  LPCRITICAL_SECTION v851; // [rsp+838h] [rbp+738h]
  __int64 v852; // [rsp+840h] [rbp+740h]
  unsigned __int64 v853; // [rsp+848h] [rbp+748h]
  __int64 v854; // [rsp+850h] [rbp+750h]
  volatile signed __int32 *v855; // [rsp+858h] [rbp+758h]
  __int64 v856; // [rsp+860h] [rbp+760h]
  volatile signed __int32 *v857; // [rsp+868h] [rbp+768h]
  __int128 v858; // [rsp+870h] [rbp+770h] BYREF
  __int128 v859; // [rsp+880h] [rbp+780h] BYREF
  __int128 v860; // [rsp+890h] [rbp+790h] BYREF
  __int128 v861; // [rsp+8A0h] [rbp+7A0h] BYREF
  IID rclsid; // [rsp+8B0h] [rbp+7B0h] BYREF
  LPCRITICAL_SECTION v863; // [rsp+8C0h] [rbp+7C0h]
  unsigned __int64 v864; // [rsp+8C8h] [rbp+7C8h]
  __int64 v865; // [rsp+8D0h] [rbp+7D0h]
  unsigned __int64 v866; // [rsp+8D8h] [rbp+7D8h]
  __int64 v867; // [rsp+8E0h] [rbp+7E0h]
  unsigned __int64 v868; // [rsp+8E8h] [rbp+7E8h]
  __int64 v869; // [rsp+8F0h] [rbp+7F0h]
  unsigned __int64 v870; // [rsp+8F8h] [rbp+7F8h]
  unsigned __int64 v871; // [rsp+900h] [rbp+800h]
  unsigned __int64 v872; // [rsp+908h] [rbp+808h]
  unsigned __int64 v873; // [rsp+910h] [rbp+810h]
  __int64 v874; // [rsp+918h] [rbp+818h]
  __int64 (__fastcall **v875)(); // [rsp+920h] [rbp+820h] BYREF
  char v876[16]; // [rsp+928h] [rbp+828h] BYREF
  __int64 (__fastcall **v877)(); // [rsp+938h] [rbp+838h] BYREF
  char v878[16]; // [rsp+940h] [rbp+840h] BYREF
  __int64 (__fastcall **v879)(); // [rsp+950h] [rbp+850h] BYREF
  char v880[16]; // [rsp+958h] [rbp+858h] BYREF
  __int64 (__fastcall **v881)(); // [rsp+968h] [rbp+868h] BYREF
  char v882[16]; // [rsp+970h] [rbp+870h] BYREF
  __int64 (__fastcall **v883)(); // [rsp+980h] [rbp+880h] BYREF
  char v884[16]; // [rsp+988h] [rbp+888h] BYREF
  __int64 (__fastcall **v885)(); // [rsp+998h] [rbp+898h] BYREF
  char v886[16]; // [rsp+9A0h] [rbp+8A0h] BYREF
  __int64 (__fastcall **v887)(); // [rsp+9B0h] [rbp+8B0h] BYREF
  char v888[16]; // [rsp+9B8h] [rbp+8B8h] BYREF
  __int64 (__fastcall **v889)(); // [rsp+9C8h] [rbp+8C8h] BYREF
  char v890[16]; // [rsp+9D0h] [rbp+8D0h] BYREF
  __int128 v891; // [rsp+9E0h] [rbp+8E0h] BYREF
  __int64 (__fastcall **v892)(); // [rsp+9F0h] [rbp+8F0h] BYREF
  char v893[16]; // [rsp+9F8h] [rbp+8F8h] BYREF
  __int64 (__fastcall **v894)(); // [rsp+A08h] [rbp+908h] BYREF
  char v895[16]; // [rsp+A10h] [rbp+910h] BYREF
  __int64 (__fastcall **v896)(); // [rsp+A20h] [rbp+920h] BYREF
  char v897[16]; // [rsp+A28h] [rbp+928h] BYREF
  __int64 (__fastcall **v898)(); // [rsp+A38h] [rbp+938h] BYREF
  char v899[16]; // [rsp+A40h] [rbp+940h] BYREF
  __int64 (__fastcall **v900)(); // [rsp+A50h] [rbp+950h] BYREF
  char v901[16]; // [rsp+A58h] [rbp+958h] BYREF
  __int64 (__fastcall **v902)(); // [rsp+A68h] [rbp+968h] BYREF
  char v903[16]; // [rsp+A70h] [rbp+970h] BYREF
  __int64 (__fastcall **v904)(); // [rsp+A80h] [rbp+980h] BYREF
  char v905[16]; // [rsp+A88h] [rbp+988h] BYREF
  __int64 (__fastcall **v906)(); // [rsp+A98h] [rbp+998h] BYREF
  char v907[16]; // [rsp+AA0h] [rbp+9A0h] BYREF
  __int64 (__fastcall **v908)(); // [rsp+AB0h] [rbp+9B0h] BYREF
  char v909[16]; // [rsp+AB8h] [rbp+9B8h] BYREF
  __int64 (__fastcall **v910)(); // [rsp+AC8h] [rbp+9C8h] BYREF
  char v911[16]; // [rsp+AD0h] [rbp+9D0h] BYREF
  __int64 (__fastcall **v912)(); // [rsp+AE0h] [rbp+9E0h] BYREF
  char v913[16]; // [rsp+AE8h] [rbp+9E8h] BYREF
  __int64 (__fastcall **v914)(); // [rsp+AF8h] [rbp+9F8h] BYREF
  char v915[16]; // [rsp+B00h] [rbp+A00h] BYREF
  __int64 (__fastcall **v916)(); // [rsp+B10h] [rbp+A10h] BYREF
  char v917[16]; // [rsp+B18h] [rbp+A18h] BYREF
  __int64 (__fastcall **v918)(); // [rsp+B28h] [rbp+A28h] BYREF
  char v919[16]; // [rsp+B30h] [rbp+A30h] BYREF
  __int64 (__fastcall **v920)(); // [rsp+B40h] [rbp+A40h] BYREF
  char v921[16]; // [rsp+B48h] [rbp+A48h] BYREF
  __int64 (__fastcall **v922)(); // [rsp+B58h] [rbp+A58h] BYREF
  char v923[16]; // [rsp+B60h] [rbp+A60h] BYREF
  __int64 (__fastcall **v924)(); // [rsp+B70h] [rbp+A70h] BYREF
  char v925[16]; // [rsp+B78h] [rbp+A78h] BYREF
  __int64 (__fastcall **v926)(); // [rsp+B88h] [rbp+A88h] BYREF
  char v927[16]; // [rsp+B90h] [rbp+A90h] BYREF
  __int64 (__fastcall **v928)(); // [rsp+BA0h] [rbp+AA0h] BYREF
  char v929[16]; // [rsp+BA8h] [rbp+AA8h] BYREF
  _BYTE v930[24]; // [rsp+BB8h] [rbp+AB8h] BYREF
  _BYTE v931[24]; // [rsp+BD0h] [rbp+AD0h] BYREF
  _BYTE v932[24]; // [rsp+BE8h] [rbp+AE8h] BYREF
  _BYTE v933[32]; // [rsp+C00h] [rbp+B00h] BYREF
  __int128 v934; // [rsp+C20h] [rbp+B20h]
  char v935[24]; // [rsp+C30h] [rbp+B30h] BYREF
  char v936[24]; // [rsp+C48h] [rbp+B48h] BYREF
  char v937[24]; // [rsp+C60h] [rbp+B60h] BYREF
  char v938[24]; // [rsp+C78h] [rbp+B78h] BYREF
  char v939[24]; // [rsp+C90h] [rbp+B90h] BYREF
  char v940[24]; // [rsp+CA8h] [rbp+BA8h] BYREF
  char v941[24]; // [rsp+CC0h] [rbp+BC0h] BYREF
  char v942[24]; // [rsp+CD8h] [rbp+BD8h] BYREF
  char v943[24]; // [rsp+CF0h] [rbp+BF0h] BYREF
  char v944[24]; // [rsp+D08h] [rbp+C08h] BYREF
  __int128 v945; // [rsp+D20h] [rbp+C20h] BYREF
  __int128 v946; // [rsp+D30h] [rbp+C30h] BYREF
  __int128 v947; // [rsp+D40h] [rbp+C40h] BYREF
  char v948[16]; // [rsp+D50h] [rbp+C50h] BYREF
  void *retaddr; // [rsp+DB8h] [rbp+CB8h]

  v678 = a3;
  v14 = a2;
  v625 = a2;
  v15 = a1;
  v613 = a4;
  v713 = a5;
  v633 = a6;
  v16 = (__int64)a9;
  v646 = a9;
  v710 = a12;
  v745 = a14;
  v17 = 0;
  v605 = 0;
  v606 = 0;
  v611 = 0;
  v610 = 0;
  v609 = 0;
  v608 = 0;
  v649 = 0LL;
  v648 = 0LL;
  v682 = 0LL;
  v624 = 0;
  v680 = 0LL;
  v623 = 0;
  v18 = 0;
  LODWORD(lpCriticalSection) = 0;
  v634 = 0LL;
  v683 = 0LL;
  v19 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(a1 + 16) + 40LL))(*(_QWORD *)(a1 + 16), &v683);
  v20 = v19;
  if ( v19 < 0 )
  {
    v395 = 1681LL;
LABEL_935:
    v396 = (unsigned int)v19;
    goto LABEL_936;
  }
  v21 = v613;
  if ( v613 == 2 )
  {
    v22 = 1;
    v628 = 1;
  }
  else
  {
    v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 56LL))(v15);
    v628 = v22;
    v21 = v613;
    if ( !v613 )
      goto LABEL_4;
  }
  v615 = 0;
  if ( (unsigned int)(v21 - 1) > 2 )
    goto LABEL_504;
LABEL_4:
  v615 = 0;
  if ( v14 )
    goto LABEL_504;
  if ( !qword_18019EE40 )
  {
    v20 = -2147418113;
    v396 = 2147549183LL;
    v395 = 1711LL;
LABEL_936:
    sub_18004BD84(retaddr, v395, "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", v396);
    goto LABEL_916;
  }
  v634 = 0LL;
  v19 = (*(__int64 (__fastcall **)(__int64, LPVOID, __int64 *))(*(_QWORD *)qword_18019EE40 + 48LL))(
          qword_18019EE40,
          v683,
          &v634);
  v20 = v19;
  if ( v19 < 0 )
  {
    v395 = 1712LL;
    goto LABEL_935;
  }
  v611 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v634 + 224LL))(v634);
  v610 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v634 + 208LL))(v634);
  v609 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v634 + 216LL))(v634);
  v23 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)qword_18019E618 + 208LL))(qword_18019E618) && !v22;
  v608 = v23;
  if ( (unsigned int)v613 <= 1 || (v615 = 0, v613 == 3) )
  {
    v24 = v613;
    v819 = *(_QWORD *)(v15 + 1656);
    v820 = v613;
    if ( v613 >= v819 )
    {
      v503 = sub_180118A38(v943, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
      sub_180118968(v503);
    }
    v25 = *(_QWORD *)(v15 + 1664) + 96LL * v613;
    if ( !*(_BYTE *)(v25 + 52) )
      goto LABEL_24;
    v26 = v25 + 56;
    EnterCriticalSection((LPCRITICAL_SECTION)(v25 + 56));
    v821 = v25 + 56;
    v27 = 0LL;
    v686 = 0LL;
    v28 = 0;
    v687 = 0LL;
    v29 = 0;
    if ( *(int *)(v25 + 40) <= 0 )
    {
LABEL_18:
      v30 = 0LL;
      if ( v28 > 0 )
      {
        while ( (int)v30 >= 0 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v27 + 20LL) )
          {
            v399 = (_QWORD *)sub_180023320((__int64)&v686, (int)v30);
            v400 = sub_180052550(*v399, v25);
            if ( v400 < 0 )
            {
              v397 = (unsigned int)v400;
              v398 = 508LL;
              goto LABEL_943;
            }
          }
          v30 = (struct _RTL_CRITICAL_SECTION *)(unsigned int)((_DWORD)v30 + 1);
          v27 += 16LL;
          if ( (int)v30 >= v28 )
            goto LABEL_22;
        }
        sub_1800BB2C8(3221225612LL);
LABEL_949:
        while ( 1 )
        {
          v401 = (_QWORD *)sub_180023320(v25 + 32, v26);
          if ( !(unsigned int)sub_1800233E0((__int64)&v688, v401) )
            break;
          if ( ++v26 >= *(_DWORD *)(v25 + 40) )
          {
            v32 = (unsigned int)v689;
            v31 = v688;
            goto LABEL_27;
          }
        }
        v402 = 2147942414LL;
        v403 = 502LL;
        goto LABEL_954;
      }
LABEL_22:
      sub_180032210(&v686);
      if ( v25 == -56 )
      {
LABEL_24:
        v822 = *(_QWORD *)(v15 + 1672);
        v823 = v613;
        if ( v613 >= v822 )
        {
          v502 = sub_180118A38(v942, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
          sub_180118968(v502);
        }
        v25 = *(_QWORD *)(v15 + 1680) + 96LL * v613;
        if ( !*(_BYTE *)(v25 + 52) )
          goto LABEL_31;
        v30 = (struct _RTL_CRITICAL_SECTION *)(v25 + 56);
        EnterCriticalSection((LPCRITICAL_SECTION)(v25 + 56));
        v824 = v25 + 56;
        v31 = 0LL;
        v688 = 0LL;
        v32 = 0LL;
        v689 = 0LL;
        v26 = 0;
        if ( *(int *)(v25 + 40) > 0 )
          goto LABEL_949;
LABEL_27:
        v33 = 0;
        if ( (int)v32 <= 0 )
        {
LABEL_28:
          if ( v31 )
          {
            if ( (int)v32 > 0 )
            {
              v406 = v31;
              do
              {
                sub_1800322B0(v406);
                v406 += 16LL;
                --v32;
              }
              while ( v32 );
            }
            _o_free(v31);
          }
          if ( v30 )
            goto LABEL_30;
          goto LABEL_31;
        }
        while ( 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)sub_180023320((__int64)&v688, v33) + 20LL) )
          {
            v404 = (_QWORD *)sub_180023320((__int64)&v688, v33);
            v405 = sub_180052550(*v404, v25);
            if ( v405 < 0 )
              break;
          }
          if ( ++v33 >= (int)v32 )
            goto LABEL_28;
        }
        v402 = (unsigned int)v405;
        v403 = 508LL;
LABEL_954:
        sub_18004BD84(retaddr, v403, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", v402);
        sub_180032210(&v688);
        if ( v30 )
LABEL_30:
          LeaveCriticalSection(v30);
LABEL_31:
        v825 = *(_QWORD *)(v15 + 1688);
        v826 = v613;
        if ( v613 >= v825 )
        {
          v501 = sub_180118A38(v941, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
          sub_180118968(v501);
        }
        v34 = *(_QWORD *)(v15 + 1696) + 96LL * v613;
        if ( !*(_BYTE *)(v34 + 52) )
        {
LABEL_64:
          v828 = *(_QWORD *)(v15 + 64);
          v829 = v24;
          if ( v24 >= v828 )
          {
            v500 = sub_180118A38(v940, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
            sub_180118968(v500);
          }
          if ( !*(_DWORD *)(*(_QWORD *)(v15 + 72) + 4 * v24) )
          {
            v711 = 0LL;
            v649 = 0LL;
            sub_18011C680(v15, (unsigned int)v613, &v649, &v711);
            v615 = (unsigned __int8)sub_1800E56A8(v711) != 0;
            sub_18000F708(&v711);
            v17 = 0;
LABEL_494:
            if ( v649 )
            {
              v739 = &v682;
              v740 = 0LL;
              v741 = 1;
              (*(void (__fastcall **)(__int64, unsigned int *, void **))(*(_QWORD *)v649 + 32LL))(v649, &v624, &v740);
              if ( v741 )
              {
                v495 = *v739;
                *v739 = v740;
                if ( v495 )
                  CoTaskMemFree(v495);
              }
            }
            if ( v648 )
            {
              v742 = &v680;
              v743 = 0LL;
              v744 = 1;
              (*(void (__fastcall **)(__int64, unsigned int *, void **))(*(_QWORD *)v648 + 32LL))(v648, &v623, &v743);
              if ( v744 )
              {
                v227 = *v742;
                *v742 = v743;
                if ( v227 )
                  CoTaskMemFree(v227);
              }
            }
            v14 = v625;
            v16 = (__int64)v646;
            goto LABEL_500;
          }
          v47 = 0LL;
          v681 = 0LL;
          v643 = 0LL;
          v48 = *v713 - 0x4FD1B4939E90EA20LL;
          if ( *v713 == 0x4FD1B4939E90EA20LL )
            v48 = v713[1] + 0x30A9569EEC81575FLL;
          if ( v48 )
            goto LABEL_1099;
          v49 = v613;
          v615 = v613;
          v629 = 0LL;
          v630 = 0LL;
          v618 = 0;
          v764 = xmmword_18015B798;
          if ( !v613 )
          {
            v50 = 1;
            if ( *(_QWORD *)(v15 + 80) )
            {
              *(_OWORD *)pvar = 0LL;
              v749 = 0LL;
              if ( (*(int (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(v15 + 80) + 40LL))(
                     *(_QWORD *)(v15 + 80),
                     &xmmword_18015B7F8,
                     pvar) >= 0
                && LOWORD(pvar[0]) == 19 )
              {
                v50 = LODWORD(pvar[1]) == 0;
              }
              PropVariantClear(pvar);
              if ( !v50 )
              {
                v80 = v15 + 168;
LABEL_151:
                v81 = 0LL;
                v82 = *(_DWORD *)(v80 + 8);
                if ( v82 <= 0 )
                  goto LABEL_1013;
                v83 = *(_QWORD *)v80;
                while ( 1 )
                {
                  v84 = *(_QWORD *)(v83 + 16LL * (int)v81) - v764;
                  if ( !v84 )
                    v84 = *(_QWORD *)(v83 + 16LL * (int)v81 + 8) - *((_QWORD *)&v764 + 1);
                  if ( !v84 )
                    break;
                  v81 = (unsigned int)(v81 + 1);
                  if ( (int)v81 >= v82 )
                    goto LABEL_1013;
                }
                if ( (_DWORD)v81 == -1 )
                {
LABEL_1013:
                  v148 = 0;
                  goto LABEL_298;
                }
                v85 = 1;
                if ( !*(_QWORD *)(v15 + 80) )
                  goto LABEL_162;
                *(_OWORD *)v750 = 0LL;
                v751 = 0LL;
                if ( (*(int (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(v15 + 80) + 40LL))(
                       *(_QWORD *)(v15 + 80),
                       &xmmword_18015B7F8,
                       v750) >= 0
                  && LOWORD(v750[0]) == 19 )
                {
                  v85 = LODWORD(v750[1]) == 0;
                }
                PropVariantClear(v750);
                if ( v85 || (v86 = 0, v49 == 3) )
LABEL_162:
                  v86 = 1;
                v87 = (LPCRITICAL_SECTION)v49;
                lpCriticalSection = (LPCRITICAL_SECTION)v49;
                v841 = *(_QWORD *)(v15 + 1672);
                v842 = v49;
                if ( v49 >= v841 )
                {
                  v454 = sub_180118A38(v935, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                  sub_180118968(v454);
                }
                v88 = *(_QWORD *)(v15 + 1680) + 96LL * v49;
                if ( !v86 )
                {
                  sub_180067BDC(&v629, *(_QWORD *)(v15 + 1680) + 96LL * v49);
                  if ( (_DWORD)v630 != *(_DWORD *)(v88 + 8) )
                  {
                    v425 = retaddr;
                    v426 = 570LL;
                    goto LABEL_1018;
                  }
                  goto LABEL_189;
                }
                if ( !*(_BYTE *)(v88 + 52) )
                {
LABEL_171:
                  for ( i = 0; i < *(_DWORD *)(v88 + 40); ++i )
                  {
                    for ( j = 0; j < *(_DWORD *)(*(_QWORD *)sub_180023320(v88 + 32, i) + 8LL); ++j )
                    {
                      v434 = (__int64 *)sub_180023320(v88 + 32, i);
                      v435 = (_QWORD *)sub_180023320(*v434, j);
                      if ( (unsigned int)sub_180022EE0(&v629, v435) == -1 )
                      {
                        v436 = (__int64 *)sub_180023320(v88 + 32, i);
                        v437 = sub_180023320(*v436, j);
                        if ( !(unsigned int)sub_1800273F8(&v629, v437) )
                        {
                          v425 = retaddr;
                          v426 = 584LL;
                          goto LABEL_1018;
                        }
                      }
                    }
                  }
                  v94 = *(__int64 **)(v88 + 16);
                  if ( v94 )
                  {
                    v95 = 0;
                    if ( *((int *)v94 + 2) > 0 )
                    {
                      v96 = 0LL;
                      do
                      {
                        if ( v95 < 0 || v95 >= *((_DWORD *)v94 + 2) )
                        {
                          sub_1800BB2C8(3221225612LL);
                          __debugbreak();
                        }
                        v97 = (_QWORD *)(*v94 + 16LL * v95);
                        v81 = 0LL;
                        if ( (int)v630 <= 0 )
                          goto LABEL_178;
                        while ( 1 )
                        {
                          v438 = (_QWORD *)(v629 + 16LL * (int)v81);
                          v439 = *v438 - *v97;
                          if ( *v438 == *v97 )
                            v439 = v438[1] - v97[1];
                          if ( !v439 )
                            break;
                          v81 = (unsigned int)(v81 + 1);
                          if ( (int)v81 >= (int)v630 )
                            goto LABEL_178;
                        }
                        if ( (_DWORD)v81 == -1 )
                        {
LABEL_178:
                          if ( v95 >= *((_DWORD *)v94 + 2) )
                          {
                            sub_1800BB2C8(3221225612LL);
                            __debugbreak();
                          }
                          v98 = *v94;
                          if ( (_DWORD)v630 == HIDWORD(v630) )
                          {
                            if ( HIDWORD(v630) )
                            {
                              v99 = 2 * v630;
                              if ( (v630 & 0x40000000) != 0 )
                                goto LABEL_1050;
                            }
                            else
                            {
                              v99 = 1;
                            }
                            if ( (unsigned __int64)v99 > 0x7FFFFFF || (v100 = o__recalloc(v629, v99, 16LL)) == 0 )
                            {
LABEL_1050:
                              v425 = retaddr;
                              v426 = 596LL;
LABEL_1018:
                              sub_18004BD84(
                                v425,
                                v426,
                                "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                                2147942414LL);
                              break;
                            }
                            HIDWORD(v630) = v99;
                            v629 = v100;
                          }
                          v101 = (_OWORD *)(v629 + 16LL * (int)v630);
                          if ( v101 )
                            *v101 = *(_OWORD *)(v98 + v96);
                          LODWORD(v630) = v630 + 1;
                        }
                        ++v95;
                        v96 += 16LL;
                        v94 = *(__int64 **)(v88 + 16);
                      }
                      while ( v95 < *((_DWORD *)v94 + 2) );
                    }
                  }
LABEL_189:
                  v102 = 0;
                  v626 = 0;
                  v103 = 0;
                  if ( (int)v630 <= 0 )
                  {
                    v148 = 0;
                  }
                  else
                  {
                    v104 = 0LL;
                    v617 = 0LL;
                    do
                    {
                      if ( (__int64)v104 < 0 )
                      {
                        sub_1800BB2C8(3221225612LL);
                        __debugbreak();
                      }
                      v765 = *(_OWORD *)(v629 + 16LL * (_QWORD)v104);
                      if ( v615 )
                        goto LABEL_198;
                      v105 = 1;
                      if ( !*(_QWORD *)(v15 + 80) )
                        goto LABEL_198;
                      *(_OWORD *)v752 = 0LL;
                      v753 = 0LL;
                      if ( (*(int (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(v15 + 80) + 40LL))(
                             *(_QWORD *)(v15 + 80),
                             &xmmword_18015B7F8,
                             v752) >= 0
                        && LOWORD(v752[0]) == 19 )
                      {
                        v105 = LODWORD(v752[1]) == 0;
                      }
                      PropVariantClear(v752);
                      if ( v105 )
                      {
LABEL_198:
                        v844 = *(_QWORD *)(v15 + 1656);
                        v845 = v87;
                        if ( (unsigned __int64)v87 >= v844 )
                        {
                          v453 = sub_180118A38(
                                   &v881,
                                   "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                          sub_180118968(v453);
                        }
                        if ( (v103 & 0x200) != 0 )
                        {
                          v103 &= ~0x200u;
                          v605 = v103;
                          v881 = &off_180149EB8;
                          o___std_exception_destroy(v882);
                        }
                        v106 = *(_QWORD *)(v15 + 1664) + 96LL * (_QWORD)v87;
                        if ( !*(_BYTE *)(v106 + 52) )
                          goto LABEL_237;
                        v107 = (struct _RTL_CRITICAL_SECTION *)(v106 + 56);
                        v616 = (LPCRITICAL_SECTION)(v106 + 56);
                        EnterCriticalSection((LPCRITICAL_SECTION)(v106 + 56));
                        v846 = v106 + 56;
                        v108 = 0LL;
                        v640 = 0LL;
                        v109 = 0LL;
                        v641 = 0LL;
                        v110 = 0;
                        v111 = 0;
                        if ( *(int *)(v106 + 40) > 0 )
                        {
                          v112 = 0LL;
                          do
                          {
                            if ( v112 < 0 || v111 >= *(_DWORD *)(v106 + 40) )
                            {
                              sub_1800BB2C8(3221225612LL);
                              __debugbreak();
                            }
                            v113 = *(_QWORD *)(v106 + 32);
                            if ( (_DWORD)v109 == v110 )
                            {
                              if ( v110 )
                              {
                                v110 = 2 * v109;
                                if ( (v109 & 0x40000000) != 0 )
                                  goto LABEL_1055;
                              }
                              else
                              {
                                v110 = 1;
                              }
                              if ( (unsigned __int64)v110 > 0x7FFFFFF
                                || (v114 = o__recalloc(v108, v110, 16LL), (v108 = v114) == 0) )
                              {
LABEL_1055:
                                sub_18004BD84(
                                  retaddr,
                                  502LL,
                                  "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                                  2147942414LL);
                                sub_180032210(&v640);
                                v121 = v616;
                                if ( v616 )
LABEL_235:
                                  LeaveCriticalSection(v121);
LABEL_236:
                                v103 = v605;
                                v15 = a1;
                                v87 = lpCriticalSection;
LABEL_237:
                                v847 = *(_QWORD *)(v15 + 1672);
                                v848 = v87;
                                if ( (unsigned __int64)v87 >= v847 )
                                {
                                  v452 = sub_180118A38(
                                           &v879,
                                           "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                                  sub_180118968(v452);
                                }
                                if ( (v103 & 0x400) != 0 )
                                {
                                  v103 &= ~0x400u;
                                  v605 = v103;
                                  v879 = &off_180149EB8;
                                  o___std_exception_destroy(v880);
                                }
                                v122 = *(_QWORD *)(v15 + 1680) + 96LL * (_QWORD)v87;
                                if ( !*(_BYTE *)(v122 + 52) )
                                  goto LABEL_247;
                                v123 = (struct _RTL_CRITICAL_SECTION *)(v122 + 56);
                                EnterCriticalSection((LPCRITICAL_SECTION)(v122 + 56));
                                v849 = v122 + 56;
                                v124 = 0LL;
                                v669 = 0LL;
                                v125 = 0LL;
                                v670 = 0LL;
                                v126 = 0;
                                if ( *(int *)(v122 + 40) <= 0 )
                                  goto LABEL_242;
                                while ( 1 )
                                {
                                  v442 = (_QWORD *)sub_180023320(v122 + 32, v126);
                                  if ( !(unsigned int)sub_1800233E0((__int64)&v669, v442) )
                                    break;
                                  if ( ++v126 >= *(_DWORD *)(v122 + 40) )
                                  {
                                    v125 = (unsigned int)v670;
                                    v124 = v669;
LABEL_242:
                                    v127 = 0;
                                    if ( (int)v125 <= 0 )
                                    {
LABEL_243:
                                      if ( v124 )
                                      {
                                        if ( (int)v125 > 0 )
                                        {
                                          v447 = v124;
                                          do
                                          {
                                            sub_1800322B0(v447);
                                            v447 += 16LL;
                                            --v125;
                                          }
                                          while ( v125 );
                                        }
                                        _o_free(v124);
                                        v669 = 0LL;
                                      }
                                      v670 = 0LL;
                                      if ( v123 )
LABEL_245:
                                        LeaveCriticalSection(v123);
LABEL_246:
                                      v103 = v605;
LABEL_247:
                                      v850 = *(_QWORD *)(v15 + 1688);
                                      v851 = v87;
                                      if ( (unsigned __int64)v87 >= v850 )
                                      {
                                        v451 = sub_180118A38(
                                                 &v877,
                                                 "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                                        sub_180118968(v451);
                                      }
                                      if ( (v103 & 0x800) != 0 )
                                      {
                                        v103 &= ~0x800u;
                                        v605 = v103;
                                        v877 = &off_180149EB8;
                                        o___std_exception_destroy(v878);
                                      }
                                      v128 = *(_QWORD *)(v15 + 1696) + 96LL * (_QWORD)v87;
                                      if ( !*(_BYTE *)(v128 + 52) )
                                        goto LABEL_286;
                                      v129 = (struct _RTL_CRITICAL_SECTION *)(v128 + 56);
                                      v616 = (LPCRITICAL_SECTION)(v128 + 56);
                                      EnterCriticalSection((LPCRITICAL_SECTION)(v128 + 56));
                                      v852 = v128 + 56;
                                      v130 = 0LL;
                                      v638 = 0LL;
                                      v131 = 0LL;
                                      v639 = 0LL;
                                      v132 = 0;
                                      v133 = 0;
                                      if ( *(int *)(v128 + 40) > 0 )
                                      {
                                        v134 = 0LL;
                                        do
                                        {
                                          if ( v134 < 0 || v133 >= *(_DWORD *)(v128 + 40) )
                                            goto LABEL_1086;
                                          v135 = *(_QWORD *)(v128 + 32);
                                          if ( (_DWORD)v131 == v132 )
                                          {
                                            if ( v132 )
                                            {
                                              v132 = 2 * v131;
                                              if ( (v131 & 0x40000000) != 0 )
                                                goto LABEL_1076;
                                            }
                                            else
                                            {
                                              v132 = 1;
                                            }
                                            if ( (unsigned __int64)v132 > 0x7FFFFFF
                                              || (v136 = o__recalloc(v130, v132, 16LL), (v130 = v136) == 0) )
                                            {
LABEL_1076:
                                              sub_18004BD84(
                                                retaddr,
                                                502LL,
                                                "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                                                2147942414LL);
                                              sub_180032210(&v638);
                                              v143 = v616;
                                              if ( !v616 )
                                                goto LABEL_285;
                                              goto LABEL_284;
                                            }
                                            HIDWORD(v639) = v132;
                                            v638 = v136;
                                          }
                                          v137 = (_QWORD *)(v130 + 16LL * (int)v131);
                                          if ( v137 )
                                          {
                                            *v137 = 0LL;
                                            v137[1] = 0LL;
                                            v138 = *(_QWORD *)(v135 + v134 + 8);
                                            if ( v138 )
                                            {
                                              _InterlockedIncrement((volatile signed __int32 *)(v138 + 8));
                                              v132 = HIDWORD(v639);
                                              LODWORD(v131) = v639;
                                              v130 = v638;
                                            }
                                            *v137 = *(_QWORD *)(v135 + v134);
                                            v137[1] = *(_QWORD *)(v135 + v134 + 8);
                                          }
                                          v131 = (unsigned int)(v131 + 1);
                                          LODWORD(v639) = v131;
                                          ++v133;
                                          v134 += 16LL;
                                        }
                                        while ( v133 < *(_DWORD *)(v128 + 40) );
                                        v129 = (struct _RTL_CRITICAL_SECTION *)(v128 + 56);
                                      }
                                      v139 = 0;
                                      if ( (int)v131 > 0 )
                                      {
                                        v140 = v130;
                                        while ( v139 >= 0 && v139 < (int)v131 )
                                        {
                                          if ( *(_BYTE *)(*(_QWORD *)v140 + 20LL) )
                                          {
                                            v448 = (_QWORD *)sub_180023320((__int64)&v638, v139);
                                            v449 = sub_180052550(*v448, v128);
                                            if ( v449 < 0 )
                                            {
                                              sub_18004BD84(
                                                retaddr,
                                                508LL,
                                                "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                                                (unsigned int)v449);
                                              sub_180032210(&v638);
                                              if ( v129 )
                                                goto LABEL_283;
LABEL_285:
                                              v103 = v605;
                                              v15 = a1;
                                              v87 = lpCriticalSection;
LABEL_286:
                                              v853 = *(_QWORD *)(v15 + 152);
                                              v863 = v87;
                                              if ( (unsigned __int64)v87 < v853 )
                                              {
                                                if ( (v103 & 0x1000) != 0 )
                                                {
                                                  v103 &= ~0x1000u;
                                                  v605 = v103;
                                                  v875 = &off_180149EB8;
                                                  o___std_exception_destroy(v876);
                                                }
                                                v144 = *(_QWORD *)(v15 + 160) + 16LL * (_QWORD)v87;
                                                v104 = v617;
                                                v102 = v626;
                                                goto LABEL_290;
                                              }
LABEL_1088:
                                              v450 = sub_180118A38(
                                                       &v875,
                                                       "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                                              sub_180118968(v450);
                                            }
                                          }
                                          ++v139;
                                          v140 += 16LL;
                                          if ( v139 >= (int)v131 )
                                            goto LABEL_273;
                                        }
                                        sub_1800BB2C8(3221225612LL);
                                        goto LABEL_1088;
                                      }
LABEL_273:
                                      if ( v130 )
                                      {
                                        if ( (int)v131 > 0 )
                                        {
                                          v141 = (volatile signed __int32 **)(v130 + 8);
                                          do
                                          {
                                            v142 = *v141;
                                            if ( *v141 && _InterlockedExchangeAdd(v142 + 2, 0xFFFFFFFF) == 1 )
                                            {
                                              (**(void (__fastcall ***)(volatile signed __int32 *))v142)(v142);
                                              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v142);
                                            }
                                            v141 += 2;
                                            --v131;
                                          }
                                          while ( v131 );
                                          v130 = v638;
                                        }
                                        _o_free(v130);
                                        v638 = 0LL;
                                      }
                                      v639 = 0LL;
                                      if ( !v129 )
                                        goto LABEL_285;
LABEL_283:
                                      v143 = v129;
LABEL_284:
                                      LeaveCriticalSection(v143);
                                      goto LABEL_285;
                                    }
                                    while ( 1 )
                                    {
                                      if ( *(_BYTE *)(*(_QWORD *)sub_180023320((__int64)&v669, v127) + 20LL) )
                                      {
                                        v445 = (_QWORD *)sub_180023320((__int64)&v669, v127);
                                        v446 = sub_180052550(*v445, v122);
                                        if ( v446 < 0 )
                                          break;
                                      }
                                      if ( ++v127 >= (int)v125 )
                                        goto LABEL_243;
                                    }
                                    v443 = (unsigned int)v446;
                                    v444 = 508LL;
LABEL_1065:
                                    sub_18004BD84(
                                      retaddr,
                                      v444,
                                      "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                                      v443);
                                    sub_180032210(&v669);
                                    if ( v122 != -56 )
                                      goto LABEL_245;
                                    goto LABEL_246;
                                  }
                                }
                                v443 = 2147942414LL;
                                v444 = 502LL;
                                goto LABEL_1065;
                              }
                              HIDWORD(v641) = v110;
                              v640 = v114;
                            }
                            v115 = (_QWORD *)(v108 + 16LL * (int)v109);
                            if ( v115 )
                            {
                              *v115 = 0LL;
                              v115[1] = 0LL;
                              v116 = *(_QWORD *)(v113 + v112 + 8);
                              if ( v116 )
                              {
                                _InterlockedIncrement((volatile signed __int32 *)(v116 + 8));
                                v110 = HIDWORD(v641);
                                LODWORD(v109) = v641;
                                v108 = v640;
                              }
                              *v115 = *(_QWORD *)(v113 + v112);
                              v115[1] = *(_QWORD *)(v113 + v112 + 8);
                            }
                            v109 = (unsigned int)(v109 + 1);
                            LODWORD(v641) = v109;
                            ++v111;
                            v112 += 16LL;
                          }
                          while ( v111 < *(_DWORD *)(v106 + 40) );
                          v107 = (struct _RTL_CRITICAL_SECTION *)(v106 + 56);
                        }
                        v117 = 0;
                        if ( (int)v109 <= 0 )
                        {
LABEL_224:
                          if ( v108 )
                          {
                            if ( (int)v109 > 0 )
                            {
                              v119 = (volatile signed __int32 **)(v108 + 8);
                              do
                              {
                                v120 = *v119;
                                if ( *v119 && _InterlockedExchangeAdd(v120 + 2, 0xFFFFFFFF) == 1 )
                                {
                                  (**(void (__fastcall ***)(volatile signed __int32 *))v120)(v120);
                                  std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v120);
                                }
                                v119 += 2;
                                --v109;
                              }
                              while ( v109 );
                              v108 = v640;
                            }
                            _o_free(v108);
                            v640 = 0LL;
                          }
                          v641 = 0LL;
                          if ( !v107 )
                            goto LABEL_236;
                        }
                        else
                        {
                          v118 = v108;
                          while ( 1 )
                          {
                            if ( v117 < 0 || v117 >= (int)v109 )
                            {
                              sub_1800BB2C8(3221225612LL);
LABEL_1086:
                              sub_1800BB2C8(3221225612LL);
                              __debugbreak();
                            }
                            if ( *(_BYTE *)(*(_QWORD *)v118 + 20LL) )
                            {
                              v440 = (_QWORD *)sub_180023320((__int64)&v640, v117);
                              v441 = sub_180052550(*v440, v106);
                              if ( v441 < 0 )
                                break;
                            }
                            ++v117;
                            v118 += 16LL;
                            if ( v117 >= (int)v109 )
                              goto LABEL_224;
                          }
                          sub_18004BD84(
                            retaddr,
                            508LL,
                            "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                            (unsigned int)v441);
                          sub_180032210(&v640);
                          if ( !v107 )
                            goto LABEL_236;
                        }
                        v121 = v107;
                        goto LABEL_235;
                      }
                      v144 = v15 + 168;
LABEL_290:
                      v81 = 0LL;
                      v145 = *(_DWORD *)(v144 + 8);
                      if ( v145 <= 0 )
                        goto LABEL_296;
                      v146 = *(_QWORD *)v144;
                      while ( 1 )
                      {
                        v147 = *(_QWORD *)(v146 + 16LL * (int)v81) - v765;
                        if ( !v147 )
                          v147 = *(_QWORD *)(v146 + 16LL * (int)v81 + 8) - *((_QWORD *)&v765 + 1);
                        if ( !v147 )
                          break;
                        v81 = (unsigned int)(v81 + 1);
                        if ( (int)v81 >= v145 )
                          goto LABEL_296;
                      }
                      if ( (_DWORD)v81 == -1 )
                      {
LABEL_296:
                        v148 = 1;
                        goto LABEL_297;
                      }
                      v626 = ++v102;
                      v104 = (LPCRITICAL_SECTION)((char *)v104 + 1);
                      v617 = v104;
                    }
                    while ( v102 < (int)v630 );
                    v148 = v618;
                  }
LABEL_297:
                  v47 = 0LL;
LABEL_298:
                  if ( v629 )
                    _o_free(v629);
                  if ( v148 && v613 != 1 )
                  {
LABEL_302:
                    v149 = v643;
                    v643 = 0LL;
                    if ( v149 )
                      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v149 + 16LL))(v149, v81);
                    v150 = v648;
                    v648 = 0LL;
                    if ( v150 )
                      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v150 + 16LL))(v150, v81);
                    v618 = v613;
                    v643 = 0LL;
                    v151 = v613;
                    v864 = *(_QWORD *)(v15 + 1656);
                    v865 = v613;
                    if ( v613 >= v864 )
                    {
                      v499 = sub_180118A38(
                               &v900,
                               "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                      sub_180118968(v499);
                    }
                    v17 = v605;
                    if ( (v605 & 0x2000) != 0 )
                    {
                      v17 = v605 & 0xFFFFDFFF;
                      v605 &= ~0x2000u;
                      v900 = &off_180149EB8;
                      o___std_exception_destroy(v901);
                    }
                    sub_1800230F0(*(_QWORD *)(v15 + 1664) + 96LL * v613);
                    v866 = *(_QWORD *)(v15 + 1672);
                    v867 = v613;
                    if ( v613 >= v866 )
                    {
                      v498 = sub_180118A38(
                               &v898,
                               "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                      sub_180118968(v498);
                    }
                    if ( (v17 & 0x4000) != 0 )
                    {
                      v17 &= ~0x4000u;
                      v605 = v17;
                      v898 = &off_180149EB8;
                      o___std_exception_destroy(v899);
                    }
                    v152 = *(_QWORD *)(v15 + 1680) + 96LL * v613;
                    if ( !*(_BYTE *)(v152 + 52) )
                    {
LABEL_319:
                      v868 = *(_QWORD *)(v15 + 1688);
                      v869 = v613;
                      if ( v613 >= v868 )
                      {
                        v497 = sub_180118A38(
                                 &v896,
                                 "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                        sub_180118968(v497);
                      }
                      if ( (v17 & 0x8000) != 0 )
                      {
                        v17 &= ~0x8000u;
                        v605 = v17;
                        v896 = &off_180149EB8;
                        o___std_exception_destroy(v897);
                      }
                      v157 = *(_QWORD *)(v15 + 1696) + 96LL * v613;
                      if ( *(_BYTE *)(v157 + 52) )
                      {
                        v617 = (LPCRITICAL_SECTION)(v157 + 56);
                        EnterCriticalSection((LPCRITICAL_SECTION)(v157 + 56));
                        v730 = (struct _RTL_CRITICAL_SECTION *)(v157 + 56);
                        v158 = 0LL;
                        v666 = 0LL;
                        v159 = 0LL;
                        v667 = 0;
                        v160 = 0;
                        v668 = 0;
                        for ( k = 0; k < *(_DWORD *)(v157 + 40); v47 += 16LL )
                        {
                          if ( v47 < 0 || k >= *(_DWORD *)(v157 + 40) )
                          {
                            sub_1800BB2C8(3221225612LL);
                            __debugbreak();
                          }
                          v162 = (LPCRITICAL_SECTION)(v47 + *(_QWORD *)(v157 + 32));
                          v616 = v162;
                          if ( (_DWORD)v159 == v160 )
                          {
                            if ( v160 )
                            {
                              v160 = 2 * v159;
                              if ( (v159 & 0x40000000) != 0 )
                                goto LABEL_1117;
                            }
                            else
                            {
                              v160 = 1;
                            }
                            if ( (unsigned __int64)v160 > 0x7FFFFFF
                              || (v163 = o__recalloc(v158, v160, 16LL), (v158 = (volatile signed __int32 *)v163) == 0LL) )
                            {
LABEL_1117:
                              v466 = 2147942414LL;
                              v467 = 502LL;
                              goto LABEL_1119;
                            }
                            v668 = v160;
                            v666 = (volatile signed __int32 *)v163;
                            v162 = v616;
                          }
                          v164 = (PRTL_CRITICAL_SECTION_DEBUG *)&v158[4 * (int)v159];
                          if ( v164 )
                          {
                            *v164 = 0LL;
                            v164[1] = 0LL;
                            v165 = *(_QWORD *)&v162->LockCount;
                            if ( v165 )
                            {
                              _InterlockedIncrement((volatile signed __int32 *)(v165 + 8));
                              v160 = v668;
                              LODWORD(v159) = v667;
                              v158 = v666;
                            }
                            *v164 = v162->DebugInfo;
                            v164[1] = *(PRTL_CRITICAL_SECTION_DEBUG *)&v162->LockCount;
                          }
                          v159 = (unsigned int)(v159 + 1);
                          v667 = v159;
                          ++k;
                        }
                        v166 = 0;
                        if ( (int)v159 <= 0 )
                        {
LABEL_342:
                          if ( v158 )
                          {
                            if ( (int)v159 > 0 )
                            {
                              v157 = (__int64)(v158 + 2);
                              do
                              {
                                v158 = *(volatile signed __int32 **)v157;
                                if ( *(_QWORD *)v157 && _InterlockedExchangeAdd(v158 + 2, 0xFFFFFFFF) == 1 )
                                {
LABEL_1124:
                                  (**(void (__fastcall ***)(volatile signed __int32 *))v158)(v158);
                                  std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v158);
                                }
                                v157 += 16LL;
                                --v159;
                              }
                              while ( v159 );
                              v158 = v666;
                            }
                            _o_free(v158);
                          }
                          if ( v617 )
                            LeaveCriticalSection(v617);
                        }
                        else
                        {
                          v167 = v158;
                          while ( 1 )
                          {
                            if ( v166 < 0 )
                            {
                              sub_1800BB2C8(3221225612LL);
                              goto LABEL_1124;
                            }
                            if ( *(_BYTE *)(*(_QWORD *)v167 + 20LL) )
                            {
                              v468 = (_QWORD *)sub_180023320((__int64)&v666, v166);
                              v469 = sub_180052550(*v468, v157);
                              if ( v469 < 0 )
                                break;
                            }
                            ++v166;
                            v167 += 4;
                            if ( v166 >= (int)v159 )
                              goto LABEL_342;
                          }
                          v466 = (unsigned int)v469;
                          v467 = 508LL;
LABEL_1119:
                          sub_18004BD84(
                            retaddr,
                            v467,
                            "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                            v466);
                          sub_180032210(&v666);
                          sub_180023350(&v730);
                        }
                        v17 = v605;
                        v15 = a1;
                      }
                      v870 = *(_QWORD *)(v15 + 64);
                      v871 = v151;
                      if ( v151 >= v870 )
                      {
                        v496 = sub_180118A38(
                                 &v894,
                                 "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                        sub_180118968(v496);
                      }
                      if ( (v17 & 0x10000) != 0 )
                      {
                        v17 &= ~0x10000u;
                        v605 = v17;
                        v894 = &off_180149EB8;
                        o___std_exception_destroy(v895);
                      }
                      if ( !*(_DWORD *)(*(_QWORD *)(v15 + 72) + 4 * v151) )
                        goto LABEL_481;
                      v934 = xmmword_18015B810;
                      v872 = *(_QWORD *)(v15 + 1688);
                      v873 = v151;
                      if ( v151 >= v872 )
                      {
                        v493 = sub_180118A38(
                                 &v892,
                                 "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                        sub_180118968(v493);
                      }
                      if ( (v17 & 0x20000) != 0 )
                      {
                        v605 = v17 & 0xFFFDFFFF;
                        v892 = &off_180149EB8;
                        o___std_exception_destroy(v893);
                      }
                      v168 = 96 * v151 + *(_QWORD *)(v15 + 1696);
                      v766 = xmmword_18015B810;
                      v738 = xmmword_18015B810;
                      if ( *(_BYTE *)(v168 + 52) )
                      {
                        v169 = 0;
                        if ( *(int *)(v168 + 40) > 0 )
                        {
                          v170 = 0LL;
                          while ( 1 )
                          {
                            if ( v169 < 0 || v169 >= *(_DWORD *)(v168 + 40) )
                            {
                              sub_1800BB2C8(3221225612LL);
                              __debugbreak();
                            }
                            if ( *(_BYTE *)(*(_QWORD *)(v170 + *(_QWORD *)(v168 + 32)) + 20LL) )
                            {
                              v470 = (__int64 **)sub_180023320(v168 + 32, v169);
                              if ( (unsigned int)sub_180022EE0(*v470, &v738) != -1 )
                                break;
                            }
                            ++v169;
                            v170 += 16LL;
                            if ( v169 >= *(_DWORD *)(v168 + 40) )
                              goto LABEL_367;
                          }
                          EnterCriticalSection((LPCRITICAL_SECTION)(v168 + 56));
                          v874 = v168 + 56;
                          v471 = (__int64 *)sub_180023320(v168 + 32, v169);
                          v472 = (volatile signed __int32 *)v471[1];
                          if ( v472 )
                          {
                            _InterlockedIncrement(v472 + 2);
                            v472 = (volatile signed __int32 *)v471[1];
                          }
                          v854 = *v471;
                          v855 = v472;
                          if ( (int)sub_180052550(v854, v168) < 0 )
                          {
                            if ( v472 )
                              sub_180052600((std::_Ref_count_base *)v472);
                            if ( v168 != -56 )
                              LeaveCriticalSection((LPCRITICAL_SECTION)(v168 + 56));
                            goto LABEL_1133;
                          }
                          if ( v472 )
                            sub_180052600((std::_Ref_count_base *)v472);
                          if ( v168 != -56 )
                            LeaveCriticalSection((LPCRITICAL_SECTION)(v168 + 56));
                        }
                      }
LABEL_367:
                      v171 = 0;
                      v172 = *(_DWORD *)(v168 + 40);
                      if ( v172 > 0 )
                      {
                        v173 = 0LL;
                        while ( 1 )
                        {
                          if ( v173 < 0 || v171 >= v172 )
                          {
                            sub_1800BB2C8(3221225612LL);
                            __debugbreak();
                          }
                          v174 = *(__int64 **)(v173 + *(_QWORD *)(v168 + 32));
                          v175 = 0;
                          v176 = *((_DWORD *)v174 + 2);
                          if ( v176 > 0 )
                          {
                            v177 = *v174;
                            while ( 1 )
                            {
                              v178 = *(_QWORD *)(v177 + 16LL * v175) - v738;
                              if ( !v178 )
                                v178 = *(_QWORD *)(v177 + 16LL * v175 + 8) - *((_QWORD *)&v738 + 1);
                              if ( !v178 )
                                break;
                              if ( ++v175 >= v176 )
                                goto LABEL_1142;
                            }
                            if ( v175 != -1 )
                              break;
                          }
LABEL_1142:
                          ++v171;
                          v173 += 16LL;
                          if ( v171 >= v172 )
                            goto LABEL_1133;
                        }
                        if ( v171 != -1 )
                        {
                          if ( v171 < 0 || v171 >= v172 )
                          {
                            sub_1800BB2C8(3221225612LL);
                            __debugbreak();
                          }
                          v179 = *(_QWORD *)(*(_QWORD *)(v168 + 32) + 16LL * v171);
LABEL_381:
                          if ( !v179 )
                          {
                            v17 = v605;
                            goto LABEL_481;
                          }
                          v180 = v618;
                          if ( !v618 )
                          {
                            v181 = 1;
                            if ( *(_QWORD *)(v15 + 80) )
                            {
                              *(_OWORD *)v754 = 0LL;
                              v755 = 0LL;
                              if ( (*(int (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(v15 + 80)
                                                                                            + 40LL))(
                                     *(_QWORD *)(v15 + 80),
                                     &xmmword_18015B7F8,
                                     v754) >= 0
                                && LOWORD(v754[0]) == 19 )
                              {
                                v181 = LODWORD(v754[1]) == 0;
                              }
                              PropVariantClear(v754);
                              if ( !v181 )
                              {
                                v200 = v15 + 168;
                                v17 = v605;
                                goto LABEL_440;
                              }
                            }
                          }
                          v772 = *(_QWORD *)(v15 + 1656);
                          v773 = v151;
                          if ( v151 >= v772 )
                          {
                            v492 = sub_180118A38(
                                     &v928,
                                     "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                            sub_180118968(v492);
                          }
                          v17 = v605;
                          if ( (v605 & 0x40000) != 0 )
                          {
                            v17 = v605 & 0xFFFBFFFF;
                            v605 &= ~0x40000u;
                            v928 = &off_180149EB8;
                            o___std_exception_destroy(v929);
                          }
                          sub_1800230F0(96 * v151 + *(_QWORD *)(v15 + 1664));
                          v774 = *(_QWORD *)(v15 + 1672);
                          v775 = v151;
                          if ( v151 >= v774 )
                          {
                            v491 = sub_180118A38(
                                     &v889,
                                     "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                            sub_180118968(v491);
                          }
                          if ( (v17 & 0x80000) != 0 )
                          {
                            v17 &= ~0x80000u;
                            v605 = v17;
                            v889 = &off_180149EB8;
                            o___std_exception_destroy(v890);
                          }
                          v182 = *(_QWORD *)(v15 + 1680) + 96 * v151;
                          if ( !*(_BYTE *)(v182 + 52) )
                          {
LABEL_401:
                            v776 = *(_QWORD *)(v15 + 1688);
                            v777 = v151;
                            if ( v151 >= v776 )
                            {
                              v490 = sub_180118A38(
                                       &v887,
                                       "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                              sub_180118968(v490);
                            }
                            if ( (v17 & 0x100000) != 0 )
                            {
                              v17 &= ~0x100000u;
                              v605 = v17;
                              v887 = &off_180149EB8;
                              o___std_exception_destroy(v888);
                            }
                            v188 = *(_QWORD *)(v15 + 1696) + 96 * v151;
                            if ( *(_BYTE *)(v188 + 52) )
                            {
                              v617 = (LPCRITICAL_SECTION)(v188 + 56);
                              EnterCriticalSection((LPCRITICAL_SECTION)(v188 + 56));
                              v732 = (struct _RTL_CRITICAL_SECTION *)(v188 + 56);
                              v189 = 0LL;
                              v658 = 0LL;
                              v190 = 0LL;
                              v659 = 0LL;
                              v191 = 0;
                              v192 = 0;
                              if ( *(int *)(v188 + 40) > 0 )
                              {
                                v193 = 0LL;
                                do
                                {
                                  if ( v193 < 0 || v192 >= *(_DWORD *)(v188 + 40) )
                                  {
                                    sub_1800BB2C8(3221225612LL);
                                    __debugbreak();
                                  }
                                  v194 = (LPCRITICAL_SECTION)(v193 + *(_QWORD *)(v188 + 32));
                                  v616 = v194;
                                  if ( (_DWORD)v190 == v191 )
                                  {
                                    if ( v191 )
                                    {
                                      v191 = 2 * v190;
                                      if ( (v190 & 0x40000000) != 0 )
                                        goto LABEL_1162;
                                    }
                                    else
                                    {
                                      v191 = 1;
                                    }
                                    if ( (unsigned __int64)v191 > 0x7FFFFFF
                                      || (v195 = o__recalloc(v189, v191, 16LL),
                                          (v189 = (volatile signed __int32 *)v195) == 0LL) )
                                    {
LABEL_1162:
                                      v479 = 2147942414LL;
                                      v480 = 502LL;
                                      goto LABEL_1164;
                                    }
                                    HIDWORD(v659) = v191;
                                    v658 = (volatile signed __int32 *)v195;
                                    v194 = v616;
                                  }
                                  v196 = (PRTL_CRITICAL_SECTION_DEBUG *)&v189[4 * (int)v190];
                                  if ( v196 )
                                  {
                                    *v196 = 0LL;
                                    v196[1] = 0LL;
                                    v197 = *(_QWORD *)&v194->LockCount;
                                    if ( v197 )
                                    {
                                      _InterlockedIncrement((volatile signed __int32 *)(v197 + 8));
                                      v191 = HIDWORD(v659);
                                      LODWORD(v190) = v659;
                                      v189 = v658;
                                    }
                                    *v196 = v194->DebugInfo;
                                    v196[1] = *(PRTL_CRITICAL_SECTION_DEBUG *)&v194->LockCount;
                                  }
                                  v190 = (unsigned int)(v190 + 1);
                                  LODWORD(v659) = v190;
                                  ++v192;
                                  v193 += 16LL;
                                }
                                while ( v192 < *(_DWORD *)(v188 + 40) );
                              }
                              v198 = 0;
                              if ( (int)v190 <= 0 )
                              {
LABEL_425:
                                if ( v189 )
                                {
                                  if ( (int)v190 > 0 )
                                  {
                                    v188 = (__int64)(v189 + 2);
                                    do
                                    {
                                      v189 = *(volatile signed __int32 **)v188;
                                      if ( *(_QWORD *)v188 && _InterlockedExchangeAdd(v189 + 2, 0xFFFFFFFF) == 1 )
                                      {
LABEL_1169:
                                        (**(void (__fastcall ***)(volatile signed __int32 *))v189)(v189);
                                        std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v189);
                                      }
                                      v188 += 16LL;
                                      --v190;
                                    }
                                    while ( v190 );
                                    v189 = v658;
                                  }
                                  _o_free(v189);
                                }
                                if ( v617 )
                                  LeaveCriticalSection(v617);
                              }
                              else
                              {
                                v199 = v189;
                                while ( 1 )
                                {
                                  if ( v198 < 0 )
                                  {
                                    sub_1800BB2C8(3221225612LL);
                                    goto LABEL_1169;
                                  }
                                  if ( *(_BYTE *)(*(_QWORD *)v199 + 20LL) )
                                  {
                                    v481 = (_QWORD *)sub_180023320((__int64)&v658, v198);
                                    v482 = sub_180052550(*v481, v188);
                                    if ( v482 < 0 )
                                      break;
                                  }
                                  ++v198;
                                  v199 += 4;
                                  if ( v198 >= (int)v190 )
                                    goto LABEL_425;
                                }
                                v479 = (unsigned int)v482;
                                v480 = 508LL;
LABEL_1164:
                                sub_18004BD84(
                                  retaddr,
                                  v480,
                                  "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                                  v479);
                                sub_180032210(&v658);
                                sub_180023350(&v732);
                              }
                              v17 = v605;
                              v15 = a1;
                            }
                            v778 = *(_QWORD *)(v15 + 152);
                            v779 = v151;
                            if ( v151 >= v778 )
                            {
                              v489 = sub_180118A38(
                                       &v885,
                                       "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                              sub_180118968(v489);
                            }
                            if ( (v17 & 0x200000) != 0 )
                            {
                              v17 &= ~0x200000u;
                              v605 = v17;
                              v885 = &off_180149EB8;
                              o___std_exception_destroy(v886);
                            }
                            v200 = *(_QWORD *)(v15 + 160) + 16 * v151;
                            v180 = v618;
LABEL_440:
                            if ( *(_DWORD *)(v200 + 8) > 1u )
                              goto LABEL_481;
                            v780 = *(_QWORD *)(v15 + 1688);
                            v781 = v151;
                            if ( v151 >= v780 )
                            {
                              v488 = sub_180118A38(
                                       &v883,
                                       "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                              sub_180118968(v488);
                            }
                            if ( (v17 & 0x400000) != 0 )
                            {
                              v17 &= ~0x400000u;
                              v605 = v17;
                              v883 = &off_180149EB8;
                              o___std_exception_destroy(v884);
                            }
                            v201 = 96 * v151;
                            v217 = *(_QWORD *)(v15 + 1696) + v201 == 0;
                            v202 = *(_QWORD *)(v15 + 1696) + v201;
                            v203 = 0LL;
                            v642 = 0LL;
                            v648 = 0LL;
                            v643 = 0LL;
                            if ( v217 )
                              goto LABEL_480;
                            pv = 0LL;
                            v858 = xmmword_18015B810;
                            v747 = xmmword_18015B810;
                            v204 = 0;
                            if ( *(int *)(v202 + 40) <= 0 )
                            {
LABEL_452:
                              v206 = 0;
                              v207 = *(_DWORD *)(v202 + 40);
                              if ( v207 > 0 )
                              {
                                v208 = 0LL;
                                while ( 1 )
                                {
                                  if ( v208 < 0 || v206 >= v207 )
                                  {
                                    sub_1800BB2C8(3221225612LL);
                                    __debugbreak();
                                  }
                                  v209 = *(__int64 **)(v208 + *(_QWORD *)(v202 + 32));
                                  v210 = 0;
                                  v211 = *((_DWORD *)v209 + 2);
                                  if ( v211 > 0 )
                                  {
                                    v212 = *v209;
                                    while ( 1 )
                                    {
                                      v213 = *(_QWORD *)(v212 + 16LL * v210) - v747;
                                      if ( !v213 )
                                        v213 = *(_QWORD *)(v212 + 16LL * v210 + 8) - *((_QWORD *)&v747 + 1);
                                      if ( !v213 )
                                        break;
                                      if ( ++v210 >= v211 )
                                        goto LABEL_1188;
                                    }
                                    if ( v210 != -1 )
                                      break;
                                  }
LABEL_1188:
                                  ++v206;
                                  v208 += 16LL;
                                  if ( v206 >= v207 )
                                    goto LABEL_1179;
                                }
                                if ( v206 != -1 )
                                {
                                  if ( v206 < 0 || v206 >= v207 )
                                  {
                                    sub_1800BB2C8(3221225612LL);
                                    __debugbreak();
                                  }
                                  v214 = *(_QWORD *)(*(_QWORD *)(v202 + 32) + 16LL * v206);
LABEL_466:
                                  v215 = 0;
                                  v216 = 0LL;
                                  pv = 0LL;
                                  if ( v214 )
                                  {
                                    v215 = *(_DWORD *)(v214 + 48);
                                    v217 = v215 == 0;
                                    if ( v215 <= 0 )
                                    {
LABEL_475:
                                      if ( v217 )
                                      {
LABEL_479:
                                        CoTaskMemFree(v216);
                                        pv = 0LL;
                                        v203 = v642;
LABEL_480:
                                        v642 = 0LL;
                                        v648 = v203;
LABEL_481:
                                        v225 = v681;
                                        if ( v681 )
                                        {
                                          v685 = 0LL;
                                          v679 = 0;
                                          sub_1800CB144(&v685);
                                          v494 = (**v225)(v225, &unk_18015BE10, &v685) >= 0
                                              && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v685 + 24LL))(
                                                   v685,
                                                   &v679) >= 0
                                              && (v679 & 1) != 0;
                                          sub_18000F708(&v685);
                                          if ( v494 )
                                            goto LABEL_1211;
                                        }
                                        if ( !v643 )
                                          goto LABEL_489;
                                        v676 = 0;
                                        v709 = 0LL;
                                        v226 = (**(int (__fastcall ***)(__int64, void *, __int64 *))v643)(
                                                 v643,
                                                 &unk_18015BE10,
                                                 &v709) >= 0
                                            && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v709 + 24LL))(
                                                 v709,
                                                 &v676) >= 0
                                            && (v676 & 1) != 0;
                                        if ( v709 )
                                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v709 + 16LL))(v709);
                                        if ( v226 )
LABEL_1211:
                                          v615 = 1;
                                        else
LABEL_489:
                                          v615 = 0;
                                        if ( v643 )
                                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v643 + 16LL))(v643);
                                        if ( v681 )
                                          ((void (__fastcall *)(int (__fastcall ***)(_QWORD, void *, __int64 *)))(*v681)[2])(v681);
                                        goto LABEL_494;
                                      }
                                      v720 = 1;
                                      v746 = v216;
                                      v722 = v215;
                                      v721 = *(_DWORD *)(v15 + 188);
                                      v715 = 3;
                                      v223 = sub_1800326B0(
                                               (unsigned int)&v642,
                                               (unsigned int)&v715,
                                               (unsigned int)&v720,
                                               (unsigned int)&v721,
                                               (__int64)&v722,
                                               (__int64)&v746);
                                      if ( v223 < 0 )
                                      {
                                        v486 = (unsigned int)v223;
                                        v487 = 1203LL;
                                      }
                                      else
                                      {
                                        v859 = xmmword_18015B810;
                                        v224 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, _QWORD, signed int, __int64 *, _QWORD))(*(_QWORD *)v642 + 24LL))(
                                                 v642,
                                                 *(_QWORD *)(v15 + 16),
                                                 &v859,
                                                 0LL,
                                                 v180,
                                                 &v643,
                                                 0LL);
                                        if ( v224 >= 0 )
                                        {
                                          v216 = pv;
                                          goto LABEL_479;
                                        }
                                        v486 = (unsigned int)v224;
                                        v487 = 1207LL;
                                      }
LABEL_1195:
                                      sub_18004BD84(
                                        retaddr,
                                        v487,
                                        "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                                        v486);
                                      CoTaskMemFree(pv);
                                      pv = 0LL;
                                      sub_180020B78(&v642);
                                      goto LABEL_481;
                                    }
                                    v218 = 0LL;
                                    v219 = *(int *)(v214 + 48);
                                    v220 = -1LL;
                                    if ( v219 != 1 )
                                      v220 = 0xFFFFFFFFFFFFFFFFuLL / v219;
                                    if ( v220 >= 0x10 )
                                    {
                                      v221 = 16 * v219;
                                      if ( v221 > 0x7FFFFFFF )
                                      {
                                        v218 = 0LL;
                                      }
                                      else
                                      {
                                        v222 = CoTaskMemAlloc((unsigned int)v221);
                                        v218 = v222;
                                        if ( v222 )
                                        {
                                          memcpy(v222, *(const void **)(v214 + 40), 16LL * *(int *)(v214 + 48));
                                          pv = v218;
                                          CoTaskMemFree(0LL);
                                          v215 = *(_DWORD *)(v214 + 48);
                                          v216 = v218;
                                          goto LABEL_474;
                                        }
                                      }
                                    }
                                    sub_18004BD84(
                                      retaddr,
                                      626LL,
                                      "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                                      2147942414LL);
                                    CoTaskMemFree(v218);
                                    v486 = 2147942414LL;
                                    v487 = 1193LL;
                                    goto LABEL_1195;
                                  }
LABEL_474:
                                  v217 = v215 == 0;
                                  goto LABEL_475;
                                }
                              }
                            }
                            else
                            {
                              v205 = 0LL;
                              while ( 1 )
                              {
                                if ( v204 < 0 || v204 >= *(_DWORD *)(v202 + 40) )
                                {
                                  sub_1800BB2C8(3221225612LL);
                                  __debugbreak();
                                }
                                if ( *(_BYTE *)(*(_QWORD *)(v205 + *(_QWORD *)(v202 + 32)) + 20LL) )
                                {
                                  v483 = (__int64 **)sub_180023320(v202 + 32, v204);
                                  if ( (unsigned int)sub_180022EE0(*v483, &v747) != -1 )
                                    break;
                                }
                                ++v204;
                                v205 += 16LL;
                                if ( v204 >= *(_DWORD *)(v202 + 40) )
                                  goto LABEL_451;
                              }
                              EnterCriticalSection((LPCRITICAL_SECTION)(v202 + 56));
                              v782 = v202 + 56;
                              v484 = (__int64 *)sub_180023320(v202 + 32, v204);
                              v485 = (volatile signed __int32 *)v484[1];
                              if ( v485 )
                              {
                                _InterlockedIncrement(v485 + 2);
                                v485 = (volatile signed __int32 *)v484[1];
                              }
                              v856 = *v484;
                              v857 = v485;
                              if ( (int)sub_180052550(v856, v202) >= 0 )
                              {
                                if ( v485 )
                                  sub_180052600((std::_Ref_count_base *)v485);
                                if ( v202 != -56 )
                                  LeaveCriticalSection((LPCRITICAL_SECTION)(v202 + 56));
LABEL_451:
                                v17 = v605;
                                goto LABEL_452;
                              }
                              if ( v485 )
                                sub_180052600((std::_Ref_count_base *)v485);
                              if ( v202 != -56 )
                                LeaveCriticalSection((LPCRITICAL_SECTION)(v202 + 56));
                              v17 = v605;
                            }
LABEL_1179:
                            v214 = *(_QWORD *)(v202 + 16);
                            if ( !v214 || (unsigned int)sub_180022EE0(*(__int64 **)(v202 + 16), &v858) == -1 )
                              v214 = 0LL;
                            goto LABEL_466;
                          }
                          v183 = (struct _RTL_CRITICAL_SECTION *)(v182 + 56);
                          EnterCriticalSection((LPCRITICAL_SECTION)(v182 + 56));
                          v731 = (struct _RTL_CRITICAL_SECTION *)(v182 + 56);
                          v184 = 0LL;
                          v698 = 0LL;
                          v185 = 0LL;
                          v699 = 0LL;
                          v186 = 0;
                          if ( *(int *)(v182 + 40) > 0 )
                          {
                            while ( 1 )
                            {
                              v473 = (_QWORD *)sub_180023320(v182 + 32, v186);
                              if ( !(unsigned int)sub_1800233E0((__int64)&v698, v473) )
                                break;
                              if ( ++v186 >= *(_DWORD *)(v182 + 40) )
                              {
                                v185 = (unsigned int)v699;
                                v184 = v698;
                                goto LABEL_396;
                              }
                            }
                            v474 = 2147942414LL;
                            v475 = 502LL;
                          }
                          else
                          {
LABEL_396:
                            v187 = 0;
                            if ( (int)v185 <= 0 )
                            {
LABEL_397:
                              if ( v184 )
                              {
                                if ( (int)v185 > 0 )
                                {
                                  v478 = v184;
                                  do
                                  {
                                    sub_1800322B0(v478);
                                    v478 += 16LL;
                                    --v185;
                                  }
                                  while ( v185 );
                                }
                                _o_free(v184);
                              }
                              if ( v183 )
                                LeaveCriticalSection(v183);
                              goto LABEL_400;
                            }
                            while ( 1 )
                            {
                              if ( *(_BYTE *)(*(_QWORD *)sub_180023320((__int64)&v698, v187) + 20LL) )
                              {
                                v476 = (_QWORD *)sub_180023320((__int64)&v698, v187);
                                v477 = sub_180052550(*v476, v182);
                                if ( v477 < 0 )
                                  break;
                              }
                              if ( ++v187 >= (int)v185 )
                                goto LABEL_397;
                            }
                            v474 = (unsigned int)v477;
                            v475 = 508LL;
                          }
                          sub_18004BD84(
                            retaddr,
                            v475,
                            "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                            v474);
                          sub_180032210(&v698);
                          sub_180023350(&v731);
LABEL_400:
                          v17 = v605;
                          goto LABEL_401;
                        }
                      }
LABEL_1133:
                      if ( !*(_QWORD *)(v168 + 16) || (unsigned int)sub_180022EE0(*(__int64 **)(v168 + 16), &v766) == -1 )
                        v179 = 0LL;
                      goto LABEL_381;
                    }
                    v153 = (struct _RTL_CRITICAL_SECTION *)(v152 + 56);
                    EnterCriticalSection((LPCRITICAL_SECTION)(v152 + 56));
                    v729 = (struct _RTL_CRITICAL_SECTION *)(v152 + 56);
                    v154 = 0LL;
                    v695 = 0LL;
                    v155 = 0LL;
                    v696 = 0;
                    v697 = 0;
                    if ( *(int *)(v152 + 40) > 0 )
                    {
                      while ( 1 )
                      {
                        v460 = (_QWORD *)sub_180023320(v152 + 32, v47);
                        if ( !(unsigned int)sub_1800233E0((__int64)&v695, v460) )
                          break;
                        LODWORD(v47) = v47 + 1;
                        if ( (int)v47 >= *(_DWORD *)(v152 + 40) )
                        {
                          v155 = v696;
                          v154 = v695;
                          goto LABEL_314;
                        }
                      }
                      v461 = 2147942414LL;
                      v462 = 502LL;
                    }
                    else
                    {
LABEL_314:
                      v156 = 0;
                      if ( (int)v155 <= 0 )
                      {
LABEL_315:
                        if ( v154 )
                        {
                          if ( (int)v155 > 0 )
                          {
                            v465 = v154;
                            do
                            {
                              sub_1800322B0(v465);
                              v465 += 16LL;
                              --v155;
                            }
                            while ( v155 );
                          }
                          _o_free(v154);
                        }
                        if ( v153 )
                          LeaveCriticalSection(v153);
                        goto LABEL_318;
                      }
                      while ( 1 )
                      {
                        if ( *(_BYTE *)(*(_QWORD *)sub_180023320((__int64)&v695, v156) + 20LL) )
                        {
                          v463 = (_QWORD *)sub_180023320((__int64)&v695, v156);
                          v464 = sub_180052550(*v463, v152);
                          if ( v464 < 0 )
                            break;
                        }
                        if ( ++v156 >= (int)v155 )
                          goto LABEL_315;
                      }
                      v461 = (unsigned int)v464;
                      v462 = 508LL;
                    }
                    sub_18004BD84(
                      retaddr,
                      v462,
                      "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                      v461);
                    sub_180032210(&v695);
                    sub_180023350(&v729);
LABEL_318:
                    v47 = 0LL;
                    v17 = v605;
                    goto LABEL_319;
                  }
LABEL_1099:
                  v891 = *(_OWORD *)&v633->DebugInfo;
                  v459 = v681;
                  v681 = 0LL;
                  if ( v459 )
                    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, void *, __int64 *)))(*v459)[2])(v459);
                  v649 = 0LL;
                  sub_180037744(v15, (unsigned int)&v891, 0, v613, (__int64)&v649, (__int64)&v681, 0LL);
                  goto LABEL_302;
                }
                EnterCriticalSection((LPCRITICAL_SECTION)(v88 + 56));
                v843 = v88 + 56;
                v89 = 0LL;
                v693 = 0LL;
                v90 = 0LL;
                v694 = 0LL;
                v91 = 0;
                if ( *(int *)(v88 + 40) > 0 )
                {
                  while ( 1 )
                  {
                    v427 = (_QWORD *)sub_180023320(v88 + 32, v91);
                    if ( !(unsigned int)sub_1800233E0((__int64)&v693, v427) )
                      break;
                    if ( ++v91 >= *(_DWORD *)(v88 + 40) )
                    {
                      v90 = (unsigned int)v694;
                      v89 = v693;
                      goto LABEL_167;
                    }
                  }
                  v428 = 2147942414LL;
                  v429 = 502LL;
                }
                else
                {
LABEL_167:
                  v92 = 0;
                  if ( (int)v90 <= 0 )
                  {
LABEL_168:
                    if ( v89 )
                    {
                      if ( (int)v90 > 0 )
                      {
                        v432 = v89;
                        do
                        {
                          sub_1800322B0(v432);
                          v432 += 16LL;
                          --v90;
                        }
                        while ( v90 );
                      }
                      _o_free(v89);
                    }
                    if ( v88 == -56 )
                      goto LABEL_171;
LABEL_170:
                    LeaveCriticalSection((LPCRITICAL_SECTION)(v88 + 56));
                    goto LABEL_171;
                  }
                  while ( 1 )
                  {
                    if ( *(_BYTE *)(*(_QWORD *)sub_180023320((__int64)&v693, v92) + 20LL) )
                    {
                      v430 = (_QWORD *)sub_180023320((__int64)&v693, v92);
                      v431 = sub_180052550(*v430, v88);
                      if ( v431 < 0 )
                        break;
                    }
                    if ( ++v92 >= (int)v90 )
                      goto LABEL_168;
                  }
                  v428 = (unsigned int)v431;
                  v429 = 508LL;
                }
                sub_18004BD84(retaddr, v429, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", v428);
                sub_180032210(&v693);
                if ( v88 == -56 )
                  goto LABEL_171;
                goto LABEL_170;
              }
            }
          }
          v51 = v613;
          v830 = *(_QWORD *)(v15 + 1656);
          v831 = v613;
          if ( v613 >= v830 )
          {
            v458 = sub_180118A38(v939, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
            sub_180118968(v458);
          }
          v52 = *(_QWORD *)(v15 + 1664) + 96LL * v613;
          if ( *(_BYTE *)(v52 + 52) )
          {
            lpCriticalSection = (LPCRITICAL_SECTION)(v52 + 56);
            EnterCriticalSection((LPCRITICAL_SECTION)(v52 + 56));
            v832 = v52 + 56;
            v53 = 0LL;
            v673 = 0LL;
            v54 = 0LL;
            v674 = 0;
            v55 = 0;
            v675 = 0;
            v56 = 0;
            if ( *(int *)(v52 + 40) > 0 )
            {
              while ( 1 )
              {
                if ( v47 < 0 || v56 >= *(_DWORD *)(v52 + 40) )
                {
                  sub_1800BB2C8(3221225612LL);
                  __debugbreak();
                }
                v57 = (LPCRITICAL_SECTION)(v47 + *(_QWORD *)(v52 + 32));
                v617 = v57;
                if ( (_DWORD)v54 == v55 )
                {
                  if ( v55 )
                  {
                    v55 = 2 * v54;
                    if ( (v54 & 0x40000000) != 0 )
                      goto LABEL_977;
                  }
                  else
                  {
                    v55 = 1;
                  }
                  if ( (unsigned __int64)v55 > 0x7FFFFFF
                    || (v58 = o__recalloc(v53, v55, 16LL), (v53 = (volatile signed __int32 *)v58) == 0LL) )
                  {
LABEL_977:
                    v411 = 2147942414LL;
                    v412 = 502LL;
                    goto LABEL_979;
                  }
                  v675 = v55;
                  v673 = (volatile signed __int32 *)v58;
                  v57 = v617;
                }
                v59 = (PRTL_CRITICAL_SECTION_DEBUG *)&v53[4 * (int)v54];
                if ( v59 )
                {
                  *v59 = 0LL;
                  v59[1] = 0LL;
                  v60 = *(_QWORD *)&v57->LockCount;
                  if ( v60 )
                  {
                    _InterlockedIncrement((volatile signed __int32 *)(v60 + 8));
                    v55 = v675;
                    LODWORD(v54) = v674;
                    v53 = v673;
                  }
                  *v59 = v57->DebugInfo;
                  v59[1] = *(PRTL_CRITICAL_SECTION_DEBUG *)&v57->LockCount;
                }
                v54 = (unsigned int)(v54 + 1);
                v674 = v54;
                ++v56;
                v47 += 16LL;
                if ( v56 >= *(_DWORD *)(v52 + 40) )
                {
                  v47 = 0LL;
                  break;
                }
              }
            }
            v61 = 0;
            if ( (int)v54 <= 0 )
            {
LABEL_98:
              if ( v53 )
              {
                if ( (int)v54 > 0 )
                {
                  v52 = (__int64)(v53 + 2);
                  do
                  {
                    v53 = *(volatile signed __int32 **)v52;
                    if ( *(_QWORD *)v52 && _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
                    {
LABEL_986:
                      (**(void (__fastcall ***)(volatile signed __int32 *))v53)(v53);
                      std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v53);
                    }
                    v52 += 16LL;
                    --v54;
                  }
                  while ( v54 );
                  v53 = v673;
                }
                _o_free(v53);
              }
              if ( lpCriticalSection )
                LeaveCriticalSection(lpCriticalSection);
            }
            else
            {
              v47 = (__int64)v53;
              while ( 1 )
              {
                if ( v61 < 0 )
                {
                  sub_1800BB2C8(3221225612LL);
                  goto LABEL_986;
                }
                if ( *(_BYTE *)(*(_QWORD *)v47 + 20LL) )
                {
                  v413 = (_QWORD *)sub_180023320((__int64)&v673, v61);
                  v414 = sub_180052550(*v413, v52);
                  if ( v414 < 0 )
                    break;
                }
                ++v61;
                v47 += 16LL;
                if ( v61 >= (int)v54 )
                {
                  v47 = 0LL;
                  goto LABEL_98;
                }
              }
              v411 = (unsigned int)v414;
              v412 = 508LL;
LABEL_979:
              sub_18004BD84(retaddr, v412, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", v411);
              sub_180032210(&v673);
              if ( lpCriticalSection )
                LeaveCriticalSection(lpCriticalSection);
              v47 = 0LL;
            }
            v15 = a1;
          }
          v833 = *(_QWORD *)(v15 + 1672);
          v834 = v51;
          if ( v51 >= v833 )
          {
            v457 = sub_180118A38(v938, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
            sub_180118968(v457);
          }
          v62 = *(_QWORD *)(v15 + 1680) + 96 * v51;
          if ( !*(_BYTE *)(v62 + 52) )
            goto LABEL_116;
          v63 = (struct _RTL_CRITICAL_SECTION *)(v62 + 56);
          EnterCriticalSection((LPCRITICAL_SECTION)(v62 + 56));
          v835 = v62 + 56;
          v64 = v47;
          v690 = v47;
          v65 = (unsigned int)v47;
          v691 = v47;
          v692 = v47;
          if ( *(int *)(v62 + 40) > 0 )
          {
            while ( 1 )
            {
              v415 = (_QWORD *)sub_180023320(v62 + 32, v47);
              if ( !(unsigned int)sub_1800233E0((__int64)&v690, v415) )
                break;
              LODWORD(v47) = v47 + 1;
              if ( (int)v47 >= *(_DWORD *)(v62 + 40) )
              {
                v65 = v691;
                v64 = v690;
                goto LABEL_112;
              }
            }
            v416 = 2147942414LL;
            v417 = 502LL;
          }
          else
          {
LABEL_112:
            v66 = 0;
            if ( (int)v65 <= 0 )
            {
LABEL_113:
              if ( v64 )
              {
                if ( (int)v65 > 0 )
                {
                  v420 = v64;
                  do
                  {
                    sub_1800322B0(v420);
                    v420 += 16LL;
                    --v65;
                  }
                  while ( v65 );
                }
                _o_free(v64);
              }
              if ( v63 )
                goto LABEL_115;
              goto LABEL_116;
            }
            while ( 1 )
            {
              if ( *(_BYTE *)(*(_QWORD *)sub_180023320((__int64)&v690, v66) + 20LL) )
              {
                v418 = (_QWORD *)sub_180023320((__int64)&v690, v66);
                v419 = sub_180052550(*v418, v62);
                if ( v419 < 0 )
                  break;
              }
              if ( ++v66 >= (int)v65 )
                goto LABEL_113;
            }
            v416 = (unsigned int)v419;
            v417 = 508LL;
          }
          sub_18004BD84(retaddr, v417, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", v416);
          sub_180032210(&v690);
          if ( v62 != -56 )
LABEL_115:
            LeaveCriticalSection(v63);
LABEL_116:
          v836 = *(_QWORD *)(v15 + 1688);
          v837 = v51;
          if ( v51 >= v836 )
          {
            v456 = sub_180118A38(v937, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
            sub_180118968(v456);
          }
          v67 = *(_QWORD *)(v15 + 1696) + 96 * v51;
          if ( !*(_BYTE *)(v67 + 52) )
            goto LABEL_149;
          lpCriticalSection = (LPCRITICAL_SECTION)(v67 + 56);
          EnterCriticalSection((LPCRITICAL_SECTION)(v67 + 56));
          v838 = v67 + 56;
          v68 = 0LL;
          v671 = 0LL;
          v69 = 0LL;
          v672 = 0LL;
          v70 = 0;
          v71 = 0;
          if ( *(int *)(v67 + 40) > 0 )
          {
            v72 = 0LL;
            do
            {
              if ( v72 < 0 || v71 >= *(_DWORD *)(v67 + 40) )
              {
                sub_1800BB2C8(3221225612LL);
                __debugbreak();
              }
              v73 = (LPCRITICAL_SECTION)(v72 + *(_QWORD *)(v67 + 32));
              v617 = v73;
              if ( (_DWORD)v69 == v70 )
              {
                if ( v70 )
                {
                  v70 = 2 * v69;
                  if ( (v69 & 0x40000000) != 0 )
                    goto LABEL_1003;
                }
                else
                {
                  v70 = 1;
                }
                if ( (unsigned __int64)v70 > 0x7FFFFFF
                  || (v74 = o__recalloc(v68, v70, 16LL), (v68 = (volatile signed __int32 *)v74) == 0LL) )
                {
LABEL_1003:
                  v421 = 2147942414LL;
                  v422 = 502LL;
                  goto LABEL_1005;
                }
                HIDWORD(v672) = v70;
                v671 = (volatile signed __int32 *)v74;
                v73 = v617;
              }
              v75 = (PRTL_CRITICAL_SECTION_DEBUG *)&v68[4 * (int)v69];
              if ( v75 )
              {
                *v75 = 0LL;
                v75[1] = 0LL;
                v76 = *(_QWORD *)&v73->LockCount;
                if ( v76 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v76 + 8));
                  v70 = HIDWORD(v672);
                  LODWORD(v69) = v672;
                  v68 = v671;
                }
                *v75 = v73->DebugInfo;
                v75[1] = *(PRTL_CRITICAL_SECTION_DEBUG *)&v73->LockCount;
              }
              v69 = (unsigned int)(v69 + 1);
              LODWORD(v672) = v69;
              ++v71;
              v72 += 16LL;
            }
            while ( v71 < *(_DWORD *)(v67 + 40) );
          }
          v77 = 0;
          if ( (int)v69 <= 0 )
          {
LABEL_138:
            if ( v68 )
            {
              if ( (int)v69 > 0 )
              {
                v67 = (__int64)(v68 + 2);
                do
                {
                  v68 = *(volatile signed __int32 **)v67;
                  if ( *(_QWORD *)v67 && _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
                  {
LABEL_1011:
                    (**(void (__fastcall ***)(volatile signed __int32 *))v68)(v68);
                    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v68);
                  }
                  v67 += 16LL;
                  --v69;
                }
                while ( v69 );
                v68 = v671;
              }
              _o_free(v68);
            }
            v79 = lpCriticalSection;
            if ( !lpCriticalSection )
              goto LABEL_148;
          }
          else
          {
            v78 = v68;
            while ( 1 )
            {
              if ( v77 < 0 )
              {
                sub_1800BB2C8(3221225612LL);
                goto LABEL_1011;
              }
              if ( *(_BYTE *)(*(_QWORD *)v78 + 20LL) )
              {
                v423 = (_QWORD *)sub_180023320((__int64)&v671, v77);
                v424 = sub_180052550(*v423, v67);
                if ( v424 < 0 )
                  break;
              }
              ++v77;
              v78 += 4;
              if ( v77 >= (int)v69 )
                goto LABEL_138;
            }
            v421 = (unsigned int)v424;
            v422 = 508LL;
LABEL_1005:
            sub_18004BD84(retaddr, v422, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", v421);
            sub_180032210(&v671);
            v79 = lpCriticalSection;
            if ( !lpCriticalSection )
              goto LABEL_148;
          }
          LeaveCriticalSection(v79);
LABEL_148:
          v15 = a1;
LABEL_149:
          v839 = *(_QWORD *)(v15 + 152);
          v840 = v51;
          if ( v51 >= v839 )
          {
            v455 = sub_180118A38(v936, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
            sub_180118968(v455);
          }
          v80 = *(_QWORD *)(v15 + 160) + 16 * v51;
          v49 = v615;
          v47 = 0LL;
          goto LABEL_151;
        }
        lpCriticalSection = (LPCRITICAL_SECTION)(v34 + 56);
        EnterCriticalSection((LPCRITICAL_SECTION)(v34 + 56));
        v827 = v34 + 56;
        v35 = 0LL;
        v650 = 0LL;
        v36 = 0LL;
        v651 = 0LL;
        v37 = 0;
        v38 = 0;
        if ( *(int *)(v34 + 40) > 0 )
        {
          v39 = 0LL;
          do
          {
            if ( v39 < 0 || v38 >= *(_DWORD *)(v34 + 40) )
            {
              sub_1800BB2C8(3221225612LL);
              __debugbreak();
            }
            v40 = (LPCRITICAL_SECTION)(v39 + *(_QWORD *)(v34 + 32));
            v617 = v40;
            if ( (_DWORD)v36 == v37 )
            {
              if ( v37 )
              {
                v37 = 2 * v36;
                if ( (v36 & 0x40000000) != 0 )
                  goto LABEL_965;
              }
              else
              {
                v37 = 1;
              }
              if ( (unsigned __int64)v37 > 0x7FFFFFF
                || (v41 = o__recalloc(v35, v37, 16LL), (v35 = (volatile signed __int32 *)v41) == 0LL) )
              {
LABEL_965:
                v407 = 2147942414LL;
                v408 = 502LL;
                goto LABEL_967;
              }
              HIDWORD(v651) = v37;
              v650 = (volatile signed __int32 *)v41;
              v40 = v617;
            }
            v42 = (PRTL_CRITICAL_SECTION_DEBUG *)&v35[4 * (int)v36];
            if ( v42 )
            {
              *v42 = 0LL;
              v42[1] = 0LL;
              v43 = *(_QWORD *)&v40->LockCount;
              if ( v43 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v43 + 8));
                v37 = HIDWORD(v651);
                LODWORD(v36) = v651;
                v35 = v650;
              }
              *v42 = v40->DebugInfo;
              v42[1] = *(PRTL_CRITICAL_SECTION_DEBUG *)&v40->LockCount;
            }
            v36 = (unsigned int)(v36 + 1);
            LODWORD(v651) = v36;
            ++v38;
            v39 += 16LL;
          }
          while ( v38 < *(_DWORD *)(v34 + 40) );
        }
        v44 = 0;
        if ( (int)v36 <= 0 )
        {
LABEL_53:
          if ( v35 )
          {
            if ( (int)v36 > 0 )
            {
              v34 = (__int64)(v35 + 2);
              do
              {
                v35 = *(volatile signed __int32 **)v34;
                if ( *(_QWORD *)v34 && _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
                {
LABEL_973:
                  (**(void (__fastcall ***)(volatile signed __int32 *))v35)(v35);
                  std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v35);
                }
                v34 += 16LL;
                --v36;
              }
              while ( v36 );
              v35 = v650;
            }
            _o_free(v35);
          }
          v46 = lpCriticalSection;
          if ( !lpCriticalSection )
            goto LABEL_63;
        }
        else
        {
          v45 = v35;
          while ( 1 )
          {
            if ( v44 < 0 )
            {
              sub_1800BB2C8(3221225612LL);
              goto LABEL_973;
            }
            if ( *(_BYTE *)(*(_QWORD *)v45 + 20LL) )
            {
              v409 = (_QWORD *)sub_180023320((__int64)&v650, v44);
              v410 = sub_180052550(*v409, v34);
              if ( v410 < 0 )
                break;
            }
            ++v44;
            v45 += 4;
            if ( v44 >= (int)v36 )
              goto LABEL_53;
          }
          v407 = (unsigned int)v410;
          v408 = 508LL;
LABEL_967:
          sub_18004BD84(retaddr, v408, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", v407);
          sub_180032210(&v650);
          v46 = lpCriticalSection;
          if ( !lpCriticalSection )
            goto LABEL_63;
        }
        LeaveCriticalSection(v46);
LABEL_63:
        v15 = a1;
        goto LABEL_64;
      }
    }
    else
    {
      while ( 1 )
      {
        if ( v29 < 0 || v29 >= *(_DWORD *)(v25 + 40) )
        {
          sub_1800BB2C8(3221225612LL);
          __debugbreak();
        }
        if ( !(unsigned int)sub_1800233E0((__int64)&v686, (_QWORD *)(*(_QWORD *)(v25 + 32) + 16LL * v29)) )
          break;
        if ( ++v29 >= *(_DWORD *)(v25 + 40) )
        {
          v28 = v687;
          v27 = v686;
          goto LABEL_18;
        }
      }
      v397 = 2147942414LL;
      v398 = 502LL;
LABEL_943:
      sub_18004BD84(retaddr, v398, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", v397);
      sub_180032210(&v686);
      if ( v25 == -56 )
        goto LABEL_24;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(v25 + 56));
    goto LABEL_24;
  }
LABEL_500:
  v228 = v611 || v610;
  v18 = v624 + v623 + v228 + v608 + (v609 != 0);
  LODWORD(lpCriticalSection) = v18;
LABEL_504:
  v612 = 0LL;
  if ( v18 )
    v229 = v18;
  else
    v229 = 1;
  v230 = 16 * v229 + 200;
  v231 = CoTaskMemAlloc(v230);
  v612 = v231;
  if ( v231 )
  {
    memset(v231, 0, v230);
    ppv = 0LL;
    if ( v14 == 1 )
    {
      sub_1800CB144(&ppv);
      v232 = CoCreateInstance(&stru_180171558, 0LL, 0x17u, &stru_18015B900, &ppv);
      v20 = v232;
      if ( v232 < 0 )
      {
        v504 = 1793LL;
        goto LABEL_1233;
      }
    }
    else
    {
      if ( v613 != 1 )
      {
        ppv = 0LL;
        v232 = CoCreateInstance(&stru_18015A7E0, 0LL, 0x17u, &stru_18015B900, &ppv);
        v20 = v232;
        if ( v232 >= 0 )
          goto LABEL_510;
        v504 = 1804LL;
LABEL_1233:
        sub_18004BD84(
          retaddr,
          v504,
          "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (unsigned int)v232);
LABEL_912:
        if ( ppv )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
        goto LABEL_914;
      }
      sub_1800CB144(&ppv);
      v232 = CoCreateInstance(&stru_180171548, 0LL, 0x17u, &stru_18015B900, &ppv);
      v20 = v232;
      if ( v232 < 0 )
      {
        v504 = 1799LL;
        goto LABEL_1233;
      }
    }
LABEL_510:
    pProxy = 0LL;
    v233 = (**(__int64 (__fastcall ***)(LPVOID, void *, IUnknown **))ppv)(ppv, &unk_18015A7F0, &pProxy);
    v20 = v233;
    if ( v233 < 0 )
    {
      v505 = 1810LL;
    }
    else
    {
      if ( !pProxy )
      {
        sub_18004BD84(
          retaddr,
          1811LL,
          "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          2147942414LL);
        v20 = -2147024882;
        goto LABEL_910;
      }
      v233 = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
      v20 = v233;
      if ( v233 >= 0 )
      {
        *((_QWORD *)v612 + 1) = v16;
        *(_DWORD *)v612 = *(unsigned __int16 *)(v16 + 16) + 18;
        if ( a10 )
        {
          *((_QWORD *)v612 + 3) = a10;
          *((_DWORD *)v612 + 4) = *(unsigned __int16 *)(a10 + 16) + 18;
          v234 = 0LL;
        }
        else
        {
          v234 = 0LL;
          *((_QWORD *)v612 + 3) = 0LL;
          *((_DWORD *)v612 + 4) = 0;
        }
        *((_DWORD *)v612 + 18) = v628;
        *((_QWORD *)v612 + 7) = v683;
        *((_QWORD *)v612 + 4) = a7;
        *((_QWORD *)v612 + 5) = a8;
        *((_DWORD *)v612 + 24) = 0;
        *((_DWORD *)v612 + 20) = 0;
        *((_DWORD *)v612 + 19) = v678;
        *((_DWORD *)v612 + 25) = v613;
        *((_DWORD *)v612 + 22) = -1;
        *((_DWORD *)v612 + 23) = 0;
        *((_DWORD *)v612 + 21) = -1;
        if ( v613 == 2 )
          goto LABEL_1274;
        v235 = v613;
        v783 = *(_QWORD *)(v15 + 1656);
        v784 = v613;
        if ( v613 >= v783 )
        {
          v524 = sub_180118A38(&v910, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
          sub_180118968(v524);
        }
        if ( (v17 & 0x800000) != 0 )
        {
          v17 &= ~0x800000u;
          v605 = v17;
          v910 = &off_180149EB8;
          o___std_exception_destroy(v911);
        }
        sub_1800230F0(*(_QWORD *)(v15 + 1664) + 96LL * v613);
        v785 = *(_QWORD *)(v15 + 1672);
        v786 = v613;
        if ( v613 >= v785 )
        {
          v523 = sub_180118A38(&v908, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
          sub_180118968(v523);
        }
        if ( (v17 & 0x1000000) != 0 )
        {
          v17 &= ~0x1000000u;
          v605 = v17;
          v908 = &off_180149EB8;
          o___std_exception_destroy(v909);
        }
        v236 = *(_QWORD *)(v15 + 1680) + 96LL * v613;
        if ( !*(_BYTE *)(v236 + 52) )
        {
LABEL_529:
          v787 = *(_QWORD *)(v15 + 1688);
          v788 = v613;
          if ( v613 >= v787 )
          {
            v522 = sub_180118A38(&v906, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
            sub_180118968(v522);
          }
          if ( (v17 & 0x2000000) != 0 )
          {
            v17 &= ~0x2000000u;
            v605 = v17;
            v906 = &off_180149EB8;
            o___std_exception_destroy(v907);
          }
          v241 = *(_QWORD *)(v15 + 1696) + 96LL * v613;
          if ( *(_BYTE *)(v241 + 52) )
          {
            v617 = (LPCRITICAL_SECTION)(v241 + 56);
            EnterCriticalSection((LPCRITICAL_SECTION)(v241 + 56));
            v727 = (struct _RTL_CRITICAL_SECTION *)(v241 + 56);
            v242 = 0LL;
            v663 = 0LL;
            v243 = 0LL;
            v664 = 0;
            v665 = 0;
            v244 = 0;
            if ( *(int *)(v241 + 40) > 0 )
            {
              v245 = 0LL;
              do
              {
                if ( v245 < 0 || v244 >= *(_DWORD *)(v241 + 40) )
                {
                  sub_1800BB2C8(3221225612LL);
                  __debugbreak();
                }
                v246 = (LPCRITICAL_SECTION)(v245 + *(_QWORD *)(v241 + 32));
                v616 = v246;
                if ( (_DWORD)v243 == (_DWORD)v234 )
                {
                  if ( (_DWORD)v234 )
                  {
                    LODWORD(v234) = 2 * v243;
                    if ( (v243 & 0x40000000) != 0 )
                      goto LABEL_1254;
                  }
                  else
                  {
                    LODWORD(v234) = 1;
                  }
                  if ( (unsigned __int64)(int)v234 > 0x7FFFFFF
                    || (v247 = o__recalloc(v242, (int)v234, 16LL), (v242 = (volatile signed __int32 *)v247) == 0LL) )
                  {
LABEL_1254:
                    v512 = 2147942414LL;
                    v513 = 502LL;
                    goto LABEL_1256;
                  }
                  v665 = v234;
                  v663 = (volatile signed __int32 *)v247;
                  v246 = v616;
                }
                v248 = (PRTL_CRITICAL_SECTION_DEBUG *)&v242[4 * (int)v243];
                if ( v248 )
                {
                  *v248 = 0LL;
                  v248[1] = 0LL;
                  v249 = *(_QWORD *)&v246->LockCount;
                  if ( v249 )
                  {
                    _InterlockedIncrement((volatile signed __int32 *)(v249 + 8));
                    LODWORD(v234) = v665;
                    LODWORD(v243) = v664;
                    v242 = v663;
                  }
                  *v248 = v246->DebugInfo;
                  v248[1] = *(PRTL_CRITICAL_SECTION_DEBUG *)&v246->LockCount;
                }
                v243 = (unsigned int)(v243 + 1);
                v664 = v243;
                ++v244;
                v245 += 16LL;
              }
              while ( v244 < *(_DWORD *)(v241 + 40) );
            }
            v250 = 0;
            if ( (int)v243 <= 0 )
            {
LABEL_553:
              if ( v242 )
              {
                if ( (int)v243 > 0 )
                {
                  v241 = (__int64)(v242 + 2);
                  do
                  {
                    v242 = *(volatile signed __int32 **)v241;
                    if ( *(_QWORD *)v241 && _InterlockedExchangeAdd(v242 + 2, 0xFFFFFFFF) == 1 )
                    {
LABEL_1261:
                      (**(void (__fastcall ***)(volatile signed __int32 *))v242)(v242);
                      std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v242);
                    }
                    v241 += 16LL;
                    --v243;
                  }
                  while ( v243 );
                  v242 = v663;
                }
                _o_free(v242);
              }
              if ( v617 )
                LeaveCriticalSection(v617);
            }
            else
            {
              v251 = v242;
              while ( 1 )
              {
                if ( v250 < 0 )
                {
                  sub_1800BB2C8(3221225612LL);
                  goto LABEL_1261;
                }
                if ( *(_BYTE *)(*(_QWORD *)v251 + 20LL) )
                {
                  v514 = (_QWORD *)sub_180023320((__int64)&v663, v250);
                  v515 = sub_180052550(*v514, v241);
                  if ( v515 < 0 )
                    break;
                }
                ++v250;
                v251 += 4;
                if ( v250 >= (int)v243 )
                  goto LABEL_553;
              }
              v512 = (unsigned int)v515;
              v513 = 508LL;
LABEL_1256:
              sub_18004BD84(retaddr, v513, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", v512);
              sub_180032210(&v663);
              sub_180023350(&v727);
            }
            v17 = v605;
            v15 = a1;
          }
          v789 = *(_QWORD *)(v15 + 64);
          v790 = v235;
          if ( v235 >= v789 )
          {
            v521 = sub_180118A38(&v904, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
            sub_180118968(v521);
          }
          if ( (v17 & 0x4000000) != 0 )
          {
            v17 &= ~0x4000000u;
            v605 = v17;
            v904 = &off_180149EB8;
            o___std_exception_destroy(v905);
          }
          if ( *(_DWORD *)(*(_QWORD *)(v15 + 72) + 4 * v235) )
          {
            v252 = v713;
            v253 = *(_OWORD *)v713;
            v860 = *(_OWORD *)v713;
            v791 = *(_QWORD *)(v15 + 1720);
            v792 = v613;
            if ( v613 >= v791 )
            {
              v520 = sub_180118A38(&v902, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
              sub_180118968(v520);
            }
            if ( (v17 & 0x8000000) != 0 )
            {
              v17 &= ~0x8000000u;
              v605 = v17;
              v902 = &off_180149EB8;
              o___std_exception_destroy(v903);
            }
            v254 = *(_QWORD *)(v15 + 1728);
            v234 = 0LL;
            v255 = 0;
            if ( *(int *)(v254 + 24LL * v613 + 16) <= 0 )
              goto LABEL_572;
            v516 = *(_QWORD *)(v254 + 24LL * v613);
            while ( !(unsigned int)sub_18004B990(v516 + 16LL * v255, &v860) )
            {
              v255 = v518 + 1;
              if ( v255 >= v517 )
                goto LABEL_572;
            }
            if ( v518 == -1 )
            {
LABEL_572:
              v947 = v253;
              v256 = &v947;
            }
            else
            {
              v861 = v253;
              v519 = sub_18004B060(v15 + 1720, v613);
              v256 = (__int128 *)sub_18011E44C(v519, v948, &v861);
            }
            v945 = *v256;
            v257 = &v945;
LABEL_574:
            *(_OWORD *)((char *)v612 + 104) = *v257;
            *(_OWORD *)((char *)v612 + 120) = *(_OWORD *)&v633->DebugInfo;
            v677 = 0;
            v258 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))(v15 + 16);
            v259 = 0LL;
            v712 = 0LL;
            if ( v258 )
            {
              (**v258)(v258, &unk_18015B040, &v712);
              v259 = v712;
            }
            if ( v259 )
            {
              (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v259 + 88LL))(v259, &v677);
              v259 = v712;
            }
            v260 = v677;
            if ( v259 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v259 + 16LL))(v259);
            *((_DWORD *)v612 + 34) = v260;
            *((_DWORD *)v612 + 12) = *(_DWORD *)(v15 + 184);
            v261 = 1;
            if ( *(_QWORD *)(v15 + 80) )
            {
              *(_OWORD *)v756 = 0LL;
              v757 = 0LL;
              if ( (*(int (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(v15 + 80) + 40LL))(
                     *(_QWORD *)(v15 + 80),
                     &xmmword_18015B7F8,
                     v756) >= 0
                && LOWORD(v756[0]) == 19 )
              {
                v261 = LODWORD(v756[1]) == 0;
              }
              PropVariantClear(v756);
              if ( !v261 )
                goto LABEL_1275;
            }
            if ( v625 == 1 )
LABEL_1275:
              v262 = 1;
            else
              v262 = 0;
            *((_DWORD *)v612 + 36) = v262;
            v263 = *v252 - 0x4FD1B4939E90EA20LL;
            if ( *v252 == 0x4FD1B4939E90EA20LL )
              v263 = v252[1] + 0x30A9569EEC81575FLL;
            if ( v263 )
              goto LABEL_1391;
            v264 = v613;
            v628 = v613;
            v631 = 0LL;
            v632 = 0LL;
            v626 = 0;
            v767 = xmmword_18015B798;
            if ( !v613 )
            {
              v265 = 1;
              if ( *(_QWORD *)(v15 + 80) )
              {
                *(_OWORD *)v758 = 0LL;
                v759 = 0LL;
                if ( (*(int (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(v15 + 80) + 40LL))(
                       *(_QWORD *)(v15 + 80),
                       &xmmword_18015B7F8,
                       v758) >= 0
                  && LOWORD(v758[0]) == 19 )
                {
                  v265 = LODWORD(v758[1]) == 0;
                }
                PropVariantClear(v758);
                if ( !v265 )
                {
                  v295 = v15 + 168;
                  goto LABEL_680;
                }
              }
            }
            v266 = v613;
            v793 = *(_QWORD *)(v15 + 1656);
            v794 = v613;
            if ( v613 >= v793 )
            {
              v575 = sub_180118A38(&v926, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
              sub_180118968(v575);
            }
            if ( (v17 & 0x10000000) != 0 )
            {
              v17 &= ~0x10000000u;
              v605 = v17;
              v926 = &off_180149EB8;
              o___std_exception_destroy(v927);
            }
            v267 = *(_QWORD *)(v15 + 1664) + 96LL * v613;
            if ( *(_BYTE *)(v267 + 52) )
            {
              v633 = (LPCRITICAL_SECTION)(v267 + 56);
              EnterCriticalSection((LPCRITICAL_SECTION)(v267 + 56));
              v733 = (struct _RTL_CRITICAL_SECTION *)(v267 + 56);
              v268 = 0LL;
              v660 = 0LL;
              v269 = 0LL;
              v661 = 0;
              v662 = 0;
              v270 = 0;
              if ( *(int *)(v267 + 40) > 0 )
              {
                v271 = 0LL;
                do
                {
                  if ( v271 < 0 || v270 >= *(_DWORD *)(v267 + 40) )
                  {
                    sub_1800BB2C8(3221225612LL);
                    __debugbreak();
                  }
                  v272 = (LPCRITICAL_SECTION)(v271 + *(_QWORD *)(v267 + 32));
                  v616 = v272;
                  if ( (_DWORD)v269 == (_DWORD)v234 )
                  {
                    if ( (_DWORD)v234 )
                    {
                      LODWORD(v234) = 2 * v269;
                      if ( (v269 & 0x40000000) != 0 )
                        goto LABEL_1278;
                    }
                    else
                    {
                      LODWORD(v234) = 1;
                    }
                    if ( (unsigned __int64)(int)v234 > 0x7FFFFFF
                      || (v273 = o__recalloc(v268, (int)v234, 16LL), (v268 = (volatile signed __int32 *)v273) == 0LL) )
                    {
LABEL_1278:
                      v525 = 2147942414LL;
                      v526 = 502LL;
                      goto LABEL_1280;
                    }
                    v662 = v234;
                    v660 = (volatile signed __int32 *)v273;
                    v272 = v616;
                  }
                  v274 = (PRTL_CRITICAL_SECTION_DEBUG *)&v268[4 * (int)v269];
                  if ( v274 )
                  {
                    *v274 = 0LL;
                    v274[1] = 0LL;
                    v275 = *(_QWORD *)&v272->LockCount;
                    if ( v275 )
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(v275 + 8));
                      LODWORD(v234) = v662;
                      LODWORD(v269) = v661;
                      v268 = v660;
                    }
                    *v274 = v272->DebugInfo;
                    v274[1] = *(PRTL_CRITICAL_SECTION_DEBUG *)&v272->LockCount;
                  }
                  v269 = (unsigned int)(v269 + 1);
                  v661 = v269;
                  ++v270;
                  v271 += 16LL;
                }
                while ( v270 < *(_DWORD *)(v267 + 40) );
              }
              v276 = 0;
              if ( (int)v269 <= 0 )
              {
LABEL_620:
                if ( v268 )
                {
                  if ( (int)v269 > 0 )
                  {
                    v267 = (__int64)(v268 + 2);
                    do
                    {
                      v268 = *(volatile signed __int32 **)v267;
                      if ( *(_QWORD *)v267 && _InterlockedExchangeAdd(v268 + 2, 0xFFFFFFFF) == 1 )
                      {
LABEL_1285:
                        (**(void (__fastcall ***)(volatile signed __int32 *))v268)(v268);
                        std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v268);
                      }
                      v267 += 16LL;
                      --v269;
                    }
                    while ( v269 );
                    v268 = v660;
                  }
                  _o_free(v268);
                }
                if ( v633 )
                  LeaveCriticalSection(v633);
              }
              else
              {
                v277 = v268;
                while ( 1 )
                {
                  if ( v276 < 0 )
                  {
                    sub_1800BB2C8(3221225612LL);
                    goto LABEL_1285;
                  }
                  if ( *(_BYTE *)(*(_QWORD *)v277 + 20LL) )
                  {
                    v527 = (_QWORD *)sub_180023320((__int64)&v660, v276);
                    v528 = sub_180052550(*v527, v267);
                    if ( v528 < 0 )
                      break;
                  }
                  ++v276;
                  v277 += 4;
                  if ( v276 >= (int)v269 )
                    goto LABEL_620;
                }
                v525 = (unsigned int)v528;
                v526 = 508LL;
LABEL_1280:
                sub_18004BD84(retaddr, v526, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", v525);
                sub_180032210(&v660);
                sub_180023350(&v733);
              }
              LODWORD(v234) = 0;
              v17 = v605;
              v15 = a1;
            }
            v795 = *(_QWORD *)(v15 + 1672);
            v796 = v266;
            if ( v266 >= v795 )
            {
              v574 = sub_180118A38(&v924, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
              sub_180118968(v574);
            }
            if ( (v17 & 0x20000000) != 0 )
            {
              v17 &= ~0x20000000u;
              v605 = v17;
              v924 = &off_180149EB8;
              o___std_exception_destroy(v925);
            }
            v278 = *(_QWORD *)(v15 + 1680) + 96 * v266;
            if ( !*(_BYTE *)(v278 + 52) )
            {
LABEL_641:
              v797 = *(_QWORD *)(v15 + 1688);
              v798 = v266;
              if ( v266 >= v797 )
              {
                v573 = sub_180118A38(&v922, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                sub_180118968(v573);
              }
              if ( (v17 & 0x40000000) != 0 )
              {
                v17 &= ~0x40000000u;
                v605 = v17;
                v922 = &off_180149EB8;
                o___std_exception_destroy(v923);
              }
              v283 = *(_QWORD *)(v15 + 1696) + 96 * v266;
              if ( *(_BYTE *)(v283 + 52) )
              {
                v633 = (LPCRITICAL_SECTION)(v283 + 56);
                EnterCriticalSection((LPCRITICAL_SECTION)(v283 + 56));
                v728 = (struct _RTL_CRITICAL_SECTION *)(v283 + 56);
                v284 = 0LL;
                v656 = 0LL;
                v285 = 0LL;
                v657 = 0LL;
                v286 = 0;
                v287 = 0;
                if ( *(int *)(v283 + 40) > 0 )
                {
                  v288 = 0LL;
                  do
                  {
                    if ( v288 < 0 || v287 >= *(_DWORD *)(v283 + 40) )
                    {
                      sub_1800BB2C8(3221225612LL);
                      __debugbreak();
                    }
                    v289 = (LPCRITICAL_SECTION)(v288 + *(_QWORD *)(v283 + 32));
                    v616 = v289;
                    if ( (_DWORD)v285 == v286 )
                    {
                      if ( v286 )
                      {
                        v286 = 2 * v285;
                        if ( (v285 & 0x40000000) != 0 )
                          goto LABEL_1301;
                      }
                      else
                      {
                        v286 = 1;
                      }
                      if ( (unsigned __int64)v286 > 0x7FFFFFF
                        || (v290 = o__recalloc(v284, v286, 16LL), (v284 = (volatile signed __int32 *)v290) == 0LL) )
                      {
LABEL_1301:
                        v535 = 2147942414LL;
                        v536 = 502LL;
                        goto LABEL_1303;
                      }
                      HIDWORD(v657) = v286;
                      v656 = (volatile signed __int32 *)v290;
                      v289 = v616;
                    }
                    v291 = (PRTL_CRITICAL_SECTION_DEBUG *)&v284[4 * (int)v285];
                    if ( v291 )
                    {
                      *v291 = 0LL;
                      v291[1] = 0LL;
                      v292 = *(_QWORD *)&v289->LockCount;
                      if ( v292 )
                      {
                        _InterlockedIncrement((volatile signed __int32 *)(v292 + 8));
                        v286 = HIDWORD(v657);
                        LODWORD(v285) = v657;
                        v284 = v656;
                      }
                      *v291 = v289->DebugInfo;
                      v291[1] = *(PRTL_CRITICAL_SECTION_DEBUG *)&v289->LockCount;
                    }
                    v285 = (unsigned int)(v285 + 1);
                    LODWORD(v657) = v285;
                    ++v287;
                    v288 += 16LL;
                  }
                  while ( v287 < *(_DWORD *)(v283 + 40) );
                }
                v293 = 0;
                if ( (int)v285 <= 0 )
                {
LABEL_665:
                  if ( v284 )
                  {
                    if ( (int)v285 > 0 )
                    {
                      v283 = (__int64)(v284 + 2);
                      do
                      {
                        v284 = *(volatile signed __int32 **)v283;
                        if ( *(_QWORD *)v283 && _InterlockedExchangeAdd(v284 + 2, 0xFFFFFFFF) == 1 )
                        {
LABEL_1308:
                          (**(void (__fastcall ***)(volatile signed __int32 *))v284)(v284);
                          std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v284);
                        }
                        v283 += 16LL;
                        --v285;
                      }
                      while ( v285 );
                      v284 = v656;
                    }
                    _o_free(v284);
                  }
                  if ( v633 )
                    LeaveCriticalSection(v633);
                }
                else
                {
                  v294 = v284;
                  while ( 1 )
                  {
                    if ( v293 < 0 )
                    {
                      sub_1800BB2C8(3221225612LL);
                      goto LABEL_1308;
                    }
                    if ( *(_BYTE *)(*(_QWORD *)v294 + 20LL) )
                    {
                      v537 = (_QWORD *)sub_180023320((__int64)&v656, v293);
                      v538 = sub_180052550(*v537, v283);
                      if ( v538 < 0 )
                        break;
                    }
                    ++v293;
                    v294 += 4;
                    if ( v293 >= (int)v285 )
                      goto LABEL_665;
                  }
                  v535 = (unsigned int)v538;
                  v536 = 508LL;
LABEL_1303:
                  sub_18004BD84(
                    retaddr,
                    v536,
                    "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                    v535);
                  sub_180032210(&v656);
                  sub_180023350(&v728);
                }
                v17 = v605;
                v15 = a1;
              }
              v799 = *(_QWORD *)(v15 + 152);
              v800 = v266;
              if ( v266 >= v799 )
              {
                v572 = sub_180118A38(&v920, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                sub_180118968(v572);
              }
              if ( v17 < 0 )
              {
                v920 = &off_180149EB8;
                o___std_exception_destroy(v921);
              }
              v295 = *(_QWORD *)(v15 + 160) + 16 * v266;
              v264 = v628;
              v234 = 0LL;
LABEL_680:
              v296 = 0;
              v297 = *(_DWORD *)(v295 + 8);
              if ( v297 <= 0 )
                goto LABEL_1310;
              v298 = *(_QWORD *)v295;
              while ( 1 )
              {
                v299 = *(_QWORD *)(v298 + 16LL * v296) - v767;
                if ( !v299 )
                  v299 = *(_QWORD *)(v298 + 16LL * v296 + 8) - *((_QWORD *)&v767 + 1);
                if ( !v299 )
                  break;
                if ( ++v296 >= v297 )
                  goto LABEL_1310;
              }
              if ( v296 == -1 )
              {
LABEL_1310:
                v358 = 0;
              }
              else
              {
                v300 = 1;
                if ( !*(_QWORD *)(v15 + 80) )
                  goto LABEL_691;
                *(_OWORD *)v760 = 0LL;
                v761 = 0LL;
                if ( (*(int (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(v15 + 80) + 40LL))(
                       *(_QWORD *)(v15 + 80),
                       &xmmword_18015B7F8,
                       v760) >= 0
                  && LOWORD(v760[0]) == 19 )
                {
                  v300 = LODWORD(v760[1]) == 0;
                }
                PropVariantClear(v760);
                if ( v300 || (v301 = 0, v264 == 3) )
LABEL_691:
                  v301 = 1;
                v302 = v264;
                v801 = *(_QWORD *)(v15 + 1672);
                v802 = v264;
                if ( v264 >= v801 )
                {
                  v571 = sub_180118A38(v944, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                  sub_180118968(v571);
                }
                v303 = *(_QWORD *)(v15 + 1680) + 96LL * v264;
                if ( v301 )
                {
                  if ( !*(_BYTE *)(v303 + 52) )
                    goto LABEL_701;
                  EnterCriticalSection((LPCRITICAL_SECTION)(v303 + 56));
                  v735 = (struct _RTL_CRITICAL_SECTION *)(v303 + 56);
                  v304 = 0LL;
                  v704 = 0LL;
                  v305 = 0LL;
                  v705 = 0;
                  v706 = 0;
                  if ( *(int *)(v303 + 40) <= 0 )
                    goto LABEL_696;
                  while ( 1 )
                  {
                    v541 = (_QWORD *)sub_180023320(v303 + 32, v234);
                    if ( !(unsigned int)sub_1800233E0((__int64)&v704, v541) )
                      break;
                    LODWORD(v234) = v234 + 1;
                    if ( (int)v234 >= *(_DWORD *)(v303 + 40) )
                    {
                      v305 = v705;
                      v304 = v704;
LABEL_696:
                      v306 = 0;
                      if ( (int)v305 <= 0 )
                      {
LABEL_697:
                        if ( v304 )
                        {
                          if ( (int)v305 > 0 )
                          {
                            v546 = v304;
                            do
                            {
                              sub_1800322B0(v546);
                              v546 += 16LL;
                              --v305;
                            }
                            while ( v305 );
                          }
                          _o_free(v304);
                        }
                        if ( v303 != -56 )
                          LeaveCriticalSection((LPCRITICAL_SECTION)(v303 + 56));
LABEL_700:
                        v234 = 0LL;
LABEL_701:
                        for ( m = 0; m < *(_DWORD *)(v303 + 40); ++m )
                        {
                          for ( n = 0; n < *(_DWORD *)(*(_QWORD *)sub_180023320(v303 + 32, m) + 8LL); ++n )
                          {
                            v548 = (__int64 *)sub_180023320(v303 + 32, m);
                            v549 = (_QWORD *)sub_180023320(*v548, n);
                            if ( (unsigned int)sub_180022EE0(&v631, v549) == -1 )
                            {
                              v550 = (__int64 *)sub_180023320(v303 + 32, m);
                              v551 = sub_180023320(*v550, n);
                              if ( !(unsigned int)sub_1800273F8(&v631, v551) )
                              {
                                v539 = retaddr;
                                v540 = 584LL;
LABEL_1315:
                                sub_18004BD84(
                                  v539,
                                  v540,
                                  "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                                  2147942414LL);
                                goto LABEL_719;
                              }
                            }
                          }
                        }
                        v308 = *(int **)(v303 + 16);
                        if ( !v308 )
                          goto LABEL_719;
                        v309 = 0;
                        if ( v308[2] <= 0 )
                          goto LABEL_719;
                        v310 = 0LL;
                        while ( 1 )
                        {
                          if ( v309 < 0 || v309 >= v308[2] )
                          {
                            sub_1800BB2C8(3221225612LL);
                            __debugbreak();
                          }
                          v311 = *(_QWORD *)v308 + 16LL * v309;
                          v312 = 0;
                          if ( (int)v632 <= 0 )
                            goto LABEL_708;
                          while ( !(unsigned int)sub_18004B990(v631 + 16LL * v312, v311) )
                          {
                            v312 = v552 + 1;
                            if ( v312 >= (int)v632 )
                              goto LABEL_708;
                          }
                          if ( v552 == -1 )
                          {
LABEL_708:
                            if ( v309 >= v308[2] )
                            {
                              sub_1800BB2C8(3221225612LL);
                              __debugbreak();
                            }
                            v313 = *(_QWORD *)v308;
                            if ( (_DWORD)v632 == HIDWORD(v632) )
                            {
                              if ( HIDWORD(v632) )
                              {
                                v314 = 2 * v632;
                                if ( (v632 & 0x40000000) != 0 )
                                  goto LABEL_1344;
                              }
                              else
                              {
                                v314 = 1;
                              }
                              if ( (unsigned __int64)v314 > 0x7FFFFFF || (v315 = o__recalloc(v631, v314, 16LL)) == 0 )
                              {
LABEL_1344:
                                sub_18004BD84(
                                  retaddr,
                                  596LL,
                                  "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                                  2147942414LL);
                                v234 = 0LL;
                                goto LABEL_719;
                              }
                              HIDWORD(v632) = v314;
                              v631 = v315;
                            }
                            v316 = (_OWORD *)(v631 + 16LL * (int)v632);
                            if ( v316 )
                              *v316 = *(_OWORD *)(v313 + v310);
                            LODWORD(v632) = v632 + 1;
                            v234 = 0LL;
                          }
                          ++v309;
                          v310 += 16LL;
                          v308 = *(int **)(v303 + 16);
                          if ( v309 >= v308[2] )
                            goto LABEL_719;
                        }
                      }
                      while ( 1 )
                      {
                        if ( *(_BYTE *)(*(_QWORD *)sub_180023320((__int64)&v704, v306) + 20LL) )
                        {
                          v544 = (_QWORD *)sub_180023320((__int64)&v704, v306);
                          v545 = sub_180052550(*v544, v303);
                          if ( v545 < 0 )
                            break;
                        }
                        if ( ++v306 >= (int)v305 )
                          goto LABEL_697;
                      }
                      v542 = (unsigned int)v545;
                      v543 = 508LL;
LABEL_1321:
                      sub_18004BD84(
                        retaddr,
                        v543,
                        "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                        v542);
                      sub_180032210(&v704);
                      sub_180023350(&v735);
                      goto LABEL_700;
                    }
                  }
                  v542 = 2147942414LL;
                  v543 = 502LL;
                  goto LABEL_1321;
                }
                sub_180067BDC(&v631, *(_QWORD *)(v15 + 1680) + 96LL * v264);
                if ( (_DWORD)v632 != *(_DWORD *)(v303 + 8) )
                {
                  v539 = retaddr;
                  v540 = 570LL;
                  goto LABEL_1315;
                }
LABEL_719:
                v317 = 0;
                v618 = 0;
                if ( (int)v632 <= 0 )
                {
LABEL_1376:
                  v358 = v626;
                }
                else
                {
                  v318 = 0LL;
                  v633 = 0LL;
                  while ( 1 )
                  {
                    if ( (__int64)v318 < 0 )
                    {
                      sub_1800BB2C8(3221225612LL);
                      __debugbreak();
                    }
                    v768 = *(_OWORD *)(v631 + 16LL * (_QWORD)v318);
                    if ( v628 )
                      goto LABEL_728;
                    v319 = 1;
                    if ( !*(_QWORD *)(v15 + 80) )
                      goto LABEL_728;
                    *(_OWORD *)v762 = 0LL;
                    v763 = 0LL;
                    if ( (*(int (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(v15 + 80) + 40LL))(
                           *(_QWORD *)(v15 + 80),
                           &xmmword_18015B7F8,
                           v762) >= 0
                      && LOWORD(v762[0]) == 19 )
                    {
                      v319 = LODWORD(v762[1]) == 0;
                    }
                    PropVariantClear(v762);
                    if ( v319 )
                    {
LABEL_728:
                      v803 = *(_QWORD *)(v15 + 1656);
                      v804 = v302;
                      if ( v302 >= v803 )
                      {
                        v570 = sub_180118A38(
                                 &v918,
                                 "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                        sub_180118968(v570);
                      }
                      if ( (v606 & 2) != 0 )
                      {
                        v606 &= ~2u;
                        v918 = &off_180149EB8;
                        o___std_exception_destroy(v919);
                      }
                      v320 = *(_QWORD *)(v15 + 1664) + 96 * v302;
                      if ( !*(_BYTE *)(v320 + 52) )
                        goto LABEL_766;
                      v617 = (LPCRITICAL_SECTION)(v320 + 56);
                      EnterCriticalSection((LPCRITICAL_SECTION)(v320 + 56));
                      v736 = (struct _RTL_CRITICAL_SECTION *)(v320 + 56);
                      v321 = 0LL;
                      v644 = 0LL;
                      v322 = 0;
                      v645 = 0LL;
                      v323 = 0;
                      v324 = 0;
                      if ( *(int *)(v320 + 40) > 0 )
                      {
                        do
                        {
                          if ( v234 < 0 || v324 >= *(_DWORD *)(v320 + 40) )
                          {
                            sub_1800BB2C8(3221225612LL);
                            __debugbreak();
                          }
                          v325 = (LPCRITICAL_SECTION)(v234 + *(_QWORD *)(v320 + 32));
                          v616 = v325;
                          if ( v322 == v323 )
                          {
                            if ( v323 )
                            {
                              v323 = 2 * v322;
                              if ( (v322 & 0x40000000) != 0 )
                                goto LABEL_1349;
                            }
                            else
                            {
                              v323 = 1;
                            }
                            if ( (unsigned __int64)v323 > 0x7FFFFFF
                              || (v326 = o__recalloc(v321, v323, 16LL), (v321 = v326) == 0) )
                            {
LABEL_1349:
                              v553 = 2147942414LL;
                              v554 = 502LL;
                              goto LABEL_1351;
                            }
                            HIDWORD(v645) = v323;
                            v644 = v326;
                            v325 = v616;
                          }
                          v327 = (PRTL_CRITICAL_SECTION_DEBUG *)(v321 + 16LL * v322);
                          if ( v327 )
                          {
                            *v327 = 0LL;
                            v327[1] = 0LL;
                            v328 = *(_QWORD *)&v325->LockCount;
                            if ( v328 )
                            {
                              _InterlockedIncrement((volatile signed __int32 *)(v328 + 8));
                              v323 = HIDWORD(v645);
                              v322 = v645;
                              v321 = v644;
                            }
                            *v327 = v325->DebugInfo;
                            v327[1] = *(PRTL_CRITICAL_SECTION_DEBUG *)&v325->LockCount;
                          }
                          LODWORD(v645) = ++v322;
                          ++v324;
                          v234 += 16LL;
                        }
                        while ( v324 < *(_DWORD *)(v320 + 40) );
                        v234 = 0LL;
                      }
                      v329 = 0;
                      if ( v322 <= 0 )
                        goto LABEL_754;
                      v330 = v321;
                      while ( 1 )
                      {
                        if ( v329 < 0 || v329 >= v322 )
                        {
                          sub_1800BB2C8(3221225612LL);
LABEL_1379:
                          sub_1800BB2C8(3221225612LL);
                          __debugbreak();
                        }
                        if ( *(_BYTE *)(*(_QWORD *)v330 + 20LL) )
                        {
                          v555 = (_QWORD *)sub_180023320((__int64)&v644, v329);
                          v556 = sub_180052550(*v555, v320);
                          if ( v556 < 0 )
                            break;
                        }
                        ++v329;
                        v330 += 16LL;
                        if ( v329 >= v322 )
                        {
                          v234 = 0LL;
LABEL_754:
                          if ( v321 )
                          {
                            if ( v322 > 0 )
                            {
                              v331 = (volatile signed __int32 **)(v321 + 8);
                              v332 = (unsigned int)v322;
                              do
                              {
                                v333 = *v331;
                                if ( *v331 && _InterlockedExchangeAdd(v333 + 2, 0xFFFFFFFF) == 1 )
                                {
                                  (**(void (__fastcall ***)(volatile signed __int32 *))v333)(v333);
                                  std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v333);
                                }
                                v331 += 2;
                                --v332;
                              }
                              while ( v332 );
                              v321 = v644;
                            }
                            _o_free(v321);
                            v644 = 0LL;
                          }
                          v645 = 0LL;
                          if ( v617 )
                            LeaveCriticalSection(v617);
LABEL_765:
                          v15 = a1;
LABEL_766:
                          v805 = *(_QWORD *)(v15 + 1672);
                          v806 = v302;
                          if ( v302 >= v805 )
                          {
                            v569 = sub_180118A38(
                                     &v916,
                                     "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                            sub_180118968(v569);
                          }
                          if ( (v606 & 4) != 0 )
                          {
                            v606 &= ~4u;
                            v916 = &off_180149EB8;
                            o___std_exception_destroy(v917);
                          }
                          v334 = *(_QWORD *)(v15 + 1680) + 96 * v302;
                          if ( !*(_BYTE *)(v334 + 52) )
                          {
LABEL_776:
                            v807 = *(_QWORD *)(v15 + 1688);
                            v808 = v302;
                            if ( v302 >= v807 )
                            {
                              v568 = sub_180118A38(
                                       &v914,
                                       "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                              sub_180118968(v568);
                            }
                            if ( (v606 & 8) != 0 )
                            {
                              v606 &= ~8u;
                              v914 = &off_180149EB8;
                              o___std_exception_destroy(v915);
                            }
                            v339 = *(_QWORD *)(v15 + 1696) + 96 * v302;
                            if ( !*(_BYTE *)(v339 + 52) )
                              goto LABEL_814;
                            v617 = (LPCRITICAL_SECTION)(v339 + 56);
                            EnterCriticalSection((LPCRITICAL_SECTION)(v339 + 56));
                            v724 = (struct _RTL_CRITICAL_SECTION *)(v339 + 56);
                            v340 = 0LL;
                            v636 = 0LL;
                            v341 = 0;
                            v637 = 0LL;
                            v342 = 0;
                            v343 = 0;
                            if ( *(int *)(v339 + 40) > 0 )
                            {
                              do
                              {
                                if ( v234 < 0 || v343 >= *(_DWORD *)(v339 + 40) )
                                  goto LABEL_1379;
                                v344 = (LPCRITICAL_SECTION)(v234 + *(_QWORD *)(v339 + 32));
                                v616 = v344;
                                if ( v341 == v342 )
                                {
                                  if ( v342 )
                                  {
                                    v342 = 2 * v341;
                                    if ( (v341 & 0x40000000) != 0 )
                                      goto LABEL_1369;
                                  }
                                  else
                                  {
                                    v342 = 1;
                                  }
                                  if ( (unsigned __int64)v342 > 0x7FFFFFF
                                    || (v345 = o__recalloc(v340, v342, 16LL), (v340 = v345) == 0) )
                                  {
LABEL_1369:
                                    v563 = 2147942414LL;
                                    v564 = 502LL;
                                    goto LABEL_1371;
                                  }
                                  HIDWORD(v637) = v342;
                                  v636 = v345;
                                  v344 = v616;
                                }
                                v346 = (PRTL_CRITICAL_SECTION_DEBUG *)(v340 + 16LL * v341);
                                if ( v346 )
                                {
                                  *v346 = 0LL;
                                  v346[1] = 0LL;
                                  v347 = *(_QWORD *)&v344->LockCount;
                                  if ( v347 )
                                  {
                                    _InterlockedIncrement((volatile signed __int32 *)(v347 + 8));
                                    v342 = HIDWORD(v637);
                                    v341 = v637;
                                    v340 = v636;
                                  }
                                  *v346 = v344->DebugInfo;
                                  v346[1] = *(PRTL_CRITICAL_SECTION_DEBUG *)&v344->LockCount;
                                }
                                LODWORD(v637) = ++v341;
                                ++v343;
                                v234 += 16LL;
                              }
                              while ( v343 < *(_DWORD *)(v339 + 40) );
                              v234 = 0LL;
                            }
                            v348 = 0;
                            if ( v341 > 0 )
                            {
                              v349 = v340;
                              do
                              {
                                if ( v348 < 0 || v348 >= v341 )
                                {
                                  sub_1800BB2C8(3221225612LL);
                                  goto LABEL_1381;
                                }
                                if ( *(_BYTE *)(*(_QWORD *)v349 + 20LL) )
                                {
                                  v565 = (_QWORD *)sub_180023320((__int64)&v636, v348);
                                  v566 = sub_180052550(*v565, v339);
                                  if ( v566 < 0 )
                                  {
                                    v563 = (unsigned int)v566;
                                    v564 = 508LL;
LABEL_1371:
                                    sub_18004BD84(
                                      retaddr,
                                      v564,
                                      "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                                      v563);
                                    sub_180032210(&v636);
                                    sub_180023350(&v724);
                                    v234 = 0LL;
LABEL_813:
                                    v15 = a1;
LABEL_814:
                                    v809 = *(_QWORD *)(v15 + 152);
                                    v810 = v302;
                                    if ( v302 < v809 )
                                    {
                                      if ( (v606 & 0x10) != 0 )
                                      {
                                        v606 &= ~0x10u;
                                        v912 = &off_180149EB8;
                                        o___std_exception_destroy(v913);
                                      }
                                      v353 = *(_QWORD *)(v15 + 160) + 16 * v302;
                                      v318 = v633;
                                      v317 = v618;
                                      goto LABEL_818;
                                    }
LABEL_1381:
                                    v567 = sub_180118A38(
                                             &v912,
                                             "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                                    sub_180118968(v567);
                                  }
                                }
                                ++v348;
                                v349 += 16LL;
                              }
                              while ( v348 < v341 );
                              v234 = 0LL;
                            }
                            if ( v340 )
                            {
                              if ( v341 > 0 )
                              {
                                v350 = (volatile signed __int32 **)(v340 + 8);
                                v351 = (unsigned int)v341;
                                do
                                {
                                  v352 = *v350;
                                  if ( *v350 && _InterlockedExchangeAdd(v352 + 2, 0xFFFFFFFF) == 1 )
                                  {
                                    (**(void (__fastcall ***)(volatile signed __int32 *))v352)(v352);
                                    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v352);
                                  }
                                  v350 += 2;
                                  --v351;
                                }
                                while ( v351 );
                                v340 = v636;
                              }
                              _o_free(v340);
                              v636 = 0LL;
                            }
                            v637 = 0LL;
                            if ( v617 )
                              LeaveCriticalSection(v617);
                            goto LABEL_813;
                          }
                          v335 = (struct _RTL_CRITICAL_SECTION *)(v334 + 56);
                          EnterCriticalSection((LPCRITICAL_SECTION)(v334 + 56));
                          v723 = (struct _RTL_CRITICAL_SECTION *)(v334 + 56);
                          v336 = 0LL;
                          v654 = 0LL;
                          v337 = 0LL;
                          v655 = 0LL;
                          if ( *(int *)(v334 + 40) <= 0 )
                            goto LABEL_771;
                          while ( 1 )
                          {
                            v557 = (_QWORD *)sub_180023320(v334 + 32, v234);
                            if ( !(unsigned int)sub_1800233E0((__int64)&v654, v557) )
                              break;
                            LODWORD(v234) = v234 + 1;
                            if ( (int)v234 >= *(_DWORD *)(v334 + 40) )
                            {
                              v337 = (unsigned int)v655;
                              v336 = v654;
LABEL_771:
                              v338 = 0;
                              if ( (int)v337 <= 0 )
                              {
LABEL_772:
                                if ( v336 )
                                {
                                  if ( (int)v337 > 0 )
                                  {
                                    v562 = v336;
                                    do
                                    {
                                      sub_1800322B0(v562);
                                      v562 += 16LL;
                                      --v337;
                                    }
                                    while ( v337 );
                                  }
                                  _o_free(v336);
                                  v234 = 0LL;
                                  v654 = 0LL;
                                }
                                else
                                {
                                  v234 = 0LL;
                                }
                                v655 = 0LL;
                                if ( v335 )
                                  LeaveCriticalSection(v335);
                                goto LABEL_776;
                              }
                              while ( 1 )
                              {
                                if ( *(_BYTE *)(*(_QWORD *)sub_180023320((__int64)&v654, v338) + 20LL) )
                                {
                                  v560 = (_QWORD *)sub_180023320((__int64)&v654, v338);
                                  v561 = sub_180052550(*v560, v334);
                                  if ( v561 < 0 )
                                    break;
                                }
                                if ( ++v338 >= (int)v337 )
                                  goto LABEL_772;
                              }
                              v558 = (unsigned int)v561;
                              v559 = 508LL;
LABEL_1359:
                              sub_18004BD84(
                                retaddr,
                                v559,
                                "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                                v558);
                              sub_180032210(&v654);
                              sub_180023350(&v723);
                              v234 = 0LL;
                              goto LABEL_776;
                            }
                          }
                          v558 = 2147942414LL;
                          v559 = 502LL;
                          goto LABEL_1359;
                        }
                      }
                      v553 = (unsigned int)v556;
                      v554 = 508LL;
LABEL_1351:
                      sub_18004BD84(
                        retaddr,
                        v554,
                        "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                        v553);
                      sub_180032210(&v644);
                      sub_180023350(&v736);
                      v234 = 0LL;
                      goto LABEL_765;
                    }
                    v353 = v15 + 168;
LABEL_818:
                    v354 = 0;
                    v355 = *(_DWORD *)(v353 + 8);
                    if ( v355 <= 0 )
                      break;
                    v356 = *(_QWORD *)v353;
                    while ( 1 )
                    {
                      v357 = *(_QWORD *)(v356 + 16LL * v354) - v768;
                      if ( !v357 )
                        v357 = *(_QWORD *)(v356 + 16LL * v354 + 8) - *((_QWORD *)&v768 + 1);
                      if ( !v357 )
                        break;
                      if ( ++v354 >= v355 )
                        goto LABEL_824;
                    }
                    if ( v354 == -1 )
                      break;
                    v618 = ++v317;
                    v318 = (LPCRITICAL_SECTION)((char *)v318 + 1);
                    v633 = v318;
                    if ( v317 >= (int)v632 )
                      goto LABEL_1376;
                  }
LABEL_824:
                  v358 = 1;
                }
              }
              if ( v631 )
                _o_free(v631);
              if ( v358 )
              {
                v359 = 1;
LABEL_829:
                *((_DWORD *)v612 + 35) = v359;
                *(_OWORD *)((char *)v612 + 152) = *a11;
                v360 = v615;
                *((_DWORD *)v612 + 37) = v615;
                if ( v710 )
                {
                  if ( !(unsigned int)sub_18004B990(v710, &xmmword_18015B730) )
                  {
                    rclsid = *v576;
                    v577 = sub_1800EC128(&rclsid);
                    v20 = v577;
                    if ( v577 < 0 )
                    {
                      sub_18004BD84(
                        retaddr,
                        1866LL,
                        "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                        (unsigned int)v577);
                      goto LABEL_910;
                    }
                  }
                }
                if ( a13 && !(unsigned int)sub_18004B990(a13, &xmmword_18015B730) )
                  *(_OWORD *)((char *)v612 + 184) = *v578;
                v769[0] = &v613;
                v769[1] = &v609;
                v769[2] = &v612;
                v769[3] = &v611;
                v769[4] = &v610;
                v769[5] = &v608;
                v771[0] = &v624;
                v771[1] = &v612;
                v771[2] = &v682;
                v770[0] = &v623;
                v770[1] = &v612;
                v770[2] = &v680;
                if ( (v613 & 0xFFFFFFFC) != 0 || v613 == 2 )
                  goto LABEL_903;
                v361 = v613;
                v811 = *(_QWORD *)(v15 + 1656);
                v812 = v613;
                if ( v613 >= v811 )
                {
                  v600 = sub_180118A38(v933, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                  sub_180118968(v600);
                }
                if ( (v606 & 0x20) != 0 )
                {
                  LOWORD(v606) = v606 & 0xFFDF;
                  Concurrency::agent::~agent((Concurrency::agent *)v933);
                }
                sub_1800230F0(*(_QWORD *)(v15 + 1664) + 96 * v361);
                v813 = *(_QWORD *)(v15 + 1672);
                v814 = v361;
                if ( v361 >= v813 )
                {
                  v599 = sub_180118A38(v932, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                  sub_180118968(v599);
                }
                if ( (v606 & 0x40) != 0 )
                {
                  LOWORD(v606) = v606 & 0xFFBF;
                  Concurrency::agent::~agent((Concurrency::agent *)v932);
                }
                v362 = *(_QWORD *)(v15 + 1680) + 96 * v361;
                if ( !*(_BYTE *)(v362 + 52) )
                {
LABEL_846:
                  v815 = *(_QWORD *)(v15 + 1688);
                  v816 = v361;
                  if ( v361 >= v815 )
                  {
                    v598 = sub_180118A38(
                             v931,
                             "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                    sub_180118968(v598);
                  }
                  if ( (v606 & 0x80u) != 0 )
                  {
                    LOWORD(v606) = v606 & 0xFF7F;
                    Concurrency::agent::~agent((Concurrency::agent *)v931);
                  }
                  v367 = *(_QWORD *)(v15 + 1696) + 96 * v361;
                  if ( *(_BYTE *)(v367 + 52) )
                  {
                    v616 = (LPCRITICAL_SECTION)(v367 + 56);
                    EnterCriticalSection((LPCRITICAL_SECTION)(v367 + 56));
                    v726 = (struct _RTL_CRITICAL_SECTION *)(v367 + 56);
                    v368 = 0LL;
                    v652 = 0LL;
                    v369 = 0LL;
                    v653 = 0LL;
                    v370 = 0;
                    if ( *(int *)(v367 + 40) > 0 )
                    {
                      v371 = 0LL;
                      do
                      {
                        if ( v371 < 0 || v370 >= *(_DWORD *)(v367 + 40) )
                        {
                          sub_1800BB2C8(3221225612LL);
                          __debugbreak();
                        }
                        v372 = (volatile signed __int32 **)(v371 + *(_QWORD *)(v367 + 32));
                        v710 = (__int64)v372;
                        if ( (_DWORD)v369 == (_DWORD)v234 )
                        {
                          if ( (_DWORD)v234 )
                          {
                            LODWORD(v234) = 2 * (_DWORD)v369;
                            if ( ((unsigned int)v369 & 0x40000000) != 0 )
                              goto LABEL_1412;
                          }
                          else
                          {
                            LODWORD(v234) = 1;
                          }
                          if ( (unsigned __int64)(int)v234 > 0x7FFFFFF
                            || (v373 = o__recalloc(v368, (int)v234, 16LL),
                                (v368 = (volatile signed __int32 **)v373) == 0LL) )
                          {
LABEL_1412:
                            v585 = 2147942414LL;
                            v586 = 502LL;
                            goto LABEL_1414;
                          }
                          HIDWORD(v653) = v234;
                          v652 = (volatile signed __int32 **)v373;
                          v372 = (volatile signed __int32 **)v710;
                        }
                        v374 = &v368[2 * (int)v369];
                        if ( v374 )
                        {
                          *v374 = 0LL;
                          v374[1] = 0LL;
                          v375 = v372[1];
                          if ( v375 )
                          {
                            _InterlockedIncrement(v375 + 2);
                            LODWORD(v234) = HIDWORD(v653);
                            LODWORD(v369) = v653;
                            v368 = v652;
                          }
                          *v374 = *v372;
                          v374[1] = v372[1];
                        }
                        v369 = (volatile signed __int32 *)(unsigned int)((_DWORD)v369 + 1);
                        LODWORD(v653) = (_DWORD)v369;
                        ++v370;
                        v371 += 16LL;
                      }
                      while ( v370 < *(_DWORD *)(v367 + 40) );
                    }
                    v376 = 0;
                    if ( (int)v369 <= 0 )
                    {
LABEL_870:
                      if ( v368 )
                      {
                        if ( (int)v369 > 0 )
                        {
                          ++v368;
                          v367 = (unsigned int)v369;
                          do
                          {
                            v369 = *v368;
                            if ( *v368 && _InterlockedExchangeAdd(v369 + 2, 0xFFFFFFFF) == 1 )
                            {
LABEL_1419:
                              (**(void (__fastcall ***)(volatile signed __int32 *))v369)(v369);
                              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v369);
                            }
                            v368 += 2;
                            --v367;
                          }
                          while ( v367 );
                          v368 = v652;
                        }
                        _o_free(v368);
                      }
                      if ( v616 )
                        LeaveCriticalSection(v616);
                    }
                    else
                    {
                      v377 = v368;
                      while ( 1 )
                      {
                        if ( v376 < 0 )
                        {
                          sub_1800BB2C8(3221225612LL);
                          goto LABEL_1419;
                        }
                        if ( *((_BYTE *)*v377 + 20) )
                        {
                          v587 = (_QWORD *)sub_180023320((__int64)&v652, v376);
                          v588 = sub_180052550(*v587, v367);
                          if ( v588 < 0 )
                            break;
                        }
                        ++v376;
                        v377 += 2;
                        if ( v376 >= (int)v369 )
                          goto LABEL_870;
                      }
                      v585 = (unsigned int)v588;
                      v586 = 508LL;
LABEL_1414:
                      sub_18004BD84(
                        retaddr,
                        v586,
                        "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                        v585);
                      sub_180032210(&v652);
                      sub_180023350(&v726);
                    }
                    v15 = a1;
                  }
                  v817 = *(_QWORD *)(v15 + 64);
                  v818 = v361;
                  if ( v361 >= v817 )
                  {
                    v597 = sub_180118A38(
                             v930,
                             "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                    sub_180118968(v597);
                  }
                  if ( (v606 & 0x100) != 0 )
                    Concurrency::agent::~agent((Concurrency::agent *)v930);
                  if ( *(_DWORD *)(*(_QWORD *)(v15 + 72) + 4 * v361) )
                  {
                    v378 = 0;
                    if ( v624 )
                    {
                      while ( 1 )
                      {
                        v589 = *((_DWORD *)v612 + 24);
                        if ( v589 > 0x1F )
                          break;
                        *((_DWORD *)v612 + 20) |= 1 << v589;
                        *((_DWORD *)v612 + 21) = *((_DWORD *)v612 + 24);
                        v590 = v612;
                        *(_OWORD *)((char *)v612 + 16 * *((unsigned int *)v612 + 24) + 200) = *((_OWORD *)v682 + v378);
                        ++v590[24];
                        if ( ++v378 >= v624 )
                          goto LABEL_886;
                      }
                      v20 = -2005139341;
                      sub_18004BD84(
                        retaddr,
                        1889LL,
                        "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                        2289827955LL);
                      sub_18004BD84(
                        retaddr,
                        1933LL,
                        "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                        2289827955LL);
                      goto LABEL_910;
                    }
LABEL_886:
                    v379 = v646;
                    v381 = sub_18001FEF0((__int64)v646);
                    if ( v381 >= 0 )
                    {
                      v360 = *v379;
                      v380 = 65533LL;
                      if ( (((_WORD)v360 - 1) & 0xFFFD) == 0 )
                        goto LABEL_892;
                      if ( (_WORD)v360 != 0xFFFE )
                        goto LABEL_1425;
                      v380 = (__int64)(v379 + 12);
                      v382 = 0x10000000000001LL - *((_QWORD *)v379 + 3);
                      if ( *((_QWORD *)v379 + 3) == 0x10000000000001LL )
                        v382 = 0x719B3800AA000080LL - *((_QWORD *)v379 + 4);
                      if ( !v382 || (unsigned int)sub_18004B990(&xmmword_18015B720, v380) )
                      {
LABEL_892:
                        v381 = 0;
                        v383 = 0;
                        if ( v623 )
                        {
                          while ( 1 )
                          {
                            v384 = *((_DWORD *)v612 + 24);
                            if ( v384 > 0x1F )
                              break;
                            *((_DWORD *)v612 + 20) |= 1 << v384;
                            *((_DWORD *)v612 + 23) |= 1 << *((_DWORD *)v612 + 24);
                            v385 = v612;
                            v380 = 2LL * *((unsigned int *)v612 + 24);
                            v360 = (__int64)v680;
                            *(_OWORD *)((char *)v612 + 16 * *((unsigned int *)v612 + 24) + 200) = *((_OWORD *)v680 + v383);
                            ++v385[24];
                            if ( ++v383 >= v623 )
                              goto LABEL_895;
                          }
                          v20 = -2005139341;
                          sub_18004BD84(
                            retaddr,
                            1902LL,
                            "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                            2289827955LL);
                          sub_18004BD84(
                            retaddr,
                            1938LL,
                            "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                            2289827955LL);
                          goto LABEL_910;
                        }
                      }
                      else
                      {
LABEL_1425:
                        v381 = 1;
                      }
                    }
LABEL_895:
                    if ( v613 != 1 )
                    {
                      if ( v609 )
                      {
                        v386 = v612;
                        v360 = 2LL * *((unsigned int *)v612 + 24);
                        *(_OWORD *)((char *)v612 + 16 * *((unsigned int *)v612 + 24) + 200) = xmmword_180160190;
                        ++v386[24];
                      }
                      if ( v611 || v610 )
                      {
                        v591 = v612;
                        v360 = 2LL * *((unsigned int *)v612 + 24);
                        *(_OWORD *)((char *)v612 + 16 * *((unsigned int *)v612 + 24) + 200) = xmmword_180160688;
                        ++v591[24];
                      }
                    }
                    if ( v608 )
                    {
                      v592 = v612;
                      v360 = 2LL * *((unsigned int *)v612 + 24);
                      *(_OWORD *)((char *)v612 + 16 * *((unsigned int *)v612 + 24) + 200) = xmmword_180160678;
                      ++v592[24];
                    }
                    if ( v381 == 1 )
                    {
                      LOBYTE(v380) = 1;
                      v593 = sub_1800E35E4(v770, v380);
                      v20 = v593;
                      if ( v593 < 0 )
                      {
                        sub_18004BD84(
                          retaddr,
                          1947LL,
                          "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                          (unsigned int)v593);
                        goto LABEL_910;
                      }
                    }
                  }
                  else
                  {
                    v595 = sub_18004BB48(v646);
                    if ( v595 == 1 )
                      sub_1800E381C(v769);
                    LOBYTE(v594) = v595 == 1;
                    v596 = sub_1800E36A0(v771, v594);
                    v20 = v596;
                    if ( v596 < 0 )
                    {
                      sub_18004BD84(
                        retaddr,
                        1973LL,
                        "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                        (unsigned int)v596);
LABEL_910:
                      if ( pProxy )
                        ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->Release)(pProxy);
                      goto LABEL_912;
                    }
                    if ( !v595 )
                      sub_1800E381C(v769);
                  }
LABEL_903:
                  v387 = v612;
                  if ( *((_DWORD *)v612 + 24) > (unsigned int)lpCriticalSection )
                  {
                    v601 = sub_180008448(v360, sub_1800B6240);
                    if ( *(_DWORD *)v601[1] > 2u
                      && __vcrt_trace_logging_provider::_TlgKeywordOn(
                           (__vcrt_trace_logging_provider *)v601[1],
                           (const struct _TlgProvider_t *)0x400000000004LL,
                           v602) )
                    {
                      v719 = *((_DWORD *)v612 + 24);
                      v718 = v623;
                      v717 = v624;
                      v619 = v608;
                      v620 = v609;
                      v621 = v610;
                      v622 = v611;
                      v714 = v625;
                      v716 = v613;
                      sub_1800E2A84(
                        v604,
                        (unsigned int)&unk_180167954,
                        v603,
                        v604,
                        (__int64)&v716,
                        (__int64)&v714,
                        (__int64)&v622,
                        (__int64)&v621,
                        (__int64)&v620,
                        (__int64)&v619,
                        (__int64)&v717,
                        (__int64)&v718,
                        (__int64)&v719);
                    }
                    v20 = -2005139341;
                    sub_18004BD84(
                      retaddr,
                      2000LL,
                      "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                      2289827955LL);
                  }
                  else
                  {
                    v684 = 0LL;
                    if ( v634 )
                    {
                      (**(void (__fastcall ***)(__int64, void *, __int64 *))v634)(v634, &unk_18015BAC0, &v684);
                      v387 = v612;
                      v388 = v684;
                    }
                    else
                    {
                      v388 = 0LL;
                      v684 = 0LL;
                    }
                    v389 = ((__int64 (__fastcall *)(IUnknown *, LPVOID, __int64, _QWORD))pProxy->lpVtbl[1].QueryInterface)(
                             pProxy,
                             v387,
                             v388,
                             v678);
                    v20 = v389;
                    if ( v389 < 0 )
                    {
                      sub_18004BD84(
                        retaddr,
                        2006LL,
                        "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                        (unsigned int)v389);
                    }
                    else
                    {
                      v390 = pProxy;
                      pProxy = 0LL;
                      *v745 = v390;
                      v20 = 0;
                    }
                    if ( v684 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v684 + 16LL))(v684);
                  }
                  goto LABEL_910;
                }
                v363 = (struct _RTL_CRITICAL_SECTION *)(v362 + 56);
                EnterCriticalSection((LPCRITICAL_SECTION)(v362 + 56));
                v725 = (struct _RTL_CRITICAL_SECTION *)(v362 + 56);
                v364 = 0LL;
                v707 = 0LL;
                v708 = 0LL;
                v365 = 0;
                if ( *(int *)(v362 + 40) > 0 )
                {
                  while ( 1 )
                  {
                    v579 = (_QWORD *)sub_180023320(v362 + 32, v365);
                    if ( !(unsigned int)sub_1800233E0((__int64)&v707, v579) )
                      break;
                    if ( ++v365 >= *(_DWORD *)(v362 + 40) )
                    {
                      LODWORD(v234) = v708;
                      v364 = v707;
                      goto LABEL_841;
                    }
                  }
                  v580 = 2147942414LL;
                  v581 = 502LL;
                }
                else
                {
LABEL_841:
                  v366 = 0;
                  if ( (int)v234 <= 0 )
                  {
LABEL_842:
                    if ( v364 )
                    {
                      if ( (int)v234 > 0 )
                      {
                        v584 = v364;
                        v234 = (unsigned int)v234;
                        do
                        {
                          sub_1800322B0(v584);
                          v584 += 16LL;
                          --v234;
                        }
                        while ( v234 );
                      }
                      _o_free(v364);
                    }
                    if ( v363 )
                      LeaveCriticalSection(v363);
                    goto LABEL_845;
                  }
                  while ( 1 )
                  {
                    if ( *(_BYTE *)(*(_QWORD *)sub_180023320((__int64)&v707, v366) + 20LL) )
                    {
                      v582 = (_QWORD *)sub_180023320((__int64)&v707, v366);
                      v583 = sub_180052550(*v582, v362);
                      if ( v583 < 0 )
                        break;
                    }
                    if ( ++v366 >= (int)v234 )
                      goto LABEL_842;
                  }
                  v580 = (unsigned int)v583;
                  v581 = 508LL;
                }
                sub_18004BD84(retaddr, v581, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", v580);
                sub_180032210(&v707);
                sub_180023350(&v725);
LABEL_845:
                LODWORD(v234) = 0;
                goto LABEL_846;
              }
LABEL_1391:
              v359 = 0;
              goto LABEL_829;
            }
            v279 = (struct _RTL_CRITICAL_SECTION *)(v278 + 56);
            EnterCriticalSection((LPCRITICAL_SECTION)(v278 + 56));
            v734 = (struct _RTL_CRITICAL_SECTION *)(v278 + 56);
            v280 = 0LL;
            v702 = 0LL;
            v703 = 0LL;
            v281 = 0;
            if ( *(int *)(v278 + 40) > 0 )
            {
              while ( 1 )
              {
                v529 = (_QWORD *)sub_180023320(v278 + 32, v281);
                if ( !(unsigned int)sub_1800233E0((__int64)&v702, v529) )
                  break;
                if ( ++v281 >= *(_DWORD *)(v278 + 40) )
                {
                  LODWORD(v234) = v703;
                  v280 = v702;
                  goto LABEL_636;
                }
              }
              v530 = 2147942414LL;
              v531 = 502LL;
            }
            else
            {
LABEL_636:
              v282 = 0;
              if ( (int)v234 <= 0 )
              {
LABEL_637:
                if ( v280 )
                {
                  if ( (int)v234 > 0 )
                  {
                    v534 = v280;
                    v234 = (unsigned int)v234;
                    do
                    {
                      sub_1800322B0(v534);
                      v534 += 16LL;
                      --v234;
                    }
                    while ( v234 );
                  }
                  _o_free(v280);
                }
                if ( v279 )
                  LeaveCriticalSection(v279);
                goto LABEL_640;
              }
              while ( 1 )
              {
                if ( *(_BYTE *)(*(_QWORD *)sub_180023320((__int64)&v702, v282) + 20LL) )
                {
                  v532 = (_QWORD *)sub_180023320((__int64)&v702, v282);
                  v533 = sub_180052550(*v532, v278);
                  if ( v533 < 0 )
                    break;
                }
                if ( ++v282 >= (int)v234 )
                  goto LABEL_637;
              }
              v530 = (unsigned int)v533;
              v531 = 508LL;
            }
            sub_18004BD84(retaddr, v531, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", v530);
            sub_180032210(&v702);
            sub_180023350(&v734);
LABEL_640:
            v17 = v605;
            goto LABEL_641;
          }
          v234 = 0LL;
LABEL_1274:
          v946 = xmmword_18015B730;
          v257 = &v946;
          v252 = v713;
          goto LABEL_574;
        }
        v237 = (struct _RTL_CRITICAL_SECTION *)(v236 + 56);
        EnterCriticalSection((LPCRITICAL_SECTION)(v236 + 56));
        v737 = (struct _RTL_CRITICAL_SECTION *)(v236 + 56);
        v238 = 0LL;
        v700 = 0LL;
        v701 = 0LL;
        v239 = 0;
        if ( *(int *)(v236 + 40) > 0 )
        {
          while ( 1 )
          {
            v506 = (_QWORD *)sub_180023320(v236 + 32, v239);
            if ( !(unsigned int)sub_1800233E0((__int64)&v700, v506) )
              break;
            if ( ++v239 >= *(_DWORD *)(v236 + 40) )
            {
              LODWORD(v234) = v701;
              v238 = v700;
              goto LABEL_524;
            }
          }
          v507 = 2147942414LL;
          v508 = 502LL;
        }
        else
        {
LABEL_524:
          v240 = 0;
          if ( (int)v234 <= 0 )
          {
LABEL_525:
            if ( v238 )
            {
              if ( (int)v234 > 0 )
              {
                v511 = v238;
                v234 = (unsigned int)v234;
                do
                {
                  sub_1800322B0(v511);
                  v511 += 16LL;
                  --v234;
                }
                while ( v234 );
              }
              _o_free(v238);
            }
            if ( v237 )
              LeaveCriticalSection(v237);
            goto LABEL_528;
          }
          while ( 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)sub_180023320((__int64)&v700, v240) + 20LL) )
            {
              v509 = (_QWORD *)sub_180023320((__int64)&v700, v240);
              v510 = sub_180052550(*v509, v236);
              if ( v510 < 0 )
                break;
            }
            if ( ++v240 >= (int)v234 )
              goto LABEL_525;
          }
          v507 = (unsigned int)v510;
          v508 = 508LL;
        }
        sub_18004BD84(retaddr, v508, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", v507);
        sub_180032210(&v700);
        sub_180023350(&v737);
LABEL_528:
        LODWORD(v234) = 0;
        v17 = v605;
        goto LABEL_529;
      }
      v505 = 1817LL;
    }
    sub_18004BD84(
      retaddr,
      v505,
      "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (unsigned int)v233);
    goto LABEL_910;
  }
  sub_18004BD84(retaddr, 1774LL, "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", 2147942414LL);
  v20 = -2147024882;
LABEL_914:
  v391 = v612;
  v612 = 0LL;
  if ( v391 )
    CoTaskMemFree(v391);
LABEL_916:
  if ( v634 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v634 + 16LL))(v634);
  v392 = v680;
  v680 = 0LL;
  if ( v392 )
    CoTaskMemFree(v392);
  v393 = v682;
  v682 = 0LL;
  if ( v393 )
    CoTaskMemFree(v393);
  if ( v648 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v648 + 16LL))(v648);
  if ( v649 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v649 + 16LL))(v649);
  if ( v683 )
    CoTaskMemFree(v683);
  return v20;
}
