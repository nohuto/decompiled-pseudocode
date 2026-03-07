__int64 __fastcall CmpDoParseKey(
        __int64 a1,
        struct _ACCESS_STATE *a2,
        KPROCESSOR_MODE a3,
        __int16 a4,
        __int64 a5,
        __m128i *a6,
        __int64 a7,
        int a8,
        PVOID *a9)
{
  __int64 v9; // r14
  unsigned __int16 v11; // si
  __m128i v13; // xmm6
  __int64 v14; // r8
  ULONG_PTR v15; // r12
  __int64 v16; // rbx
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // r12
  char v26; // al
  struct _LIST_ENTRY *v27; // rax
  __int64 v28; // r11
  char *v29; // r10
  __int64 Flink; // r15
  __int64 v31; // rax
  char *v32; // rdi
  __int64 v33; // rsi
  unsigned __int16 v34; // dx
  unsigned __int16 v35; // r11
  unsigned __int16 v36; // ax
  __int16 v37; // r9
  _WORD *v38; // r8
  __int16 v39; // cx
  __int16 v40; // ax
  int v41; // edi
  __int16 v42; // dx
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  ULONG_PTR v45; // r12
  __int16 v46; // r8
  __int16 v47; // r10
  __int64 v48; // r9
  __int64 v49; // rax
  __int16 v50; // cx
  __int64 v51; // r9
  __int16 v52; // r8
  int v53; // eax
  unsigned int v54; // edx
  int *v55; // rcx
  char v56; // r15
  bool v57; // zf
  int v58; // edi
  struct _PRIVILEGE_SET *v59; // r8
  __int64 v60; // rdx
  __int64 v61; // r10
  __int64 v62; // r10
  unsigned __int16 ii; // cx
  __int64 v64; // rax
  char v65; // di
  __int64 v66; // rdx
  __int64 v67; // r8
  ULONG_PTR v68; // r15
  __int16 v69; // r10
  char v70; // di
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  char v76; // cl
  __int16 v77; // di
  __int16 v78; // r13
  _WORD *v79; // rsi
  __int16 v80; // r12
  __int16 v81; // r15
  int v82; // eax
  __m128i v83; // xmm0
  __int64 v84; // rax
  unsigned __int16 *v85; // r10
  __int64 v86; // r11
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 v88; // dx
  __int64 v89; // rax
  unsigned int v90; // esi
  __int16 v91; // r13
  int v92; // r9d
  __int16 v93; // ax
  unsigned __int16 *v94; // r10
  __int64 v95; // r11
  unsigned __int16 v96; // dx
  struct _LIST_ENTRY *v97; // rax
  unsigned __int16 v98; // dx
  int *v99; // rcx
  int v100; // eax
  __int64 v101; // r8
  int v102; // eax
  char v103; // al
  __int16 v104; // di
  __int64 v105; // rsi
  signed __int64 *v106; // rdi
  signed __int64 v107; // rax
  signed __int64 v108; // rdx
  signed __int64 v109; // rtt
  __int64 v110; // rax
  int *v111; // rax
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // r12
  unsigned __int16 v113; // cx
  __int64 v114; // rax
  char v115; // di
  int *v116; // rsi
  char v117; // r15
  NTSTATUS v118; // eax
  __int64 v119; // rdx
  __int64 v120; // rcx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  struct _KPROCESS *CurrentThreadProcess; // rax
  bool v124; // di
  int v125; // eax
  _QWORD *v126; // rdi
  __int64 v127; // r15
  __int64 v128; // rsi
  _QWORD *v129; // rax
  _QWORD *v130; // rcx
  signed __int64 v131; // rdx
  ULONG_PTR v132; // rtt
  __int64 v133; // r8
  unsigned int v134; // r9d
  signed __int64 v135; // rdx
  ULONG_PTR v136; // rtt
  __int16 v137; // r15
  __int64 v138; // rdi
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r9
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  __int64 v150; // r8
  __int64 v151; // rdi
  int v152; // ebx
  struct _PRIVILEGE_SET *Pool; // rcx
  struct _PRIVILEGE_SET *v154; // rcx
  int v155; // ebx
  int *v156; // r12
  __int64 *v157; // rsi
  __int64 v158; // rdx
  __int64 v159; // r10
  __int64 v160; // r10
  __int16 v161; // cx
  __int16 v162; // bx
  __int64 v163; // rcx
  __int64 v164; // rdx
  __int64 v165; // rax
  __int64 v166; // rdx
  __int64 v167; // r8
  __int64 v168; // rax
  __int64 v169; // r9
  int v170; // ecx
  unsigned __int16 v171; // r8
  __int64 v172; // rdx
  __int16 v173; // bx
  __int64 v174; // rcx
  int v175; // ebx
  __int64 v176; // r8
  int v177; // edx
  const UNICODE_STRING *v178; // r9
  char v179; // al
  int v180; // ecx
  __int64 v181; // rax
  __int64 v182; // rdx
  __int64 v183; // r8
  __int64 v184; // rax
  __int64 v185; // rdx
  __int64 v186; // r8
  ULONG_PTR v187; // rax
  __int64 *v188; // rax
  int v189; // eax
  __int64 v190; // rcx
  __int64 v191; // rax
  __int64 v192; // rax
  __int64 v193; // r10
  __int64 v194; // rdi
  __int64 v195; // rdx
  __int64 i; // r10
  __int64 v197; // r10
  __int64 v198; // r12
  __int64 v199; // rcx
  __int16 j; // bx
  __int64 v201; // rcx
  __int16 k; // bx
  __int64 v203; // rcx
  __int64 v204; // r8
  __int16 v205; // bx
  __int64 v206; // r15
  __int64 ComponentNameAtIndex; // r12
  int ComponentHashAtIndex; // ebx
  __int64 v209; // r8
  __int64 v210; // rcx
  ULONG_PTR v211; // rdx
  ULONG_PTR v212; // rcx
  int HiveRootCell; // eax
  int updated; // eax
  ULONG_PTR v215; // rbx
  __int64 v216; // rdi
  int started; // eax
  __int16 m; // bx
  __int64 v219; // rcx
  int KeyBody; // eax
  signed __int64 *v221; // rbx
  __int64 v222; // r15
  ULONG_PTR v223; // rbx
  ULONG_PTR v224; // rcx
  int v225; // r15d
  int v226; // eax
  __int64 v227; // rbx
  PACCESS_STATE v228; // r13
  __int64 v229; // rcx
  __int64 v230; // rbx
  int v231; // r12d
  ULONG_PTR v232; // rbx
  unsigned __int8 v233; // di
  int v234; // ebx
  unsigned __int16 v235; // dx
  __int64 v236; // rcx
  __int64 NextElement; // rax
  __int64 v238; // r9
  int v239; // ecx
  unsigned __int16 v240; // r8
  __int64 v241; // rdx
  int SymbolicLinkTarget; // eax
  __int64 v243; // rcx
  ACCESS_MASK v244; // ebx
  unsigned int v245; // eax
  unsigned int v246; // eax
  int v247; // eax
  __int64 v248; // rax
  __int64 v249; // rdx
  __int64 v250; // r8
  __int64 v251; // rax
  __int64 v252; // rdx
  __int64 v253; // r8
  const UNICODE_STRING *v254; // rax
  __int64 v255; // r12
  int v256; // r9d
  int v257; // ebx
  unsigned int v258; // eax
  int v259; // eax
  __int64 v260; // rcx
  _KPROCESS *v261; // rdi
  __int64 ProcessServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  __int64 v264; // rcx
  __int64 v265; // r8
  int v266; // eax
  __int64 v267; // rcx
  struct _ACCESS_STATE *v268; // r12
  unsigned int Logic; // eax
  __int64 v270; // rcx
  int v271; // r9d
  _KPROCESS *v272; // rdi
  __int64 v273; // rax
  int v274; // ebx
  __int64 v275; // rcx
  int v276; // eax
  int v277; // eax
  int v278; // eax
  __int64 v279; // rcx
  unsigned int v280; // eax
  int v281; // r8d
  unsigned int v282; // eax
  int v283; // eax
  int v284; // ebx
  __int64 SecurityDescriptorForKcbStack; // rax
  __int64 v286; // r9
  unsigned int v287; // r15d
  ACCESS_MASK OriginalDesiredAccess; // ecx
  __int64 v289; // rdi
  __int64 v290; // rdx
  __int16 v291; // bx
  __int64 KcbAtLayerHeight; // rax
  __int64 v293; // r13
  ACCESS_MASK v294; // ecx
  __int64 v295; // r8
  PACCESS_STATE v296; // r12
  BOOLEAN v297; // di
  struct _PRIVILEGE_SET *v298; // r13
  __int64 v299; // rbx
  int v300; // edi
  __int64 v301; // rdx
  __int64 v302; // r10
  __int64 v303; // r10
  unsigned __int16 v304; // bx
  ULONG_PTR v305; // rax
  __int64 v306; // r14
  PPRIVILEGE_SET v307; // rdi
  __int64 v308; // r12
  ULONG_PTR v309; // rdi
  __int64 PrevElement; // rbx
  __int64 v311; // r9
  __int64 v312; // r8
  __int64 v313; // r9
  struct _KTHREAD *v314; // rax
  PACCESS_STATE v315; // r13
  void *v316; // r12
  struct _KTHREAD *v317; // rax
  ACCESS_MASK RemainingDesiredAccess; // r9d
  struct _ACCESS_STATE *v319; // r8
  ACCESS_MASK v320; // eax
  _WORD *v321; // rbx
  __int64 v322; // r13
  UNICODE_STRING *v323; // rcx
  PERESOURCE *ClientToken; // rcx
  _KPROCESS *v325; // rax
  char v326; // al
  ULONG_PTR v327; // rbx
  int v328; // edi
  __int16 n; // bx
  __int64 v330; // rcx
  ULONG_PTR v331; // rbx
  int v332; // eax
  __int64 v333; // rdx
  __int64 v334; // rcx
  __int64 v335; // r8
  __int64 v336; // r9
  PACCESS_STATE v337; // rbx
  struct _SLIST_ENTRY *v338; // rdx
  struct _KPRCB *v339; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  signed __int64 v341; // rcx
  __int64 v342; // r11
  unsigned __int64 v343; // r8
  signed __int64 v344; // r10
  bool v345; // r9
  unsigned __int64 v346; // rax
  ULONG_PTR v347; // rbx
  unsigned int v348; // r12d
  unsigned __int64 *v349; // rdi
  __int64 v350; // rax
  __int64 v351; // rsi
  signed __int32 v352; // eax
  signed __int32 v353; // ett
  unsigned __int64 *v354; // rdi
  __int64 v355; // rax
  __int64 v356; // rsi
  ULONG_PTR v357; // rdi
  __int64 v358; // rsi
  __int64 v359; // rax
  __int64 v360; // rcx
  __int64 v361; // rcx
  signed __int64 v362; // rax
  ULONG_PTR v363; // rdi
  __int64 v364; // rdi
  struct _KTHREAD *v365; // rax
  signed __int64 *v366; // rdi
  signed __int64 v367; // rax
  signed __int64 v368; // rdx
  signed __int64 v369; // rtt
  bool v370; // dl
  int v371; // ecx
  __int64 v372; // rax
  __int64 v373; // rdi
  unsigned __int8 CurrentIrql; // r15
  ULONG_PTR v375; // r8
  _QWORD *v376; // rax
  __int64 v377; // rdx
  unsigned __int64 v378; // rdi
  bool v379; // r15
  signed __int32 v380; // eax
  unsigned __int8 v381; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v384; // eax
  int PreviouslyGrantedAccess; // [rsp+20h] [rbp-E0h]
  KPROCESSOR_MODE AccessMode[8]; // [rsp+38h] [rbp-C8h]
  PACCESS_MASK GrantedAccess; // [rsp+40h] [rbp-C0h]
  NTSTATUS Child; // [rsp+60h] [rbp-A0h] BYREF
  KPROCESSOR_MODE v390; // [rsp+64h] [rbp-9Ch]
  char v391[11]; // [rsp+65h] [rbp-9Bh] BYREF
  char v392; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp-88h] BYREF
  int v394; // [rsp+80h] [rbp-80h]
  char v395; // [rsp+84h] [rbp-7Ch]
  char v396; // [rsp+85h] [rbp-7Bh]
  __int16 v397[2]; // [rsp+88h] [rbp-78h] BYREF
  char v398; // [rsp+8Ch] [rbp-74h] BYREF
  int v399; // [rsp+90h] [rbp-70h]
  PACCESS_STATE AccessState; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR v401; // [rsp+A0h] [rbp-60h]
  char v402; // [rsp+A8h] [rbp-58h]
  char v403; // [rsp+A9h] [rbp-57h]
  PVOID Object; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v405; // [rsp+B8h] [rbp-48h] BYREF
  ACCESS_MASK v406[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v407; // [rsp+C8h] [rbp-38h] BYREF
  NTSTATUS AccessStatus[2]; // [rsp+D0h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+D8h] [rbp-28h]
  __m128i v410; // [rsp+E0h] [rbp-20h] BYREF
  ULONG_PTR v411; // [rsp+F0h] [rbp-10h]
  __int64 v412; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v413; // [rsp+100h] [rbp+0h]
  __int64 v414; // [rsp+108h] [rbp+8h] BYREF
  ULONG_PTR v415; // [rsp+110h] [rbp+10h] BYREF
  PVOID TokenInformation; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v417[2]; // [rsp+120h] [rbp+20h] BYREF
  __m128i v418; // [rsp+130h] [rbp+30h]
  ULONG_PTR v419; // [rsp+140h] [rbp+40h] BYREF
  PPRIVILEGE_SET v420; // [rsp+148h] [rbp+48h] BYREF
  PACCESS_STATE v421; // [rsp+150h] [rbp+50h]
  PVOID *v422; // [rsp+158h] [rbp+58h] BYREF
  __int64 v423; // [rsp+160h] [rbp+60h] BYREF
  __m128i v424; // [rsp+170h] [rbp+70h]
  __int128 v425; // [rsp+180h] [rbp+80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+190h] [rbp+90h] BYREF
  __int128 v427; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v428; // [rsp+1B0h] [rbp+B0h]
  __int128 v429; // [rsp+1C0h] [rbp+C0h] BYREF
  PPRIVILEGE_SET v430[2]; // [rsp+1D0h] [rbp+D0h]
  __int64 v431; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v432; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v433; // [rsp+1F0h] [rbp+F0h] BYREF
  __int128 v434; // [rsp+1F8h] [rbp+F8h]
  __int128 v435; // [rsp+208h] [rbp+108h]
  __int128 v436; // [rsp+218h] [rbp+118h] BYREF
  __int64 v437[2]; // [rsp+230h] [rbp+130h] BYREF
  PPRIVILEGE_SET v438[2]; // [rsp+240h] [rbp+140h]
  int v439[4]; // [rsp+250h] [rbp+150h] BYREF
  PPRIVILEGE_SET v440[2]; // [rsp+260h] [rbp+160h]
  __int128 v441; // [rsp+270h] [rbp+170h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+280h] [rbp+180h]
  __int64 v443[2]; // [rsp+290h] [rbp+190h] BYREF
  PPRIVILEGE_SET v444[2]; // [rsp+2A0h] [rbp+1A0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+2B0h] [rbp+1B0h] BYREF
  __m128i v446; // [rsp+2D0h] [rbp+1D0h]
  __m128i v447; // [rsp+2E0h] [rbp+1E0h]
  int v448[44]; // [rsp+2F0h] [rbp+1F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v449; // [rsp+3A0h] [rbp+2A0h] BYREF
  __int64 *v450; // [rsp+3C0h] [rbp+2C0h]
  __int64 v451; // [rsp+3C8h] [rbp+2C8h]
  struct _EVENT_DATA_DESCRIPTOR v452; // [rsp+3D0h] [rbp+2D0h] BYREF

  v9 = a7;
  *(_QWORD *)v406 = a5;
  v11 = 0;
  v422 = a9;
  v412 = a1;
  v401 = 0LL;
  BugCheckParameter4 = 0LL;
  v398 = 0;
  v403 = 0;
  v395 = 0;
  *(_DWORD *)&v391[1] = 0;
  v392 = 0;
  v390 = a3;
  AccessState = a2;
  v423 = a7;
  LOWORD(v407) = 0;
  v405 = 0LL;
  DestinationString = 0LL;
  v414 = 0LL;
  v425 = 0LL;
  v396 = 0;
  Object = 0LL;
  v415 = 0LL;
  v413 = 0LL;
  v399 = 0;
  v397[0] = 0;
  v419 = 0LL;
  v417[0] = 0xFFFFFFFFLL;
  HvpGetBinContextInitialize((char *)v417 + 4);
  v13 = *a6;
  v391[0] = 0;
  v410 = v13;
  CmpInitializeDelayDerefContext(&v425);
  LOBYTE(v394) = 0;
  v421 = 0LL;
  memset(v448, 0, 0xA8uLL);
  *(_OWORD *)(a7 + 160) = 0LL;
  *(_OWORD *)(a7 + 176) = 0LL;
  *(_OWORD *)(a7 + 192) = 0LL;
  *(_QWORD *)(a7 + 208) = 0LL;
  *(_OWORD *)v437 = 0LL;
  WORD1(v437[0]) = -1;
  *(_OWORD *)v439 = 0LL;
  HIWORD(v439[0]) = -1;
  *(_OWORD *)v443 = 0LL;
  WORD1(v443[0]) = -1;
  *(_OWORD *)v438 = 0LL;
  *(_OWORD *)v440 = 0LL;
  *(_OWORD *)v444 = 0LL;
  *(_QWORD *)(a7 + 224) = 0LL;
  *(_QWORD *)(a7 + 232) = 0LL;
  *(_QWORD *)(a7 + 240) = 0LL;
  *(_QWORD *)(a7 + 248) = 0LL;
  *(_QWORD *)(a7 + 256) = 0LL;
  *(_QWORD *)(a7 + 264) = 0LL;
  *(_QWORD *)(a7 + 272) = 0LL;
  *(_QWORD *)(a7 + 280) = 0LL;
  *(_QWORD *)(a7 + 288) = 0LL;
  v15 = *(_QWORD *)(a7 + 88);
  BugCheckParameter2 = v15;
  *(_QWORD *)(a7 + 216) = v15;
  if ( (a4 & 0x100) != 0 )
    *(_DWORD *)a7 |= 0x200u;
  v16 = *(_QWORD *)(a7 + 72);
  v17 = 0LL;
  *(_QWORD *)(a7 + 88) = 0LL;
  if ( v16 )
  {
    v18 = *(_QWORD *)(a1 + 56);
    if ( v18 && v16 != v18 )
    {
      Child = -1072103422;
      CmpRecordParseFailure(a7, 256LL, 3222863874LL);
      v19 = v401;
      goto LABEL_730;
    }
    *(_QWORD *)AccessStatus = 0LL;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 64);
    v16 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)AccessStatus = v14;
  }
  *(_DWORD *)(a7 + 20) = *(unsigned __int16 *)(a1 + 50);
  v20 = *(_QWORD *)(a1 + 8);
  v21 = *((_QWORD *)CmpRegistryRootObject + 1);
  if ( !v15 )
  {
LABEL_83:
    v76 = 0;
    LODWORD(v45) = _mm_cvtsi128_si32(v13);
    v424 = v13;
    v418 = v13;
    v68 = *(_QWORD *)(v412 + 8);
    v411 = v68;
    v402 = 0;
    *(_DWORD *)&v391[7] = v45;
    v410.m128i_i16[0] = v45;
    if ( !(_WORD)v45 )
    {
      v69 = 0;
      *(_DWORD *)&v391[7] = 0;
      goto LABEL_132;
    }
    v77 = v418.m128i_i16[0];
    v78 = 0;
    v79 = (_WORD *)v418.m128i_i64[1];
    v80 = v418.m128i_i16[1];
    do
    {
      if ( v78 >= 32 )
        break;
      if ( *v79 == 92 )
      {
        ++v78;
        v81 = v424.m128i_i16[0] - v77;
        v424.m128i_i16[0] = v81;
        v424.m128i_i16[1] = v81;
        if ( v78 > 8 && !v76 )
        {
          v82 = CmpExpandPathInfo(v448, v21);
          if ( v82 < 0 )
            goto LABEL_117;
          v402 = 1;
          LODWORD(v17) = 0;
        }
        v83 = v424;
        v84 = (unsigned int)(v78 - 1);
        if ( (unsigned int)v84 >= 8 )
          *(__m128i *)(*(_QWORD *)&v448[40] + 16 * ((unsigned int)(v78 - 9) + 6LL)) = v424;
        else
          *(__m128i *)&v448[4 * v84 + 8] = v424;
        v446 = v83;
        if ( v81 )
        {
          v85 = (unsigned __int16 *)v446.m128i_i64[1];
          v86 = (unsigned __int16)(((unsigned __int16)(v81 - 1) >> 1) + 1);
          do
          {
            v21 = *v85;
            if ( (unsigned __int16)v21 >= 0x61u )
            {
              if ( (unsigned __int16)v21 <= 0x7Au )
              {
                LOWORD(v21) = v21 - 32;
              }
              else
              {
                CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
                v21 = NLS_UPCASE((__int64)CurrentServerSiloGlobals[77].Flink, v88);
              }
            }
            ++v85;
            LODWORD(v17) = (unsigned __int16)v21 + 37 * v17;
            --v86;
          }
          while ( v86 );
        }
        v89 = (unsigned int)(v78 - 1);
        if ( (unsigned int)v89 >= 8 )
          *(_DWORD *)(*(_QWORD *)&v448[40] + 4LL * (unsigned int)(v78 - 9)) = v17;
        else
          v448[v89] = v17;
        if ( v77 )
        {
          do
          {
            if ( *v79 != 92 )
              break;
            ++v79;
            v80 -= 2;
            v77 -= 2;
          }
          while ( v77 );
          v418.m128i_i16[0] = v77;
          v418.m128i_i64[1] = (__int64)v79;
          v418.m128i_i16[1] = v80;
        }
        v13 = v418;
        v76 = v402;
        LODWORD(v17) = 0;
        v424 = v418;
      }
      else
      {
        ++v79;
        v77 -= 2;
        v80 -= 2;
        v418.m128i_i64[1] = (__int64)v79;
        v418.m128i_i16[1] = v80;
        v418.m128i_i16[0] = v77;
      }
    }
    while ( v77 );
    LOWORD(v45) = *(_WORD *)&v391[7];
    v68 = v411;
    v90 = v78;
    if ( v77 )
    {
      v82 = -1073741811;
    }
    else
    {
      v91 = v78 + 1;
      if ( v91 <= 8 || v76 || (v82 = CmpExpandPathInfo(v448, v21), v82 >= 0) )
      {
        if ( v90 >= 8 )
          *(__m128i *)(*(_QWORD *)&v448[40] + 16 * (v90 - 8 + 6LL)) = v13;
        else
          *(__m128i *)&v448[4 * v90 + 8] = v13;
        v447 = v13;
        v92 = 0;
        v93 = _mm_cvtsi128_si32(v13);
        v424.m128i_i16[0] = v93;
        if ( v93 )
        {
          v94 = (unsigned __int16 *)v447.m128i_i64[1];
          v95 = (unsigned __int16)(((unsigned __int16)(v93 - 1) >> 1) + 1);
          do
          {
            v96 = *v94;
            if ( *v94 >= 0x61u )
            {
              if ( v96 <= 0x7Au )
              {
                v96 -= 32;
              }
              else
              {
                v97 = PsGetCurrentServerSiloGlobals();
                v96 = NLS_UPCASE((__int64)v97[77].Flink, v98);
              }
            }
            ++v94;
            v92 = v96 + 37 * v92;
            --v95;
          }
          while ( v95 );
        }
        if ( v90 >= 8 )
          *(_DWORD *)(*(_QWORD *)&v448[40] + 4LL * (v90 - 8)) = v92;
        else
          v448[v90] = v92;
        v11 = v399;
        v69 = v91;
        *(_DWORD *)&v391[7] = (unsigned __int16)v91;
        v17 = 0LL;
LABEL_132:
        v67 = (unsigned int)v69;
        v66 = 0LL;
        v397[0] = v69;
        if ( v69 )
        {
          v17 = *(_QWORD *)&v448[40];
          while ( 1 )
          {
            v99 = (unsigned int)v66 >= 8
                ? (int *)(*(_QWORD *)&v448[40] + 16 * ((unsigned int)(v66 - 8) + 6LL))
                : &v448[4 * (unsigned int)v66 + 8];
            if ( *(_WORD *)v99 > 0x200u )
              break;
            v66 = (unsigned int)(v66 + 1);
            if ( (unsigned int)v66 >= (unsigned int)v67 )
              goto LABEL_73;
          }
          Child = -1073741811;
          CmpRecordParseFailure(a7, 1536LL, 3221225485LL);
          v19 = v401;
          goto LABEL_728;
        }
LABEL_73:
        v70 = v392;
        *(_QWORD *)(a7 + 224) = v68;
        *(_QWORD *)(a7 + 248) = v68;
        v71 = v69 + ((*(_DWORD *)(v68 + 8) >> 21) & 0x3FF) - (unsigned int)v11;
        if ( (unsigned int)v71 > 0x200 )
        {
          Child = -1073741811;
          CmpRecordParseFailure(a7, 1792LL, 3221225485LL);
          v19 = v401;
          goto LABEL_728;
        }
        if ( !v391[2] )
        {
          if ( (*(_DWORD *)a7 & 0x400) != 0 )
            CmpLockRegistryExclusive();
          else
            CmpLockRegistry(v71, v66, v67, v17);
          v69 = *(_WORD *)&v391[7];
          v391[2] = 1;
        }
        v100 = *(_DWORD *)(v412 + 48);
        if ( (v100 & 9) != 0 )
        {
          v101 = 3221225852LL;
          if ( (v100 & 1) != 0 )
            v101 = 3221226533LL;
          Child = v101;
          CmpRecordParseFailure(a7, 2048LL, v101);
          v19 = v401;
          goto LABEL_728;
        }
        if ( (_WORD)v399 == v69 )
        {
          CmpReferenceKeyControlBlockUnsafe(v68);
          v19 = v68;
          v401 = v68;
          BugCheckParameter4 = v68;
          if ( v68 == BugCheckParameter2 )
          {
            LOWORD(v68) = v399;
            v392 = 0;
            v391[0] = v70;
          }
          else
          {
            CmpLockHashEntrySharedByKcb(v68);
            LOWORD(v68) = v399;
            v391[0] = 1;
          }
        }
        else
        {
          v102 = CmpPerformCompleteKcbCacheLookup(
                   v68,
                   v11,
                   v69,
                   (__int64)v448,
                   (_DWORD *)a7,
                   (volatile signed __int64 **)&BugCheckParameter4,
                   v391,
                   &v407);
          Child = v102;
          if ( v102 < 0 || v102 == 259 )
          {
            CmpRecordParseFailure(a7, 2432LL, (unsigned int)v102);
            v19 = BugCheckParameter4;
LABEL_726:
            if ( v391[0] )
              CmpUnlockHashEntryByKcb(v19);
            goto LABEL_728;
          }
          v19 = BugCheckParameter4;
          v103 = v407;
          WORD1(v68) = HIWORD(v399);
          LOWORD(v68) = v407 + v399;
          v401 = BugCheckParameter4;
          v399 = v68;
          *(_QWORD *)(a7 + 232) = BugCheckParameter4;
          *(_BYTE *)(a7 + 256) = v103;
          *(_QWORD *)(a7 + 248) = v19;
        }
        v104 = *(_WORD *)&v391[7];
        if ( (_WORD)v68 == *(_WORD *)&v391[7] && (*(_DWORD *)a7 & 1) == 0 )
        {
          v105 = *(_QWORD *)(v19 + 32);
          *(_QWORD *)(*(_QWORD *)(v105 + 1648)
                    + 24
                    * ((unsigned int)(*(_DWORD *)(v105 + 1656) - 1) & ((unsigned int)(101027
                                                                                    * (*(_DWORD *)(v19 + 16) ^ (*(_DWORD *)(v19 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v19 + 16) ^ (*(_DWORD *)(v19 + 16) >> 9))) >> 9)))
                    + 8) = 0LL;
          v106 = (signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v19 + 32) + 1648LL)
                                  + 24
                                  * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v19 + 32) + 1656LL) - 1) & ((unsigned int)(101027 * (*(_DWORD *)(v19 + 16) ^ (*(_DWORD *)(v19 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v19 + 16) ^ (*(_DWORD *)(v19 + 16) >> 9))) >> 9))));
          _m_prefetchw(v106);
          v107 = *v106;
          v108 = *v106 - 16;
          if ( (*v106 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v108 = 0LL;
          if ( (v107 & 2) != 0 || (v109 = *v106, v109 != _InterlockedCompareExchange64(v106, v108, v107)) )
            ExfReleasePushLock(v106);
          KeAbPostRelease((ULONG_PTR)v106);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v105 + 4232), 0xFFFFFFFF) == 1 )
            CmpDeleteHive((PVOID)v105);
          v104 = v397[0];
          v19 = BugCheckParameter4;
          LOWORD(v45) = v410.m128i_i16[0];
          *(_DWORD *)&v391[7] = (unsigned __int16)v397[0];
          v401 = BugCheckParameter4;
          v391[0] = 0;
        }
        CmpLockKcbShared(v19);
        if ( (__int16)v68 >= v104 )
        {
          RtlInitUnicodeString(&DestinationString, 0LL);
        }
        else
        {
          v110 = (unsigned int)(__int16)v68;
          if ( (unsigned int)v110 >= 8 )
            v111 = (int *)(*(_QWORD *)&v448[40] + 16 * ((unsigned int)(v110 - 8) + 6LL));
          else
            v111 = &v448[4 * v110 + 8];
          DestinationString.Buffer = (wchar_t *)*((_QWORD *)v111 + 1);
          DestinationString.Length = v45 - 2 * (((__int64)DestinationString.Buffer - v410.m128i_i64[1]) >> 1);
          DestinationString.MaximumLength = DestinationString.Length;
        }
        p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
        if ( !CmpVEEnabled
          || (*(_DWORD *)(a7 + 24) & 0x10) != 0
          || *(_WORD *)(v19 + 66)
          || *(_QWORD *)(v19 + 32) == CmpMasterHive )
        {
          goto LABEL_194;
        }
        v57 = (*(_DWORD *)(v19 + 8) & 0x20000) == 0;
        v434 = 0LL;
        v435 = 0LL;
        if ( v57 )
        {
          LODWORD(v434) = 0;
          *((_QWORD *)&v435 + 1) = 0LL;
          *((_QWORD *)&v434 + 1) = v19;
          v113 = 0;
          while ( 1 )
          {
            if ( v113 < 2u )
              v114 = *((_QWORD *)&v434 + v113 + 1);
            else
              v114 = *(_QWORD *)(*((_QWORD *)&v435 + 1) + 8LL * v113 - 16);
            if ( *(_WORD *)(v114 + 66) && *(_BYTE *)(v114 + 65) == 1 )
            {
LABEL_186:
              v115 = 1;
              goto LABEL_187;
            }
            if ( *(_DWORD *)(v114 + 40) != -1 )
              break;
            if ( (--v113 & 0x8000u) != 0 )
              goto LABEL_186;
          }
          v115 = 0;
LABEL_187:
          if ( !v115
            && (*(_DWORD *)(*(_QWORD *)(v19 + 32) + 4112LL) & 0x10) == 0
            && (*(_DWORD *)(v19 + 184) & 0x2000000) == 0 )
          {
            goto LABEL_194;
          }
        }
        v116 = (int *)(a7 + 16);
        v117 = 0;
        memset(&SubjectContext, 0, sizeof(SubjectContext));
        if ( !CmpVEEnabled )
          goto LABEL_194;
        if ( a7 == -16 || (*v116 & 1) == 0 )
        {
          if ( !v390 )
            goto LABEL_194;
          if ( AccessState == (PACCESS_STATE)-32LL )
          {
            CurrentThread = KeGetCurrentThread();
            CurrentThreadProcess = PsGetCurrentThreadProcess();
            SeCaptureSubjectContextEx(CurrentThread, CurrentThreadProcess, &SubjectContext);
            p_SubjectContext = &SubjectContext;
            v19 = BugCheckParameter4;
            v117 = 1;
            *(_DWORD *)&v391[7] = (unsigned __int16)v397[0];
            v401 = BugCheckParameter4;
          }
          else
          {
            p_SubjectContext = &AccessState->SubjectSecurityContext;
          }
          LODWORD(TokenInformation) = 0;
          v124 = 0;
          if ( !p_SubjectContext->ClientToken )
          {
            SeQueryInformationToken(p_SubjectContext->PrimaryToken, TokenVirtualizationEnabled, &TokenInformation);
            if ( (_DWORD)TokenInformation )
              v124 = 1;
          }
          if ( a7 != -16 )
          {
            if ( v124 )
              v125 = *v116 | 5;
            else
              v125 = *v116 | 3;
            *v116 = v125;
          }
          if ( v117 )
            SeReleaseSubjectContext(&SubjectContext);
          if ( !v124 )
            goto LABEL_194;
        }
        else if ( (*v116 & 2) != 0 )
        {
          goto LABEL_194;
        }
        if ( (*(_DWORD *)a7 & 8) == 0 )
        {
          if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
          {
            CmpAttachToRegistryProcess((PRKAPC_STATE)(a7 + 168));
            *(_DWORD *)(a7 + 160) |= 1u;
          }
          if ( (*(_DWORD *)(v19 + 184) & 0x2000000) != 0 )
            v118 = CmpVEExecuteVirtualStoreParseLogic(v19, &DestinationString, a7, *(_QWORD *)v406);
          else
            v118 = CmpVEExecuteRealStoreParseLogic(
                     v19,
                     (unsigned int)&DestinationString,
                     a7,
                     v406[0],
                     (__int64)p_SubjectSecurityContext);
LABEL_195:
          Child = v118;
          CmpUnlockKcb(v19);
          if ( Child != -1073741199 )
          {
            CmpRecordParseFailure(a7, 2496LL, (unsigned int)Child);
            goto LABEL_726;
          }
          v126 = *(_QWORD **)(a7 + 64);
          v127 = *(_QWORD *)(v19 + 32);
          if ( v126 && v126 != (_QWORD *)v127 )
          {
            if ( (*(_DWORD *)(v127 + 4112) & 1) != 0 )
            {
              v128 = KeAbPreAcquire((__int64)&CmpHiveListHeadLock, 0LL);
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, 17LL, 0LL) )
                ExfAcquirePushLockSharedEx(
                  (signed __int64 *)&CmpHiveListHeadLock,
                  0,
                  v128,
                  (__int64)&CmpHiveListHeadLock);
              if ( v128 )
                *(_BYTE *)(v128 + 18) = 1;
              v129 = *(_QWORD **)(v127 + 4120);
              if ( v129 != (_QWORD *)(v127 + 4120) )
              {
                while ( 1 )
                {
                  v130 = v129;
                  if ( v129 - 515 == v126 )
                    break;
                  v129 = (_QWORD *)*v129;
                  if ( *v130 == v127 + 4120 )
                    goto LABEL_230;
                }
                _m_prefetchw(&CmpHiveListHeadLock);
                v135 = CmpHiveListHeadLock - 16;
                if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                  v135 = 0LL;
                if ( (CmpHiveListHeadLock & 2) != 0
                  || (v136 = CmpHiveListHeadLock,
                      v136 != _InterlockedCompareExchange64(
                                (volatile signed __int64 *)&CmpHiveListHeadLock,
                                v135,
                                CmpHiveListHeadLock)) )
                {
                  ExfReleasePushLock(&CmpHiveListHeadLock);
                }
                KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
                v19 = BugCheckParameter4;
                v137 = v397[0];
                v401 = BugCheckParameter4;
LABEL_250:
                if ( v16 || *(_QWORD *)AccessStatus )
                {
                  if ( *(_QWORD *)(v19 + 32) == CmpMasterHive )
                  {
                    v395 = 1;
                    v16 = 0LL;
                    v138 = 0LL;
                  }
                  else if ( (v16 || *(_QWORD *)AccessStatus) && *(_WORD *)(v19 + 66) )
                  {
                    CmpLogUnsupportedOperation(8LL);
                    if ( !PsIsCurrentThreadInServerSilo(v140, v139) )
                    {
                      Child = -1072103419;
                      CmpRecordParseFailure(a7, 2816LL, 3222863877LL);
                      goto LABEL_726;
                    }
                    v16 = 0LL;
                    v138 = 0LL;
                  }
                  else
                  {
                    v138 = *(_QWORD *)AccessStatus;
                  }
                }
                else
                {
                  v138 = 0LL;
                }
                if ( !CmpTransSilentIgnore() && (v16 || v138) )
                {
                  Child = CmpTransSearchAddTransFromHive(*(_QWORD *)(v19 + 32), v16, v138, 0, (__int64)&v405);
                  if ( Child < 0 )
                  {
                    if ( v391[0] )
                    {
                      CmpUnlockHashEntryByKcb(v19);
                      v391[0] = 0;
                    }
                    CmpUnlockRegistry(v143, v142, v144, v145);
                    Child = CmpTransSearchAddTransFromHive(*(_QWORD *)(v19 + 32), v16, v138, 1u, (__int64)&v405);
                    CmpLockRegistry(v147, v146, v148, v149);
                    v150 = (unsigned int)Child;
                    v391[2] = 1;
                    if ( Child >= 0 )
                      v150 = 3221226029LL;
                    Child = v150;
                    CmpRecordParseFailure(a7, 3072LL, v150);
                    goto LABEL_726;
                  }
                  v151 = v405;
                  v141 = 0LL;
                }
                else
                {
                  v151 = v141;
                  v405 = v141;
                }
                v152 = *(__int16 *)(v19 + 66);
                Pool = (struct _PRIVILEGE_SET *)v141;
                if ( v152 >= 2 )
                {
                  Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(256LL, 8LL * (unsigned int)(v152 - 1), 892751171LL);
                  if ( !Pool )
                  {
                    Child = -1073741670;
                    CmpRecordParseFailure(a7, 3328LL, 3221225626LL);
                    goto LABEL_726;
                  }
                  v141 = 0LL;
                }
                v438[1] = Pool;
                WORD1(v437[0]) = -1;
                v154 = (struct _PRIVILEGE_SET *)v141;
                LOWORD(v437[0]) = v152;
                v155 = *(__int16 *)(v19 + 66);
                if ( v155 >= 2 )
                {
                  v154 = (struct _PRIVILEGE_SET *)CmpAllocatePool(256LL, 8LL * (unsigned int)(v155 - 1), 892751171LL);
                  if ( !v154 )
                  {
                    Child = -1073741670;
                    CmpRecordParseFailure(a7, 3584LL, 3221225626LL);
                    goto LABEL_726;
                  }
                  v141 = 0LL;
                }
                HIWORD(v439[0]) = -1;
                v156 = v439;
                LOWORD(v439[0]) = v155;
                v157 = v437;
                v440[1] = v154;
                Child = v141;
                WORD1(v437[0]) = *(_WORD *)(v19 + 66);
                v158 = *(__int16 *)(v19 + 66);
                if ( (_WORD)v158 )
                {
                  v159 = *(_QWORD *)(v19 + 192);
                  if ( v159 )
                  {
                    do
                    {
                      CmpSetKcbAtLayerHeight(v437, v158, *(_QWORD *)(v159 + 16));
                      v159 = *(_QWORD *)(v160 + 24);
                      LOWORD(v158) = v158 - 1;
                    }
                    while ( v159 );
                    v141 = 0LL;
                  }
                }
                else
                {
                  v437[v158 + 1] = v19;
                }
                if ( (__int16)v399 >= v137 )
                {
LABEL_366:
                  v193 = *(_QWORD *)(v19 + 72);
                  v194 = (__int64)v156;
                  v413 = (__int64)v156;
                  if ( v193 )
                  {
                    *((_WORD *)v156 + 1) = *(_WORD *)(v193 + 66);
                    v195 = *(__int16 *)(v193 + 66);
                    if ( (_WORD)v195 )
                    {
                      for ( i = *(_QWORD *)(v193 + 192); i; LOWORD(v195) = v195 - 1 )
                      {
                        CmpSetKcbAtLayerHeight(v156, v195, *(_QWORD *)(i + 16));
                        i = *(_QWORD *)(v197 + 24);
                      }
                    }
                    else
                    {
                      *(_QWORD *)&v156[2 * v195 + 2] = v193;
                    }
                  }
                  else
                  {
                    v194 = v141;
                    v413 = v141;
                  }
                  v198 = v412;
                  v199 = *(_QWORD *)(v412 + 8);
                  if ( *(_QWORD *)(v19 + 72) != v199 && v19 != v199 )
                  {
                    CmpLockKcbShared(v199);
                    v391[1] = 1;
                  }
                  if ( v194 )
                  {
                    for ( j = 0; j <= *(__int16 *)(v194 + 2); ++j )
                    {
                      if ( j < 2 )
                        v201 = *(_QWORD *)(v194 + 8LL * j + 8);
                      else
                        v201 = *(_QWORD *)(*(_QWORD *)(v194 + 24) + 8LL * j - 16);
                      CmpLockKcbShared(v201);
                    }
                    v391[4] = 1;
                  }
                  for ( k = 0; k <= *((__int16 *)v157 + 1); ++k )
                  {
                    if ( k < 2 )
                      v203 = v157[k + 1];
                    else
                      v203 = *(_QWORD *)(v157[3] + 8LL * k - 16);
                    CmpLockKcbShared(v203);
                  }
                  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v198, 0LL) )
                  {
                    v204 = 3221225852LL;
                    if ( (*(_BYTE *)(v198 + 48) & 1) != 0 )
                      v204 = 3221226533LL;
                    Child = v204;
                    CmpRecordParseFailure(a7, 5888LL, v204);
                    goto LABEL_427;
                  }
                  if ( (*(_DWORD *)(v19 + 8) & 0x20000) != 0 )
                  {
                    Child = -1073741772;
                    CmpRecordParseFailure(a7, 6016LL, 3221225524LL);
                    goto LABEL_427;
                  }
                  v205 = v399 - 1;
                  if ( (*(_DWORD *)(v19 + 184) & 0x20000) != 0 )
                  {
                    Child = -1073741772;
                    CmpRecordParseFailure(a7, 6144LL, 3221225524LL);
                    goto LABEL_427;
                  }
                  v206 = v405;
                  if ( !CmRmIsKcbStackVisible((__int64)v157) )
                  {
                    Child = -1073741772;
                    CmpRecordParseFailure(a7, 6400LL, 3221225524LL);
                    goto LABEL_427;
                  }
                  if ( (*(_DWORD *)a7 & 2) != 0 )
                  {
                    CmpUnlockKcbStack(v157);
                    CmpUnlockKcbStack(v194);
                    if ( v391[1] )
                      CmpUnlockKcb(*(_QWORD *)(v198 + 8));
                    v396 = CmpTryToLockHashEntryExclusive(*(_QWORD *)(a7 + 48), 0LL);
                    if ( v391[1] )
                      CmpLockKcbShared(*(_QWORD *)(v198 + 8));
                    CmpLockKcbStackTopExclusiveRestShared(v194);
                    CmpLockKcbStackTopExclusiveRestShared((__int64)v157);
                    ComponentNameAtIndex = CmpGetComponentNameAtIndex(v448, (unsigned int)v205);
                    ComponentHashAtIndex = CmpGetComponentHashAtIndex(v448);
                    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v412, 0LL) )
                    {
                      v209 = 3221225852LL;
                      if ( (*(_BYTE *)(v412 + 48) & 1) != 0 )
                        v209 = 3221226533LL;
                      Child = v209;
                      CmpRecordParseFailure(a7, 6656LL, v209);
                      goto LABEL_427;
                    }
                    if ( CmpIsKeyStackDeleted(v194) )
                    {
                      Child = -1073741772;
                      CmpRecordParseFailure(a7, 6912LL, 3221225524LL);
                      goto LABEL_427;
                    }
                    if ( !CmpIsKeyStackDeleted((__int64)v157) )
                    {
                      Child = -1073741790;
                      CmpRecordParseFailure(a7, 7168LL, 3221225506LL);
                      goto LABEL_427;
                    }
                    v210 = *(_QWORD *)(v19 + 72);
                    if ( *(_QWORD *)(v210 + 32) != CmpMasterHive )
                    {
                      Child = -1073741790;
                      CmpRecordParseFailure(a7, 7424LL, 3221225506LL);
                      goto LABEL_427;
                    }
                    if ( (*(_DWORD *)(v210 + 184) & 0x20000) != 0 )
                    {
                      Child = -1073741772;
                      CmpRecordParseFailure(a7, 7680LL, 3221225524LL);
                      goto LABEL_427;
                    }
                    if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
                    {
                      CmpAttachToRegistryProcess((PRKAPC_STATE)(a7 + 168));
                      *(_DWORD *)(a7 + 160) |= 1u;
                    }
                    v211 = *(unsigned int *)(a7 + 40);
                    v212 = *(_QWORD *)(a7 + 48);
                    if ( (_DWORD)v211 == -1 )
                    {
                      HiveRootCell = CmpCreateHiveRootCell(v212, a7 + 40);
                      Child = HiveRootCell;
                      if ( HiveRootCell < 0 )
                      {
                        CmpRecordParseFailure(a7, 7808LL, (unsigned int)HiveRootCell);
                        goto LABEL_427;
                      }
                    }
                    else
                    {
                      updated = CmpUpdateHiveRootCellFlags(v212, v211);
                      Child = updated;
                      if ( updated < 0 )
                      {
                        CmpRecordParseFailure(a7, 7936LL, (unsigned int)updated);
                        goto LABEL_427;
                      }
                    }
                    *(_WORD *)(v19 + 186) |= 2u;
                    Child = CmpCreateKeyControlBlock(
                              *(_QWORD *)(a7 + 48),
                              0xFFFFFFFFLL,
                              v19,
                              *(_QWORD *)(a7 + 80),
                              1,
                              ComponentNameAtIndex,
                              ComponentHashAtIndex,
                              0,
                              &v419);
                    *(_WORD *)(v19 + 186) &= ~2u;
                    if ( Child < 0 )
                    {
                      CmpRecordParseFailure(a7, 0x2000LL, (unsigned int)Child);
                      goto LABEL_427;
                    }
                    v215 = v419;
                    v401 = v419;
                    v216 = v19;
                    BugCheckParameter4 = v419;
                    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)v19);
                    CmpUnlockHashEntryByKcb(v19);
                    v391[0] = 0;
                    started = CmpStartKcbStackForTopLayerKcb(v443, v215);
                    Child = started;
                    if ( started < 0 )
                    {
                      CmpRecordParseFailure(a7, 8448LL, (unsigned int)started);
LABEL_426:
                      v19 = v401;
                      goto LABEL_427;
                    }
                    *(_WORD *)(v19 + 186) |= 2u;
                    CmpLockKcbStackTopExclusiveRestShared((__int64)v443);
                    *(_WORD *)(v19 + 186) &= ~2u;
                    v403 = 1;
                    KeyBody = CmpCreateKeyBody(v215, 3, (__int64)v443, (__int64)&Object, (__int64)&v391[3]);
                    Child = KeyBody;
                    if ( KeyBody < 0 )
                    {
                      CmpRecordParseFailure(a7, 8576LL, (unsigned int)KeyBody);
                      CmpUnlockKcbStack(v443);
                      goto LABEL_426;
                    }
                    v221 = (signed __int64 *)(*(_QWORD *)(v19 + 32) + 72LL);
                    v222 = KeAbPreAcquire((__int64)v221, 0LL);
                    if ( _InterlockedCompareExchange64(v221, 17LL, 0LL) )
                      ExfAcquirePushLockSharedEx(v221, 0, v222, (__int64)v221);
                    if ( v222 )
                      *(_BYTE *)(v222 + 18) = 1;
                    v223 = v419;
                    HvLockHiveFlusherExclusive(*(_QWORD *)(v419 + 32));
                    v224 = *(_QWORD *)(v223 + 32);
                    v225 = *(_DWORD *)(v224 + 104);
                    v226 = HvpMarkCellDirty(v224, *(unsigned int *)(a7 + 40));
                    Child = v226;
                    if ( v226 < 0 )
                    {
                      CmpRecordParseFailure(a7, 8704LL, (unsigned int)v226);
LABEL_438:
                      HvUnlockHiveFlusherExclusive(*(_QWORD *)(v223 + 32));
                      v227 = *(_QWORD *)(v216 + 32);
                      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v227 + 72), 0LL, 17LL) != 17 )
                        ExfReleasePushLockShared((signed __int64 *)(v227 + 72));
                      KeAbPostRelease(v227 + 72);
                      v401 = BugCheckParameter4;
                      CmpUnlockKcbStack(v443);
                      goto LABEL_426;
                    }
                    v228 = AccessState;
                    Child = CmpCreateChild(
                              v413,
                              (_DWORD)v157,
                              (_DWORD)AccessState,
                              ComponentNameAtIndex,
                              a7,
                              10,
                              0,
                              1,
                              v405);
                    if ( Child < 0 )
                      goto LABEL_438;
                    *(_DWORD *)(v223 + 40) = *(_DWORD *)(a7 + 40);
                    *(_DWORD *)(CmpGetKeyNodeForKcb(v223, (__int64)v417, 1) + 16) = *(_DWORD *)(v216 + 40);
                    ++*(_QWORD *)(v223 + 304);
                    CmpRebuildKcbCacheFromNode(v223);
                    v229 = *(_QWORD *)(v223 + 32);
                    if ( (*(_BYTE *)(v229 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(v229, v417);
                    else
                      HvpReleaseCellPaged(v229, v417);
                    if ( !v225 )
                      HvResetDirtyData(*(_QWORD *)(v223 + 32));
                    HvUnlockHiveFlusherExclusive(*(_QWORD *)(v223 + 32));
                    v230 = *(_QWORD *)(v216 + 32);
                    v231 = 0;
                    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v230 + 72), 0LL, 17LL) != 17 )
                      ExfReleasePushLockShared((signed __int64 *)(v230 + 72));
                    KeAbPostRelease(v230 + 72);
                    v232 = v419;
                    *(_WORD *)(v216 + 8) |= 8u;
                    CmpReferenceKeyControlBlockUnsafe(v232);
                    *(_QWORD *)(v216 + 104) = v232;
                    CmpUnlockHashEntry(*(PVOID *)(a7 + 48));
                    v233 = v390;
                    v401 = BugCheckParameter4;
                    v396 = 0;
                    *(_DWORD *)(a7 + 32) = 1;
