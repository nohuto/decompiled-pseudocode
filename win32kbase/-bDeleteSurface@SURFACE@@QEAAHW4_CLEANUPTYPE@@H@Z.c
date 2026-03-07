__int64 __fastcall SURFACE::bDeleteSurface(__int64 a1, int a2, int a3)
{
  int v3; // r12d
  int *v4; // r14
  __int64 v5; // rdi
  void *v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  void *v9; // rdi
  void *v10; // rax
  __int128 v11; // xmm0
  void *v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  struct _ERESOURCE *v15; // rbx
  struct _ERESOURCE *v16; // rcx
  char v17; // bl
  char v18; // si
  __int64 v19; // rdi
  bool v20; // zf
  __int64 v21; // rcx
  unsigned int v22; // r15d
  unsigned int v23; // ebx
  __int64 v24; // r13
  __int64 v25; // r10
  unsigned int v26; // edx
  __int64 v27; // r10
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r13
  struct _ERESOURCE *v32; // rbx
  __int64 v33; // rbx
  int v34; // edx
  __int64 v35; // rcx
  int v36; // r8d
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // r12
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rbx
  __int64 v43; // rbx
  unsigned int v44; // edx
  __int64 v45; // rbx
  unsigned __int16 *v46; // r12
  __int64 CurrentThread; // rcx
  unsigned int v48; // edx
  char v49; // al
  __int64 v50; // rax
  unsigned int v51; // ebx
  __int64 v52; // rcx
  __int64 v53; // r15
  __int64 v54; // rdx
  unsigned int v55; // r9d
  __int64 v56; // r8
  __int64 v57; // r15
  struct HOBJ__ *v58; // r13
  unsigned int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // r8
  unsigned int v62; // ebx
  __int64 v63; // r13
  unsigned int v64; // edx
  int v65; // eax
  unsigned int v66; // eax
  __int64 v67; // r9
  unsigned int v68; // eax
  __int64 v69; // r10
  __int64 v70; // rdx
  char v71; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v72; // rbx
  __int64 v73; // rcx
  int v74; // ebx
  signed int v75; // r15d
  __int64 v76; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v78; // rcx
  _QWORD *v79; // r15
  __int64 v80; // rax
  __int64 v81; // rcx
  struct _ERESOURCE *v82; // r13
  __int64 v83; // r13
  int v84; // edx
  __int64 v85; // rcx
  int v86; // r8d
  __int64 v87; // r15
  __int64 v88; // r13
  __int64 v89; // rcx
  __int64 v90; // rcx
  struct _ERESOURCE *v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // r8
  unsigned int v97; // r15d
  __int64 v98; // rcx
  __int64 v99; // r13
  __int64 v100; // rdx
  __int64 v101; // r9
  __int64 *v102; // rdx
  __int64 v103; // r15
  __int64 v104; // rcx
  __int64 v105; // r13
  __int64 v106; // rax
  unsigned int v107; // ebx
  __int64 v108; // r15
  __int64 v109; // rdx
  unsigned int v110; // r9d
  __int64 v111; // r8
  _DWORD *v112; // r12
  unsigned int v113; // ebx
  __int64 v114; // r8
  __int64 v115; // r15
  unsigned int v116; // edx
  __int64 v117; // r10
  __int64 v118; // r9
  _QWORD **v119; // r11
  unsigned __int64 v120; // r10
  __int64 v121; // rcx
  __int64 v122; // r15
  __int64 v123; // rcx
  HANDLE v124; // rbx
  HANDLE v125; // rbx
  void *v126; // rdx
  PERESOURCE SharedWaiters; // rcx
  __int64 v128; // rbx
  struct OBJECT *v129; // rbx
  _DWORD *v130; // rdi
  int v131; // eax
  int *v132; // rbx
  __int64 v133; // rax
  unsigned int v134; // r13d
  __int64 v135; // rax
  struct OBJECT *v136; // r12
  __int64 v137; // rcx
  __int64 v138; // rcx
  __int64 v139; // r14
  struct _ERESOURCE *v140; // rdi
  __int64 v141; // rdi
  int v142; // edx
  __int64 v143; // rcx
  int v144; // r8d
  __int64 v145; // r14
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  __int64 v150; // rdi
  unsigned int v151; // eax
  __int64 v152; // rdi
  unsigned int v153; // r15d
  unsigned int v154; // edx
  __int64 v155; // rdi
  __int64 v156; // r14
  __int64 v157; // r12
  __int64 v158; // r15
  __int64 v159; // rcx
  unsigned int v160; // edx
  char v161; // al
  __int64 v162; // rdi
  unsigned int v163; // eax
  __int64 v164; // r8
  unsigned __int64 v165; // rdx
  unsigned int v166; // r10d
  __int64 v167; // rcx
  __int64 v168; // r9
  __int64 v169; // r13
  unsigned int v170; // eax
  __int64 v171; // rdi
  unsigned int v172; // r9d
  unsigned int v173; // r12d
  __int64 v174; // r10
  __int64 v175; // rbx
  unsigned int v176; // eax
  __int64 v177; // r8
  unsigned __int64 v178; // rdx
  __int64 v179; // rdx
  char v180; // al
  int v181; // ebx
  unsigned int v182; // r15d
  char EtwGdiHandleType; // r12
  __int64 v184; // rcx
  __int64 v185; // rdi
  unsigned int v186; // eax
  __int64 v187; // r9
  __int64 v188; // r8
  unsigned __int64 v189; // rdx
  unsigned int v190; // r10d
  __int64 v191; // rcx
  __int64 *v192; // rdx
  __int64 v193; // rdi
  __int64 v194; // rcx
  __int64 v195; // rdi
  __int64 v196; // rbx
  unsigned int v197; // eax
  __int64 v198; // r8
  unsigned __int64 v199; // rdx
  unsigned int v200; // r9d
  __int64 v201; // r8
  _DWORD *v202; // r15
  unsigned int v203; // ebx
  __int64 v204; // r8
  __int64 v205; // r14
  unsigned int v206; // edx
  __int64 v207; // r10
  __int64 v208; // r9
  _QWORD **v209; // r11
  unsigned __int64 v210; // r10
  __int64 v211; // rcx
  __int64 *v212; // rcx
  __int64 *v213; // rdi
  __int64 v214; // rbx
  void *v215; // rdx
  void *v216; // rdx
  __int64 v217; // rbx
  struct _ERESOURCE *v218; // rbx
  unsigned int v220; // eax
  unsigned int v221; // edx
  _DWORD *v222; // rdi
  char v223; // al
  __int64 v224; // rcx
  __int64 v225; // r15
  __int64 v226; // rax
  unsigned int v227; // ebx
  __int64 v228; // r14
  __int64 v229; // rdx
  unsigned int v230; // r9d
  __int64 v231; // r8
  _DWORD *v232; // rdx
  unsigned int v233; // ebx
  __int64 v234; // rdx
  unsigned int v235; // r8d
  __int64 v236; // r10
  __int64 v237; // rcx
  __int64 v238; // r15
  __int64 v239; // rbx
  unsigned int v240; // eax
  __int64 v241; // r8
  unsigned __int64 v242; // rdx
  unsigned int v243; // r9d
  __int64 v244; // r8
  _DWORD *v245; // rdx
  unsigned int v246; // eax
  __int64 v247; // rdx
  unsigned __int64 v248; // r8
  unsigned int v249; // r9d
  __int64 v250; // rdx
  __int64 v251; // rcx
  __int64 v252; // rbx
  __int64 v253; // r15
  __int64 v254; // rcx
  __int64 v255; // rcx
  int v256; // r8d
  struct _ERESOURCE *v257; // rcx
  int v258; // eax
  int v259; // eax
  unsigned int v260; // edx
  _DWORD *v261; // rdi
  char v262; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v263; // rbx
  __int64 v264; // rcx
  GdiHandleEntryDirectory **v265; // r14
  GdiHandleEntryDirectory **v266; // rbx
  unsigned int v267; // eax
  int EntryTableIndexContainingEntry; // eax
  unsigned int v269; // r9d
  __int64 v270; // r10
  __int64 v271; // r8
  _DWORD *v272; // rdx
  unsigned int v273; // eax
  int v274; // eax
  __int64 v275; // r9
  unsigned int v276; // r10d
  __int64 v277; // rdx
  __int64 v278; // rdx
  __int64 v279; // rcx
  __int64 v280; // rdi
  __int64 v281; // rcx
  __int64 v282; // rbx
  __int64 v283; // rdx
  __int64 v284; // rcx
  struct _ERESOURCE *v285; // rbx
  _QWORD *v286; // r8
  int *v287; // rax
  __int64 v288; // rcx
  int **v289; // rdx
  PVOID v290; // rbx
  ULONG_PTR v291; // rbx
  void (__fastcall *v292)(ULONG_PTR); // rax
  ULONG_PTR v293; // rcx
  __int64 v294; // rdx
  __int64 v295; // rcx
  __int64 v296; // rcx
  __int64 v297; // rdi
  __int64 v298; // r14
  __int64 v299; // rcx
  __int64 v300; // rcx
  int v301; // r8d
  struct _ERESOURCE *v302; // rcx
  _WORD *v303; // rdi
  __int64 v304; // rdx
  __int64 v305; // rcx
  __int64 v306; // rcx
  struct _W32PROCESS *W32ProcessFromId; // rdi
  int v308; // ebx
  __int64 CurrentThreadProcess; // rax
  struct OBJECT *v310; // rax
  struct _ENTRY *v311; // rax
  struct _ENTRY *v312; // rax
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v313; // rcx
  _QWORD *ProcessWin32Process; // rax
  _DWORD *v315; // rax
  int v316; // r8d
  unsigned int v317; // r15d
  __int64 v318; // rax
  __int64 v319; // rdx
  __int64 ThreadWin32Thread; // rdi
  __int64 v321; // rdx
  __int64 v322; // rcx
  __int64 v323; // r8
  __int64 v324; // r9
  __int64 CurrentProcess; // rax
  __int64 v326; // rax
  int v327; // ecx
  int v328; // edi
  __int64 v329; // rax
  struct OBJECT *v330; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v331; // rdx
  __int64 v332; // rcx
  __int64 v333; // rcx
  _DWORD *v334; // rax
  int v335; // r8d
  unsigned int v336; // r14d
  __int64 *v337; // rcx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v338; // rdx
  __int64 v339; // rcx
  __int64 v340; // rax
  __int64 v341; // rax
  __int64 v342; // rax
  __int64 v343; // rdx
  __int64 v344; // rcx
  __int64 v345; // rdx
  __int64 v346; // rcx
  __int64 v347; // rbx
  struct _ERESOURCE *v348; // rcx
  __int64 v349; // rdx
  __int64 v350; // rcx
  int v351; // [rsp+50h] [rbp-B0h]
  unsigned int v352; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v353; // [rsp+58h] [rbp-A8h]
  __int64 v354; // [rsp+58h] [rbp-A8h]
  __int64 v355; // [rsp+60h] [rbp-A0h]
  __int64 v356; // [rsp+60h] [rbp-A0h]
  __int64 v357; // [rsp+60h] [rbp-A0h]
  PVOID BaseAddress; // [rsp+68h] [rbp-98h] BYREF
  __int64 v359; // [rsp+70h] [rbp-90h]
  PVOID MappedBase; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  PERESOURCE v362; // [rsp+88h] [rbp-78h] BYREF
  struct OBJECT *v363; // [rsp+90h] [rbp-70h] BYREF
  struct HOBJ__ *v364; // [rsp+98h] [rbp-68h]
  __int64 v365; // [rsp+A0h] [rbp-60h] BYREF
  PEPROCESS Process; // [rsp+A8h] [rbp-58h] BYREF
  int v367; // [rsp+B0h] [rbp-50h]
  unsigned int v368; // [rsp+B4h] [rbp-4Ch]
  __int64 v369; // [rsp+B8h] [rbp-48h] BYREF
  HANDLE v370; // [rsp+C0h] [rbp-40h] BYREF
  HANDLE SecureHandle; // [rsp+C8h] [rbp-38h]
  __int64 v372; // [rsp+D0h] [rbp-30h] BYREF
  int v373; // [rsp+D8h] [rbp-28h]
  int v374; // [rsp+DCh] [rbp-24h]
  __int64 v375; // [rsp+E8h] [rbp-18h]
  int v376; // [rsp+F0h] [rbp-10h]
  int v377; // [rsp+F4h] [rbp-Ch]
  PVOID Entry; // [rsp+F8h] [rbp-8h]
  ULONG_PTR RegionSize[2]; // [rsp+100h] [rbp+0h] BYREF
  PERESOURCE Resource[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v381; // [rsp+120h] [rbp+20h]
  int v382; // [rsp+128h] [rbp+28h]
  char v383[4]; // [rsp+12Ch] [rbp+2Ch] BYREF
  _QWORD v384[2]; // [rsp+130h] [rbp+30h] BYREF
  __int16 v385; // [rsp+140h] [rbp+40h]
  __int64 v386; // [rsp+148h] [rbp+48h] BYREF
  __int64 v387; // [rsp+150h] [rbp+50h] BYREF
  __int64 v388; // [rsp+158h] [rbp+58h] BYREF
  unsigned __int16 *v389; // [rsp+160h] [rbp+60h] BYREF
  int v390; // [rsp+168h] [rbp+68h]
  int v391; // [rsp+16Ch] [rbp+6Ch]
  PERESOURCE v392; // [rsp+178h] [rbp+78h] BYREF
  PVOID v393[2]; // [rsp+180h] [rbp+80h] BYREF
  __int128 v394; // [rsp+190h] [rbp+90h]
  __int64 v395; // [rsp+1A0h] [rbp+A0h]
  _OWORD v396[7]; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v397; // [rsp+230h] [rbp+130h] BYREF
  int v398; // [rsp+238h] [rbp+138h]
  int v399; // [rsp+240h] [rbp+140h]
  unsigned int v400; // [rsp+248h] [rbp+148h]

  v399 = a3;
  v398 = a2;
  v3 = a3;
  v4 = (int *)a1;
  v400 = 1;
  if ( (struct _LIST_ENTRY *)a1 == WPP_MAIN_CB.Queue.ListEntry.Blink || !a1 )
    return v400;
  SecureHandle = 0LL;
  v362 = 0LL;
  MappedBase = 0LL;
  v370 = 0LL;
  v367 = 0;
  if ( !*(_WORD *)(a1 + 100) )
  {
    v5 = *(_QWORD *)(a1 + 72);
    SecureHandle = *(HANDLE *)(a1 + 192);
    v362 = *(PERESOURCE *)(a1 + 184);
    v367 = *(_DWORD *)(a1 + 216);
    a1 = (unsigned __int16)*(_DWORD *)(a1 + 212);
    v6 = (void *)*((_QWORD *)v4 + 28);
    MappedBase = (PVOID)(v5 - a1);
    v370 = v6;
  }
  v7 = *((_OWORD *)v4 + 17);
  v8 = *((_OWORD *)v4 + 18);
  v9 = (void *)*((_QWORD *)v4 + 16);
  RegionSize[0] = *((_QWORD *)v4 + 3);
  v363 = (struct OBJECT *)*((_QWORD *)v4 + 17);
  v10 = (void *)*((_QWORD *)v4 + 9);
  v396[0] = v7;
  BaseAddress = v10;
  v11 = *((_OWORD *)v4 + 19);
  v377 = *((unsigned __int16 *)v4 + 51);
  v12 = (void *)*((_QWORD *)v4 + 31);
  v396[2] = v11;
  Object = v12;
  v13 = *(_OWORD *)(v4 + 146);
  LODWORD(v12) = v4[80];
  v396[1] = v8;
  Entry = v9;
  v14 = *(_OWORD *)(v4 + 150);
  v376 = (int)v12;
  *(_OWORD *)v393 = v13;
  v395 = *((_QWORD *)v4 + 77);
  v394 = v14;
  v375 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v15 = *(struct _ERESOURCE **)(v375 + 80);
  if ( ExIsResourceAcquiredExclusiveLite(v15) || ExIsResourceAcquiredSharedLite(v15) )
  {
    v17 = 0;
    v18 = 0;
  }
  else
  {
    v17 = 1;
    v18 = 1;
    v280 = *(_QWORD *)(SGDGetSessionState(v16) + 24);
    v281 = *(_QWORD *)(v280 + 80);
    if ( v281 )
      ExEnterPriorityRegionAndAcquireResourceShared(v281);
    EtwTraceGreLockAcquireSemaphoreShared((__int64)L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v280 + 80));
  }
  v19 = *((_QWORD *)v4 + 6);
  v365 = v19;
  if ( (!v19 || (v4[28] & 0x400000) == 0 || (*(_DWORD *)(v19 + 40) & 1) == 0) && v17 )
  {
    v282 = *(_QWORD *)(SGDGetSessionState(v16) + 24);
    EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v282 + 80));
    v16 = *(struct _ERESOURCE **)(v282 + 80);
    if ( v16 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v16);
      PsLeavePriorityRegion(v284, v283);
    }
    v18 = 0;
  }
  v392 = 0LL;
  v384[0] = 0LL;
  v384[1] = 0LL;
  v385 = 256;
  *(_OWORD *)Resource = 0LL;
  v381 = 0LL;
  v382 = 0;
  if ( qword_1C02D5890 && (int)qword_1C02D5890() >= 0 && qword_1C02D5898 )
    qword_1C02D5898(Resource, 0LL);
  v20 = (v4[28] & 0x400000) == 0;
  v388 = 0LL;
  v387 = 0LL;
  v386 = 0LL;
  if ( v20 || !v19 )
  {
    *(_OWORD *)Resource = 0LL;
    v381 = 0LL;
    v382 = 0;
    if ( qword_1C02D5890 && (int)qword_1C02D5890() >= 0 && qword_1C02D5898 )
      qword_1C02D5898(Resource, 0LL);
    v388 = 0LL;
    v387 = 0LL;
    v386 = 0LL;
  }
  else
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v392, (struct PDEVOBJ *)&v365);
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)Resource, (struct PDEVOBJ *)&v365);
  }
  v364 = *(struct HOBJ__ **)v4;
  v368 = -2147483614;
  v21 = *(_QWORD *)(SGDGetSessionState(v16) + 24);
  v22 = (unsigned __int16)v364 | ((unsigned int)v364 >> 8) & 0xFF0000;
  v23 = v22;
  v24 = *(_QWORD *)(v21 + 8008);
  if ( v22 >= 0x10000 )
  {
    if ( *(_DWORD *)v24 > 0x10000u )
    {
      v21 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                   *(GdiHandleEntryDirectory **)(v24 + 16),
                                   (unsigned __int16)v364,
                                   1)
            + 13);
      if ( (_DWORD)v21 == HIWORD(v22) )
        v23 = (unsigned __int16)v364;
    }
    else
    {
      v23 = (unsigned __int16)v364;
    }
    v3 = v399;
  }
  v25 = *(_QWORD *)(v24 + 16);
  v26 = *(_DWORD *)(v25 + 2056);
  if ( v23 < v26 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16) )
  {
    if ( v23 >= v26 )
    {
      v21 = ((v23 - v26) >> 16) + 1;
      v27 = *(_QWORD *)(v25 + 8 * v21 + 8);
      v23 += -65536 * ((v23 - v26) >> 16) - v26;
    }
    else
    {
      v27 = *(_QWORD *)(v25 + 8);
    }
    v28 = 0LL;
    if ( v23 < *(_DWORD *)(v27 + 20) )
    {
      v21 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * ((unsigned __int64)v23 >> 8))
                      + 16LL * (unsigned __int8)v23
                      + 8);
      if ( v21 )
      {
        v21 = 3LL * v23;
        v28 = *(_QWORD *)v27 + 24LL * v23;
      }
    }
    if ( v28 && *(_BYTE *)(v28 + 14) == 5 && *(_WORD *)(v28 + 12) == WORD1(v364) )
      v368 = *(_DWORD *)(v28 + 8) & 0xFFFFFFFE;
  }
  v397 = 0;
  if ( v3 )
    goto LABEL_137;
  v351 = *(_DWORD *)(v375 + 3192);
  SGDGetSessionState(v21);
  v31 = *(_QWORD *)(SGDGetSessionState(v29) + 24);
  v32 = *(struct _ERESOURCE **)(v31 + 1912);
  if ( v32 )
  {
    PsEnterPriorityRegion(v30);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v32);
  }
  v33 = *(_QWORD *)(v31 + 1912);
  v35 = *(_QWORD *)(SGDGetSessionState(v30) + 24);
  if ( *(_DWORD *)(v35 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(v35, v34, v36, v33, 17, (__int64)L"GreBaseGlobals.hsemHmgr");
  v369 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v369);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (v308 = *(_DWORD *)SGDGetUserSessionState(v39, v38, v40, v41),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         v308 == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v355 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v355 = 0LL;
  }
  v390 = 1;
  v42 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v39) + 24) + 8008LL);
  if ( v22 >= 0x10000 )
  {
    if ( *(_DWORD *)v42 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *(GdiHandleEntryDirectory **)(v42 + 16),
                                  (unsigned __int16)v364,
                                  1)
           + 13) == ((unsigned __int16)v364 | ((unsigned int)v364 >> 8) & 0xFF0000) >> 16 )
        v22 = (unsigned __int16)v364;
    }
    else
    {
      v22 = (unsigned __int16)v364;
    }
  }
  v43 = *(_QWORD *)(v42 + 16);
  v44 = *(_DWORD *)(v43 + 2056);
  if ( v22 >= v44 + ((*(unsigned __int16 *)(v43 + 2) + 0xFFFF) << 16) )
    goto LABEL_461;
  if ( v22 >= v44 )
  {
    v45 = *(_QWORD *)(v43 + 8LL * (((v22 - v44) >> 16) + 1) + 8);
    v22 += -65536 * ((v22 - v44) >> 16) - v44;
  }
  else
  {
    v45 = *(_QWORD *)(v43 + 8);
  }
  v46 = 0LL;
  if ( v22 < *(_DWORD *)(v45 + 20) )
  {
    v359 = 16LL * (unsigned __int8)v22;
    v353 = 8 * ((unsigned __int64)v22 >> 8);
    Process = (PEPROCESS)(v359 + *(_QWORD *)(**(_QWORD **)(v45 + 24) + v353));
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(Process, 0LL);
    if ( v22 < *(_DWORD *)(v45 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v45 + 24) + v353) + v359 + 8) )
    {
      *(_DWORD *)(24LL * v22 + *(_QWORD *)v45 + 8) |= 1u;
      v46 = (unsigned __int16 *)(24LL * v22 + *(_QWORD *)v45);
    }
    else
    {
      ExReleasePushLockExclusiveEx(Process, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v389 = v46;
  if ( !v46 )
  {
LABEL_461:
    KeLeaveCriticalRegion();
    goto LABEL_462;
  }
  _m_prefetchw(v46 + 4);
  CurrentThread = *((unsigned int *)v46 + 2);
  v48 = *((_DWORD *)v46 + 2) & 0xFFFFFFFE;
  v391 = CurrentThread;
  if ( (((unsigned int)CurrentThread ^ v369 & 0xFFFFFFFD) & 0xFFFFFFFE) != 0
    && v48
    && (!v355 || v48 != *(_DWORD *)(v355 + 8))
    || (v49 = *((_BYTE *)v46 + 15), (v49 & 0x20) != 0) )
  {
LABEL_384:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v389);
    if ( v390 )
    {
LABEL_385:
      v46 = v389;
      goto LABEL_57;
    }
LABEL_462:
    GreReleaseHmgrSemaphore(CurrentThread);
    v58 = v364;
    goto LABEL_298;
  }
  if ( (v49 & 0x40) != 0 )
  {
    v310 = HANDLELOCK::pObj((HANDLELOCK *)&v389);
    if ( *((_WORD *)v310 + 6) )
    {
      CurrentThread = (__int64)KeGetCurrentThread();
      v19 = v365;
      if ( *((_QWORD *)v310 + 2) == CurrentThread )
        goto LABEL_385;
    }
    goto LABEL_384;
  }
LABEL_57:
  v50 = SGDGetSessionState(CurrentThread);
  v51 = *(_DWORD *)v46 & 0xFFFFFF;
  v52 = *(_QWORD *)(v50 + 24);
  v53 = *(_QWORD *)(v52 + 8008);
  if ( v51 >= 0x10000 )
  {
    if ( *(_DWORD *)v53 > 0x10000u )
    {
      v52 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(*(GdiHandleEntryDirectory **)(v53 + 16), *v46, 1) + 13);
      if ( (_DWORD)v52 == HIWORD(v51) )
        v51 = (unsigned __int16)v51;
    }
    else
    {
      v51 = *v46;
    }
  }
  v54 = *(_QWORD *)(v53 + 16);
  v55 = *(_DWORD *)(v54 + 2056);
  if ( v51 >= v55 + ((*(unsigned __int16 *)(v54 + 2) + 0xFFFF) << 16)
    || (v51 >= v55
      ? (v52 = ((v51 - v55) >> 16) + 1, v56 = *(_QWORD *)(v54 + 8 * v52 + 8), v51 += -65536 * ((v51 - v55) >> 16) - v55)
      : (v56 = *(_QWORD *)(v54 + 8)),
        v51 >= *(_DWORD *)(v56 + 20)) )
  {
    v57 = 0LL;
  }
  else
  {
    v52 = 2LL * (unsigned __int8)v51;
    v57 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v56 + 24) + 8 * ((unsigned __int64)v51 >> 8))
                    + 16LL * (unsigned __int8)v51
                    + 8);
  }
  v58 = v364;
  if ( *((_BYTE *)v46 + 14) == 5 && v46[6] == WORD1(v364) )
  {
    v59 = *(_DWORD *)(v57 + 8);
    if ( v59 != 1 || *(_WORD *)(v57 + 12) )
    {
      *((_BYTE *)v46 + 15) |= 8u;
      v397 = v59;
    }
    else if ( v351 || (*((_BYTE *)v46 + 15) & 1) == 0 )
    {
      v60 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v52) + 24) + 8008LL);
      v62 = (unsigned __int16)*(_DWORD *)v57 | (*(_DWORD *)v57 >> 8) & 0xFF0000;
      v354 = v60;
      if ( v62 >= 0x10000 )
      {
        if ( *(_DWORD *)v60 > 0x10000u )
        {
          v311 = GdiHandleEntryDirectory::GetEntry(
                   *(GdiHandleEntryDirectory **)(v60 + 16),
                   (unsigned __int16)*(_DWORD *)v57,
                   1);
          v60 = v354;
          if ( *((unsigned __int8 *)v311 + 13) == HIWORD(v62) )
            v62 = (unsigned __int16)v62;
        }
        else
        {
          v62 = (unsigned __int16)*(_DWORD *)v57;
        }
      }
      v63 = *(_QWORD *)(v60 + 16);
      v64 = *(_DWORD *)(v63 + 2056);
      v65 = *(unsigned __int16 *)(v63 + 2) + 0xFFFF;
      LODWORD(v359) = v64;
      v66 = v64 + (v65 << 16);
      v352 = v66;
      if ( v62 >= v66 )
      {
        v69 = 0LL;
        v356 = 0LL;
      }
      else
      {
        if ( v62 >= v64 )
        {
          v67 = *(_QWORD *)(v63 + 8LL * (((v62 - v64) >> 16) + 1) + 8);
          v68 = v62 + -65536 * ((v62 - v64) >> 16) - v64;
          v60 = v354;
        }
        else
        {
          v67 = *(_QWORD *)(v63 + 8);
          v68 = v62;
        }
        v61 = 0LL;
        v69 = 0LL;
        v356 = 0LL;
        if ( v68 < *(_DWORD *)(v67 + 20) )
        {
          v61 = v68;
          v64 = v359;
          if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v67 + 24) + 8 * ((unsigned __int64)v68 >> 8))
                         + 16LL * (unsigned __int8)v68
                         + 8) )
          {
            v69 = *(_QWORD *)v67 + 24LL * v68;
            v356 = v69;
          }
          v60 = v354;
        }
        v66 = v352;
      }
      if ( v62 >= 0x10000 )
      {
        if ( *(_DWORD *)v60 > 0x10000u )
        {
          v312 = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v63, (unsigned __int16)v62, 1);
          v64 = v359;
          v69 = v356;
          v60 = *((unsigned __int8 *)v312 + 13);
          v66 = v352;
          if ( (_DWORD)v60 == HIWORD(v62) )
            v62 = (unsigned __int16)v62;
        }
        else
        {
          v62 = (unsigned __int16)v62;
        }
      }
      if ( v62 >= v66
        || (v62 >= v64
          ? (v60 = ((v62 - v64) >> 16) + 1,
             v61 = *(_QWORD *)(v63 + 8 * v60 + 8),
             v62 += -65536 * ((v62 - v64) >> 16) - v64)
          : (v61 = *(_QWORD *)(v63 + 8)),
            v62 >= *(_DWORD *)(v61 + 20)) )
      {
        v70 = 0LL;
      }
      else
      {
        v60 = 2LL * (unsigned __int8)v62;
        v70 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v61 + 24) + 8 * ((unsigned __int64)v62 >> 8))
                        + 16LL * (unsigned __int8)v62
                        + 8);
      }
      if ( v70 != v57 )
        v69 = 0LL;
      v71 = *(_BYTE *)(v69 + 14);
      if ( v71 == 5 )
      {
        v72 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v57 + 680);
        v73 = *(_QWORD *)(SGDGetSessionState(v60) + 24);
        if ( v72 )
        {
          v313 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(v73 + 8040);
          if ( v313 )
            NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v313, v72, 0);
        }
      }
      else if ( v71 == 16 )
      {
        TrackObjectReferenceDecrement(
          2LL,
          *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v57 + 136));
      }
      v74 = *((_DWORD *)v46 + 2);
      v75 = v74 & 0xFFFFFFFE;
      if ( (v74 & 0xFFFFFFFE) == 0 || v75 == -2147483630 )
      {
LABEL_107:
        LODWORD(v359) = GetEtwGdiHandleType(*((unsigned __int8 *)v46 + 14), v70, v61);
        v95 = SGDGetSessionState(v94);
        v97 = *(_DWORD *)v46 & 0xFFFFFF;
        v98 = *(_QWORD *)(v95 + 24);
        v99 = *(_QWORD *)(v98 + 8008);
        if ( v97 >= 0x10000 )
        {
          if ( *(_DWORD *)v99 > 0x10000u )
          {
            v98 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                         *(GdiHandleEntryDirectory **)(v99 + 16),
                                         *v46,
                                         1)
                  + 13);
            if ( (_DWORD)v98 == HIWORD(v97) )
              v97 = (unsigned __int16)v97;
          }
          else
          {
            v97 = *v46;
          }
        }
        v100 = *(_QWORD *)(v99 + 16);
        v101 = *(unsigned int *)(v100 + 2056);
        if ( v97 >= (unsigned int)v101 + ((*(unsigned __int16 *)(v100 + 2) + 0xFFFF) << 16)
          || (v97 >= (unsigned int)v101
            ? (v98 = ((v97 - (unsigned int)v101) >> 16) + 1,
               v96 = *(_QWORD *)(v100 + 8 * v98 + 8),
               v97 += -65536 * ((v97 - (unsigned int)v101) >> 16) - v101)
            : (v96 = *(_QWORD *)(v100 + 8)),
              v97 >= *(_DWORD *)(v96 + 20)) )
        {
          v102 = 0LL;
        }
        else
        {
          v98 = 2LL * (unsigned __int8)v97;
          v102 = *(__int64 **)(*(_QWORD *)(**(_QWORD **)(v96 + 24) + 8 * ((unsigned __int64)v97 >> 8))
                             + 16LL * (unsigned __int8)v97
                             + 8);
        }
        v103 = *v102;
        if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
        {
          v315 = (_DWORD *)SGDGetUserSessionState(v98, v102, v96, v101);
          McTemplateK0pqqq_EtwWriteTransfer(*v315, (unsigned int)&GdiDestroyHandle, v316, v103, v359, *v315, v74 & 0xFE);
        }
        *((_BYTE *)v46 + 14) = 0;
        *((_QWORD *)v46 + 2) = 0LL;
        *((_DWORD *)v46 + 2) = v74 & 1;
        v104 = *(_QWORD *)(SGDGetSessionState(v98) + 24);
        v105 = *(_QWORD *)(v104 + 8008);
        v106 = SGDGetSessionState(v104);
        v107 = *(_DWORD *)v46 & 0xFFFFFF;
        v108 = *(_QWORD *)(*(_QWORD *)(v106 + 24) + 8008LL);
        if ( v107 >= 0x10000 )
        {
          if ( *(_DWORD *)v108 > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *(GdiHandleEntryDirectory **)(v108 + 16),
                                        *v46,
                                        1)
                 + 13) == HIWORD(v107) )
              v107 = (unsigned __int16)v107;
          }
          else
          {
            v107 = *v46;
          }
        }
        v109 = *(_QWORD *)(v108 + 16);
        v110 = *(_DWORD *)(v109 + 2056);
        if ( v107 >= v110 + ((*(unsigned __int16 *)(v109 + 2) + 0xFFFF) << 16)
          || (v107 >= v110
            ? (v111 = *(_QWORD *)(v109 + 8LL * (((v107 - v110) >> 16) + 1) + 8),
               v107 += -65536 * ((v107 - v110) >> 16) - v110)
            : (v111 = *(_QWORD *)(v109 + 8)),
              v107 >= *(_DWORD *)(v111 + 20)) )
        {
          v112 = 0LL;
        }
        else
        {
          v112 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v111 + 24) + 8 * ((unsigned __int64)v107 >> 8))
                            + 16LL * (unsigned __int8)v107
                            + 8);
        }
        v113 = (unsigned __int16)*v112 | (*v112 >> 8) & 0xFF0000;
        if ( v113 >= 0x10000 )
        {
          if ( *(_DWORD *)v105 > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *(GdiHandleEntryDirectory **)(v105 + 16),
                                        (unsigned __int16)*v112,
                                        1)
                 + 13) == HIWORD(v113) )
              v113 = (unsigned __int16)v113;
          }
          else
          {
            v113 = (unsigned __int16)*v112;
          }
        }
        v114 = *(_QWORD *)(v105 + 24);
        if ( v114 )
        {
          v317 = *(_DWORD *)(v114 + 4LL * (unsigned __int16)v113);
          if ( v317 )
          {
            if ( GdiHandleEntryDirectory::AcquireEntryLock(*(GdiHandleEntryDirectory **)(v105 + 16), v317, 1) )
              GdiHandleEntryDirectory::ReleaseLockAndEntry(*(GdiHandleEntryDirectory **)(v105 + 16), v317, 1);
            *(_DWORD *)(4LL * (unsigned __int16)v113 + *(_QWORD *)(v105 + 24)) = 0;
            --*(_DWORD *)(v105 + 4);
          }
        }
        v115 = *(_QWORD *)(v105 + 16);
        v116 = *(_DWORD *)(v115 + 2056);
        if ( v113 >= v116 + ((*(unsigned __int16 *)(v115 + 2) + 0xFFFF) << 16) )
          goto LABEL_136;
        if ( v113 >= v116 )
        {
          v118 = *(_QWORD *)(v115 + 8LL * (((v113 - v116) >> 16) + 1) + 8);
          v113 += -65536 * ((v113 - v116) >> 16) - v116;
          v117 = v118;
        }
        else
        {
          v117 = *(_QWORD *)(v115 + 8);
          v118 = v117;
        }
        if ( v113 >= *(_DWORD *)(v118 + 20) )
        {
          v119 = (_QWORD **)(v117 + 24);
        }
        else
        {
          v119 = (_QWORD **)(v118 + 24);
          if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v118 + 24) + 8 * ((unsigned __int64)v113 >> 8))
                         + 16LL * (unsigned __int8)v113
                         + 8) )
          {
            v120 = (unsigned __int64)v113 >> 8;
            *(_QWORD *)(*(_QWORD *)(**v119 + 8 * v120) + 16LL * (unsigned __int8)v113 + 8) = 0LL;
            *(_QWORD *)(*(_QWORD *)v118 + 24LL * v113) = *(unsigned int *)(v118 + 12);
            --*(_DWORD *)(v118 + 16);
            *(_DWORD *)(v118 + 12) = v113;
LABEL_135:
            ExReleasePushLockExclusiveEx(*(_QWORD *)(**v119 + 8 * v120) + 16LL * (unsigned __int8)v113, 0LL);
            KeLeaveCriticalRegion();
            *(_BYTE *)v115 = 0;
LABEL_136:
            *(_QWORD *)v112 = 0LL;
            --*(_DWORD *)(v105 + 4);
            KeLeaveCriticalRegion();
            GreReleaseHmgrSemaphore(v121);
LABEL_137:
            v58 = v364;
            goto LABEL_138;
          }
        }
        v120 = (unsigned __int64)v113 >> 8;
        goto LABEL_135;
      }
      Process = 0LL;
      if ( v75 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v76);
        v79 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
          v79 = 0LL;
      }
      else
      {
        if ( PsLookupProcessByProcessId((HANDLE)v75, &Process) < 0 )
        {
LABEL_105:
          if ( Process )
            ObfDereferenceObject(Process);
          goto LABEL_107;
        }
        ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(Process);
        v79 = ProcessWin32Process;
        if ( ProcessWin32Process && !*ProcessWin32Process )
          v79 = 0LL;
      }
      if ( v79 )
      {
        v80 = *(_QWORD *)(SGDGetSessionState(v78) + 24);
        v357 = v80;
        v82 = *(struct _ERESOURCE **)(v80 + 1912);
        if ( v82 )
        {
          PsEnterPriorityRegion(v81);
          ExEnterCriticalRegionAndAcquireResourceExclusive(v82);
          v80 = v357;
        }
        v83 = *(_QWORD *)(v80 + 1912);
        v85 = *(_QWORD *)(SGDGetSessionState(v81) + 24);
        if ( *(_DWORD *)(v85 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pqz_EtwWriteTransfer(v85, v84, v86, v83, 17, (__int64)L"GreBaseGlobals.hsemHmgr");
        --*((_DWORD *)v79 + 15);
        v87 = *(_QWORD *)(SGDGetSessionState(v85) + 24);
        v88 = *(_QWORD *)(v87 + 1912);
        v90 = *(_QWORD *)(SGDGetSessionState(v89) + 24);
        if ( *(_DWORD *)(v90 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pz_EtwWriteTransfer(
            v90,
            (unsigned int)&LockRelease,
            v61,
            v88,
            (__int64)L"GreBaseGlobals.hsemHmgr");
        v91 = *(struct _ERESOURCE **)(v87 + 1912);
        if ( v91 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v91);
          PsLeavePriorityRegion(v93, v92);
        }
      }
      goto LABEL_105;
    }
  }
  v237 = *(_QWORD *)(SGDGetSessionState(v52) + 24);
  v238 = *(_QWORD *)(v237 + 8008);
  v239 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v237) + 24) + 8008LL);
  v240 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v239, *(_DWORD *)v46 & 0xFFFFFF);
  v241 = *(_QWORD *)(v239 + 16);
  v242 = v240;
  v243 = *(_DWORD *)(v241 + 2056);
  if ( v240 >= v243 + ((*(unsigned __int16 *)(v241 + 2) + 0xFFFF) << 16)
    || (v240 >= v243
      ? (v244 = *(_QWORD *)(v241 + 8LL * (((v240 - v243) >> 16) + 1) + 8),
         v242 = -65536 * ((v240 - v243) >> 16) - v243 + v240)
      : (v244 = *(_QWORD *)(v241 + 8)),
        (unsigned int)v242 >= *(_DWORD *)(v244 + 20)) )
  {
    v245 = 0LL;
  }
  else
  {
    v245 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v244 + 24) + 8 * (v242 >> 8)) + 16LL * (unsigned __int8)v242 + 8);
  }
  v246 = GdiHandleManager::DecodeIndex(
           (GdiHandleEntryDirectory **)v238,
           (unsigned __int16)*v245 | (*v245 >> 8) & 0xFF0000u);
  v247 = *(_QWORD *)(v238 + 16);
  v248 = v246;
  v249 = *(_DWORD *)(v247 + 2056);
  if ( v246 < v249 + ((*(unsigned __int16 *)(v247 + 2) + 0xFFFF) << 16) )
  {
    if ( v246 >= v249 )
    {
      v250 = *(_QWORD *)(v247 + 8LL * (((v246 - v249) >> 16) + 1) + 8);
      v248 = -65536 * ((v246 - v249) >> 16) - v249 + v246;
    }
    else
    {
      v250 = *(_QWORD *)(v247 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v250 + 24 * v248 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v250 + 24) + 8 * (v248 >> 8)) + 16LL * (unsigned __int8)v248,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  v252 = *(_QWORD *)(SGDGetSessionState(v251) + 24);
  v253 = *(_QWORD *)(v252 + 1912);
  v255 = *(_QWORD *)(SGDGetSessionState(v254) + 24);
  if ( *(_DWORD *)(v255 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v255, (unsigned int)&LockRelease, v256, v253, (__int64)L"GreBaseGlobals.hsemHmgr");
  v257 = *(struct _ERESOURCE **)(v252 + 1912);
  if ( v257 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v257);
    PsLeavePriorityRegion(v279, v278);
  }
LABEL_298:
  if ( v398 != 1 || !HmgRemoveObjectImpl(v58, 0, 1, 2, 5, &v397) )
  {
    if ( v397 == 1 )
    {
      if ( (v4[28] & 0x800) != 0 )
      {
        v400 = 1;
        HmgDecrementShareReferenceCountEx(v4, 0LL);
      }
      else
      {
        EngSetLastError(0xAAu);
        v400 = 0;
      }
    }
    else if ( *((_QWORD *)v4 + 20) || (unsigned int)SURFACE::bStockSurface((SURFACE *)v4) || (v4[28] & 0x800) != 0 )
    {
      v258 = v4[28];
      if ( (v258 & 0x800) != 0 )
      {
        if ( !v4[80] )
        {
          v318 = v375;
          v4[80] = 1;
          _InterlockedIncrement((volatile signed __int32 *)(v318 + 176));
        }
      }
      else
      {
        v4[28] = v258 | 0x1000000;
      }
      v259 = *v4;
      v260 = *v4;
      v400 = 1;
      v372 = 0LL;
      v373 = 0;
      HANDLELOCK::vLockHandle((HANDLELOCK *)&v372, (unsigned __int16)v259 | (v260 >> 8) & 0xFF0000, 0, 0, 1);
      if ( v373 )
      {
        v261 = (_DWORD *)v372;
        v262 = *(_BYTE *)(v372 + 14);
        if ( v262 == 5 )
        {
          v263 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v4 + 85);
          SharedWaiters = *(PERESOURCE *)(SGDGetSessionState(SharedWaiters) + 24);
          if ( v263 )
          {
            SharedWaiters = (PERESOURCE)SharedWaiters[77].SharedWaiters;
            if ( SharedWaiters )
              NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
                (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)SharedWaiters,
                v263,
                0);
          }
        }
        else if ( v262 == 16 )
        {
          TrackObjectReferenceDecrement(
            2LL,
            *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)v4 + 17));
        }
        --v4[2];
        v264 = *(_QWORD *)(SGDGetSessionState(SharedWaiters) + 24);
        v265 = *(GdiHandleEntryDirectory ***)(v264 + 8008);
        v266 = *(GdiHandleEntryDirectory ***)(*(_QWORD *)(SGDGetSessionState(v264) + 24) + 8008LL);
        v267 = GdiHandleManager::DecodeIndex(v266, *v261 & 0xFFFFFF);
        EntryTableIndexContainingEntry = GdiHandleEntryDirectory::_GetEntryTableIndexContainingEntry(v266[2], v267);
        if ( EntryTableIndexContainingEntry == -1 )
          goto LABEL_471;
        v271 = *(_QWORD *)(v270 + 8LL * EntryTableIndexContainingEntry + 8);
        if ( EntryTableIndexContainingEntry )
          v269 = v269 - ((EntryTableIndexContainingEntry - 1) << 16) - *(_DWORD *)(v270 + 2056);
        if ( v269 >= *(_DWORD *)(v271 + 20) )
