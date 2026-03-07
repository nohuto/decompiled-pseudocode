__int64 __fastcall PspAllocateProcess(
        __int64 a1,
        KPROCESSOR_MODE a2,
        _QWORD *a3,
        char a4,
        char a5,
        char a6,
        void *a7,
        void *a8,
        int a9,
        char a10,
        __int64 a11,
        int a12,
        PVOID a13,
        __int64 a14,
        _QWORD *a15)
{
  int v16; // r14d
  unsigned int v18; // ebx
  _DWORD *v19; // r8
  unsigned int v20; // r13d
  unsigned int MaximumGroupCount; // eax
  int v22; // ecx
  int v23; // r9d
  unsigned int v24; // r12d
  __int64 result; // rax
  __int64 v26; // rdx
  char *v27; // r14
  __int16 v28; // r8
  __int16 v29; // cx
  int v30; // r8d
  __int64 Flink; // rax
  char *v32; // rcx
  __int64 v33; // r12
  int v34; // eax
  int v35; // ecx
  int DefaultPagePriority; // edx
  __int64 v37; // r8
  PVOID v38; // rcx
  int v39; // r12d
  int IsTokenAssignableToProcess; // edi
  HANDLE *v41; // r12
  int v42; // eax
  __int16 v43; // r11
  unsigned int v44; // edi
  KPROCESSOR_MODE v45; // al
  int v46; // ecx
  __int16 v47; // r12
  bool v48; // sf
  __int64 v49; // r12
  unsigned __int16 v50; // di
  ULONG v51; // edi
  char v52; // r13
  int v53; // r12d
  int v54; // eax
  int v55; // edx
  __int64 v56; // rdx
  int v57; // r8d
  __int64 SessionSchedulingGroupByProcess; // rax
  int v59; // ecx
  char v60; // r8
  _DWORD *v61; // rdi
  __int64 v62; // rcx
  __int64 v63; // r12
  _BYTE *v64; // r9
  unsigned int v65; // r8d
  int inited; // eax
  __int64 v67; // r8
  __int64 v68; // rdx
  __int64 v69; // r9
  int v70; // r12d
  _DWORD *v71; // rcx
  __int16 v72; // r11
  unsigned __int64 *v73; // r15
  __int64 v74; // rdx
  int v75; // ecx
  int v76; // r11d
  _DWORD *v77; // rax
  _DWORD *v78; // rax
  __int64 v79; // rdx
  PVOID v80; // r12
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rax
  unsigned __int8 v84; // r12
  ULONG_PTR v85; // rcx
  struct _KTHREAD *v86; // r13
  __int64 v87; // r12
  ULONGLONG UnbiasedInterruptTime; // rax
  _QWORD *v89; // rcx
  int ImageFileKeyOption; // eax
  __int64 Pool2; // r10
  int v92; // eax
  _QWORD *v93; // rax
  int IsSessionLeaderProcess; // eax
  volatile signed __int32 *v95; // rdx
  unsigned __int64 v96; // rdx
  char *v97; // rcx
  __int64 v98; // rcx
  void *v99; // rax
  __int64 v100; // rax
  bool v101; // zf
  __int64 v102; // rcx
  int v103; // edi
  int v104; // edi
  int SectionInformation; // eax
  _DWORD *v106; // rcx
  __int64 v107; // rax
  __int64 v108; // r12
  __int64 v109; // r12
  void *v110; // rax
  size_t v111; // r8
  __int64 v112; // r12
  unsigned __int64 **v113; // rdx
  char v114; // al
  __int64 v115; // r8
  unsigned int ProcessNtdllType; // eax
  __int64 v117; // r8
  __int64 v118; // rcx
  unsigned __int16 v120[2]; // [rsp+78h] [rbp-7B0h] BYREF
  char v121; // [rsp+7Ch] [rbp-7ACh] BYREF
  char v122; // [rsp+7Dh] [rbp-7ABh] BYREF
  char v123[2]; // [rsp+7Eh] [rbp-7AAh] BYREF
  __int16 v124; // [rsp+80h] [rbp-7A8h]
  __int64 v125; // [rsp+88h] [rbp-7A0h]
  __int64 v126; // [rsp+90h] [rbp-798h] BYREF
  int v127; // [rsp+98h] [rbp-790h]
  int v128; // [rsp+9Ch] [rbp-78Ch]
  __int16 v129; // [rsp+A0h] [rbp-788h]
  int v130; // [rsp+A4h] [rbp-784h]
  int v131; // [rsp+A8h] [rbp-780h]
  int v132; // [rsp+ACh] [rbp-77Ch]
  unsigned int v133; // [rsp+B0h] [rbp-778h]
  PVOID v134; // [rsp+B8h] [rbp-770h] BYREF
  int v135; // [rsp+C0h] [rbp-768h] BYREF
  int v136; // [rsp+C4h] [rbp-764h]
  PVOID TokenInformation; // [rsp+C8h] [rbp-760h] BYREF
  unsigned __int16 *v138; // [rsp+D0h] [rbp-758h]
  unsigned __int16 *v139; // [rsp+D8h] [rbp-750h] BYREF
  _DWORD *v140; // [rsp+E0h] [rbp-748h]
  ULONG SessionId; // [rsp+E8h] [rbp-740h] BYREF
  int v142; // [rsp+ECh] [rbp-73Ch]
  int v143; // [rsp+F0h] [rbp-738h]
  volatile signed __int32 *v144; // [rsp+F8h] [rbp-730h]
  _KPROCESS *Process; // [rsp+100h] [rbp-728h]
  unsigned int v146; // [rsp+108h] [rbp-720h]
  PVOID Object; // [rsp+110h] [rbp-718h]
  int v148; // [rsp+118h] [rbp-710h]
  int v149; // [rsp+11Ch] [rbp-70Ch]
  int v150; // [rsp+120h] [rbp-708h]
  int v151; // [rsp+124h] [rbp-704h]
  int v152; // [rsp+128h] [rbp-700h]
  __int64 v153; // [rsp+130h] [rbp-6F8h]
  __int64 v154; // [rsp+138h] [rbp-6F0h]
  PACCESS_TOKEN Token; // [rsp+140h] [rbp-6E8h]
  PVOID Address; // [rsp+148h] [rbp-6E0h]
  unsigned __int64 v157; // [rsp+150h] [rbp-6D8h]
  _QWORD *v158; // [rsp+158h] [rbp-6D0h]
  int v159; // [rsp+160h] [rbp-6C8h] BYREF
  HANDLE KeyHandle; // [rsp+168h] [rbp-6C0h] BYREF
  PVOID v161; // [rsp+170h] [rbp-6B8h]
  PVOID v162; // [rsp+178h] [rbp-6B0h] BYREF
  PVOID v163; // [rsp+180h] [rbp-6A8h] BYREF
  PVOID P; // [rsp+188h] [rbp-6A0h]
  HANDLE Handle; // [rsp+190h] [rbp-698h] BYREF
  __int128 v166; // [rsp+198h] [rbp-690h] BYREF
  unsigned __int64 *v167; // [rsp+1A8h] [rbp-680h]
  __int64 v168; // [rsp+1B0h] [rbp-678h]
  __int64 v169; // [rsp+1B8h] [rbp-670h]
  __int64 v170; // [rsp+1C0h] [rbp-668h]
  struct _KTHREAD *CurrentThread; // [rsp+1D0h] [rbp-658h]
  __int64 v172; // [rsp+1D8h] [rbp-650h] BYREF
  __int64 v173; // [rsp+1E0h] [rbp-648h]
  _QWORD *v174; // [rsp+1E8h] [rbp-640h]
  __int128 v175; // [rsp+1F0h] [rbp-638h] BYREF
  __int128 v176; // [rsp+200h] [rbp-628h] BYREF
  OBJECT_ATTRIBUTES v177; // [rsp+210h] [rbp-618h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+240h] [rbp-5E8h] BYREF
  __int128 v179; // [rsp+270h] [rbp-5B8h] BYREF
  __int64 v180; // [rsp+280h] [rbp-5A8h]
  __int128 v181; // [rsp+290h] [rbp-598h] BYREF
  unsigned __int64 v182; // [rsp+2A0h] [rbp-588h]
  __int128 v183; // [rsp+2B0h] [rbp-578h] BYREF
  __int64 v184; // [rsp+2C0h] [rbp-568h]
  __int128 v185; // [rsp+2D0h] [rbp-558h] BYREF
  unsigned __int64 v186; // [rsp+2E0h] [rbp-548h]
  __int128 v187; // [rsp+2F0h] [rbp-538h] BYREF
  __int64 v188; // [rsp+300h] [rbp-528h]
  __int128 v189; // [rsp+310h] [rbp-518h] BYREF
  __int64 v190; // [rsp+320h] [rbp-508h]
  __int128 v191; // [rsp+330h] [rbp-4F8h] BYREF
  unsigned __int64 v192; // [rsp+340h] [rbp-4E8h]
  __int128 v193; // [rsp+350h] [rbp-4D8h] BYREF
  unsigned __int64 v194; // [rsp+360h] [rbp-4C8h]
  _DWORD v195[20]; // [rsp+370h] [rbp-4B8h] BYREF
  __int128 v196; // [rsp+3C0h] [rbp-468h] BYREF
  unsigned __int64 v197; // [rsp+3D0h] [rbp-458h]
  __int128 v198; // [rsp+3D8h] [rbp-450h] BYREF
  unsigned __int64 v199; // [rsp+3E8h] [rbp-440h]
  __int128 v200; // [rsp+3F0h] [rbp-438h] BYREF
  __int128 v201; // [rsp+400h] [rbp-428h]
  __int64 v202; // [rsp+410h] [rbp-418h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v203; // [rsp+418h] [rbp-410h] BYREF
  _DWORD v204[68]; // [rsp+450h] [rbp-3D8h] BYREF
  _DWORD v205[136]; // [rsp+560h] [rbp-2C8h] BYREF
  _DWORD v206[8]; // [rsp+780h] [rbp-A8h] BYREF
  _OWORD v207[4]; // [rsp+7A0h] [rbp-88h] BYREF

  v16 = (int)a3;
  v158 = a3;
  v125 = a1;
  v169 = a1;
  Object = a7;
  Token = a8;
  v167 = (unsigned __int64 *)a11;
  v170 = a11;
  v161 = a13;
  v173 = a14;
  v174 = a15;
  v159 = 0;
  memset(&v203, 0, sizeof(v203));
  v205[131] = 0;
  memset(&v177, 0, 44);
  v176 = 0LL;
  Handle = 0LL;
  memset(&v204[2], 0, 0x100uLL);
  v18 = 0;
  v135 = 0;
  v196 = 0LL;
  v197 = 0LL;
  v198 = 0LL;
  v199 = 0LL;
  v123[0] = 0;
  memset(&ObjectAttributes, 0, 44);
  KeyHandle = 0LL;
  v134 = 0LL;
  v122 = 0;
  v129 = 0;
  v126 = 0LL;
  memset(v195, 0, 0x48uLL);
  LODWORD(TokenInformation) = 0;
  v172 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v138 = 0LL;
  v139 = 0LL;
  P = 0LL;
  v133 = 0;
  v128 = 0;
  v143 = 0;
  v142 = 0;
  v131 = 34404;
  v150 = 0;
  v132 = 0;
  v152 = 0;
  v136 = 0;
  Address = 0LL;
  v151 = 0;
  v168 = 0LL;
  v124 = 0;
  memset(v205, 0, 0x218uLL);
  v127 = a9;
  if ( (a9 & 0x800) != 0 )
  {
    v18 = 2;
    if ( (a9 & 0x2000) != 0 )
    {
      v18 = 6;
      if ( (a9 & 0x4000) != 0 )
        v18 = 14;
    }
  }
  else if ( !a7 )
  {
    v18 = a1 != 0 ? 4 : 1;
  }
  if ( (v18 & 4) != 0 )
  {
    if ( a12 && (v18 & 2) == 0 )
      return 3221225520LL;
    if ( (*(_DWORD *)(a1 + 2172) & 0x1000) != 0 )
      return 3221225485LL;
  }
  else if ( (a9 & 0x1000) != 0 )
  {
    return 3221225520LL;
  }
  v154 = a1 & -(__int64)((a9 & 0x100) != 0);
  v19 = (_DWORD *)(a11 + 4);
  if ( a11 )
  {
    v140 = (_DWORD *)(a11 + 4);
    if ( (*v19 & 0x2000) != 0 )
    {
      if ( (a1 & -(__int64)((a9 & 0x100) != 0)) == 0 )
      {
        v138 = (unsigned __int16 *)KeNodeBlock[*(unsigned __int16 *)(a11 + 250)];
        v139 = v138;
        v154 = 0LL;
        goto LABEL_11;
      }
      return 3221225520LL;
    }
  }
  v140 = (_DWORD *)(a11 + 4);
  if ( a1 )
  {
    v154 = a1 & -(__int64)((a9 & 0x100) != 0);
    v140 = (_DWORD *)(a11 + 4);
    if ( (*(_DWORD *)(a1 + 1120) & 0x200000) != 0 )
    {
      v154 = a1;
      v128 = 0x200000;
      v140 = (_DWORD *)(a11 + 4);
    }
  }
LABEL_11:
  if ( a11 && (*v19 & 0x40000) != 0 )
  {
    v18 |= 0x10000u;
    *(_BYTE *)(a11 + 8) &= ~0x10u;
  }
  v200 = 0LL;
  v201 = 0LL;
  v202 = 0LL;
  v163 = 0LL;
  v20 = 2944;
  LODWORD(v144) = 0;
  v153 = 0LL;
  if ( !PsDisableDiskCounters )
  {
    v20 = 2984;
    v18 |= 0x8000u;
    v153 = 2944LL;
  }
  if ( (unsigned __int8)PoEnergyEstimationEnabled() )
  {
    LODWORD(v144) = (v20 + 7) & 0xFFFFFFF8;
    v20 = (_DWORD)v144 + 480;
    v18 |= 0x20000u;
    v16 = (int)v158;
  }
  MaximumGroupCount = KeQueryMaximumGroupCount();
  v146 = MaximumGroupCount;
  v24 = 0;
  if ( (unsigned __int16)MaximumGroupCount > 1u )
  {
    v24 = (v20 + 7) & 0xFFFFFFF8;
    v20 = 16 * (unsigned __int16)MaximumGroupCount + v24;
  }
  LOBYTE(v23) = a2;
  LOBYTE(v22) = a2;
  result = ObCreateObject(v22, (_DWORD)PsProcessType, v16, v23, 0, v20, 0, v20, (__int64)&v134);
  if ( (int)result >= 0 )
  {
    v27 = (char *)v134;
    ObRetagReferences(v134, v26, 1917023056LL);
    memset(v27, 0, v20);
    *((_OWORD *)v27 + 128) = 0LL;
    *((_OWORD *)v27 + 129) = 0LL;
    *((_QWORD *)v27 + 256) = 0LL;
    *((_QWORD *)v27 + 258) = v27 + 2056;
    *((_QWORD *)v27 + 257) = v27 + 2056;
    ExInitializePushLock((PEX_RUNDOWN_REF)v27 + 139);
    *((_QWORD *)v27 + 135) = 0LL;
    *((_QWORD *)v27 + 189) = v27 + 1504;
    *((_QWORD *)v27 + 188) = v27 + 1504;
    *((_QWORD *)v27 + 277) = v27 + 2208;
    *((_QWORD *)v27 + 276) = v27 + 2208;
    *((_QWORD *)v27 + 307) = v27 + 2448;
    *((_QWORD *)v27 + 306) = v27 + 2448;
    v27[2170] = a4;
    v27[2168] = a5;
    v27[2169] = a6;
    *((_QWORD *)v27 + 283) = 0LL;
    KeInitializeIdealProcessorAssignmentBlock((__int64)(v27 + 2560));
    *((_QWORD *)v27 + 356) = 0LL;
    *((_QWORD *)v27 + 355) = 0LL;
    *((_QWORD *)v27 + 358) = 0LL;
    *((_QWORD *)v27 + 357) = 0LL;
    *((_QWORD *)v27 + 360) = 0LL;
    if ( (v18 & 2) != 0 )
      *((_DWORD *)v27 + 543) |= 1u;
    v28 = v127;
    if ( (v127 & 0x8000) != 0 )
      *((_DWORD *)v27 + 543) |= 0x20u;
    if ( v24 )
    {
      *((_DWORD *)v27 + 543) |= 0x80u;
      v97 = &v27[v24];
      *((_QWORD *)v27 + 297) = v97;
      *((_QWORD *)v27 + 298) = &v97[8 * v146];
    }
    if ( (a10 & 1) != 0 )
      *((_DWORD *)v27 + 543) |= 0x1000u;
    if ( (a10 & 4) != 0 )
      *((_DWORD *)v27 + 543) |= 0x800000u;
    if ( (a10 & 8) != 0 )
      *((_DWORD *)v27 + 543) |= 0x8000000u;
    if ( (a10 & 0x10) != 0 )
      *((_DWORD *)v27 + 543) |= 0x40000000u;
    v29 = v28;
    v30 = 512;
    Flink = (__int64)Process[1].Header.WaitListHead.Flink | 2;
    if ( (v29 & 0x200) != 0 )
      Flink = (__int64)Process[1].Header.WaitListHead.Flink;
    *((_QWORD *)v27 + 169) = Flink;
    if ( (v18 & 0x8000) != 0 )
      *((_QWORD *)v27 + 279) = &v27[v153];
    if ( v18 >= 0x20000 )
    {
      v32 = &v27[(unsigned int)v144];
      *((_QWORD *)v27 + 285) = v32;
      PoEnergyContextInitialize(v32);
    }
    if ( a11 && (v30 & *v140) != 0 )
    {
      v34 = *(_DWORD *)(a11 + 316);
      v33 = v125;
    }
    else
    {
      v33 = v125;
      if ( v125 )
        v34 = *(_DWORD *)(v125 + 1528);
      else
        v34 = 5;
    }
    *((_DWORD *)v27 + 382) = v34;
    *((_DWORD *)v27 + 501) = 259;
    if ( v33 )
    {
      v35 = (*(_DWORD *)(v33 + 1124) >> 27) & 7;
      DefaultPagePriority = (*(_DWORD *)(v33 + 1120) >> 12) & 7;
      *((_QWORD *)v27 + 168) = *(_QWORD *)(v33 + 1088);
    }
    else
    {
      DefaultPagePriority = MmGetDefaultPagePriority();
    }
    *((_DWORD *)v27 + 281) = *((_DWORD *)v27 + 281) & 0xC7FFFFFF | (v35 << 27);
    v144 = (volatile signed __int32 *)(v27 + 1120);
    *((_DWORD *)v27 + 280) = (DefaultPagePriority << 12) | *((_DWORD *)v27 + 280) & 0xFFFF8FFF;
    if ( v161 )
    {
      if ( !PsReferencePartitionSafe((__int64)v161) )
      {
        IsTokenAssignableToProcess = -1073740640;
        goto LABEL_321;
      }
    }
    else
    {
      v161 = PspSystemPartition;
      IoDiskIoAttributionReference((__int64)PspSystemPartition);
    }
    *((_QWORD *)v27 + 315) = v37;
    v38 = Object;
    if ( Object )
    {
      ObfReferenceObject(Object);
      v38 = Object;
    }
    if ( (v18 & 4) == 0 || (v131 = *(unsigned __int16 *)(v33 + 2412), (v18 & 2) != 0) )
    {
      v39 = 0;
    }
    else
    {
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v33 + 1112)) )
      {
        v99 = *(void **)(v33 + 1304);
        Object = v99;
        if ( v99 )
          ObfReferenceObject(v99);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v33 + 1112));
      }
      v38 = Object;
      if ( !Object )
      {
        IsTokenAssignableToProcess = -1073741558;
        goto LABEL_321;
      }
      v100 = *(_QWORD *)(v33 + 1408);
      if ( v100 )
      {
        v18 |= 0x40u;
        v150 = *(_DWORD *)(v100 + 8);
      }
      v101 = (*(_DWORD *)(v33 + 1124) & 0x20000) == 0;
      v39 = 0;
      if ( !v101 )
        v39 = 0x20000;
      HIDWORD(v126) = v39;
    }
    v158 = v27 + 1304;
    *((_QWORD *)v27 + 163) = v38;
    if ( !a11 )
    {
      if ( v38 )
      {
        SectionInformation = MmGetSectionInformation(v38, 4LL, v195);
        IsTokenAssignableToProcess = SectionInformation;
        if ( SectionInformation < 0 )
          goto LABEL_321;
        v18 |= (HIBYTE(v195[12]) & 4 | (4
                                      * (HIBYTE(v195[12]) & 2 | (32
                                                               * (v195[16] & 1 | (2
                                                                                * (v195[16] & 2 | (2 * (v195[16] & 0xFC))))))))) << 11;
        v124 = HIWORD(v195[11]);
        v143 = HIWORD(v195[9]);
        v142 = LOWORD(v195[9]);
        if ( (v18 & 4) != 0 )
        {
          HIDWORD(v126) = v39 | 8;
          v18 |= 0x18u;
        }
      }
      goto LABEL_67;
    }
    *((_QWORD *)v27 + 270) = *(_QWORD *)(a11 + 440);
    IsTokenAssignableToProcess = MmGetSectionInformation(v38, 4LL, a11 + 48);
    if ( IsTokenAssignableToProcess < 0 )
      goto LABEL_321;
    v18 |= (*(_BYTE *)(a11 + 99) & 4 | (4
                                      * (*(_BYTE *)(a11 + 99) & 2 | (32
                                                                   * (*(_DWORD *)(a11 + 112) & 1 | (2
                                                                                                  * (*(_DWORD *)(a11 + 112) & 2 | (2 * (*(_DWORD *)(a11 + 112) & 0xFC))))))))) << 11;
    v143 = *(unsigned __int16 *)(a11 + 86);
    v142 = *(unsigned __int16 *)(a11 + 84);
    if ( (*(_WORD *)(a11 + 92) & *(_WORD *)(a11 + 10)) == 0 )
    {
      if ( (v18 & 4) == 0 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(a11 + 176), 0x72437350u);
        *((_QWORD *)v27 + 180) = *(_QWORD *)(a11 + 176);
        v124 = *(_WORD *)(a11 + 94);
        v41 = (HANDLE *)(a11 + 192);
        v42 = RtlOpenImageFileOptionsKey(a11 + 232, 0LL, a11 + 192);
        if ( v42 < 0 )
        {
          if ( v42 == -1073741772 )
            *(_BYTE *)(a11 + 8) |= 0x40u;
          *v41 = 0LL;
        }
        IsTokenAssignableToProcess = PspSelectMachineForProcess(v125, a11, (unsigned __int16 *)&v135);
        if ( IsTokenAssignableToProcess < 0 )
        {
          v102 = 4LL;
          goto LABEL_292;
        }
        v131 = (unsigned __int16)v135;
        if ( BYTE2(v135) )
          v18 |= 0x40u;
        if ( HIBYTE(v135) )
          HIDWORD(v126) |= 0x20000u;
        if ( !*v41 )
          goto LABEL_67;
        if ( *(char *)(a11 + 8) >= 0 )
        {
          if ( (ImageFileKeyOption = RtlQueryImageFileKeyOption(*v41, 2, (__int64)&v126),
                ImageFileKeyOption == -2147483643)
            || ImageFileKeyOption >= 0 && (_DWORD)v126 == 2 && v129
            || (v148 = 0, (int)RtlQueryImageFileKeyOption(*v41, 4, 0LL) >= 0) && v148 == 1 )
          {
            IsTokenAssignableToProcess = -1073741767;
            v102 = 5LL;
            goto LABEL_292;
          }
        }
        v130 = 0;
        if ( (int)RtlQueryImageFileKeyOption(*v41, 4, 0LL) >= 0 )
        {
          if ( v130 )
          {
            v103 = v127 | 0x10;
            v127 = v103;
            a9 = v103;
            if ( (v18 & 0x40) == 0 )
            {
              v177.Length = 48;
              v177.RootDirectory = *v41;
              v177.Attributes = 576;
              v177.ObjectName = (PUNICODE_STRING)&PspLargePageDLLKeyName;
              *(_OWORD *)&v177.SecurityDescriptor = 0LL;
              if ( ZwOpenKey(&Handle, 1u, &v177) >= 0 )
              {
                v130 = 0;
                if ( (int)RtlQueryImageFileKeyOption(Handle, 4, 0LL) >= 0 && v130 )
                {
                  v127 = v103 | 0x20;
                  a9 = v103 | 0x20;
                }
                ObCloseHandle(Handle, 0);
              }
            }
          }
        }
        if ( !v154 )
        {
          PspReadIFEONodeOptions(v27, *v41, &v139);
          v138 = v139;
        }
        v149 = 0;
        if ( (int)RtlQueryImageFileKeyOption(*v41, 4, 0LL) >= 0 && v149 )
          v128 |= 0x40u;
        if ( (unsigned int)RtlQueryImageFileKeyOption(*v41, 0, (__int64)&v126) == -2147483643 )
        {
          v104 = v126;
          if ( (unsigned int)v126 <= 0x100 && (v126 & 7) == 0 )
          {
            P = (PVOID)ExAllocatePool2(64LL, (unsigned int)v126, 1933800272LL);
            if ( !P )
              goto LABEL_314;
            if ( (int)RtlQueryImageFileKeyOption(*v41, v104, (__int64)&v126) >= 0 && (v126 & 7) == 0 )
            {
              v18 |= 0x200000u;
              v133 = (unsigned int)v126 >> 3;
            }
          }
        }
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = *v41;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspPerfOptionsKeyName;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
        {
          PspReadIFEOPerfOptions(KeyHandle);
          ObCloseHandle(KeyHandle, 0);
        }
      }