LABEL_605:
                    if ( *(_DWORD *)(a7 + 32) == 1 )
                    {
                      *((_WORD *)Object + 2) = *(_WORD *)(*((_QWORD *)Object + 1) + 66LL);
                      goto LABEL_706;
                    }
                    *(_DWORD *)&v391[7] = *(_DWORD *)(a7 + 24) & 4;
                    v284 = *(_DWORD *)&v391[7];
                    LOBYTE(v394) = 0;
                    SecurityDescriptorForKcbStack = CmpGetSecurityDescriptorForKcbStackEx();
                    if ( v284 )
                    {
                      LOBYTE(v286) = 1;
                      if ( (int)CmpSetAccessStateForBackupRestore(v228, v233, SecurityDescriptorForKcbStack, v286) < 0 )
                      {
                        v287 = -1073741790;
                        LOBYTE(v394) = 0;
                        Child = -1073741790;
LABEL_704:
                        CmpRecordParseFailure(v9, 15584LL, v287);
LABEL_709:
                        if ( v403 )
                          CmpUnlockKcbStack(v443);
                        goto LABEL_426;
                      }
                    }
                    OriginalDesiredAccess = v228->OriginalDesiredAccess;
                    v287 = -1073741790;
                    v441 = 0LL;
                    v289 = *((_QWORD *)Object + 1);
                    *(_OWORD *)Privileges = 0LL;
                    WORD1(v441) = -1;
                    v290 = *(_QWORD *)(v289 + 32);
                    if ( (*(_DWORD *)(v290 + 160) & 0x100000) != 0 && (OriginalDesiredAccess & 0xD0026) != 0 )
                    {
                      if ( (OriginalDesiredAccess & 0xD0002) != 0 || (*(_DWORD *)(v290 + 4112) & 0x2000) == 0 )
                      {
                        v231 = -1073741790;
                      }
                      else if ( *(_BYTE *)(v289 + 65) )
                      {
                        v231 = -1073741790;
                      }
                      else
                      {
                        v231 = CmpStartKcbStackForTopLayerKcb(&v441, v289);
                        if ( v231 >= 0 )
                        {
                          v291 = *(_WORD *)(v289 + 66) - 1;
                          if ( v291 >= 0 )
                          {
                            while ( 1 )
                            {
                              KcbAtLayerHeight = CmpGetKcbAtLayerHeight(&v441);
                              WORD1(v441) = v291;
                              v293 = KcbAtLayerHeight;
                              if ( CmpIsKeyStackDeleted((__int64)&v441) )
                              {
LABEL_624:
                                v231 = -1073741790;
                                goto LABEL_626;
                              }
                              if ( (*(_DWORD *)(*(_QWORD *)(v293 + 32) + 160LL) & 0x100000) == 0 )
                                break;
                              if ( (*(_DWORD *)(*(_QWORD *)(v289 + 32) + 4112LL) & 0x2000) == 0 || *(_BYTE *)(v289 + 65) )
                                goto LABEL_624;
                              if ( --v291 < 0 )
                                goto LABEL_626;
                            }
                            v231 = 0;
LABEL_626:
                            v228 = AccessState;
                          }
                          v284 = *(_DWORD *)&v391[7];
                        }
                      }
                    }
                    if ( Privileges[1] )
                      CmSiFreeMemory(Privileges[1]);
                    if ( v231 < 0 )
                    {
                      Child = -1073741790;
                      LOBYTE(v394) = 0;
                      goto LABEL_704;
                    }
                    v294 = v228->OriginalDesiredAccess;
                    if ( (v294 & *(_DWORD *)(a7 + 96)) != v294 )
                    {
                      Child = -1073741790;
                      LOBYTE(v394) = 0;
                      goto LABEL_704;
                    }
                    if ( v284 && !v228->RemainingDesiredAccess )
                    {
                      LOBYTE(v394) = 0;
LABEL_706:
                      *v422 = Object;
                      Object = 0LL;
                      if ( !*(_DWORD *)(v9 + 32) )
                        *(_DWORD *)(v9 + 32) = 2;
                      Child = v391[3] != 0 ? 0x40000016 : 0;
                      goto LABEL_709;
                    }
                    if ( !v294 && (*(_DWORD *)a7 & 0x1000) != 0 )
                    {
                      LOBYTE(v394) = 0;
                      goto LABEL_706;
                    }
                    v406[0] = 0;
                    v429 = 0LL;
                    WORD1(v429) = -1;
                    v420 = 0LL;
                    *(_OWORD *)v430 = 0LL;
                    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(Object, v405) )
                    {
                      v296 = AccessState;
                      AccessStatus[0] = -1073741444;
                      v297 = 0;
                      goto LABEL_684;
                    }
                    v298 = 0LL;
                    v299 = *((_QWORD *)Object + 1);
                    v300 = *(__int16 *)(v299 + 66);
                    if ( v300 >= 2 )
                    {
                      v298 = (struct _PRIVILEGE_SET *)CmpAllocatePool(
                                                        256LL,
                                                        8LL * (unsigned int)(v300 - 1),
                                                        892751171LL);
                      if ( !v298 )
                      {
                        v297 = 0;
                        v296 = AccessState;
                        AccessStatus[0] = -1073741670;
LABEL_683:
                        v284 = *(_DWORD *)&v391[7];
LABEL_684:
                        if ( v430[1] )
                          CmSiFreeMemory(v430[1]);
                        if ( v297 )
                        {
                          LOBYTE(v394) = 0;
                          goto LABEL_706;
                        }
                        if ( v284 )
                        {
                          v327 = v401;
                        }
                        else
                        {
                          if ( (int)CmpVEPerformOpenAccessCheck(Object, v9, AccessStatus[0]) >= 0 )
                          {
                            LOBYTE(v394) = 0;
                            goto LABEL_706;
                          }
                          if ( KeGetCurrentThread()->PreviousMode == 1 )
                          {
                            v325 = PsGetCurrentThreadProcess();
                            if ( !CmpDoesProcessBelongToServiceSession((__int64)v325)
                              && (v296->RemainingDesiredAccess & 0xD0026) != 0 )
                            {
                              v326 = CmpCheckKeyOwnerForPca(v157, v405);
                              v327 = BugCheckParameter4;
                              v328 = (unsigned __int8)v394;
                              if ( v326 )
                                v328 = 1;
                              v401 = BugCheckParameter4;
                              v394 = v328;
                              goto LABEL_700;
                            }
                          }
                          v327 = BugCheckParameter4;
                          v401 = BugCheckParameter4;
                        }
                        v328 = v394;
LABEL_700:
                        Child = -1073741790;
                        if ( (_BYTE)v328 )
                        {
                          if ( (*(_DWORD *)(v9 + 160) & 1) == 0 )
                          {
                            CmpAttachToRegistryProcess((PRKAPC_STATE)(v9 + 168));
                            *(_DWORD *)(v9 + 160) |= 1u;
                          }
                          v423 = 0LL;
                          CmpConstructNameWithStatus(v327, &v423);
                          v287 = Child;
                          v421 = (PACCESS_STATE)v423;
                          v394 = v328;
                        }
                        goto LABEL_704;
                      }
                    }
                    LOWORD(v429) = v300;
                    v430[1] = v298;
                    v301 = *(__int16 *)(v299 + 66);
                    WORD1(v429) = v301;
                    if ( (_WORD)v301 )
                    {
                      v302 = *(_QWORD *)(v299 + 192);
                      if ( !v302 )
                      {
LABEL_650:
                        v304 = WORD1(v429);
                        AccessStatus[0] = 0;
                        v305 = 0LL;
                        v411 = 0LL;
                        if ( (SWORD1(v429) & 0x8000u) == 0 )
                        {
                          v306 = v405;
                          do
                          {
                            if ( v304 < 2u )
                              v307 = v430[v304 - 1];
                            else
                              v307 = (PPRIVILEGE_SET)*((_QWORD *)v298 + v304 - 2);
                            if ( HIWORD(v307[3].Control) && BYTE1(v307[3].Control) == 1 )
                              break;
                            if ( v307[2].PrivilegeCount != -1 )
                            {
                              if ( (unsigned __int8)CmRmIsKCBVisible(v307, v306) )
                              {
                                v411 = (ULONG_PTR)v307;
                                if ( HIWORD(v307[3].Control) )
                                {
                                  if ( BYTE1(v307[3].Control) )
                                    break;
                                }
                              }
                            }
                            --v304;
                          }
                          while ( (v304 & 0x8000u) == 0 );
                          v9 = v423;
                          v287 = -1073741790;
                          v305 = v411;
                        }
                        v308 = *(_QWORD *)(v305 + 88);
                        if ( v405 )
                        {
                          v309 = v305 + 208;
                          v433 = 0LL;
                          PrevElement = CmListGetPrevElement(v305 + 208, &v433, v295, v405);
                          if ( PrevElement )
                          {
                            while ( !CmEqualTrans(*(_QWORD *)(PrevElement + 56), v311)
                                 || *(_DWORD *)(PrevElement + 68) != 9 )
                            {
                              PrevElement = CmListGetPrevElement(v309, &v433, v312, v313);
                              if ( !PrevElement )
                                goto LABEL_670;
                              v311 = v405;
                            }
                            v308 = *(_QWORD *)(PrevElement + 88);
                          }
                        }
LABEL_670:
                        v314 = KeGetCurrentThread();
                        v315 = AccessState;
                        v316 = (void *)(v308 + 32);
                        --v314->KernelApcDisable;
                        ExAcquireResourceSharedLite(*((PERESOURCE *)v315->SubjectSecurityContext.PrimaryToken + 6), 1u);
                        if ( v315->SubjectSecurityContext.ClientToken )
                        {
                          v317 = KeGetCurrentThread();
                          --v317->KernelApcDisable;
                          ExAcquireResourceSharedLite(*((PERESOURCE *)v315->SubjectSecurityContext.ClientToken + 6), 1u);
                        }
                        RemainingDesiredAccess = v315->RemainingDesiredAccess;
                        v406[0] = 0;
                        v420 = 0LL;
                        v297 = SeAccessCheck(
                                 v316,
                                 &v315->SubjectSecurityContext,
                                 1u,
                                 RemainingDesiredAccess,
                                 v315->PreviouslyGrantedAccess,
                                 &v420,
                                 (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                                 v390,
                                 v406,
                                 AccessStatus);
                        if ( v420 )
                        {
                          SeAppendPrivileges(v315, v420);
                          CmSiFreeMemory(v420);
                        }
                        v319 = v315;
                        if ( v297 )
                        {
                          v320 = v406[0];
                          v315->PreviouslyGrantedAccess |= v406[0];
                          v315->RemainingDesiredAccess &= ~(v320 | 0x2000000);
                        }
                        v321 = Object;
                        v322 = v405;
                        *((_WORD *)Object + 24) |= 2u;
                        v323 = (UNICODE_STRING *)(CmKeyObjectType + 2);
                        if ( v322 )
                        {
                          SeOpenObjectAuditAlarmWithTransaction(
                            v323,
                            v321,
                            0LL,
                            v316,
                            v319,
                            0,
                            v297,
                            v390,
                            (GUID *)(v322 + 88),
                            &v319->GenerateOnClose);
                        }
                        else if ( v390 )
                        {
                          SeOpenObjectAuditAlarmWithTransaction(
                            v323,
                            Object,
                            0LL,
                            v316,
                            v319,
                            0,
                            v297,
                            v390,
                            0LL,
                            &v319->GenerateOnClose);
                        }
                        v296 = AccessState;
                        v321[24] &= ~2u;
                        ExReleaseResourceLite(*((PERESOURCE *)v296->SubjectSecurityContext.PrimaryToken + 6));
                        KeLeaveCriticalRegion();
                        ClientToken = (PERESOURCE *)v296->SubjectSecurityContext.ClientToken;
                        if ( ClientToken )
                        {
                          ExReleaseResourceLite(ClientToken[6]);
                          KeLeaveCriticalRegion();
                        }
                        v401 = BugCheckParameter4;
                        goto LABEL_683;
                      }
                      do
                      {
                        CmpSetKcbAtLayerHeight(&v429, v301, *(_QWORD *)(v302 + 16));
                        v302 = *(_QWORD *)(v303 + 24);
                        LOWORD(v301) = v301 - 1;
                      }
                      while ( v302 );
                    }
                    else
                    {
                      v430[v301 - 1] = (PPRIVILEGE_SET)v299;
                    }
                    v298 = v430[1];
                    goto LABEL_650;
                  }
                  if ( (*(_DWORD *)a7 & 0x20) != 0 )
                  {
                    CmpUnlockKcbStack(v157);
                    CmpUnlockKcbStack(v194);
                    CmpLockKcbStackTopExclusiveRestShared(v194);
                    CmpLockKcbStackTopExclusiveRestShared((__int64)v157);
                    if ( CmpIsKeyStackDeleted(v194) )
                    {
                      Child = -1073741772;
                      CmpRecordParseFailure(a7, 8960LL, 3221225524LL);
                      goto LABEL_427;
                    }
                    if ( (*(_DWORD *)(*(_QWORD *)(v19 + 72) + 184LL) & 0x20000) != 0 )
                    {
                      Child = -1073741772;
                      CmpRecordParseFailure(a7, 9216LL, 3221225524LL);
                      goto LABEL_427;
                    }
                    v234 = CmpGetComponentNameAtIndex(v448, (unsigned int)v205);
                    CmpCleanUpKcbCachedSymlink(v19, &v425);
                    *(_WORD *)(v19 + 186) |= 0x40u;
                    *(_DWORD *)(v19 + 100) = -1;
                    *(_DWORD *)(v19 + 96) = *(_DWORD *)(a7 + 56);
                    Child = CmpCreateKeyBody(v19, 3, (__int64)v157, (__int64)&Object, (__int64)&v391[3]);
                    if ( Child >= 0 )
                    {
                      v231 = 0;
                      if ( CmpIsKeyStackDeleted((__int64)v157) )
                      {
                        Child = CmpCreateChild(v194, (_DWORD)v157, (_DWORD)AccessState, v234, a7, 64, 0, 0, v206);
                        if ( Child < 0 )
                          goto LABEL_427;
                        *(_DWORD *)(a7 + 32) = 1;
                      }
                      v233 = v390;
LABEL_604:
                      v228 = AccessState;
                      goto LABEL_605;
                    }
LABEL_427:
                    for ( m = 0; m <= *((__int16 *)v157 + 1); ++m )
                    {
                      if ( m < 2 )
                        v219 = v157[m + 1];
                      else
                        v219 = *(_QWORD *)(v157[3] + 8LL * m - 16);
                      CmpUnlockKcb(v219);
                    }
                    v194 = v413;
LABEL_715:
                    if ( v391[4] )
                    {
                      for ( n = 0; n <= *(__int16 *)(v194 + 2); ++n )
                      {
                        if ( n < 2 )
                          v330 = *(_QWORD *)(v194 + 8LL * n + 8);
                        else
                          v330 = *(_QWORD *)(*(_QWORD *)(v194 + 24) + 8LL * n - 16);
                        CmpUnlockKcb(v330);
                      }
                    }
                    goto LABEL_721;
                  }
                  v235 = *((_WORD *)v157 + 1);
                  v432 = 0LL;
                  while ( (v235 & 0x8000u) == 0 )
                  {
                    v236 = v235 < 2u ? v157[v235 + 1] : *(_QWORD *)(v157[3] + 8LL * v235 - 16);
                    if ( *(_WORD *)(v236 + 66) && *(_BYTE *)(v236 + 65) == 1 )
                      break;
                    if ( *(_DWORD *)(v236 + 40) != -1 )
                    {
                      if ( v206 )
                      {
                        NextElement = CmListGetNextElement(v157[1] + 208, &v432, 32LL);
                        if ( NextElement )
                        {
                          while ( 1 )
                          {
                            v239 = *(_DWORD *)(NextElement + 68);
                            if ( v239 == 2 || v239 == 11 )
                              break;
                            NextElement = CmListGetNextElement(v238 + 208, &v432, 32LL);
                            if ( !NextElement )
                              goto LABEL_477;
                          }
                          if ( CmEqualTrans(*(_QWORD *)(NextElement + 56), v206) )
                            break;
                        }
                      }
LABEL_477:
                      v240 = *((_WORD *)v157 + 1);
                      if ( (v240 & 0x8000u) == 0 )
                      {
                        while ( 1 )
                        {
                          v241 = v240 < 2u ? v157[v240 + 1] : *(_QWORD *)(v157[3] + 8LL * v240 - 16);
                          if ( *(_DWORD *)(v241 + 40) != -1 )
                            break;
                          if ( (--v240 & 0x8000u) != 0 )
                            goto LABEL_483;
                        }
                        if ( (*(_DWORD *)(v241 + 184) & 0x100000) != 0 && !_bittest((const signed __int32 *)a7, 9u) )
                        {
                          if ( (*(_DWORD *)(a7 + 24) & 2) != 0 )
                          {
                            Child = -1073741771;
                            CmpRecordParseFailure(a7, 14080LL, 3221225525LL);
                            goto LABEL_427;
                          }
                          if ( v391[4] )
                          {
                            CmpUnlockKcbStack(v194);
                            v391[4] = 0;
                          }
                          if ( v391[1] )
                          {
                            CmpUnlockKcb(*(_QWORD *)(v198 + 8));
                            v391[1] = 0;
                          }
                          if ( v391[0] )
                          {
                            CmpUnlockHashEntryByKcb(v19);
                            v391[0] = 0;
                          }
                          SymbolicLinkTarget = CmpGetSymbolicLinkTarget(
                                                 (_DWORD)v157,
                                                 (unsigned int)v448,
                                                 0,
                                                 0,
                                                 v206,
                                                 a7,
                                                 (__int64)&v425,
                                                 *(__int64 *)v406,
                                                 a7 + 88,
                                                 (__int64)&v414);
                          Child = SymbolicLinkTarget;
                          if ( SymbolicLinkTarget >= 0 )
                          {
                            *(_DWORD *)a7 &= ~8u;
                            if ( !*(_QWORD *)(a7 + 64) )
                            {
                              v243 = *(_QWORD *)(v414 + 32);
                              if ( (*(_DWORD *)(v243 + 4112) & 1) != 0 )
                                *(_QWORD *)(a7 + 64) = v243;
                            }
                            Child = 260;
                            CmpRecordParseFailure(a7, 14592LL, 260LL);
                          }
                          else
                          {
                            CmpRecordParseFailure(a7, 14336LL, (unsigned int)SymbolicLinkTarget);
                          }
                          goto LABEL_715;
                        }
                      }
LABEL_483:
                      if ( v395 )
                      {
                        Child = -1073741811;
                        CmpRecordParseFailure(a7, 14848LL, 3221225485LL);
                        goto LABEL_427;
                      }
                      if ( (*(_DWORD *)(v19 + 184) & 0x20000) != 0 )
                      {
                        Child = -1073741772;
                        CmpRecordParseFailure(a7, 15104LL, 3221225524LL);
                        goto LABEL_427;
                      }
                      if ( (*(_DWORD *)(a7 + 24) & 2) != 0 )
                      {
                        Child = -1073741771;
                        CmpRecordParseFailure(a7, 15360LL, 3221225525LL);
                        goto LABEL_427;
                      }
                      v244 = v406[0];
                      v231 = 0;
                      v245 = CmpDoWritethroughReparse(v19, (int)v157, v194, 0, 0LL, a7, *(__int64 *)v406);
                      Child = v245;
                      if ( v245 != -1073741199 )
                      {
                        CmpRecordParseFailure(a7, 15424LL, v245);
                        goto LABEL_427;
                      }
                      v233 = v390;
                      v246 = CmpVEExecuteOpenLogic(
                               v19,
                               a7,
                               0,
                               v244,
                               v390,
                               (__int64)&AccessState->SubjectSecurityContext);
                      Child = v246;
                      if ( v246 != -1073741199 )
                      {
                        CmpRecordParseFailure(a7, 15488LL, v246);
                        goto LABEL_427;
                      }
                      v247 = CmpCreateKeyBody(v19, 2, (__int64)v157, (__int64)&Object, (__int64)&v391[3]);
                      Child = v247;
                      if ( v247 < 0 )
                      {
                        if ( v247 == -1073741444 )
                          v247 = -1073741772;
                        Child = v247;
                        CmpRecordParseFailure(a7, 15552LL, (unsigned int)v247);
                        goto LABEL_427;
                      }
                      goto LABEL_604;
                    }
                    --v235;
                  }
                  if ( v395 )
                  {
                    Child = -1073741811;
                    CmpRecordParseFailure(a7, 9728LL, 3221225485LL);
                    goto LABEL_427;
                  }
                  if ( CmpIsKeyStackDeleted(v194) || !CmRmIsKcbStackVisible(v194) )
                  {
                    Child = -1073741772;
                    CmpRecordParseFailure(a7, 9984LL, 3221225524LL);
                    goto LABEL_427;
                  }
                  if ( (*(_DWORD *)(*(_QWORD *)(v19 + 72) + 184LL) & 0x20000) != 0 )
                  {
                    Child = -1073741772;
                    CmpRecordParseFailure(a7, 10240LL, 3221225524LL);
                    goto LABEL_427;
                  }
                  if ( (*(_DWORD *)a7 & 1) == 0 )
                  {
                    if ( CmpLoadingSystemHivesActive
                      && (v19 = BugCheckParameter4, (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread())
                      && *(_QWORD *)(BugCheckParameter4 + 32) == CmpMasterHive
                      && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x7FE00000) == 0x600000
                      && (v248 = CmpGetComponentNameAtIndex(v448, (unsigned int)v205),
                          (unsigned __int8)CmpWaitForHiveMount(v248, v249, v250, a7 + 136)) )
                    {
                      *(_DWORD *)a7 |= 0x100u;
                      Child = 259;
                      CmpRecordParseFailure(a7, 10496LL, 259LL);
                    }
                    else
                    {
                      Child = -1073741772;
                      CmpRecordParseFailure(a7, 10752LL, 3221225524LL);
                    }
                    goto LABEL_427;
                  }
                  if ( *(_QWORD *)(v19 + 32) == CmpMasterHive && CmpNoMasterCreates )
                  {
                    v19 = BugCheckParameter4;
                    if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread() )
                    {
                      if ( CmpLoadingSystemHivesActive
                        && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x7FE00000) == 0x600000
                        && (v251 = CmpGetComponentNameAtIndex(v448, (unsigned int)v205),
                            (unsigned __int8)CmpWaitForHiveMount(v251, v252, v253, a7 + 136)) )
                      {
                        *(_DWORD *)a7 |= 0x100u;
                        Child = 259;
                        CmpRecordParseFailure(a7, 11008LL, 259LL);
                      }
                      else
                      {
                        Child = -1073741811;
                        CmpRecordParseFailure(a7, 11264LL, 3221225485LL);
                      }
                      goto LABEL_427;
                    }
                    v206 = v405;
                    v401 = BugCheckParameter4;
                  }
                  v254 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(v448, (unsigned int)v205);
                  v255 = *(_QWORD *)v406;
                  LOBYTE(v256) = 1;
                  v257 = (int)v254;
                  v258 = CmpDoWritethroughReparse(v19, (int)v157, v194, v256, v254, a7, *(__int64 *)v406);
                  Child = v258;
                  if ( v258 != -1073741199 )
                  {
                    CmpRecordParseFailure(a7, 11392LL, v258);
                    goto LABEL_427;
                  }
                  v259 = CmpCreateKeyBody(v19, 0, (__int64)v157, (__int64)&Object, (__int64)&v391[3]);
                  Child = v259;
                  if ( v259 < 0 )
                  {
                    CmpRecordParseFailure(a7, 11456LL, (unsigned int)v259);
                    goto LABEL_427;
                  }
                  if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
                  {
                    CmpAttachToRegistryProcess((PRKAPC_STATE)(a7 + 168));
                    *(_DWORD *)(a7 + 160) |= 1u;
                  }
                  if ( *(_DWORD *)(*(_QWORD *)(v19 + 72) + 40LL) == -1 )
                  {
                    v260 = *(_DWORD *)(a7 + 24) >> 2;
                    LOBYTE(v260) = (*(_DWORD *)(a7 + 24) & 4) != 0;
                    if ( !CmpCheckCreateAccessOnKcbStack(
                            v260,
                            v194,
                            a7,
                            AccessState,
                            v390,
                            16 * (*(_DWORD *)(a7 + 24) & 2),
                            v260,
                            v206,
                            Object,
                            1,
                            &Child) )
                    {
                      v19 = BugCheckParameter4;
                      if ( KeGetCurrentThread()->PreviousMode == 1 )
                      {
                        v261 = PsGetCurrentThreadProcess();
                        ProcessServerSilo = PsGetProcessServerSilo((__int64)v261);
                        ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
                        if ( (unsigned int)MmGetSessionIdEx((__int64)v261) != ServerSiloServiceSessionId )
                        {
                          if ( (unsigned __int8)CmpCheckKeyOwnerForPca(v413, v405) )
                          {
                            v264 = *(_QWORD *)(v19 + 72);
                            LOBYTE(v394) = 1;
                            AccessState = 0LL;
                            CmpConstructNameWithStatus(v264, &AccessState);
                            v421 = AccessState;
                          }
                        }
                      }
                      CmpRecordParseFailure(a7, 11520LL, (unsigned int)Child);
                      goto LABEL_427;
                    }
                    CmpUnlockKcbStack(v157);
                    CmpUnlockKcbStack(v194);
                    if ( v391[1] )
                    {
                      CmpUnlockKcb(*(_QWORD *)(v412 + 8));
                      v391[1] = 0;
                    }
                    LOBYTE(v265) = 1;
                    v266 = CmpPromoteKey(v194, 0LL, v265);
                    Child = v266;
                    if ( v266 < 0 )
                    {
                      if ( v266 == -1073741444 )
                        v266 = -1073741772;
                      Child = v266;
                      CmpRecordParseFailure(a7, 11776LL, (unsigned int)v266);
                      goto LABEL_721;
                    }
                  }
                  else
                  {
                    CmpUnlockKcbStack(v157);
                    CmpUnlockKcbStack(v194);
                    CmpLockKcbStackTopExclusiveRestShared(v194);
                  }
                  v391[4] = 1;
                  CmpLockKcbStackTopExclusiveRestShared((__int64)v157);
                  if ( !CmRmIsKcbStackVisible((__int64)v157) )
                  {
                    Child = -1073741772;
                    CmpRecordParseFailure(a7, 12032LL, 3221225524LL);
                    goto LABEL_427;
                  }
                  if ( (*(_DWORD *)(v19 + 8) & 0x20000) != 0 )
                  {
                    Child = -1073741772;
                    CmpRecordParseFailure(a7, 12160LL, 3221225524LL);
                    goto LABEL_427;
                  }
                  if ( CmpIsKeyStackDeleted((__int64)v157) )
                  {
                    if ( CmpIsKeyStackDeleted(v194) || !CmRmIsKcbStackVisible(v194) )
                    {
                      Child = -1073741772;
                      CmpRecordParseFailure(a7, 12288LL, 3221225524LL);
                      goto LABEL_427;
                    }
                    v267 = *(_QWORD *)(v19 + 72);
                    if ( (*(_DWORD *)(v267 + 184) & 0x20000) != 0 )
                    {
                      Child = -1073741772;
                      CmpRecordParseFailure(a7, 12544LL, 3221225524LL);
                      goto LABEL_427;
                    }
                    GrantedAccess = (PACCESS_MASK)v255;
                    v268 = AccessState;
                    Logic = CmpVEExecuteCreateLogic(
                              v267,
                              v19,
                              v257,
                              (_DWORD)AccessState,
                              v390,
                              16 * (*(_DWORD *)(a7 + 24) & 2u),
                              v206,
                              a7,
                              (__int64)GrantedAccess);
                    Child = Logic;
                    if ( Logic == -1073741739 )
                    {
                      *(_DWORD *)a7 |= 0x400u;
                      Child = -1073741267;
                      CmpRecordParseFailure(a7, 12672LL, 3221226029LL);
                      goto LABEL_427;
                    }
                    if ( Logic != -1073741199 )
                    {
                      CmpRecordParseFailure(a7, 12736LL, Logic);
                      goto LABEL_427;
                    }
                    v270 = *(_DWORD *)(a7 + 24) >> 2;
                    LOBYTE(v270) = (*(_DWORD *)(a7 + 24) & 4) != 0;
                    if ( CmpCheckCreateAccessOnKcbStack(
                           v270,
                           v194,
                           a7,
                           v268,
                           v390,
                           16 * (*(_DWORD *)(a7 + 24) & 2),
                           v270,
                           v206,
                           Object,
                           0,
                           &Child) )
                    {
                      LOBYTE(v271) = 1;
                      v276 = CmpEnlistKeyBody((_DWORD)Object, v19, v206, v271, (__int64)v157);
                      Child = v276;
                      if ( v276 < 0 )
                      {
                        CmpRecordParseFailure(a7, 12928LL, (unsigned int)v276);
                        goto LABEL_427;
                      }
                      v277 = CmpCreateChild(
                               v194,
                               (_DWORD)v157,
                               (_DWORD)v268,
                               v257,
                               a7,
                               8 * (*(_WORD *)(a7 + 24) & 2u),
                               0,
                               0,
                               v206);
                      Child = v277;
                      if ( v277 < 0 )
                      {
                        CmpRecordParseFailure(a7, 12992LL, (unsigned int)v277);
                        goto LABEL_427;
                      }
                      v233 = v390;
                      v228 = v268;
                      v231 = 0;
                      *(_DWORD *)(a7 + 32) = 1;
                      goto LABEL_605;
                    }
                    v19 = BugCheckParameter4;
                    if ( KeGetCurrentThread()->PreviousMode == 1 )
                    {
                      v272 = PsGetCurrentThreadProcess();
                      v273 = PsGetProcessServerSilo((__int64)v272);
                      v274 = PsGetServerSiloServiceSessionId(v273);
                      if ( (unsigned int)MmGetSessionIdEx((__int64)v272) != v274 )
                      {
                        if ( (unsigned __int8)CmpCheckKeyOwnerForPca(v413, v405) )
                        {
                          v275 = *(_QWORD *)(v19 + 72);
                          LOBYTE(v394) = 1;
                          v422 = 0LL;
                          CmpConstructNameWithStatus(v275, &v422);
                          v421 = (PACCESS_STATE)v422;
                        }
                      }
                    }
                    CmpRecordParseFailure(a7, 12800LL, (unsigned int)Child);
                    goto LABEL_427;
                  }
                  if ( !(unsigned __int8)CmpIsKeyStackSymlink(v157) || _bittest((const signed __int32 *)a7, 9u) )
                  {
                    if ( (*(_DWORD *)(v19 + 184) & 0x20000) != 0 )
                    {
                      Child = -1073741772;
                      CmpRecordParseFailure(a7, 13568LL, 3221225524LL);
                      goto LABEL_427;
                    }
                    if ( (*(_DWORD *)(a7 + 24) & 2) != 0 )
                    {
                      Child = -1073741771;
                      CmpRecordParseFailure(a7, 13824LL, 3221225525LL);
                      goto LABEL_427;
                    }
                    v280 = CmpDoWritethroughReparse(v19, (int)v157, v194, 0, 0LL, a7, v255);
                    Child = v280;
                    if ( v280 != -1073741199 )
                    {
                      CmpRecordParseFailure(a7, 13888LL, v280);
                      goto LABEL_427;
                    }
                    v233 = v390;
                    LOBYTE(v281) = 1;
                    v282 = CmpVEExecuteOpenLogic(
                             v19,
                             a7,
                             v281,
                             v255,
                             v390,
                             (__int64)&AccessState->SubjectSecurityContext);
                    Child = v282;
                    if ( v282 != -1073741199 )
                    {
                      CmpRecordParseFailure(a7, 13952LL, v282);
                      goto LABEL_427;
                    }
                    v283 = CmpCreateKeyBody(v19, 3, (__int64)v157, (__int64)&Object, (__int64)&v391[3]);
                    Child = v283;
                    if ( v283 < 0 )
                    {
                      CmpRecordParseFailure(a7, 14016LL, (unsigned int)v283);
                      goto LABEL_427;
                    }
                    v231 = 0;
                    goto LABEL_604;
                  }
                  if ( (*(_DWORD *)(a7 + 24) & 2) != 0 )
                  {
                    Child = -1073741771;
                    CmpRecordParseFailure(a7, 13056LL, 3221225525LL);
                    goto LABEL_427;
                  }
                  CmpUnlockKcbStack(v194);
                  if ( v391[1] )
                  {
                    CmpUnlockKcb(*(_QWORD *)(v412 + 8));
                    v391[1] = 0;
                  }
                  if ( v391[0] )
                  {
                    CmpUnlockHashEntryByKcb(v19);
                    v391[0] = 0;
                  }
                  v278 = CmpGetSymbolicLinkTarget(
                           (_DWORD)v157,
                           (unsigned int)v448,
                           0,
                           0,
                           v206,
                           a7,
                           (__int64)&v425,
                           v255,
                           a7 + 88,
                           (__int64)&v414);
                  Child = v278;
                  if ( v278 >= 0 )
                  {
                    *(_DWORD *)a7 &= ~8u;
                    if ( !*(_QWORD *)(a7 + 64) )
                    {
                      v279 = *(_QWORD *)(v414 + 32);
                      if ( (*(_DWORD *)(v279 + 4112) & 1) != 0 )
                        *(_QWORD *)(a7 + 64) = v279;
                    }
                    Child = 260;
                    CmpRecordParseFailure(a7, 13440LL, 260LL);
                  }
                  else
                  {
                    CmpRecordParseFailure(a7, 13312LL, (unsigned int)v278);
                  }