LABEL_471:
          v272 = 0LL;
        else
          v272 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v271 + 24) + 8 * ((unsigned __int64)v269 >> 8))
                            + 16LL * (unsigned __int8)v269
                            + 8);
        v273 = GdiHandleManager::DecodeIndex(v265, (unsigned __int16)*v272 | (*v272 >> 8) & 0xFF0000u);
        v274 = GdiHandleEntryDirectory::_GetEntryTableIndexContainingEntry(v265[2], v273);
        if ( v274 != -1 )
        {
          v277 = *(_QWORD *)(v275 + 8LL * v274 + 8);
          if ( v274 )
            v276 = v276 - ((v274 - 1) << 16) - *(_DWORD *)(v275 + 2056);
          *(_DWORD *)(*(_QWORD *)v277 + 24LL * v276 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v277 + 24) + 8 * ((unsigned __int64)v276 >> 8)) + 16LL * (unsigned __int8)v276,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      v400 = 0;
    }
    goto LABEL_245;
  }
LABEL_138:
  v122 = v375;
  if ( v376 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v375 + 176));
    v19 = v365;
  }
  if ( qword_1C02D5E08 && (int)qword_1C02D5E08() >= 0 && qword_1C02D5E10 )
    qword_1C02D5E10(v4);
  v123 = (unsigned int)v4[28];
  if ( (v123 & 0x400000) != 0 )
  {
    v291 = RegionSize[0];
    if ( RegionSize[0] )
    {
      if ( v19 )
      {
        if ( !*((_QWORD *)v4 + 6) )
        {
          v319 = *((_QWORD *)v4 + 5);
          if ( v319 )
          {
            if ( MEMORY[0x6E8] != v319 )
            {
              DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, 45LL, v4, v319, MEMORY[0x6E8], 0LL, 0LL, 0);
              goto LABEL_145;
            }
          }
        }
        if ( (v4[29] & 9) != 0 )
        {
          v292 = *(void (__fastcall **)(ULONG_PTR))(v19 + 2640);
          if ( v292 )
          {
            v293 = (ULONG_PTR)(v4 + 6);
            goto LABEL_348;
          }
          v292 = *(void (__fastcall **)(ULONG_PTR))(v19 + 3424);
          if ( !v292 )
            goto LABEL_145;
LABEL_347:
          v293 = RegionSize[0];
LABEL_348:
          v292(v293);
          goto LABEL_145;
        }
        v292 = *(void (__fastcall **)(ULONG_PTR))(v19 + 2752);
        if ( v292 )
        {
          if ( (v123 & 0x40000) == 0 )
            goto LABEL_347;
          if ( (unsigned int)PDEVOBJ::bAllowDDICall((PDEVOBJ *)&v365)
            && qword_1C02D5E18
            && (int)qword_1C02D5E18() >= 0
            && qword_1C02D5E20 )
          {
            qword_1C02D5E20(*(_QWORD *)(v19 + 1768), v291);
          }
        }
      }
    }
  }