LABEL_67:
      if ( (v18 & 0x40) == 0 )
      {
        v43 = v131;
        goto LABEL_69;
      }
      Pool2 = ExAllocatePool2(64LL, 16LL, 1350004567LL);
      *((_QWORD *)v27 + 176) = Pool2;
      if ( Pool2 )
      {
        v92 = v150;
        v43 = v131;
        if ( !v150 )
          v92 = PspWow64PickBestNtdll(a11);
        *(_DWORD *)(Pool2 + 8) = v92;
        v93 = (_QWORD *)*((_QWORD *)v27 + 176);
        if ( v93 )
          *v93 = 1LL;
LABEL_69:
        v153 = (__int64)(v27 + 2412);
        *((_WORD *)v27 + 1206) = v43;
        IsTokenAssignableToProcess = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
        if ( IsTokenAssignableToProcess >= 0 )
        {
          v44 = 0;
          v45 = a2;
          if ( a2 )
          {
            if ( a11 && (*v140 & 0x100) != 0 && *(_BYTE *)(a11 + 248) == 4 )
            {
              v206[0] = 14;
              v44 = 1;
            }
            v46 = a12;
            if ( a12 )
              v206[v44++] = 3;
            v47 = v127;
            if ( (v127 & 0x30) != 0 )
              v206[v44++] = 4;
            if ( (v47 & 0x80u) != 0 )
            {
              IsSessionLeaderProcess = MmIsSessionLeaderProcess(Process);
              v46 = a12;
              if ( !IsSessionLeaderProcess )
                v206[v44++] = 10;
            }
            if ( (v47 & 0x8400) != 0 )
              v206[v44++] = 7;
            if ( v44 )
            {
              v48 = (int)RtlAcquirePrivilege(v206, v44, v46 != 0, &v163) < 0;
              v45 = a2;
              if ( !v48 )
                v18 |= 0x400u;
            }
            else
            {
              v45 = a2;
            }
          }
          else
          {
            v47 = v127;
          }
          if ( (v47 & 0x8400) != 0 && !SeSinglePrivilegeCheck(SeTcbPrivilege, v45) )
            goto LABEL_318;
          v120[0] = -1;
          v204[0] = 2097153;
          memset(&v204[1], 0, 0x104uLL);
          if ( v154 )
          {
            KeQueryAffinityProcess(v154, (__int64)v204, 0LL, v207, v120);
            v138 = (unsigned __int16 *)KeNodeBlock[*((unsigned __int16 *)v207 + v120[0])];
            v139 = v138;
            goto LABEL_90;
          }
          v49 = (__int64)v138;
          if ( !v138 )
          {
            if ( !v125 )
            {
              v50 = 0;
              v120[0] = 0;
              KeAddProcessorAffinityEx((unsigned __int16 *)v204, 0);
LABEL_89:
              KiCopyAffinityEx((__int64)v204, HIWORD(v204[0]), (unsigned __int16 *)KeActiveProcessors);
              if ( !v49 )
              {
                v175 = 0LL;
                WORD4(v175) = v50;
                if ( v50 >= LOWORD(v204[0]) )
                  v98 = 0LL;
                else
                  v98 = *(_QWORD *)&v204[2 * v50 + 2];
                *(_QWORD *)&v175 = v98;
                v138 = (unsigned __int16 *)KeSelectNodeForAffinity((__int64)&v175);
                v139 = v138;
              }
LABEL_90:
              *((_DWORD *)v27 + 281) |= HIDWORD(v126);
              *v144 |= v128;
              if ( v125 )
              {
                v162 = 0LL;
                v51 = 0;
                SessionId = 0;
                v52 = 0;
                v121 = 0;
                if ( a12 )
                {
                  if ( SeSinglePrivilegeCheck(SeAssignPrimaryTokenPrivilege, a2) )
                    v18 |= 0x200u;
                  IsTokenAssignableToProcess = SeIsTokenAssignableToProcess(Token, &v121);
                  if ( IsTokenAssignableToProcess < 0 )
                    goto LABEL_319;
                  v53 = (v18 >> 9) & 1;
                  v52 = v121;
                  if ( !v121 && !v53 )
                    goto LABEL_318;
                  IsTokenAssignableToProcess = SeQuerySessionIdToken(Token, &SessionId);
                  if ( IsTokenAssignableToProcess < 0 )
                    goto LABEL_319;
                  v54 = MmGetSessionIdEx((__int64)Process);
                  v51 = SessionId;
                  if ( SessionId != v54 )
                  {
                    if ( !v53 )
                    {
LABEL_318:
                      IsTokenAssignableToProcess = -1073741727;
                      goto LABEL_319;
                    }
                    if ( (v127 & 0x80u) != 0 )
                    {
                      IsTokenAssignableToProcess = -1073741811;
                      goto LABEL_319;
                    }
                    v18 |= 0x20u;
                  }
                }
                else if ( (v18 & 4) != 0 )
                {
                  v51 = MmGetSessionIdEx(v125);
                  SessionId = v51;
                  v18 |= (unsigned int)MmGetSessionIdEx((__int64)Process) != v51 ? 0x20 : 0;
                }
                if ( (v18 & 0x20) != 0 )
                {
                  IsTokenAssignableToProcess = PspAttachSession(v51, &v203, &v162);
                  if ( IsTokenAssignableToProcess < 0 )
                  {
                    LOWORD(v18) = v18 & 0xFFDF;
                    goto LABEL_319;
                  }
                  *v144 |= 0x80u;
                }
                if ( !a12 || v52 )
                {
                  v56 = v125;
                  if ( v52 )
                    v56 = (__int64)Process;
                  PspInheritQuota((__int64)v27, v56);
                }
                else
                {
                  IsTokenAssignableToProcess = PspAssignProcessQuotaBlock(0LL, v27, Token);
                  if ( IsTokenAssignableToProcess < 0 )
                  {
                    if ( (v18 & 0x20) != 0 )
                      PspDetachSession(v162);
                    goto LABEL_319;
                  }
                }
                v57 = PspMaximumWorkingSet;
                if ( (BYTE4(v200) & 1) != 0 )
                  v57 = DWORD2(v201);
                v18 |= (MmCreateProcessAddressSpace(
                          (_DWORD)v161,
                          v55,
                          v57,
                          BYTE4(v200) & 1,
                          (unsigned int)*v138 + 1,
                          (__int64)v27) & 1) << 11;
                if ( (v18 & 0x20) != 0 )
                  PspDetachSession(v162);
                if ( (v18 & 0x800) == 0 )
                  goto LABEL_331;
              }
              else
              {
                PspInheritQuota((__int64)v27, 0LL);
                v27[912] = 1;
                IsTokenAssignableToProcess = MmInitializeHandBuiltProcess();
                if ( IsTokenAssignableToProcess < 0 )
                  goto LABEL_319;
              }
              _InterlockedOr((volatile signed __int32 *)v27 + 281, 0x40000u);
              v27 = (char *)v134;
              SessionSchedulingGroupByProcess = MmGetSessionSchedulingGroupByProcess(v134);
              IsTokenAssignableToProcess = KeInitializeProcess(
                                             v59,
                                             8,
                                             v120[0],
                                             (unsigned int)v204,
                                             (__int64)v139,
                                             SessionSchedulingGroupByProcess,
                                             v60);
              if ( IsTokenAssignableToProcess < 0 )
                goto LABEL_319;
              if ( a11 )
              {
                v132 = *(_DWORD *)(a11 + 392);
                v152 = *(_DWORD *)(a11 + 396);
                Address = *(PVOID *)(a11 + 416);
                v151 = *(_DWORD *)(a11 + 424);
                v168 = *(_QWORD *)(a11 + 208);
                v61 = *(_DWORD **)(a11 + 400);
                v136 = *(_DWORD *)(a11 + 408);
                v62 = *(_QWORD *)(a11 + 176);
                if ( v62 && qword_140C37680 && (int)qword_140C37680(v62, v205) >= 0 )
                {
                  if ( !v205[0] && v61 && v136 == 524 )
                  {
                    v106 = v205;
                    v107 = 4LL;
                    do
                    {
                      *(_OWORD *)v106 = *(_OWORD *)v61;
                      *((_OWORD *)v106 + 1) = *((_OWORD *)v61 + 1);
                      *((_OWORD *)v106 + 2) = *((_OWORD *)v61 + 2);
                      *((_OWORD *)v106 + 3) = *((_OWORD *)v61 + 3);
                      *((_OWORD *)v106 + 4) = *((_OWORD *)v61 + 4);
                      *((_OWORD *)v106 + 5) = *((_OWORD *)v61 + 5);
                      *((_OWORD *)v106 + 6) = *((_OWORD *)v61 + 6);
                      v106 += 32;
                      *((_OWORD *)v106 - 1) = *((_OWORD *)v61 + 7);
                      v61 += 32;
                      --v107;
                    }
                    while ( v107 );
                    *(_QWORD *)v106 = *(_QWORD *)v61;
                    v106[2] = v61[2];
                  }
                  v61 = v205;
                  v136 = 536;
                }
              }
              else
              {
                v61 = 0LL;
              }
              v63 = v125;
              IsTokenAssignableToProcess = PspInitializeProcessSecurity(
                                             v125,
                                             (_DWORD)v27,
                                             (_DWORD)Token,
                                             a12,
                                             v132,
                                             (v18 >> 4) & 1,
                                             HIWORD(v18) & 1,
                                             v152,
                                             (__int64)v61,
                                             v136,
                                             (__int64)Address,
                                             v151,
                                             v168,
                                             v173);
              if ( IsTokenAssignableToProcess < 0 )
                goto LABEL_319;
              v27[1463] = 2;
              if ( v63 )
              {
                if ( ((*(_BYTE *)(v63 + 1463) - 1) & 0xFB) == 0 )
                  v27[1463] = *(_BYTE *)(v63 + 1463);
                v64 = a11 ? *(_BYTE **)(a11 + 296) : 0LL;
                v65 = a11 ? *(_DWORD *)(a11 + 292) : 0;
                inited = ObInitProcess(
                           (struct _EX_RUNDOWN_REF *)(v63 & -(__int64)((a9 & 4) != 0)),
                           (__int64)v27,
                           v65,
                           v64);
              }
              else
              {
                *((_QWORD *)v27 + 174) = Process[1].Affinity.StaticBitmap[28];
                inited = MmInitializeHandBuiltProcess2((ULONG_PTR)v27);
              }
              IsTokenAssignableToProcess = inited;
              if ( inited < 0 )
                goto LABEL_319;
              if ( (v200 & 7) != 0 )
              {
                LOBYTE(v67) = a2;
                PspApplyIFEOPerfOptions(v27, &v200, v67);
              }
              if ( (v18 & 0x200000) != 0 )
                KeSetCpuSetsProcess((__int64)v27, v133, (__int64)P);
              KeStartIdealProcessorAssignmentBlock(
                (__int64)(v27 + 2560),
                (__int64)v27,
                (unsigned int *)((unsigned __int64)&v202 & -(__int64)((BYTE4(v200) & 2) != 0)));
              if ( a11 )
              {
                if ( (*v140 & 0x100) != 0 )
                {
                  LOBYTE(v69) = a2;
                  LOBYTE(v68) = *(_BYTE *)(a11 + 248);
                  IsTokenAssignableToProcess = PspSetProcessPriorityClass(v27, v68, 0LL, v69);
                  if ( IsTokenAssignableToProcess < 0 )
                    goto LABEL_319;
                }
              }
              v27[640] = PspComputeQuantumAndPriority((_DWORD)v27, 0, (unsigned int)&v122, 0, 0LL);
              v27[641] = v122;
              IsTokenAssignableToProcess = 0;
              v132 = 0;
              PspReadIFEOMitigationOptions(a11, &v196);
              v181 = v196;
              v182 = v197;
              v183 = PspSystemMitigationOptions;
              v184 = qword_140D1EFD8;
              PspInheritMitigationOptions(&v183, &v181, &v196);
              PspReadIFEOMitigationAuditOptions(a11, &v198);
              v185 = v198;
              v186 = v199;
              v187 = PspSystemMitigationAuditOptions;
              v188 = qword_140D1F258;
              PspInheritMitigationAuditOptions(&v187, &v185, &v198);
              v70 = (WORD3(v196) & 3) << 16;
              v71 = v140;
              if ( a11 )
              {
                if ( (*v140 & 0x10000) != 0 )
                {
                  v189 = *(_OWORD *)(a11 + 336);
                  v190 = *(_QWORD *)(a11 + 352);
                  v191 = v196;
                  v192 = v197;
                  PspInheritMitigationOptions(&v191, &v189, &v196);
                  v71 = v140;
                }
                if ( (*v71 & 0x8000000) != 0 )
                {
                  v179 = *(_OWORD *)(a11 + 464);
                  v180 = *(_QWORD *)(a11 + 480);
                  v193 = v198;
                  v194 = v199;
                  PspInheritMitigationAuditOptions(&v193, &v179, &v198);
                }
              }
              if ( (_DWORD)TokenInformation )
                LOWORD(v70) = v70 | 4;
              v72 = v70 | 0x100;
              if ( (v70 & 4) == 0 )
                v72 = v70;
              if ( (v72 & 0xFF00) != 0 )
                PspHardenMitigationOptions(&v196);
              if ( !KeIsUserCetAllowed() )
                *((_QWORD *)&v196 + 1) = *((_QWORD *)&v196 + 1) & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
              if ( (v18 & 2) != 0 )
              {
                *(_QWORD *)&v196 = v196 & 0xFFFFFCFFFFFFFFFFuLL | 0x20000000000LL;
                *((_QWORD *)&v196 + 1) = *((_QWORD *)&v196 + 1) & 0xCFFFFFFFFFFFFFFCuLL | 0x2000000000000002LL;
                if ( (a10 & 2) != 0 )
                  v96 = v196 & 0xFFFFFFFFFFCCFFFFuLL | 0x220000;
                else
                  v96 = v196 & 0xFFFFFFFFFFCCFFFFuLL | 0x110000;
                *(_QWORD *)&v196 = v96;
              }
              v73 = v167;
              if ( (v18 & 4) != 0 && (*(_DWORD *)(v125 + 2516) & 0x4000) == 0 )
                *((_QWORD *)&v196 + 1) = *((_QWORD *)&v196 + 1) & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
              if ( (v18 & 0x40) != 0 )
                *((_QWORD *)&v196 + 1) = *((_QWORD *)&v196 + 1) & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
              v197 = v197 & 0xFFFFFFFFFFFFCFFFuLL | 0x2000;
              if ( !KeIsCoreIsolationMitigationPolicyEnforceable() )
                v197 = v74 & 0xFFFFFFFFFCFFFFFFuLL | 0x2000000;
              PspApplyMitigationOptions((_DWORD)v27, v76, (unsigned int)&v196, (unsigned int)&v198, v75);
              if ( v73 )
              {
                v77 = (_DWORD *)v73[56];
                if ( v77 )
                {
                  v95 = (volatile signed __int32 *)(v27 + 2512);
                  if ( (*v77 & 1) != 0 )
                  {
                    _InterlockedOr(v95, 0x4000u);
                    v27 = (char *)v134;
                  }
                  if ( (*(_DWORD *)v73[56] & 2) != 0 )
                  {
                    _InterlockedOr(v95, 0x8000u);
                    v27 = (char *)v134;
                  }
                  *((_DWORD *)v27 + 602) = *(_DWORD *)(v73[56] + 4);
                }
                v78 = (_DWORD *)v73[57];
                if ( v78 )
                  *((_DWORD *)v27 + 718) = *v78;
                *((_OWORD *)v73 + 21) = v196;
                v73[44] = v197;
                *((_OWORD *)v73 + 29) = v198;
                v73[60] = v199;
              }
              PsQueryProcessAttributes((__int64)v27, 0LL, (__int64)v123);
              v79 = ((_DWORD)TokenInformation != 0) | 2u;
              if ( (a9 & 0x20000) == 0 )
                v79 = (_DWORD)TokenInformation != 0;
              SmProcessCreateNotification(v27, v79);
              if ( (*((_DWORD *)v27 + 629) & 0x4000) != 0 )
              {
                IsTokenAssignableToProcess = KeInitializeProcessUserCetLogging(v27);
                if ( IsTokenAssignableToProcess < 0 )
                  goto LABEL_319;
              }
              if ( (a9 & 0x80u) != 0
                && !(unsigned int)MmIsSessionLeaderProcess(Process)
                && !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, a2) )
              {
                goto LABEL_318;
              }
              if ( (v18 & 1) != 0 )
              {
LABEL_177:
                if ( (v18 & 0x400) != 0 )
                  RtlReleasePrivilege(v163);
                if ( *(_WORD *)v153 == 332 )
                  *((_DWORD *)v27 + 158) |= 1u;
                v133 = v18 & 0x80;
                if ( (v18 & 0x80) != 0 )
                {
                  if ( v73 )
                  {
                    IsTokenAssignableToProcess = PspSetupReservedUserMappings((_KPROCESS *)v27, &v203, v73);
                    if ( IsTokenAssignableToProcess < 0 )
                      goto LABEL_321;
                  }
                }
                v146 = v18 & 0x100;
                if ( (v18 & 0x100) != 0 )
                {
                  *(_QWORD *)&v166 = 0LL;
                  *((_QWORD *)&v166 + 1) = -1LL;
                  v84 = (4 * (((v27[2170] & 7) != 1 ? 0 : 0x10) | ((v18 & 0x2000) != 0))) & 0xCF | ((v27[2170] & 7) != 0
                                                                                                  ? 2
                                                                                                  : 0) | ((v18 & 0x1000) != 0) | (16 * (((_DWORD)TokenInformation != 0 ? 2 : 0) | v123[0] & 1));
                  *(_DWORD *)((char *)&v166 + 3) = v84;
                  if ( (v18 & 4) != 0 )
                  {
                    v85 = v125;
                    Address = *(PVOID *)(v125 + 1360);
                    *((_QWORD *)v27 + 170) = Address;
                    if ( (v18 & 0x10) != 0 )
                      goto LABEL_190;
                    LOBYTE(v166) = 1;
                    KiStackAttachProcess((_KPROCESS *)v27, 0, (__int64)&v203);
                    if ( MmSecureVirtualMemory(Address, 0x7D0uLL, 4u) )
                      *(_OWORD *)Address = v166;
                    else
                      IsTokenAssignableToProcess = -1073741503;
                    if ( IsTokenAssignableToProcess >= 0 )
                    {
                      v113 = (unsigned __int64 **)*((_QWORD *)v27 + 176);
                      if ( v113 )
                      {
                        if ( *(_WORD *)v153 == 332 || (v114 = 0, *(_WORD *)v153 == 452) )
                          v114 = 1;
                        if ( v114 )
                        {
                          v167 = *v113;
                          if ( MmSecureVirtualMemory(v167, 0x488uLL, 4u) )
                          {
                            v157 = 0xFFFFFFFF00000001uLL;
                            BYTE3(v157) = v84;
                            *v167 = v157;
                          }
                          else
                          {
                            IsTokenAssignableToProcess = -1073741503;
                          }
                        }
                      }
                    }
                    KiUnstackDetachProcess(&v203);
                    if ( IsTokenAssignableToProcess < 0 )
                      goto LABEL_321;
                  }
                  else
                  {
                    IsTokenAssignableToProcess = MmCreatePeb(
                                                   (__int64)v27,
                                                   (__int64)&v166,
                                                   (_QWORD *)v27 + 170,
                                                   (__int64)&v176);
                    if ( IsTokenAssignableToProcess < 0 )
                    {
                      *((_QWORD *)v27 + 170) = 0LL;
                      goto LABEL_321;
                    }
                    if ( (_QWORD)v176 )
                    {
                      _InterlockedAnd(v144, 0xFFCFFFFF);
                      v27 = (char *)v134;
                      PspSetProcessAffinitySafe(v134, 1LL, 0LL, &v176, &v159);
                    }
                  }
                }
                v85 = v125;
LABEL_190:
                if ( (v18 & 0x80) != 0 && v73 )
                {
                  IsTokenAssignableToProcess = PspSetupUserProcessAddressSpace(
                                                 v85,
                                                 (_KPROCESS *)v27,
                                                 &v203,
                                                 (__int64)v73);
                }
                else if ( v146 && (v18 & 0x10) == 0 )
                {
                  IsTokenAssignableToProcess = 0;
                  KiStackAttachProcess((_KPROCESS *)v27, 0, (__int64)&v203);
                  KeCopyXfdMaskToPeb(v27);
                  PspWritePebAffinityInfo((__int64)CurrentThread, (__int64)v27);
                  if ( (v18 & 0x80) != 0 )
                  {
                    IsTokenAssignableToProcess = MmMapApiSetView((__int64)v27);
                    if ( IsTokenAssignableToProcess >= 0 )
                    {
                      IsTokenAssignableToProcess = PspMapSiloSharedDataView((__int64)v27);
                      if ( IsTokenAssignableToProcess >= 0 )
                      {
                        IsTokenAssignableToProcess = PspPrepareSystemDllInitBlock(0LL, 0LL, v115);
                        if ( IsTokenAssignableToProcess >= 0 )
                        {
                          if ( *((_QWORD *)v27 + 176) )
                          {
                            ProcessNtdllType = PsWow64GetProcessNtdllType((__int64)v27);
                            IsTokenAssignableToProcess = PspPrepareSystemDllInitBlock(ProcessNtdllType, 0LL, v117);
                          }
                        }
                      }
                    }
                  }
                  KiUnstackDetachProcess(&v203);
                }
                if ( IsTokenAssignableToProcess < 0 )
                  goto LABEL_321;
                v86 = CurrentThread;
                PspLockProcessExclusive((__int64)v27, (__int64)CurrentThread);
                v87 = ExCreateHandle(PspCidTable, v27);
                if ( !v87 )
                {
                  PspUnlockProcessExclusive((__int64)v27, (__int64)v86);
                  IsTokenAssignableToProcess = -1073741670;
                  goto LABEL_321;
                }
                if ( (v18 & 0x10000) == 0 )
                {
LABEL_196:
                  if ( KeQuerySystemTimeUnsafe() )
                  {
                    KeQuerySystemTimePrecise((_QWORD *)v27 + 141);
                  }
                  else
                  {
                    v27 = (char *)v134;
                    *((_QWORD *)v134 + 141) = MEMORY[0xFFFFF78000000014];
                  }
                  *((_QWORD *)v27 + 136) = v87;
                  *((_QWORD *)v27 + 288) = MEMORY[0xFFFFF78000000008];
                  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
                  v89 = v134;
                  *((_QWORD *)v134 + 289) = UnbiasedInterruptTime;
                  v89[291] = *((_QWORD *)v27 + 288);
                  *v174 = v89;
                  IsTokenAssignableToProcess = v132;
                  goto LABEL_199;
                }
                IsTokenAssignableToProcess = MmGetSectionStrongImageReference(0LL, 0LL, *v158, &v172);
                v118 = (__int64)v27;
                if ( IsTokenAssignableToProcess >= 0 )
                {
                  IsTokenAssignableToProcess = KeSecureProcess(
                                                 (_KPROCESS *)v27,
                                                 *((_QWORD *)v27 + 170),
                                                 v87,
                                                 v73[23],
                                                 v172,
                                                 (struct _MDL *)v73[46],
                                                 *((unsigned int *)v73 + 96));
                  if ( IsTokenAssignableToProcess >= 0 )
                    goto LABEL_196;
                  v118 = (__int64)v27;
                }
                PspUnlockProcessExclusive(v118, (__int64)v86);
                goto LABEL_321;
              }
              if ( (v18 & 4) == 0 )
              {
                IsTokenAssignableToProcess = PspInitializeFullProcessImageName((__int64)v73, (__int64)v27);
                if ( IsTokenAssignableToProcess >= 0 )
                {
                  v80 = Object;
                  v81 = MmInitializeProcessAddressSpace((ULONG_PTR)v27, 0);
                  IsTokenAssignableToProcess = v81;
                  if ( v81 >= 0 )
                  {
                    v132 = v81;
                    if ( v73 )
                    {
                      v82 = *(_QWORD *)(*(_QWORD *)MiSectionControlArea((__int64)v80) + 32LL);
                      v83 = *((_QWORD *)v27 + 164);
                      if ( v82 != v83 )
                        v73[6] += v83 - v82;
                    }
                    v18 |= 0x80u;
LABEL_174:
                    if ( (v18 & 1) == 0 )
                    {
                      v18 |= (a9 & 0x10) << 8;
                      if ( (v18 & 2) == 0 )
                        v18 |= 0x100u;
                    }
                    goto LABEL_177;
                  }
                }
LABEL_319:
                if ( (v18 & 0x400) != 0 )
                  RtlReleasePrivilege(v163);
                goto LABEL_321;
              }
              v108 = v125;
              *((_QWORD *)v27 + 164) = *(_QWORD *)(v125 + 1312);
              IsTokenAssignableToProcess = MmInitializeProcessAddressSpace((ULONG_PTR)v27, (v18 >> 3) & 1);
              if ( IsTokenAssignableToProcess < 0 )
                goto LABEL_319;
              v109 = *(unsigned __int16 *)(*(_QWORD *)(v108 + 1472) + 2LL);
              v110 = (void *)ExAllocatePool2(64LL, v109 + 16, 1632658771LL);
              *((_QWORD *)v27 + 184) = v110;
              if ( v110 )
              {
                v111 = v109 + 16;
                v112 = v125;
                memmove(v110, *(const void **)(v125 + 1472), v111);
                *(_QWORD *)(*((_QWORD *)v27 + 184) + 8LL) = *((_QWORD *)v27 + 184) + 16LL;
                *((_DWORD *)v27 + 330) = *(_DWORD *)(v112 + 1320);
                if ( (*(_DWORD *)(v112 + 1120) & 0x1000000) != 0 )
                  *v144 |= 0x1000000u;
                if ( (a9 & 0x1000) != 0 )
                {
                  *v158 = 0LL;
                  ObfDereferenceObject(Object);
                }
                goto LABEL_174;
              }
LABEL_331:
              IsTokenAssignableToProcess = -1073741670;
              goto LABEL_319;
            }
            if ( (*(_DWORD *)(v125 + 1120) & 0x100000) == 0 )
            {
              v49 = PspSelectNodeForProcess();
              v138 = (unsigned __int16 *)v49;
              v139 = (unsigned __int16 *)v49;
              v50 = KeSelectGroupFromNode(v49);
              v120[0] = v50;
              if ( KeForceGroupAwareness && KeQueryActiveGroupCount() > 1u && !v50 )
              {
                v49 = 0LL;
                v138 = 0LL;
                v139 = 0LL;
                v50 = 1;
                v120[0] = 1;
              }
              goto LABEL_89;
            }
            v128 |= 0x100000u;
            v49 = KeNodeBlock[*(unsigned __int16 *)(v125 + 836)];
            v138 = (unsigned __int16 *)v49;
            v139 = (unsigned __int16 *)v49;
          }
          v120[0] = KeSelectGroupFromNode(v49);
          v50 = v120[0];
          goto LABEL_89;
        }
LABEL_321:
        PspRundownSingleProcess((PRKPROCESS)v27, 0);
        ObfDereferenceObjectWithTag(v27, 0x72437350u);
LABEL_199:
        if ( P )
          ExFreePoolWithTag(P, 0x73437350u);
        if ( qword_140C37688 )
          qword_140C37688(v205);
        return (unsigned int)IsTokenAssignableToProcess;
      }
LABEL_314:
      IsTokenAssignableToProcess = -1073741801;
      goto LABEL_321;
    }
    IsTokenAssignableToProcess = -1073741701;
    v102 = 3LL;
LABEL_292:
    PspUpdateCreateInfo(v102, a11, 0LL);
    goto LABEL_321;
  }
  return result;
}