LABEL_721:
                  if ( v391[1] )
                    CmpUnlockKcb(*(_QWORD *)(v412 + 8));
                  if ( v396 )
                    CmpUnlockHashEntry(*(PVOID *)(v9 + 48));
                  goto LABEL_726;
                }
                *(_DWORD *)&v391[7] = v137;
                while ( 2 )
                {
                  v161 = *((_WORD *)v157 + 1);
                  v162 = v141;
                  if ( (__int16)v141 <= v161 )
                  {
                    do
                    {
                      if ( v162 < 2 )
                        v163 = v157[v162 + 1];
                      else
                        v163 = *(_QWORD *)(v157[3] + 8LL * v162 - 16);
                      CmpLockKcbShared(v163);
                      v161 = *((_WORD *)v157 + 1);
                      ++v162;
                    }
                    while ( v162 <= v161 );
                    v141 = 0LL;
                  }
                  if ( (*(_DWORD *)(v19 + 8) & 0x20000) != 0 )
                  {
                    Child = -1073741772;
                    CmpRecordParseFailure(a7, 3968LL, 3221225524LL);
                    goto LABEL_427;
                  }
                  v431 = v141;
                  if ( v161 >= 0 )
                  {
                    while ( 1 )
                    {
                      if ( v161 < 2 )
                        v164 = v157[v161 + 1];
                      else
                        v164 = *(_QWORD *)(v157[3] + 8LL * v161 - 16);
                      if ( *(_WORD *)(v164 + 66) && *(_BYTE *)(v164 + 65) == 1 )
                        goto LABEL_303;
                      if ( *(_DWORD *)(v164 + 40) != -1 )
                        break;
                      if ( --v161 < 0 )
                        goto LABEL_303;
                    }
                    if ( !v151 )
                    {
LABEL_318:
                      v171 = *((_WORD *)v157 + 1);
                      if ( (v171 & 0x8000u) != 0 )
                      {
LABEL_324:
                        v173 = v141;
                        if ( (__int16)v141 > *((__int16 *)v157 + 1) )
                          goto LABEL_331;
                      }
                      else
                      {
                        while ( 1 )
                        {
                          v172 = v171 < 2u ? v157[v171 + 1] : *(_QWORD *)(v157[3] + 8LL * v171 - 16);
                          if ( *(_DWORD *)(v172 + 40) != -1 )
                            break;
                          if ( (--v171 & 0x8000u) != 0 )
                            goto LABEL_324;
                        }
                        if ( (*(_DWORD *)(v172 + 184) & 0x100000) != 0 )
                        {
                          v189 = CmpGetSymbolicLinkTarget(
                                   (_DWORD)v157,
                                   (unsigned int)v448,
                                   v399,
                                   (unsigned __int16)v137,
                                   v151,
                                   a7,
                                   (__int64)&v425,
                                   *(__int64 *)v406,
                                   a7 + 88,
                                   (__int64)&v414);
                          Child = v189;
                          if ( v189 >= 0 )
                          {
                            *(_DWORD *)a7 &= ~8u;
                            if ( !*(_QWORD *)(a7 + 64) )
                            {
                              v190 = *(_QWORD *)(v414 + 32);
                              if ( (*(_DWORD *)(v190 + 4112) & 1) != 0 )
                                *(_QWORD *)(a7 + 64) = v190;
                            }
                            v191 = *(unsigned __int8 *)(a7 + 258);
                            Child = 260;
                            if ( (unsigned __int8)v191 < 4u )
                            {
                              *(_DWORD *)(a7 + 8 * v191 + 260) = 260;
                              *(_DWORD *)(a7 + 8LL * (unsigned __int8)(*(_BYTE *)(a7 + 258))++ + 264) = 4864;
                            }
                          }
                          else
                          {
                            CmpRecordParseFailure(a7, 4608LL, (unsigned int)v189);
                          }
                          goto LABEL_726;
                        }
                        v173 = v141;
                      }
                      do
                      {
                        if ( v173 < 2 )
                          v174 = v157[v173 + 1];
                        else
                          v174 = *(_QWORD *)(v157[3] + 8LL * v173 - 16);
                        CmpUnlockKcb(v174);
                        ++v173;
                      }
                      while ( v173 <= *((__int16 *)v157 + 1) );
LABEL_331:
                      v175 = v399;
                      v176 = (unsigned int)(__int16)v399;
                      if ( (unsigned int)v176 >= 8 )
                      {
                        v178 = (const UNICODE_STRING *)(*(_QWORD *)&v448[40] + 16 * ((unsigned int)(v176 - 8) + 6LL));
                        v177 = *(_DWORD *)(*(_QWORD *)&v448[40] + 4LL * (unsigned int)(v176 - 8));
                      }
                      else
                      {
                        v177 = v448[v176];
                        v178 = (const UNICODE_STRING *)&v448[4 * (unsigned int)v176 + 8];
                      }
                      v179 = (*(_DWORD *)a7 & 1) != 0 && (_DWORD)v176 == *(_DWORD *)&v391[7] - 1;
                      *(_DWORD *)AccessMode = v177 + 37 * *(_DWORD *)(v19 + 16);
                      Child = CmpWalkOneLevel(
                                v19,
                                (int)v157,
                                (int)&v415,
                                (int)v156,
                                (__int64)&v398,
                                v178,
                                v177,
                                *(ULONG_PTR *)AccessMode,
                                v151,
                                v179,
                                a7);
                      v180 = Child;
                      if ( Child == -1073741772 )
                      {
                        if ( !CmpLoadingSystemHivesActive )
                          goto LABEL_362;
                        v19 = BugCheckParameter4;
                        if ( (struct _KTHREAD *)CmpMountThread == KeGetCurrentThread()
                          || *(_QWORD *)(BugCheckParameter4 + 32) != CmpMasterHive )
                        {
                          v180 = Child;
                          goto LABEL_362;
                        }
                        if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 0x7FE00000) == 0x600000 && (__int16)v175 > 0 )
                        {
                          v181 = CmpGetComponentNameAtIndex(v448, (unsigned int)((__int16)v175 - 1));
                          if ( (unsigned __int8)CmpWaitForHiveMount(v181, v182, v183, a7 + 136) )
                          {
                            *(_DWORD *)a7 |= 0x100u;
                            Child = 259;
                            CmpRecordParseFailure(a7, 5120LL, 259LL);
                            goto LABEL_726;
                          }
                        }
                        if ( (*(_DWORD *)(v19 + 8) & 0x7FE00000) == 0x400000 )
                        {
                          v184 = CmpGetComponentNameAtIndex(v448, (unsigned int)(__int16)v175);
                          if ( (unsigned __int8)CmpWaitForHiveMount(v184, v185, v186, a7 + 136) )
                          {
                            *(_DWORD *)a7 |= 0x100u;
                            Child = 259;
                            CmpRecordParseFailure(a7, 5376LL, 259LL);
                            goto LABEL_726;
                          }
                        }
                        v180 = Child;
                      }
                      if ( v180 >= 0 )
                      {
                        v187 = v415;
                        ++*(_BYTE *)(a7 + 257);
                        *(_QWORD *)(a7 + 240) = v187;
                        *(_QWORD *)(a7 + 248) = v187;
                        v141 = 0LL;
                        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v19, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                          KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
                        LOWORD(v175) = v175 + 1;
                        v19 = v415;
                        v137 = v397[0];
                        v391[0] = v398;
                        v188 = v157;
                        v401 = v415;
                        v157 = (__int64 *)v156;
                        BugCheckParameter4 = v415;
                        v156 = (int *)v188;
                        v415 = 0LL;
                        v398 = 0;
                        v399 = v175;
                        if ( (__int16)v175 < v397[0] )
                        {
                          v151 = v405;
                          continue;
                        }
                        goto LABEL_366;
                      }
LABEL_362:
                      v192 = *(unsigned __int8 *)(a7 + 258);
                      if ( (unsigned __int8)v192 < 4u )
                      {
                        *(_DWORD *)(a7 + 8 * v192 + 260) = v180;
                        *(_DWORD *)(a7 + 8LL * (unsigned __int8)(*(_BYTE *)(a7 + 258))++ + 264) = 5504;
                      }
                      goto LABEL_726;
                    }
                    v168 = CmListGetNextElement(v157[1] + 208, &v431, 32LL);
                    if ( !v168 )
                      goto LABEL_317;
                    while ( 1 )
                    {
                      v170 = *(_DWORD *)(v168 + 68);
                      if ( v170 == 2 || v170 == 11 )
                        break;
                      v168 = CmListGetNextElement(v169 + 208, &v431, 32LL);
                      if ( !v168 )
                        goto LABEL_317;
                    }
                    if ( !CmEqualTrans(*(_QWORD *)(v168 + 56), v151) )
                    {
LABEL_317:
                      LOWORD(v141) = 0;
                      goto LABEL_318;
                    }
                  }
                  break;
                }