LABEL_145:
  v124 = v370;
  if ( v370 )
  {
    if ( v4[52] == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      MmUnsecureVirtualMemory(v124);
  }
  else if ( v367 )
  {
    if ( BaseAddress )
      MmUnmapViewInSessionSpace(MappedBase);
  }
  else
  {
    v125 = SecureHandle;
    if ( !SecureHandle )
    {
      if ( (v377 & 8) == 0 )
      {
        if ( (v377 & 0x800) == 0 )
        {
          if ( (v377 & 0x10) != 0 )
            vFreeKernelSection(BaseAddress);
          goto LABEL_152;
        }
        v285 = *(struct _ERESOURCE **)(v122 + 104);
        v362 = v285;
        if ( v285 )
        {
          PsEnterPriorityRegion(v123);
          ExEnterCriticalRegionAndAcquireResourceExclusive(v285);
        }
        v286 = (_QWORD *)*((_QWORD *)v4 + 33);
        if ( v286 )
        {
          v287 = v4 + 132;
          v288 = *((_QWORD *)v4 + 66);
          if ( (int *)v288 != v4 + 132 )
          {
            if ( *(int **)(v288 + 8) != v287 || (v289 = (int **)*((_QWORD *)v4 + 67), *v289 != v287) )
              __fastfail(3u);
            *v289 = (int *)v288;
            *(_QWORD *)(v288 + 8) = v289;
          }
          v290 = Object;
          if ( BaseAddress && Object )
          {
            MmUnmapViewOfSection(*v286);
            W32PIDLOCK::vCleanUp((W32PIDLOCK *)v396);
            goto LABEL_362;
          }
        }
        else
        {
          v290 = Object;
        }
        W32PIDLOCK::vCleanUp((W32PIDLOCK *)v396);
        if ( !v290 )
        {
LABEL_338:
          SEMOBJ::vUnlock(&v362);
          goto LABEL_152;
        }
LABEL_362:
        ObfDereferenceObject(v290);
        goto LABEL_338;
      }
      if ( (v377 & 0x80u) == 0 )
      {
        EngFreeUserMem(BaseAddress);
        goto LABEL_152;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      CurrentProcess = PsGetCurrentProcess(v322, v321, v323, v324);
      MmUnmapViewOfSection(CurrentProcess);
      if ( ThreadWin32Thread && (v326 = *(_QWORD *)(ThreadWin32Thread + 72)) != 0 )
      {
        v327 = *(_DWORD *)(v326 + 8);
      }
      else
      {
        if ( !(_DWORD)v395 )
        {
          if ( qword_1C02D5E28 && (int)qword_1C02D5E28() >= 0 && qword_1C02D5E30 )
            qword_1C02D5E30(BaseAddress);
          goto LABEL_498;
        }
        v327 = HIDWORD(v394);
      }
      MappedBase = 0LL;
      if ( PsLookupProcessByProcessId((HANDLE)v327, (PEPROCESS *)&MappedBase) >= 0 )
      {
        MmUnmapViewOfSection(MappedBase);
        ObfDereferenceObject(MappedBase);
      }
LABEL_498:
      if ( !v393[0] )
        KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
      ObfDereferenceObject(v393[0]);
      goto LABEL_152;
    }
    if ( v4[52] == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      MmUnsecureVirtualMemory(v125);
      if ( BaseAddress )
      {
        if ( v362 )
        {
          ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, MappedBase);
        }
        else
        {
          RegionSize[0] = 0LL;
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, RegionSize, 0x8000u);
        }
      }
    }
  }
LABEL_152:
  if ( (v4[29] & 0x1000) != 0 )
    DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 4LL, v58, v397, v368, 0LL, 0LL, 0);
  if ( *((_QWORD *)v4 + 85) )
    ReleaseReferenceCountedObjectHandle(0LL);
  if ( *((_BYTE *)v4 + 688) )
  {
    v126 = (void *)*((_QWORD *)v4 + 9);
    if ( v126 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v126);
      *((_QWORD *)v4 + 9) = 0LL;
    }
  }
  SharedWaiters = *(PERESOURCE *)(SGDGetSessionState(v123) + 24);
  v128 = **(_QWORD **)&SharedWaiters[62].OwnerEntry.0;
  if ( v128 )
  {
    memset(v4, 0, 0x360uLL);
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v128 + 48), v4);
  }
  v129 = v363;
  if ( v363 && (int)IsGreDeleteWndSupported() >= 0 && qword_1C02D5E40 )
    qword_1C02D5E40(v129);
  v130 = Entry;
  if ( !Entry )
    goto LABEL_245;
  v131 = *((_DWORD *)Entry + 6);
  v132 = (int *)Entry;
  Object = Entry;
  if ( (v131 & 0x1000000) == 0 || (v131 & 0x4000000) != 0 )
  {
    v133 = SGDGetSessionState(SharedWaiters);
    v134 = 0;
    v397 = 0;
    v135 = *(_QWORD *)(v133 + 24);
    v369 = v135;
    if ( (v130 == *(_DWORD **)(v135 + 6000) || v130 == *(_DWORD **)(v135 + 6032)) && !*(_DWORD *)(v135 + 3192) )
      goto LABEL_245;
    if ( (v130[6] & 0x100) != 0 )
    {
      if ( v130[14] )
        goto LABEL_270;
      XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&Object);
    }
    v136 = *(struct OBJECT **)v130;
    v363 = *(struct OBJECT **)v130;
    SGDGetSessionState(SharedWaiters);
    v139 = *(_QWORD *)(SGDGetSessionState(v137) + 24);
    v140 = *(struct _ERESOURCE **)(v139 + 1912);
    if ( v140 )
    {
      PsEnterPriorityRegion(v138);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v140);
    }
    v141 = *(_QWORD *)(v139 + 1912);
    v143 = *(_QWORD *)(SGDGetSessionState(v138) + 24);
    if ( *(_DWORD *)(v143 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pqz_EtwWriteTransfer(v143, v142, v144, v141, 17, (__int64)L"GreBaseGlobals.hsemHmgr");
    v362 = 0LL;
    v145 = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v362);
    if ( (!(unsigned __int8)KeIsAttachedProcess()
       || (v328 = *(_DWORD *)SGDGetUserSessionState(v147, v146, v148, v149),
           v329 = PsGetCurrentThreadProcess(),
           v328 == (unsigned int)PsGetProcessSessionIdEx(v329)))
      && v145
      && *(_QWORD *)v145 )
    {
      SecureHandle = *(HANDLE *)(*(_QWORD *)v145 + 72LL);
    }
    else
    {
      SecureHandle = 0LL;
    }
    v373 = 1;
    v150 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v147) + 24) + 8008LL);
    v151 = GdiHandleManager::DecodeIndex(
             (GdiHandleEntryDirectory **)v150,
             (unsigned __int16)v136 | ((unsigned int)v136 >> 8) & 0xFF0000);
    v152 = *(_QWORD *)(v150 + 16);
    v153 = v151;
    v154 = *(_DWORD *)(v152 + 2056);
    if ( v151 >= v154 + ((*(unsigned __int16 *)(v152 + 2) + 0xFFFF) << 16) )
      goto LABEL_552;
    if ( v151 >= v154 )
    {
      v155 = *(_QWORD *)(v152 + 8LL * (((v151 - v154) >> 16) + 1) + 8);
      v153 = -65536 * ((v151 - v154) >> 16) - v154 + v151;
    }
    else
    {
      v155 = *(_QWORD *)(v152 + 8);
    }
    v156 = 0LL;
    if ( v153 < *(_DWORD *)(v155 + 20) )
    {
      v157 = *(_QWORD *)(**(_QWORD **)(v155 + 24) + 8 * ((unsigned __int64)v153 >> 8)) + 16LL * (unsigned __int8)v153;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v157, 0LL);
      if ( GdiHandleEntryTable::GetEntryObject((GdiHandleEntryTable *)v155, v153) )
      {
        *(_DWORD *)(*(_QWORD *)v155 + 24LL * v153 + 8) |= 1u;
        v156 = 24LL * v153 + *(_QWORD *)v155;
      }
      else
      {
        ExReleasePushLockExclusiveEx(v157, 0LL);
        KeLeaveCriticalRegion();
      }
      WORD1(v136) = WORD1(v363);
      v134 = v397;
    }
    v158 = 0LL;
    v372 = v156;
    if ( v156 )
    {
      _m_prefetchw((const void *)(v156 + 8));
      v159 = *(unsigned int *)(v156 + 8);
      v160 = *(_DWORD *)(v156 + 8) & 0xFFFFFFFE;
      v374 = v159;
      if ( (((unsigned int)v159 ^ (unsigned int)v362 & 0xFFFFFFFD) & 0xFFFFFFFE) == 0
        || !v160
        || SecureHandle && v160 == *((_DWORD *)SecureHandle + 2) )
      {
        v161 = *(_BYTE *)(v156 + 15);
        if ( (v161 & 0x20) == 0 )
        {
          if ( (v161 & 0x40) == 0 )
            goto LABEL_186;
          v330 = HANDLELOCK::pObj((HANDLELOCK *)&v372);
          if ( *((_WORD *)v330 + 6) )
          {
            v159 = (__int64)KeGetCurrentThread();
            v132 = (int *)Object;
            if ( *((_QWORD *)v330 + 2) == v159 )
              goto LABEL_387;
          }
        }
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v372);
      if ( v373 )
      {
LABEL_387:
        v156 = v372;
LABEL_186:
        v162 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v159) + 24) + 8008LL);
        v163 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v162, *(_DWORD *)v156 & 0xFFFFFF);
        v164 = *(_QWORD *)(v162 + 16);
        v165 = v163;
        v166 = *(_DWORD *)(v164 + 2056);
        v167 = v166 + ((*(unsigned __int16 *)(v164 + 2) + 0xFFFF) << 16);
        if ( v163 < (unsigned int)v167 )
        {
          if ( v163 >= v166 )
          {
            v167 = ((v163 - v166) >> 16) + 1;
            v168 = *(_QWORD *)(v164 + 8 * v167 + 8);
            v165 = -65536 * ((v163 - v166) >> 16) - v166 + v163;
          }
          else
          {
            v168 = *(_QWORD *)(v164 + 8);
          }
          if ( (unsigned int)v165 < *(_DWORD *)(v168 + 20) )
          {
            v167 = 2LL * (unsigned __int8)v165;
            v158 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v168 + 24) + 8 * (v165 >> 8)) + 16LL * (unsigned __int8)v165 + 8);
          }
        }
        if ( *(_BYTE *)(v156 + 14) == 8 && *(_WORD *)(v156 + 12) == WORD1(v136) )
        {
          if ( *(_WORD *)(v158 + 12) || *(_DWORD *)(v158 + 8) != 1 )
          {
            *(_BYTE *)(v156 + 15) |= 8u;
          }
          else if ( (*(_BYTE *)(v156 + 15) & 1) == 0 )
          {
            v169 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v167) + 24) + 8008LL);
            v170 = GdiHandleManager::DecodeIndex(
                     (GdiHandleEntryDirectory **)v169,
                     (unsigned __int16)*(_DWORD *)v158 | (*(_DWORD *)v158 >> 8) & 0xFF0000u);
            v171 = *(_QWORD *)(v169 + 16);
            v172 = v170;
            v173 = *(_DWORD *)(v171 + 2056);
            v397 = v173 + ((*(unsigned __int16 *)(v171 + 2) + 0xFFFF) << 16);
            if ( v170 >= v397 )
            {
              v175 = 0LL;
            }
            else
            {
              if ( v170 >= v173 )
              {
                v174 = *(_QWORD *)(v171 + 8LL * (((v170 - v173) >> 16) + 1) + 8);
                v170 += -65536 * ((v170 - v173) >> 16) - v173;
              }
              else
              {
                v174 = *(_QWORD *)(v171 + 8);
              }
              v175 = 0LL;
              if ( v170 < *(_DWORD *)(v174 + 20)
                && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v174 + 24) + 8 * ((unsigned __int64)v170 >> 8))
                             + 16LL * (unsigned __int8)v170
                             + 8) )
              {
                v175 = *(_QWORD *)v174 + 24LL * v170;
              }
            }
            v176 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v169, v172);
            v134 = 1;
            v178 = v176;
            if ( v176 >= v397
              || (v176 >= v173
                ? (v177 = *(_QWORD *)(v171 + 8LL * (((v176 - v173) >> 16) + 1) + 8),
                   v178 = -65536 * ((v176 - v173) >> 16) - v173 + v176)
                : (v177 = *(_QWORD *)(v171 + 8)),
                  (unsigned int)v178 >= *(_DWORD *)(v177 + 20)) )
            {
              v179 = 0LL;
            }
            else
            {
              v179 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v177 + 24) + 8 * (v178 >> 8))
                               + 16LL * (unsigned __int8)v178
                               + 8);
            }
            if ( v179 != v158 )
              v175 = 0LL;
            v180 = *(_BYTE *)(v175 + 14);
            if ( v180 == 5 )
            {
              v331 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v158 + 680);
              v332 = 0LL;
            }
            else
            {
              if ( v180 != 16 )
              {
LABEL_211:
                v181 = *(_DWORD *)(v156 + 8);
                v182 = v181 & 0xFFFFFFFE;
                if ( (v181 & 0xFFFFFFFE) != 0 && v182 != -2147483630 )
                {
                  v370 = 0LL;
                  W32ProcessFromId = GetW32ProcessFromId(v182, (struct _EPROCESS **)&v370);
                  if ( W32ProcessFromId )
                  {
                    GreAcquireHmgrSemaphore(v306);
                    --*((_DWORD *)W32ProcessFromId + 15);
                    GreReleaseHmgrSemaphore(v333);
                  }
                  if ( v370 )
                    ObfDereferenceObject(v370);
                }
                EtwGdiHandleType = GetEtwGdiHandleType(*(unsigned __int8 *)(v156 + 14), v179, v177);
                v185 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v184) + 24) + 8008LL);
                v186 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v185, *(_DWORD *)v156 & 0xFFFFFF);
                v188 = *(_QWORD *)(v185 + 16);
                v189 = v186;
                v190 = *(_DWORD *)(v188 + 2056);
                v191 = v190 + ((*(unsigned __int16 *)(v188 + 2) + 0xFFFF) << 16);
                if ( v186 >= (unsigned int)v191
                  || (v186 >= v190
                    ? (v191 = ((v186 - v190) >> 16) + 1,
                       v187 = *(_QWORD *)(v188 + 8 * v191 + 8),
                       v189 = -65536 * ((v186 - v190) >> 16) - v190 + v186)
                    : (v187 = *(_QWORD *)(v188 + 8)),
                      (unsigned int)v189 >= *(_DWORD *)(v187 + 20)) )
                {
                  v192 = 0LL;
                }
                else
                {
                  v191 = 2LL * (unsigned __int8)v189;
                  v192 = *(__int64 **)(*(_QWORD *)(**(_QWORD **)(v187 + 24) + 8 * (v189 >> 8))
                                     + 16LL * (unsigned __int8)v189
                                     + 8);
                }
                v193 = *v192;
                if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
                {
                  v334 = (_DWORD *)SGDGetUserSessionState(v191, v192, v188, v187);
                  McTemplateK0pqqq_EtwWriteTransfer(
                    *v334,
                    (unsigned int)&GdiDestroyHandle,
                    v335,
                    v193,
                    EtwGdiHandleType,
                    *v334,
                    v182);
                }
                *(_BYTE *)(v156 + 14) = 0;
                *(_QWORD *)(v156 + 16) = 0LL;
                *(_DWORD *)(v156 + 8) = v181 & 1;
                v194 = *(_QWORD *)(SGDGetSessionState(v191) + 24);
                v195 = *(_QWORD *)(v194 + 8008);
                v196 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v194) + 24) + 8008LL);
                v197 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v196, *(_DWORD *)v156 & 0xFFFFFF);
                v198 = *(_QWORD *)(v196 + 16);
                v199 = v197;
                v200 = *(_DWORD *)(v198 + 2056);
                if ( v197 >= v200 + ((*(unsigned __int16 *)(v198 + 2) + 0xFFFF) << 16)
                  || (v197 >= v200
                    ? (v201 = *(_QWORD *)(v198 + 8LL * (((v197 - v200) >> 16) + 1) + 8),
                       v199 = -65536 * ((v197 - v200) >> 16) - v200 + v197)
                    : (v201 = *(_QWORD *)(v198 + 8)),
                      (unsigned int)v199 >= *(_DWORD *)(v201 + 20)) )
                {
                  v202 = 0LL;
                }
                else
                {
                  v202 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v201 + 24) + 8 * (v199 >> 8))
                                    + 16LL * (unsigned __int8)v199
                                    + 8);
                }
                v203 = (unsigned __int16)*v202 | (*v202 >> 8) & 0xFF0000;
                if ( v203 >= 0x10000 )
                {
                  if ( *(_DWORD *)v195 > 0x10000u )
                  {
                    if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                *(GdiHandleEntryDirectory **)(v195 + 16),
                                                (unsigned __int16)*v202,
                                                1)
                         + 13) == HIWORD(v203) )
                      v203 = (unsigned __int16)v203;
                  }
                  else
                  {
                    v203 = (unsigned __int16)*v202;
                  }
                }
                v204 = *(_QWORD *)(v195 + 24);
                if ( v204 )
                {
                  v336 = *(_DWORD *)(v204 + 4LL * (unsigned __int16)v203);
                  if ( v336 )
                  {
                    if ( GdiHandleEntryDirectory::AcquireEntryLock(*(GdiHandleEntryDirectory **)(v195 + 16), v336, 1) )
                      GdiHandleEntryDirectory::ReleaseLockAndEntry(*(GdiHandleEntryDirectory **)(v195 + 16), v336, 1);
                    *(_DWORD *)(4LL * (unsigned __int16)v203 + *(_QWORD *)(v195 + 24)) = 0;
                    --*(_DWORD *)(v195 + 4);
                  }
                }
                v205 = *(_QWORD *)(v195 + 16);
                v206 = *(_DWORD *)(v205 + 2056);
                if ( v203 >= v206 + ((*(unsigned __int16 *)(v205 + 2) + 0xFFFF) << 16) )
                  goto LABEL_235;
                if ( v203 >= v206 )
                {
                  v208 = *(_QWORD *)(v205 + 8LL * (((v203 - v206) >> 16) + 1) + 8);
                  v203 += -65536 * ((v203 - v206) >> 16) - v206;
                  v207 = v208;
                }
                else
                {
                  v207 = *(_QWORD *)(v205 + 8);
                  v208 = v207;
                }
                if ( v203 >= *(_DWORD *)(v208 + 20) )
                {
                  v209 = (_QWORD **)(v207 + 24);
                }
                else
                {
                  v209 = (_QWORD **)(v208 + 24);
                  if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v208 + 24) + 8 * ((unsigned __int64)v203 >> 8))
                                 + 16LL * (unsigned __int8)v203
                                 + 8) )
                  {
                    v210 = (unsigned __int64)v203 >> 8;
                    *(_QWORD *)(*(_QWORD *)(**v209 + 8 * v210) + 16LL * (unsigned __int8)v203 + 8) = 0LL;
                    *(_QWORD *)(*(_QWORD *)v208 + 24LL * v203) = *(unsigned int *)(v208 + 12);
                    --*(_DWORD *)(v208 + 16);
                    *(_DWORD *)(v208 + 12) = v203;
LABEL_234:
                    ExReleasePushLockExclusiveEx(*(_QWORD *)(**v209 + 8 * v210) + 16LL * (unsigned __int8)v203, 0LL);
                    KeLeaveCriticalRegion();
                    *(_BYTE *)v205 = 0;
LABEL_235:
                    *(_QWORD *)v202 = 0LL;
                    --*(_DWORD *)(v195 + 4);
                    KeLeaveCriticalRegion();
                    GreReleaseHmgrSemaphore(v211);
                    v213 = (__int64 *)Entry;
                    v214 = v369;
                    v215 = (void *)*((_QWORD *)Entry + 13);
                    if ( v215 )
                    {
                      if ( v215 != *(void **)(v369 + 3936) )
                        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v215);
                      v213[13] = 0LL;
                    }
                    if ( !*(_DWORD *)(v214 + 3192) )
                    {
                      if ( (v213[3] & 0x800) != 0 )
                      {
                        v337 = (__int64 *)v213[6];
                        if ( v337 )
                        {
                          v363 = (struct OBJECT *)v213[6];
                          if ( (unsigned int)GreGetObjectOwner(*v337, 8) != -2147483646 )
                            XEPALOBJ::vUnrefPalette(&v363);
                        }
                      }
                      v212 = (__int64 *)v213[15];
                      if ( v213 != v212 )
                      {
                        v363 = (struct OBJECT *)v213[15];
                        if ( (unsigned int)GreGetObjectOwner(*v212, 8) != -2147483646 )
                          XEPALOBJ::vUnrefPalette(&v363);
                      }
                    }
                    v216 = (void *)v213[16];
                    if ( v216 )
                      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v216);
                    SharedWaiters = *(PERESOURCE *)(SGDGetSessionState(v212) + 24);
                    v217 = *(_QWORD *)(*(_QWORD *)&SharedWaiters[62].OwnerEntry.0 + 8LL);
                    if ( v217 )
                    {
                      memset(v213, 0, 0x90uLL);
                      ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v217 + 48), v213);
                    }
                    v132 = 0LL;
                    goto LABEL_244;
                  }
                }
                v210 = (unsigned __int64)v203 >> 8;
                goto LABEL_234;
              }
              v331 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v158 + 136);
              v332 = 2LL;
            }
            TrackObjectReferenceDecrement(v332, v331);
            goto LABEL_211;
          }
        }
        HANDLELOCK::vUnlock((HANDLELOCK *)&v372);
        if ( v373 )
          HANDLELOCK::vUnlock((HANDLELOCK *)&v372);
        v297 = *(_QWORD *)(SGDGetSessionState(v296) + 24);
        v298 = *(_QWORD *)(v297 + 1912);
        v300 = *(_QWORD *)(SGDGetSessionState(v299) + 24);
        if ( *(_DWORD *)(v300 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pz_EtwWriteTransfer(
            v300,
            (unsigned int)&LockRelease,
            v301,
            v298,
            (__int64)L"GreBaseGlobals.hsemHmgr");
        v302 = *(struct _ERESOURCE **)(v297 + 1912);
        if ( v302 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v302);
          PsLeavePriorityRegion(v305, v304);
        }
LABEL_370:
        v303 = Entry;
        if ( (unsigned int)GreGetObjectOwner(*(_QWORD *)Entry, 8) )
          v303[7] |= 0x4000u;
LABEL_244:
        if ( v134 )
          goto LABEL_245;
        goto LABEL_270;
      }
    }
    else
    {
LABEL_552:
      KeLeaveCriticalRegion();
    }
    GreReleaseHmgrSemaphore(v159);
    goto LABEL_370;
  }