LABEL_303:
                if ( CmpLoadingSystemHivesActive
                  && (v19 = BugCheckParameter4, (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread())
                  && *(_QWORD *)(BugCheckParameter4 + 32) == CmpMasterHive
                  && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x7FE00000) == 0x600000
                  && (__int16)v399 > 0
                  && (v165 = CmpGetComponentNameAtIndex(v448, (unsigned int)((__int16)v399 - 1)),
                      (unsigned __int8)CmpWaitForHiveMount(v165, v166, v167, a7 + 136)) )
                {
                  *(_DWORD *)a7 |= 0x100u;
                  Child = 259;
                  CmpRecordParseFailure(a7, 3840LL, 259LL);
                }
                else
                {
                  Child = -1073741772;
                  CmpRecordParseFailure(a7, 4096LL, 3221225524LL);
                }
                goto LABEL_427;
              }
LABEL_230:
              _m_prefetchw(&CmpHiveListHeadLock);
              v131 = CmpHiveListHeadLock - 16;
              if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v131 = 0LL;
              if ( (CmpHiveListHeadLock & 2) != 0
                || (v132 = CmpHiveListHeadLock,
                    v132 != _InterlockedCompareExchange64(
                              (volatile signed __int64 *)&CmpHiveListHeadLock,
                              v131,
                              CmpHiveListHeadLock)) )
              {
                ExfReleasePushLock(&CmpHiveListHeadLock);
              }
              KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
              v19 = BugCheckParameter4;
            }
            if ( PsIsCurrentThreadInServerSilo(v120, v119) && (unsigned int)dword_140C04328 > 5 )
            {
              if ( tlgKeywordOn((__int64)&dword_140C04328, 0x200000010000LL) )
              {
                v412 = 0x1000000LL;
                v450 = &v412;
                v451 = 8LL;
                tlgWriteAgg((__int64)&dword_140C04328, (unsigned __int8 *)&byte_1400368AD, v133, 3u, &v449);
                v134 = dword_140C04328;
              }
              if ( v134 > 5 )
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140C04328,
                  (unsigned __int8 *)&byte_1400368FF,
                  0LL,
                  0LL,
                  2u,
                  &v452);
            }
            Child = -1073741790;
            CmpRecordParseFailure(a7, 2560LL, 3221225506LL);
            goto LABEL_726;
          }
          v137 = *(_WORD *)&v391[7];
          goto LABEL_250;
        }