LABEL_270:
  v220 = *v132;
  v221 = *v132;
  v393[0] = 0LL;
  LODWORD(v393[1]) = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)v393, (unsigned __int16)v220 | (v221 >> 8) & 0xFF0000, 0, 0, 1);
  if ( LODWORD(v393[1]) )
  {
    v222 = v393[0];
    v223 = *((_BYTE *)v393[0] + 14);
    if ( v223 == 5 )
    {
      v338 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v132 + 85);
      v339 = 0LL;
    }
    else
    {
      if ( v223 != 16 )
      {
LABEL_273:
        --v132[2];
        v224 = *(_QWORD *)(SGDGetSessionState(SharedWaiters) + 24);
        v225 = *(_QWORD *)(v224 + 8008);
        v226 = SGDGetSessionState(v224);
        v227 = *v222 & 0xFFFFFF;
        v228 = *(_QWORD *)(*(_QWORD *)(v226 + 24) + 8008LL);
        if ( v227 >= 0x10000 )
        {
          if ( *(_DWORD *)v228 > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *(GdiHandleEntryDirectory **)(v228 + 16),
                                        *(unsigned __int16 *)v222,
                                        1)
                 + 13) == HIWORD(v227) )
              v227 = (unsigned __int16)v227;
          }
          else
          {
            v227 = *(unsigned __int16 *)v222;
          }
        }
        v229 = *(_QWORD *)(v228 + 16);
        v230 = *(_DWORD *)(v229 + 2056);
        if ( v227 >= v230 + ((*(unsigned __int16 *)(v229 + 2) + 0xFFFF) << 16)
          || (v227 >= v230
            ? (v231 = *(_QWORD *)(v229 + 8LL * (((v227 - v230) >> 16) + 1) + 8),
               v227 += -65536 * ((v227 - v230) >> 16) - v230)
            : (v231 = *(_QWORD *)(v229 + 8)),
              v227 >= *(_DWORD *)(v231 + 20)) )
        {
          v232 = 0LL;
        }
        else
        {
          v232 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v231 + 24) + 8 * ((unsigned __int64)v227 >> 8))
                            + 16LL * (unsigned __int8)v227
                            + 8);
        }
        v233 = (unsigned __int16)*v232 | (*v232 >> 8) & 0xFF0000;
        if ( v233 >= 0x10000 )
        {
          if ( *(_DWORD *)v225 > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *(GdiHandleEntryDirectory **)(v225 + 16),
                                        (unsigned __int16)*v232,
                                        1)
                 + 13) == HIWORD(v233) )
              v233 = (unsigned __int16)v233;
          }
          else
          {
            v233 = (unsigned __int16)*v232;
          }
        }
        v234 = *(_QWORD *)(v225 + 16);
        v235 = *(_DWORD *)(v234 + 2056);
        if ( v233 < v235 + ((*(unsigned __int16 *)(v234 + 2) + 0xFFFF) << 16) )
        {
          if ( v233 >= v235 )
          {
            v236 = *(_QWORD *)(v234 + 8LL * (((v233 - v235) >> 16) + 1) + 8);
            v233 += -65536 * ((v233 - v235) >> 16) - v235;
          }
          else
          {
            v236 = *(_QWORD *)(v234 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v236 + 24LL * v233 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v236 + 24) + 8 * ((unsigned __int64)v233 >> 8)) + 16LL * (unsigned __int8)v233,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
        goto LABEL_245;
      }
      v338 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v132 + 17);
      v339 = 2LL;
    }
    TrackObjectReferenceDecrement(v339, v338);
    goto LABEL_273;
  }