LABEL_194:
        v118 = -1073741199;
        goto LABEL_195;
      }
    }
LABEL_117:
    Child = v82;
    CmpRecordParseFailure(a7, 1280LL, (unsigned int)v82);
    v19 = v401;
LABEL_728:
    if ( v392 )
      CmpUnlockHashEntryByKcb(BugCheckParameter2);
    goto LABEL_730;
  }
  if ( v20 != v21 )
  {
    CmpLockRegistry(v20, v21, v14, 0LL);
    CmpDereferenceKeyControlBlock(v15);
    BugCheckParameter2 = 0LL;
    CmpUnlockRegistry(0LL, v22, v23, v24);
LABEL_81:
    v391[2] = 0;
LABEL_82:
    v17 = 0LL;
    goto LABEL_83;
  }
  if ( (*(_DWORD *)a7 & 0x400) != 0 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry(v20, v21, v14, 0LL);
  v25 = *(_QWORD *)(v15 + 296);
  v391[2] = 1;
  v26 = v25 & 1;
  if ( (v25 & 1) != 0 )
    v25 &= ~1uLL;
  if ( !v25
    || v26
    || (v27 = PsGetCurrentServerSiloGlobals(),
        v28 = *(_QWORD *)v406,
        v29 = *(char **)(v25 + 8),
        Flink = (__int64)v27[77].Flink,
        v31 = *(unsigned __int16 *)v25,
        **(_WORD **)v406 < (unsigned __int16)v31) )
  {
LABEL_80:
    CmpDereferenceKeyControlBlock(BugCheckParameter2);
    BugCheckParameter2 = 0LL;
    CmpUnlockRegistry(v73, v72, v74, v75);
    v13 = v410;
    v401 = BugCheckParameter4;
    goto LABEL_81;
  }
  v32 = &v29[v31];
  if ( v29 >= &v29[v31] )
    goto LABEL_26;
  v33 = *(_QWORD *)(*(_QWORD *)v406 + 8LL) - (_QWORD)v29;
  do
  {
    v34 = *(_WORD *)&v29[v33];
    if ( *(_WORD *)v29 != v34 )
    {
      NLS_UPCASE(Flink, v34);
      v36 = NLS_UPCASE(Flink, v35);
      if ( v36 != v37 )
      {
        v11 = v399;
        goto LABEL_80;
      }
    }
    v29 += 2;
  }
  while ( v29 < v32 );
  v11 = v399;
  v28 = *(_QWORD *)v406;
LABEL_26:
  v38 = (_WORD *)(*(_QWORD *)(v28 + 8) + 2 * ((unsigned __int64)*(unsigned __int16 *)v25 >> 1));
  v39 = *(_WORD *)v28 - *(_WORD *)v25;
  v40 = *(_WORD *)(v28 + 2) - *(_WORD *)v25;
  v410.m128i_i64[1] = (__int64)v38;
  v410.m128i_i16[0] = v39;
  v410.m128i_i16[1] = v40;
  if ( v39 )
  {
    do
    {
      if ( *v38 != 92 )
        break;
      v39 -= 2;
      v40 -= 2;
      ++v38;
      v410.m128i_i16[0] = v39;
      v410.m128i_i16[1] = v40;
    }
    while ( v39 );
    v410.m128i_i64[1] = (__int64)v38;
  }
  v41 = ((*(_DWORD *)(BugCheckParameter2 + 8) >> 21) & 0x3FF) - 1;
  if ( (*(_DWORD *)a7 & 1) == 0 || v39 )
  {
    v45 = BugCheckParameter2;
  }
  else
  {
    v42 = *(_WORD *)v25;
    v43 = *(_QWORD *)(v28 + 8);
    v44 = *(unsigned __int16 *)v25;
    v45 = BugCheckParameter2;
    v46 = *(_WORD *)v28 - v42;
    v47 = *(_WORD *)(v28 + 2) - v42;
    v410.m128i_i16[0] = v46;
    v410.m128i_i16[1] = v47;
    v48 = v43 + 2 * (v44 >> 1);
    v49 = *(_QWORD *)(BugCheckParameter2 + 80);
    v410.m128i_i64[1] = v48;
    v50 = *(_WORD *)(v49 + 24);
    if ( (*(_DWORD *)v49 & 1) != 0 )
    {
      v50 *= 2;
      v51 = v48 - 2LL * *(unsigned __int16 *)(v49 + 24);
      v52 = v50 + v46;
    }
    else
    {
      v52 = v50 + v46;
      v51 = v48 - 2 * ((unsigned __int64)*(unsigned __int16 *)(v49 + 24) >> 1);
    }
    v410.m128i_i16[1] = v50 + v47;
    v11 = 1;
    v410.m128i_i16[0] = v52;
    v399 = 1;
    --v41;
    v410.m128i_i64[1] = v51;
  }
  v53 = CmpComputeComponentHashes(&v410, v397, v448);
  Child = v53;
  if ( v53 < 0 )
  {
    CmpRecordParseFailure(a7, 512LL, (unsigned int)v53);
    v19 = BugCheckParameter4;
    goto LABEL_730;
  }
  *(_DWORD *)&v391[7] = (unsigned __int16)v397[0];
  if ( (unsigned int)(v397[0] + v41) > 0x20 )
  {
    Child = -1073741811;
    CmpRecordParseFailure(a7, 768LL, 3221225485LL);
    v19 = BugCheckParameter4;
    goto LABEL_730;
  }
  v54 = 0;
  if ( !v397[0] )
  {
LABEL_47:
    if ( v11 == v397[0] )
    {
      CmpLockHashEntrySharedByKcb(v45);
      v56 = 1;
      v392 = 1;
    }
    else
    {
      v56 = 0;
    }
    CmpLockKcbShared(v45);
    v57 = (*(_DWORD *)(v45 + 8) & 0x20000) == 0;
    v427 = 0LL;
    v428 = 0LL;
    if ( !v57 )
    {
LABEL_76:
      CmpUnlockKcb(v45);
      if ( v56 )
      {
        CmpUnlockHashEntryByKcb(v45);
        v392 = 0;
      }
      CmpDereferenceKeyControlBlock(v45);
      v13 = *a6;
      v11 = 0;
      BugCheckParameter2 = 0LL;
      v399 = 0;
      v410 = v13;
      CmpCleanupPathInfo(v448);
      memset(v448, 0, 0xA8uLL);
      v401 = BugCheckParameter4;
      goto LABEL_82;
    }
    v58 = *(__int16 *)(v45 + 66);
    v59 = 0LL;
    WORD1(v427) = -1;
    if ( v58 < 2
      || (v59 = (struct _PRIVILEGE_SET *)CmpAllocatePool(256LL, 8LL * (unsigned int)(v58 - 1), 892751171LL)) != 0LL )
    {
      v60 = *(__int16 *)(v45 + 66);
      LOWORD(v427) = v58;
      *((_QWORD *)&v428 + 1) = v59;
      WORD1(v427) = v60;
      if ( (_WORD)v60 )
      {
        v61 = *(_QWORD *)(v45 + 192);
        if ( !v61 )
          goto LABEL_59;
        do
        {
          CmpSetKcbAtLayerHeight(&v427, v60, *(_QWORD *)(v61 + 16));
          v61 = *(_QWORD *)(v62 + 24);
          LOWORD(v60) = v60 - 1;
        }
        while ( v61 );
      }
      else
      {
        *((_QWORD *)&v427 + v60 + 1) = v45;
      }
    }
    v59 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v428 + 1);
LABEL_59:
    for ( ii = WORD1(v427); (ii & 0x8000u) == 0; --ii )
    {
      v64 = ii < 2u ? *((_QWORD *)&v427 + ii + 1) : *((_QWORD *)v59 + ii - 2);
      if ( *(_WORD *)(v64 + 66) && *(_BYTE *)(v64 + 65) == 1 )
        break;
      if ( *(_DWORD *)(v64 + 40) != -1 )
      {
        v65 = 0;
        goto LABEL_68;
      }
    }
    v65 = 1;
LABEL_68:
    if ( v59 )
      CmSiFreeMemory(v59);
    if ( !v65 && (*(_DWORD *)(v45 + 8) & 0x40000) == 0 )
    {
      CmpUnlockKcb(v45);
      v68 = v45;
      LOWORD(v45) = v410.m128i_i16[0];
      v69 = *(_WORD *)&v391[7];
      v401 = BugCheckParameter4;
      goto LABEL_73;
    }
    goto LABEL_76;
  }
  while ( 1 )
  {
    v55 = v54 >= 8 ? (int *)(*(_QWORD *)&v448[40] + 16 * (v54 - 8 + 6LL)) : &v448[4 * v54 + 8];
    if ( *(_WORD *)v55 > 0x200u )
      break;
    if ( ++v54 >= v397[0] )
      goto LABEL_47;
  }
  Child = -1073741811;
  CmpRecordParseFailure(a7, 1024LL, 3221225485LL);
  v19 = BugCheckParameter4;
LABEL_730:
  if ( v438[1] )
    CmSiFreeMemory(v438[1]);
  if ( v440[1] )
    CmSiFreeMemory(v440[1]);
  if ( v444[1] )
    CmSiFreeMemory(v444[1]);
  v331 = v415;
  if ( v415 )
  {
    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)v19);
    CmpDereferenceKeyControlBlock(v331);
    goto LABEL_738;
  }
  if ( v19 )
  {
    v436 = 0LL;
    CmpInitializeDelayDerefContext(&v436);
    v341 = *(_QWORD *)v19;
    v342 = *(_QWORD *)(v19 + 32);
    if ( *(_QWORD *)v19 > 1uLL )
    {
      while ( 1 )
      {
        v343 = v341 - 1;
        v344 = v341;
        v345 = v341 == 3 && (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v342 + 2944) == 1;
        v346 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter4, v343, v341);
        v341 = v346;
        if ( v346 == v344 )
          break;
        if ( v346 <= 1 )
          goto LABEL_767;
      }
      if ( v346 < v343 )
        KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter4, 0LL, 0LL);
      if ( v345 )
        CmpDoQueueLateUnloadWorker(v342);
      goto LABEL_738;
    }
LABEL_767:
    v347 = *(_QWORD *)(BugCheckParameter4 + 32);
    v348 = *(_DWORD *)(BugCheckParameter4 + 16);
    v349 = (unsigned __int64 *)(*(_QWORD *)(v347 + 1648)
                              + 24
                              * ((unsigned int)(*(_DWORD *)(v347 + 1656) - 1) & ((101027 * (v348 ^ (v348 >> 9))) ^ ((unsigned __int64)(101027 * (v348 ^ (v348 >> 9))) >> 9))));
    v350 = KeAbPreAcquire((__int64)v349, 0LL);
    v351 = v350;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v349, 0LL) )
      ExfAcquirePushLockExclusiveEx(v349, v350, (__int64)v349);
    if ( v351 )
      *(_BYTE *)(v351 + 18) = 1;
    v349[1] = (unsigned __int64)KeGetCurrentThread();
    _m_prefetchw((const void *)(v347 + 4232));
    v352 = *(_DWORD *)(v347 + 4232);
    if ( !v352 )