LABEL_245:
  if ( qword_1C02D58A0 && (int)qword_1C02D58A0() >= 0 && qword_1C02D58A8 )
    qword_1C02D58A8(Resource);
  if ( (v382 & 0x1000) != 0 )
  {
    v340 = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( v340 )
      --*(_DWORD *)(v340 + 104);
    v382 &= ~0x1000u;
    v341 = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( v341 )
    {
      *(_QWORD *)(v341 + 320) = 0LL;
      *(_QWORD *)(v341 + 312) = 0LL;
    }
  }
  else if ( (v382 & 0x800000) != 0 )
  {
    v342 = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( v342 )
      --*(_DWORD *)(v342 + 104);
    v382 &= ~0x800000u;
  }
  if ( Resource[0] )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hsemTrg", (int)Resource[0]);
    SharedWaiters = Resource[0];
    if ( Resource[0] )
    {
      ExReleaseResourceAndLeaveCriticalRegion(Resource[0]);
      PsLeavePriorityRegion(v295, v294);
    }
  }
  if ( (v382 & 8) != 0 )
    v382 &= ~8u;
  if ( Resource[1] )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hsemDMC", (int)Resource[1]);
    SharedWaiters = Resource[1];
    if ( Resource[1] )
    {
      ExReleaseResourceAndLeaveCriticalRegion(Resource[1]);
      PsLeavePriorityRegion(v344, v343);
    }
  }
  if ( qword_1C02D58B0 && (int)qword_1C02D58B0() >= 0 && qword_1C02D58B8 )
    qword_1C02D58B8(&v388, &v387, &v386, v383);
  if ( v384[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v384);
  v218 = v392;
  if ( v392 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hsem", (int)v392);
    ExReleaseResourceAndLeaveCriticalRegion(v218);
    PsLeavePriorityRegion(v346, v345);
  }
  if ( v18 )
  {
    v347 = *(_QWORD *)(SGDGetSessionState(SharedWaiters) + 24);
    EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v347 + 80));
    v348 = *(struct _ERESOURCE **)(v347 + 80);
    if ( v348 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v348);
      PsLeavePriorityRegion(v350, v349);
    }
  }
  return v400;
}