LABEL_835:
      KeBugCheckEx(0x51u, 0x17uLL, v347, 8uLL, BugCheckParameter4);
    while ( 1 )
    {
      v353 = v352;
      v352 = _InterlockedCompareExchange((volatile signed __int32 *)(v347 + 4232), v352 + 1, v352);
      if ( v353 == v352 )
        break;
      if ( !v352 )
        goto LABEL_835;
    }
    v354 = (unsigned __int64 *)(BugCheckParameter4 + 48);
    v355 = KeAbPreAcquire(BugCheckParameter4 + 48, 0LL);
    v356 = v355;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v354, 0LL) )
      ExfAcquirePushLockExclusiveEx(v354, v355, (__int64)v354);
    if ( v356 )
      *(_BYTE *)(v356 + 18) = 1;
    v357 = BugCheckParameter4;
    v358 = 0LL;
    *(_QWORD *)(BugCheckParameter4 + 56) = KeGetCurrentThread();
    v359 = *(_QWORD *)(v357 + 192);
    if ( v359 )
    {
      v360 = *(_QWORD *)(v359 + 24);
      if ( v360 )
      {
        v358 = *(_QWORD *)(v360 + 16);
        CmpUnlockKcb(v357);
        CmpLockKcbExclusive(v358);
        CmpLockKcbExclusive(v357);
      }
    }
    v361 = *(_QWORD *)(v357 + 32);
    v362 = _InterlockedDecrement64((volatile signed __int64 *)v357);
    if ( v362 == 2 )
    {
      v363 = BugCheckParameter4;
      if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v361 + 2944) == 1 )
        CmpDoQueueLateUnloadWorker(v361);
    }
    else
    {
      if ( !v362 )
      {
        if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 )
        {
          v364 = *(_QWORD *)(v357 + 32);
          CmpCleanUpKcbCacheWithLock(BugCheckParameter4);
          v365 = KeGetCurrentThread();
          *(_DWORD *)(v364 + 160) |= 0x80u;
          *(_QWORD *)(v364 + 4176) = v365;
          *(_DWORD *)(v364 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v364 + 4236), 1u) & 0x7F) + 4240) = 31;
          if ( (*(_DWORD *)(v364 + 160) & 0x20) == 0
            && _InterlockedExchangeAdd((volatile signed __int32 *)(v364 + 4232), 0xFFFFFFFF) == 1 )
          {
            CmpDeleteHive((PVOID)v364);
          }
        }
        else
        {
          v370 = 0;
          v371 = *(_DWORD *)(BugCheckParameter4 + 8);
          if ( (v371 & 0x20) == 0 )
            v370 = (v371 & 0x20000) == 0;
          if ( CmpHoldLazyFlush
            && (*(_DWORD *)(BugCheckParameter4 + 184) & 0x100000) == 0
            && (*(_DWORD *)(BugCheckParameter4 + 8) & 8) == 0
            || !v370 )
          {
            CmpCleanUpKcbCacheWithLock(BugCheckParameter4);
            v363 = BugCheckParameter4;
            if ( *(struct _KTHREAD **)(BugCheckParameter4 + 56) != KeGetCurrentThread()
              && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x80000) != 0 )
            {
              CmpFreeKeyControlBlock(BugCheckParameter4);
            }
            goto LABEL_795;
          }
          v372 = KeAbPreAcquire((__int64)&CmpDelayedCloseTableLock, 0LL);
          v373 = v372;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
            ExpAcquireFastMutexContended((__int64)&CmpDelayedCloseTableLock, v372);
          if ( v373 )
            *(_BYTE *)(v373 + 18) = 1;
          v375 = BugCheckParameter4;
          *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
          *((_DWORD *)&CmpDelayedCloseTableLock + 12) = CurrentIrql;
          v376 = (_QWORD *)(BugCheckParameter4 + 224);
          if ( (_QWORD *)*v376 != v376 )
            KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter4, 0LL, 0LL);
          v377 = CmpDelayedLRUListHead;
          if ( *(__int64 **)(CmpDelayedLRUListHead + 8) != &CmpDelayedLRUListHead )
            __fastfail(3u);
          *v376 = CmpDelayedLRUListHead;
          v376[1] = &CmpDelayedLRUListHead;
          *(_QWORD *)(v377 + 8) = v376;
          CmpDelayedLRUListHead = (__int64)v376;
          *(_BYTE *)(v375 + 64) |= 2u;
          ++qword_140D552E8;
          v378 = *((unsigned __int8 *)&CmpDelayedCloseTableLock + 48);
          v379 = ++CmpDelayedCloseElements > (unsigned int)CmpDelayedCloseSize;
          *(&CmpDelayedCloseTableLock + 1) = 0LL;
          v380 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
          if ( v380 )
            ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayedCloseTableLock, v380);
          if ( KiIrqlFlags )
          {
            v381 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v381 <= 0xFu && (unsigned __int8)v378 <= 0xFu && v381 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v384 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v378 + 1));
              v57 = (v384 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v384;
              if ( v57 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
          __writecr8(v378);
          KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
          if ( v379 )
            CmpArmDelayedCloseTimer();
        }
      }
      v363 = BugCheckParameter4;
    }
LABEL_795:
    CmpUnlockKcb(v363);
    if ( v358 )
      CmpUnlockKcb(v358);
    v366 = (signed __int64 *)(*(_QWORD *)(v347 + 1648)
                            + 24
                            * ((unsigned int)(*(_DWORD *)(v347 + 1656) - 1) & ((101027 * (v348 ^ (v348 >> 9))) ^ ((unsigned __int64)(101027 * (v348 ^ (v348 >> 9))) >> 9))));
    v366[1] = 0LL;
    _m_prefetchw(v366);
    v367 = *v366;
    v368 = *v366 - 16;
    if ( (*v366 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v368 = 0LL;
    if ( (v367 & 2) != 0 || (v369 = *v366, v369 != _InterlockedCompareExchange64(v366, v368, v367)) )
      ExfReleasePushLock(v366);
    KeAbPostRelease((ULONG_PTR)v366);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v347 + 4232), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((PVOID)v347);
    CmpDrainDelayDerefContext((_QWORD **)&v436);
  }
LABEL_738:
  if ( BugCheckParameter2 )
    CmpDereferenceKeyControlBlock(BugCheckParameter2);
  v332 = *(_DWORD *)(v9 + 100);
  if ( v332 && (v332 & 2) != 0 )
  {
    LOBYTE(PreviouslyGrantedAccess) = 1;
    CmpSearchKeyControlBlockTreeEx(CmpSyncKcbCacheForHive, *(_QWORD *)(v9 + 112), &v425, 0LL, PreviouslyGrantedAccess);
    *(_DWORD *)(v9 + 100) &= ~2u;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v425);
  if ( v391[2] )
    CmpUnlockRegistry(v334, v333, v335, v336);
  v337 = v421;
  if ( v421 )
  {
    if ( (_BYTE)v394 && (unsigned __int8)CmpCheckExeOwnerForPca() )
      CmpPublishEventForPcaResolver(v9, v337);
    CmpFreeTransientPoolWithTag(v337, 0x624E4D43u);
  }
  if ( (*(_DWORD *)(v9 + 160) & 1) != 0 )
    CmpDetachFromRegistryProcess(v9 + 168);
  if ( Object )
    ObfDereferenceObject(Object);
  v338 = *(struct _SLIST_ENTRY **)&v448[40];
  if ( *(_QWORD *)&v448[40] )
  {
    v339 = KeGetCurrentPrcb();
    P = v339->PPLookasideList[8].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses, P = v339->PPLookasideList[8].L, ++P->TotalFrees, LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v338);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(struct _SLIST_ENTRY *))P->FreeEx)(v338);
    }
  }
  return (unsigned int)Child;
}
