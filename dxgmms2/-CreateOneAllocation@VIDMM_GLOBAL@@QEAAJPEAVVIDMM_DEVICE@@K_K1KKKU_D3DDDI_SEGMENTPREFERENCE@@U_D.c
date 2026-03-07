// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_GLOBAL::CreateOneAllocation(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D a10,
        char a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        int a15,
        unsigned __int8 a16,
        __int64 a17,
        __int64 a18,
        struct _VIDMM_CROSSADAPTER_ALLOC **a19,
        __int64 *a20)
{
  char v20; // r14
  unsigned int v22; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v26; // r9
  __int64 v27; // r8
  int v28; // edx
  unsigned int v29; // r15d
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v37; // rdx
  __int64 CurrentProcess; // rax
  int v39; // edi
  __int64 v40; // rcx
  __int64 v41; // rcx
  unsigned int i; // r8d
  int v43; // eax
  unsigned __int8 v44; // cl
  int v45; // eax
  unsigned int v46; // ebx
  int v47; // edx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 Value; // rbx
  __int64 v53; // rcx
  __int64 v54; // rcx
  int v55; // edi
  __int64 *v56; // rax
  unsigned int v57; // edx
  __int64 v58; // rcx
  __int64 v59; // rcx
  unsigned int v60; // ecx
  __int64 v61; // rcx
  __int64 v62; // rcx
  unsigned int v63; // r10d
  __int64 v64; // rax
  unsigned int v65; // r8d
  int v66; // r10d
  unsigned int v67; // r9d
  int v68; // edx
  __int64 v69; // rcx
  unsigned int v70; // edx
  __int64 v71; // rcx
  unsigned int v72; // eax
  __int64 v73; // rcx
  __int64 v74; // rcx
  struct _VIDMM_CROSSADAPTER_ALLOC **v75; // r11
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rcx
  unsigned int v80; // edx
  __int64 v81; // rcx
  unsigned int v82; // r8d
  __int64 v83; // rcx
  unsigned int v84; // r9d
  __int64 v85; // rcx
  DXGADAPTER *v86; // rcx
  int v87; // eax
  int v88; // edx
  __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rcx
  __int64 v93; // rcx
  __int64 v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // rcx
  int v98; // eax
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // r12
  __int64 v102; // rax
  _QWORD *v103; // rax
  __int64 v104; // r13
  __int64 v105; // rcx
  __int64 v106; // rax
  _QWORD *v107; // rax
  unsigned int v108; // eax
  __int64 v109; // rax
  __int64 v110; // rcx
  int SyncObject; // r12d
  void **v112; // rsi
  void **v113; // rcx
  __int64 j; // rbx
  char *v115; // rax
  int *v116; // rcx
  KSPIN_LOCK *v117; // rdx
  int v118; // ecx
  struct _VIDMM_POOL_BLOCK *v119; // rcx
  VIDMM_GLOBAL *v120; // r12
  __int64 v121; // rax
  void **v122; // r9
  unsigned __int64 v123; // r8
  unsigned int v124; // ecx
  signed int v125; // r10d
  _QWORD *v126; // rax
  __int64 v127; // rax
  void **v128; // r8
  volatile signed __int32 *v129; // rcx
  int v130; // edx
  __int64 v131; // r11
  int *v132; // rcx
  struct _VIDMM_CROSSADAPTER_ALLOC *v133; // rax
  struct VIDMM_PARTITION *v134; // rax
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rax
  unsigned __int64 v138; // r12
  __int64 v139; // rcx
  __int64 *v140; // rcx
  unsigned int *v141; // r8
  __int64 v142; // r9
  unsigned int v143; // eax
  int v144; // edx
  void **v145; // r10
  _DWORD *v146; // rax
  int *v147; // r12
  int v148; // ecx
  int v149; // ecx
  unsigned int v150; // ecx
  unsigned int v151; // ecx
  int v152; // eax
  __int64 v153; // rcx
  int v154; // eax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  unsigned __int8 v158; // r9
  int IsEnabledDeviceUsage; // eax
  DXGADAPTER *v160; // rcx
  VIDMM_GLOBAL *v161; // r11
  unsigned int v162; // edx
  __int64 v163; // rax
  __int64 v164; // rcx
  unsigned int v165; // edx
  int v166; // eax
  int v168; // edx
  int *v169; // r11
  __int64 v170; // rdi
  unsigned int v171; // eax
  int v172; // ecx
  int v173; // r10d
  unsigned __int8 v174; // r9
  __int64 v175; // rcx
  int v176; // eax
  unsigned int v177; // r10d
  unsigned int v178; // edx
  unsigned int v179; // r11d
  unsigned int v180; // r9d
  unsigned __int8 v181; // r12
  unsigned __int8 v182; // dl
  int v183; // eax
  bool v184; // zf
  _QWORD *v185; // rax
  unsigned int v186; // r9d
  unsigned int v187; // edx
  int v188; // eax
  int v189; // r12d
  int v190; // r9d
  __int64 v191; // rcx
  unsigned int *v192; // rdx
  int v193; // eax
  __int64 v194; // r12
  bool v195; // cf
  unsigned __int64 v196; // rbx
  struct _VIDMM_CROSSADAPTER_ALLOC *v197; // rax
  _QWORD *v198; // r12
  void *Physical; // rax
  struct _VIDMM_CROSSADAPTER_ALLOC *v200; // rcx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v202; // r12
  __int64 v203; // rcx
  unsigned int v204; // eax
  struct VIDMM_PARTITION *v205; // rcx
  int *v206; // r9
  int v207; // edx
  int v208; // ecx
  __int64 v209; // r13
  unsigned int *v210; // rbx
  _DWORD *CurrentProcessId; // rax
  __int64 v212; // rcx
  unsigned int v213; // edx
  __int64 v214; // r8
  unsigned int v215; // r9d
  unsigned int v216; // r10d
  unsigned int v217; // r11d
  unsigned int v218; // eax
  unsigned int v219; // ebx
  unsigned __int64 v220; // rcx
  __int64 v221; // r8
  int v222; // edx
  int *v223; // r9
  __int64 v224; // rdx
  int v225; // [rsp+48h] [rbp-138h]
  int v226; // [rsp+60h] [rbp-120h]
  unsigned __int8 v227; // [rsp+100h] [rbp-80h]
  unsigned __int8 v228; // [rsp+101h] [rbp-7Fh]
  unsigned int v229; // [rsp+104h] [rbp-7Ch]
  char v230; // [rsp+108h] [rbp-78h]
  _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 v231; // [rsp+10Ch] [rbp-74h] BYREF
  int v232; // [rsp+110h] [rbp-70h]
  unsigned int v233; // [rsp+114h] [rbp-6Ch]
  unsigned int *v234; // [rsp+118h] [rbp-68h]
  unsigned int v235[2]; // [rsp+120h] [rbp-60h]
  int v236; // [rsp+128h] [rbp-58h]
  __int64 v237; // [rsp+130h] [rbp-50h]
  unsigned __int64 v238; // [rsp+138h] [rbp-48h]
  __int64 v239; // [rsp+140h] [rbp-40h]
  int v240; // [rsp+148h] [rbp-38h] BYREF
  int *v241; // [rsp+150h] [rbp-30h]
  void **v242; // [rsp+158h] [rbp-28h]
  struct _VIDMM_CROSSADAPTER_ALLOC *v243; // [rsp+160h] [rbp-20h]
  unsigned int v244; // [rsp+168h] [rbp-18h] BYREF
  _DWORD *v245; // [rsp+170h] [rbp-10h]
  _DWORD *v246; // [rsp+178h] [rbp-8h]
  __int64 *v247; // [rsp+180h] [rbp+0h]
  __int64 *v248; // [rsp+188h] [rbp+8h]
  struct VIDMM_PARTITION *v249; // [rsp+190h] [rbp+10h]
  _QWORD *v250; // [rsp+198h] [rbp+18h]
  __int64 v251; // [rsp+1A0h] [rbp+20h]
  int v252[2]; // [rsp+1B0h] [rbp+30h] BYREF
  __int64 v253; // [rsp+1B8h] [rbp+38h]
  __int128 v254; // [rsp+1C0h] [rbp+40h]
  __int128 v255; // [rsp+1D0h] [rbp+50h]
  __int128 v256; // [rsp+1E0h] [rbp+60h]
  __int128 v257; // [rsp+1F0h] [rbp+70h]
  unsigned int v259; // [rsp+250h] [rbp+D0h]
  unsigned __int8 v261; // [rsp+260h] [rbp+E0h]
  int v262; // [rsp+260h] [rbp+E0h]
  char v263; // [rsp+260h] [rbp+E0h]
  unsigned int v265; // [rsp+298h] [rbp+118h]
  unsigned int v266; // [rsp+298h] [rbp+118h]
  unsigned __int8 v267; // [rsp+298h] [rbp+118h]
  int v268; // [rsp+298h] [rbp+118h]
  __int16 v269; // [rsp+298h] [rbp+118h]
  int v270; // [rsp+2A0h] [rbp+120h]
  unsigned int v271; // [rsp+2D8h] [rbp+158h]

  v20 = (char)a10;
  v22 = (unsigned int)a10;
  v231.0 = a10;
  Current = DXGPROCESS::GetCurrent();
  v27 = a17;
  v238 = (unsigned __int64)Current;
  if ( Current && (v28 = *((_DWORD *)Current + 106), (v28 & 0x100) != 0) )
  {
    v230 = 1;
    if ( (v28 & 0x400) == 0 && !a17 && (*(_BYTE *)&a10 & 1) != 0 )
    {
      v22 = *(_DWORD *)&a10 & 0xFFFF7FFF;
      v231.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(*(_DWORD *)&a10 & 0xFFFF7FFF);
    }
  }
  else
  {
    v230 = 0;
  }
  v29 = 0;
  v184 = *(_DWORD *)(a1 + 7016) == 1;
  v30 = *(_QWORD *)(a1 + 40224);
  v249 = *(struct VIDMM_PARTITION **)(a2[1] + 288LL);
  v31 = 0LL;
  if ( !v184 )
    v31 = a3;
  v229 = a7;
  v32 = 1616 * v31;
  *(_QWORD *)v235 = v31;
  v239 = 1616 * v31;
  v251 = 1616 * v31 + v30;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v32) + 24) = a2;
    v33 = (_QWORD *)WdLogNewEntry5_WdTrace(a2);
    v33[3] = a4;
    v33[4] = a6;
    v33[7] = a8;
    v33[5] = 0LL;
    v33[6] = a7;
    v34 = (_QWORD *)WdLogNewEntry5_WdTrace(a8);
    v32 = v22;
    v34[3] = a9;
    v34[4] = v22;
    v34[5] = a12;
  }
  *a20 = 0LL;
  if ( *(_DWORD *)(a1 + 32) < 0x5023u && (v22 & 0x40000) != 0 )
  {
    WdLogSingleEntry1(1LL, 2692LL);
    DxgkLogInternalTriageEvent(v35, 0x40000LL);
    return 3221225485LL;
  }
  v37 = 0x20000LL;
  if ( (v22 & 0x20000) != 0 )
  {
    if ( (v22 & 2) != 0
      || (v22 & 4) != 0 && !DXGADAPTER::IsSoftGPU(*(DXGADAPTER **)(a1 + 24))
      || (v22 & 0x100000) != 0
      || (v22 & 0x80000) != 0
      || (v22 & 8) != 0
      || (v22 & 0x10) != 0
      || (v22 & 0x20) != 0 )
    {
      WdLogSingleEntry1(1LL, 2711LL);
      DxgkLogInternalTriageEvent(v41, 0x40000LL);
      return 3221225485LL;
    }
    v22 &= 0xFFFBFFFE;
    v231.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)v22;
  }
  if ( (v22 & 1) == 0 || (LOBYTE(v236) = 1, (v22 & 0x40000) != 0) )
    LOBYTE(v236) = 0;
  if ( !*(_BYTE *)(a1 + 40176) )
  {
    CurrentProcess = PsGetCurrentProcess(v32, v37, v27, v26);
    if ( PsGetProcessWow64Process(CurrentProcess) )
      goto LABEL_40;
    LODWORD(v37) = 0x20000;
  }
  if ( (v22 & 0x20000000) == 0
    && (v22 & 0x40000000) == 0
    && (v22 & 0x80000000) == 0
    && (v22 & 0x10000000) == 0
    && (v22 & 8) == 0
    && (v22 & 0x400000) == 0
    && (v22 & (unsigned int)v37) == 0
    && !a17 )
  {
    v22 &= ~0x40000u;
    LOBYTE(v236) = 1;
    v231.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)v22;
  }
LABEL_40:
  v39 = (v22 >> 13) & 1;
  if ( v39 && *(char *)(a1 + 40937) >= 0 )
  {
    WdLogSingleEntry1(1LL, 2766LL);
    DxgkLogInternalTriageEvent(v40, 0x40000LL);
    return 3221225485LL;
  }
  for ( i = 0; i < 0x1E; i += 6 )
  {
    v43 = (a9 >> i) & 0x1F;
    if ( v43 )
    {
      v44 = v43 - 1;
      v45 = ~a7;
      if ( _bittest(&v45, v44) )
      {
        WdLogSingleEntry1(1LL, 2776LL);
        DxgkLogInternalTriageEvent(v48, 0x40000LL);
        return 3221225485LL;
      }
    }
  }
  if ( !dword_1C0076560 || (v22 & 1) != 0 )
  {
    v46 = v235[0];
  }
  else
  {
    v46 = v235[0];
    if ( (a9 & 0x1F) != 0 )
    {
      v47 = 1 << ((a9 & 0x1F) - 1);
      v229 = v47;
      goto LABEL_57;
    }
    v244 = 0;
    if ( !VIDMM_GLOBAL::VerifySegmentSetAtLeastOneInMask((VIDMM_GLOBAL *)a1, v235[0], a7, 0x1001u, &v244) )
    {
      v47 = v244;
      v229 = v244;
      goto LABEL_57;
    }
  }
  v47 = a7;
LABEL_57:
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 2816LL);
    DxgkLogInternalTriageEvent(v49, 0x40000LL);
    return 3221225485LL;
  }
  if ( v39 && *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 2820LL) < 2900 )
  {
    WdLogSingleEntry1(1LL, 2826LL);
    DxgkLogInternalTriageEvent(v50, 0x40000LL);
    return 3221225485LL;
  }
  v240 = 0;
  if ( !VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
          (VIDMM_GLOBAL *)a1,
          v46,
          v47,
          &v231,
          a4,
          a5,
          a17 != 0,
          (struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *)&v240) )
  {
    WdLogSingleEntry1(1LL, 2838LL);
    DxgkLogInternalTriageEvent(v51, 0x40000LL);
    return 3221225485LL;
  }
  Value = v231.Value;
  if ( (v231.Value & 0x40000) != 0 )
  {
    if ( (*(_BYTE *)&v231.0 & 1) == 0 )
    {
      WdLogSingleEntry1(1LL, 2853LL);
      DxgkLogInternalTriageEvent(v53, 0x40000LL);
      return 3221225485LL;
    }
    if ( (*(_BYTE *)&v231.0 & 2) != 0 || (*(_BYTE *)&v231.0 & 0x20) != 0 || (*(_BYTE *)&v231.0 & 0x10) != 0 )
    {
      WdLogSingleEntry1(1LL, 2865LL);
      DxgkLogInternalTriageEvent(v54, 0x40000LL);
      return 3221225485LL;
    }
  }
  v55 = v240;
  v56 = 0LL;
  v57 = a8;
  if ( (v240 & 4) != 0 )
    v56 = (__int64 *)a5;
  v248 = v56;
  if ( a8 )
  {
    if ( !VIDMM_GLOBAL::VerifySegmentSet((VIDMM_GLOBAL *)a1, v235[0], a8, 1u, 0LL) )
    {
      WdLogSingleEntry1(1LL, 2897LL);
      DxgkLogInternalTriageEvent(v58, 0x40000LL);
      return 3221225485LL;
    }
    if ( VIDMM_GLOBAL::VerifySegmentSetAny((VIDMM_GLOBAL *)a1, v235[0], a8, 0x20u) )
    {
      WdLogSingleEntry1(1LL, 2912LL);
      DxgkLogInternalTriageEvent(v59, 0x40000LL);
      return 3221225485LL;
    }
    v57 = a8;
  }
  v60 = ((unsigned int)Value >> 1) & 1;
  v265 = v60;
  if ( v60 )
  {
    if ( (Value & 1) == 0 )
    {
      WdLogSingleEntry1(1LL, 2930LL);
      DxgkLogInternalTriageEvent(v61, 0x40000LL);
      return 3221225485LL;
    }
    if ( (Value & 0x20000000) != 0 || (int)Value < 0 || (Value & 0x40000000) != 0 )
    {
      WdLogSingleEntry1(1LL, 2943LL);
      DxgkLogInternalTriageEvent(v62, 0x40000LL);
      return 3221225485LL;
    }
  }
  v63 = ((unsigned int)Value >> 2) & 1;
  if ( v63 && (Value & 0x800000) == 0 )
  {
    if ( *(_BYTE *)(a1 + 7089) )
    {
      v64 = *(_QWORD *)(a1 + 40224);
      v65 = v57;
      v66 = 0;
      v67 = *(_DWORD *)(v64 + v239 + 28);
      if ( (~*(_DWORD *)(v64 + 24) & v57) != 0 )
        goto LABEL_97;
      if ( v57 )
      {
        v68 = 1;
        do
        {
          if ( (v65 & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8LL * v67) + 80LL) & 0x10) == 0 )
            v66 |= v68;
          v68 = __ROL4__(v68, 1);
          ++v67;
          v65 >>= 1;
        }
        while ( v65 );
        if ( v66 )
        {
LABEL_97:
          WdLogSingleEntry1(1LL, 2976LL);
          DxgkLogInternalTriageEvent(v69, 0x40000LL);
          return 3221225485LL;
        }
      }
    }
    else
    {
      if ( DXGADAPTER::IsSoftGPU(*(DXGADAPTER **)(a1 + 24)) )
      {
LABEL_102:
        v60 = v265;
        goto LABEL_103;
      }
      if ( !VIDMM_GLOBAL::VerifySegmentSet((VIDMM_GLOBAL *)a1, v235[0], v70, 1u, 0LL) )
      {
        WdLogSingleEntry1(1LL, 2983LL);
        DxgkLogInternalTriageEvent(v71, 0x40000LL);
        return 3221225485LL;
      }
    }
    v63 = ((unsigned int)Value >> 2) & 1;
    goto LABEL_102;
  }
LABEL_103:
  v72 = ((unsigned int)Value >> 29) & 1;
  if ( v72 && (v60 || (Value & 8) != 0 || (Value & 0x20) != 0 || (Value & 0x40000000) != 0) )
  {
    WdLogSingleEntry1(1LL, 3003LL);
    DxgkLogInternalTriageEvent(v73, 0x40000LL);
    return 3221225485LL;
  }
  v270 = a11 & 1;
  if ( v270 && ((v55 & 1) == 0 || !v72) )
  {
    WdLogSingleEntry1(1LL, 3012LL);
    DxgkLogInternalTriageEvent(v74, 0x40000LL);
    return 3221225485LL;
  }
  v75 = a19;
  if ( (Value & 0x100000) != 0 && (!v72 || !a19 || (v55 & 1) == 0) )
  {
    WdLogSingleEntry1(1LL, 3024LL);
    DxgkLogInternalTriageEvent(v76, 0x40000LL);
    return 3221225485LL;
  }
  if ( a17 && (v60 || (Value & 0x100) != 0 || (Value & 0x200) != 0 || (Value & 0x40000000) != 0) )
  {
    WdLogSingleEntry1(1LL, 3044LL);
    DxgkLogInternalTriageEvent(v77, 0x40000LL);
    return 3221225485LL;
  }
  if ( (((unsigned int)Value >> 26) & 1) != 0 )
  {
    if ( (Value & 8) == 0 )
    {
      WdLogSingleEntry1(1LL, 3060LL);
      DxgkLogInternalTriageEvent(v78, 0x40000LL);
      return 3221225485LL;
    }
LABEL_128:
    if ( (Value & 1) != 0 && (((unsigned int)Value >> 26) & 1) == 0 && !a17
      || v60
      || v72
      || (Value & 0x10) != 0
      || (Value & 0x20) != 0
      || (int)Value < 0
      || (Value & 0x40000000) != 0 )
    {
      WdLogSingleEntry1(1LL, 3093LL);
      DxgkLogInternalTriageEvent(v79, 0x40000LL);
      return 3221225485LL;
    }
    goto LABEL_138;
  }
  if ( (Value & 8) != 0 )
    goto LABEL_128;
LABEL_138:
  v80 = ((unsigned int)Value >> 4) & 1;
  if ( v80 && (v60 || (Value & 0x20) != 0 || (int)Value < 0 || (Value & 0x40000000) != 0) )
  {
    WdLogSingleEntry1(1LL, 3115LL);
    DxgkLogInternalTriageEvent(v81, 0x40000LL);
    return 3221225485LL;
  }
  v82 = ((unsigned int)Value >> 5) & 1;
  if ( v82 && (v60 || v72 || v80 || (int)Value < 0 || (Value & 0x40000000) != 0) )
  {
    WdLogSingleEntry1(1LL, 3139LL);
    DxgkLogInternalTriageEvent(v83, 0x40000LL);
    return 3221225485LL;
  }
  v84 = (unsigned int)Value >> 31;
  if ( (int)Value >= 0 )
  {
    if ( (Value & 0x40000000) != 0 )
    {
      if ( v60
        || v63 && (v86 = *(DXGADAPTER **)(a1 + 24), (*((_DWORD *)v86 + 109) & 0x10) == 0) && !DXGADAPTER::IsSoftGPU(v86)
        || v80
        || v82
        || v84 )
      {
        WdLogSingleEntry1(1LL, 3187LL);
        DxgkLogInternalTriageEvent(v91, 0x40000LL);
        return 3221225485LL;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 2284LL) & 0x200) == 0 )
        Value = (unsigned int)Value | 1;
      v87 = (unsigned __int8)v236;
      if ( (Value & 1) != 0 )
        v87 = 1;
      LODWORD(Value) = Value | 0x20000000;
      v231.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
      v236 = v87;
    }
  }
  else if ( v60
         || v63
         && (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 436LL) & 0x10) == 0
         && !DXGADAPTER::IsSoftGPU(*(DXGADAPTER **)(a1 + 24))
         || v80
         || v82
         || (Value & 0x40000000) != 0 )
  {
    WdLogSingleEntry1(1LL, 3163LL);
    DxgkLogInternalTriageEvent(v85, 0x40000LL);
    return 3221225485LL;
  }
  v266 = ((unsigned int)Value >> 28) & 1;
  if ( v266 )
  {
    if ( DXGADAPTER::IsSoftGPU(*(DXGADAPTER **)(a1 + 24)) || (*(_DWORD *)(v89 + 436) & 0x10) != 0 )
      v88 &= ~4u;
    if ( v88 )
    {
      WdLogSingleEntry1(1LL, 3229LL);
      DxgkLogInternalTriageEvent(v90, 0x40000LL);
      return 3221225485LL;
    }
    if ( !VIDMM_GLOBAL::VerifySegmentSet((VIDMM_GLOBAL *)a1, v235[0], a8, 1u, 0LL) )
    {
      WdLogSingleEntry1(1LL, 3239LL);
      DxgkLogInternalTriageEvent(v92, 0x40000LL);
      return 3221225485LL;
    }
    v75 = a19;
  }
  if ( (Value & 0x400000) != 0 )
  {
    if ( (Value & 0x20000000) == 0 )
    {
      WdLogSingleEntry1(1LL, 3255LL);
      DxgkLogInternalTriageEvent(v93, 0x40000LL);
      return 3221225485LL;
    }
    if ( !a13 )
    {
      WdLogSingleEntry1(1LL, 3265LL);
      DxgkLogInternalTriageEvent(v94, 0x40000LL);
      return 3221225485LL;
    }
  }
  if ( (Value & 0x4000) != 0 )
  {
    if ( (Value & 1) == 0 )
    {
      WdLogSingleEntry1(1LL, 3277LL);
      DxgkLogInternalTriageEvent(v95, 0x40000LL);
      return 3221225485LL;
    }
    if ( (Value & 2) != 0
      || (Value & 8) != 0
      || (Value & 0x10) != 0
      || (Value & 0x20) != 0
      || (Value & 0x40) != 0
      || (Value & 0x100) != 0
      || (Value & 0x200) != 0
      || (Value & 0x40000) != 0 )
    {
      goto LABEL_227;
    }
  }
  if ( v75 )
    v243 = *v75;
  else
    v243 = 0LL;
  if ( (Value & 0x1000) != 0 && (Value & 0x100000) == 0 )
  {
    WdLogSingleEntry1(1LL, 3304LL);
    DxgkLogInternalTriageEvent(v96, 0x40000LL);
    return 3221225485LL;
  }
  if ( (VIDMM_GLOBAL::_Config & 2) != 0
    && DXGPROCESS::GetCurrent()
    && (*((_DWORD *)DXGPROCESS::GetCurrent() + 106) & 4) != 0
    && !v266
    && (Value & 0x40000000) == 0 )
  {
    LODWORD(Value) = Value | 0x8000000;
    v231.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
  }
  v261 = 0;
  v227 = 0;
  v228 = 0;
  v267 = 0;
  LOBYTE(v232) = 0;
  if ( v230 && !a17 )
  {
    v227 = 1;
    if ( (Value & 0x10) != 0 )
    {
      v228 = 1;
    }
    else if ( (Value & 1) != 0 )
    {
      if ( (Value & 0x8000) != 0 && (*(_DWORD *)(v238 + 424) & 0x400) == 0 )
      {
        WdLogSingleEntry1(1LL, 3347LL);
        DxgkLogInternalTriageEvent(v97, 0x40000LL);
        return 3221225485LL;
      }
      v98 = *(_DWORD *)(v238 + 424) >> 10;
      LOBYTE(v98) = (*(_DWORD *)(v238 + 424) & 0x400) != 0;
      v232 = v98;
      v267 = v98 ^ 1;
      v261 = v98 ^ 1;
      if ( (Value & 0x20000000) != 0 )
      {
        v261 = 1;
        v267 = v98 ^ 1;
        v232 = v98;
      }
    }
  }
  Feature_Wddm30CpuVisible__private_ReportDeviceUsage();
  if ( *(_DWORD *)(a1 + 32) >= 0xF002u && (Value & 1) != 0 && (v55 & 2) == 0 && !a18 && (Value & 0x40000000) == 0 )
  {
LABEL_227:
    WdLogSingleEntry1(1LL, Value);
    DxgkLogInternalTriageEvent(v99, 0x40000LL);
    return 3221225485LL;
  }
  if ( !v227 )
  {
    v106 = operator new(544LL, 0x31306956u, 256LL);
    v104 = v106;
    if ( !v106 )
      goto LABEL_236;
    *(_QWORD *)(v106 + 304) = 0LL;
    *(_QWORD *)(v106 + 312) = 0LL;
    *(_QWORD *)(v106 + 320) = 0LL;
    *(_DWORD *)(v106 + 328) = 0;
    *(_DWORD *)(v106 + 332) = 13;
    *(_DWORD *)(v106 + 336) = 66;
    *(_QWORD *)(v106 + 368) = 0LL;
    *(_QWORD *)(v106 + 376) = 0LL;
    *(_QWORD *)(v106 + 504) = 0LL;
    v107 = (_QWORD *)(v106 + 168);
    v237 = v104;
    v107[1] = v107;
    *v107 = v107;
    goto LABEL_239;
  }
  if ( v228 | (unsigned __int8)(v267 | v232) )
  {
    v100 = operator new(592LL, 0x61306956u, 256LL);
    v237 = v100;
    v101 = v100;
    if ( v100 )
    {
      *(_QWORD *)(v100 + 304) = 0LL;
      *(_QWORD *)(v100 + 176) = v100 + 168;
      *(_QWORD *)(v100 + 168) = v100 + 168;
      *(_QWORD *)(v100 + 312) = 0LL;
      *(_QWORD *)(v100 + 320) = 0LL;
      *(_DWORD *)(v100 + 328) = 0;
      *(_DWORD *)(v100 + 332) = 13;
      *(_DWORD *)(v100 + 336) = 66;
      *(_QWORD *)(v100 + 368) = 0LL;
      *(_QWORD *)(v100 + 376) = 0LL;
      *(_QWORD *)(v100 + 504) = 0LL;
      goto LABEL_235;
    }
  }
  else
  {
    v102 = operator new(552LL, 0x61306956u, 256LL);
    v237 = v102;
    v101 = v102;
    if ( v102 )
    {
      *(_QWORD *)(v102 + 304) = 0LL;
      *(_QWORD *)(v102 + 312) = 0LL;
      *(_QWORD *)(v102 + 320) = 0LL;
      *(_DWORD *)(v102 + 328) = 0;
      *(_DWORD *)(v102 + 332) = 13;
      *(_DWORD *)(v102 + 336) = 66;
      *(_QWORD *)(v102 + 368) = 0LL;
      *(_QWORD *)(v102 + 376) = 0LL;
      *(_QWORD *)(v102 + 504) = 0LL;
      v103 = (_QWORD *)(v102 + 168);
      v103[1] = v103;
      *v103 = v103;
      goto LABEL_235;
    }
  }
  v237 = 0LL;
  v101 = 0LL;
LABEL_235:
  v104 = v101;
  if ( !v101 )
  {
LABEL_236:
    _InterlockedIncrement(&dword_1C0076794);
    WdLogSingleEntry1(6LL, 3426LL);
    DxgkLogInternalTriageEvent(v105, 262145LL);
    return 3221225495LL;
  }
LABEL_239:
  v108 = (*(_DWORD *)(v104 + 68) ^ v235[0]) & 0x3F;
  v241 = (int *)(v104 + 68);
  *(_DWORD *)(v104 + 68) ^= v108;
  v109 = operator new(48LL, 0x32346956u, 64LL);
  v242 = (void **)(v104 + 536);
  *(_QWORD *)(v104 + 536) = v109;
  if ( !v109 )
  {
    _InterlockedIncrement(&dword_1C00768A0);
    WdLogSingleEntry1(6LL, 3440LL);
LABEL_241:
    DxgkLogInternalTriageEvent(v110, 262145LL);
LABEL_242:
    SyncObject = -1073741801;
    goto LABEL_243;
  }
  v120 = (VIDMM_GLOBAL *)a1;
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 744LL) + 57LL) || (Value & 0x80000) != 0 )
  {
    v127 = operator new[](12LL, 0x33306956u, 64LL);
    v128 = v242;
    *((_QWORD *)*v242 + 2) = v127;
    v129 = (volatile signed __int32 *)*((_QWORD *)*v128 + 2);
    if ( !v129 )
    {
      _InterlockedIncrement(&dword_1C007678C);
      WdLogSingleEntry1(6LL, 3508LL);
      goto LABEL_241;
    }
    _InterlockedIncrement(v129);
    LODWORD(Value) = v231;
    v55 = v240;
    v130 = 0;
    if ( (v231.Value & 0x100000) == 0 )
      v130 = -1;
    *(_DWORD *)(*((_QWORD *)*v128 + 2) + 4LL) = v130;
  }
  else if ( (Value & 0x40000000) != 0 || (int)Value < 0 )
  {
    v121 = operator new(168LL, 0x33306956u, 64LL);
    v122 = v242;
    *((_QWORD *)*v242 + 3) = v121;
    if ( !*((_QWORD *)*v122 + 3) )
    {
      _InterlockedIncrement(&dword_1C007678C);
      WdLogSingleEntry1(6LL, 3456LL);
      goto LABEL_241;
    }
    v123 = 16LL;
    v233 = 0;
    v124 = 1000 * (v235[0] + 1);
    v125 = 0;
    v238 = 16LL;
    LODWORD(v234) = v124;
    while ( 1 )
    {
      v254 = 0LL;
      v255 = 0LL;
      v256 = 0LL;
      v252[1] = 128;
      v126 = *v122;
      v253 = v125 * v124 + 100LL;
      v257 = 0LL;
      v252[0] = 5;
      *(_QWORD *)(v123 + v126[3]) = v253;
      SyncObject = VidSchCreateSyncObject(
                     *(_QWORD *)(*((_QWORD *)v120 + 2) + 744LL),
                     0,
                     (int)v252,
                     (unsigned int)(v125 != 1) + 7,
                     0LL,
                     0LL,
                     (PVOID)(*((_QWORD *)*v122 + 3) + 8LL * v125),
                     0LL);
      if ( SyncObject < 0 )
        break;
      v125 = v233 + 1;
      v120 = (VIDMM_GLOBAL *)a1;
      v123 = v238 + 8;
      v122 = v242;
      v124 = (unsigned int)v234;
      v233 = v125;
      v238 += 8LL;
      if ( v125 >= 2 )
        goto LABEL_275;
    }
LABEL_243:
    if ( (*(_DWORD *)(v104 + 76) & 0x20) != 0 )
      VIDMM_GLOBAL::UncommitGlobalBackingStore((VIDMM_GLOBAL *)a1, (struct _VIDMM_GLOBAL_ALLOC *)v104, 1);
    v112 = v242;
    v113 = (void **)*v242;
    if ( *v242 )
    {
      if ( v113[3] )
      {
        for ( j = 0LL; j < 16; j += 8LL )
        {
          v115 = (char *)v113[3];
          if ( *(_QWORD *)&v115[j] )
          {
            VidSchDestroySyncObject(*(PVOID *)&v115[j]);
            v113 = (void **)*v112;
          }
        }
        operator delete(v113[3]);
      }
      v116 = (int *)*((_QWORD *)*v112 + 2);
      if ( v116 )
        VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(v116);
      operator delete(*v112);
    }
    v117 = *(KSPIN_LOCK **)(v104 + 520);
    if ( v117 )
    {
      VIDMM_GLOBAL::FreeCrossAdapterDataDpc((VIDMM_GLOBAL *)v113, v117, (struct _VIDMM_GLOBAL_ALLOC *)v104);
      v118 = _InterlockedDecrement(*(volatile signed __int32 **)(v104 + 520));
      if ( !v118 )
      {
        v119 = *(struct _VIDMM_POOL_BLOCK **)(*(_QWORD *)(v104 + 520) + 48LL);
        if ( v119 )
          VIDMM_GLOBAL::FreePhysical(v119);
        VIDMM_GLOBAL::DestroyCrossAdapterAllocation(v119, *(struct _VIDMM_CROSSADAPTER_ALLOC **)(v104 + 520));
        *a19 = 0LL;
        _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'((_VIDMM_GLOBAL_ALLOC *)v104);
        return (unsigned int)SyncObject;
      }
      if ( v118 < 0 )
      {
        v223 = *(int **)(v104 + 520);
        v224 = *v223;
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 66LL, v223, v224, 0LL);
      }
    }
    _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'((_VIDMM_GLOBAL_ALLOC *)v104);
    return (unsigned int)SyncObject;
  }
LABEL_275:
  v131 = a12;
  if ( a12 )
  {
    v132 = v241;
    if ( (*(_DWORD *)(a12 + 4) & 0x8000) != 0 )
      *v241 |= 0x800u;
    if ( (*(_DWORD *)(a12 + 4) & 0x10000) != 0 )
    {
      *(_DWORD *)(v104 + 72) |= 0x400u;
      *v132 |= 0x800000u;
    }
    if ( (*(_DWORD *)(a12 + 4) & 0x8000000) != 0 )
      *v132 |= 0x1000u;
  }
  v133 = v243;
  *(_QWORD *)(v104 + 520) = v243;
  if ( v133 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v133);
    SyncObject = VIDMM_GLOBAL::AllocateCrossAdapterDataDpc(v120, v133, (struct _VIDMM_GLOBAL_ALLOC *)v104);
    if ( SyncObject < 0 )
      goto LABEL_243;
    LODWORD(Value) = v231;
    v55 = v240;
    v131 = a12;
  }
  v134 = v249;
  *(_QWORD *)v104 = a4;
  v184 = (*((_DWORD *)v134 + 18) & 1) == 0;
  v135 = 0xFFFFLL;
  if ( v184 )
    v135 = 4095LL;
  v136 = (unsigned int)v135;
  v137 = ~v135;
  v138 = v137 & (v136 + a4);
  v238 = v138;
  if ( a4 > v138 )
  {
    WdLogSingleEntry1(1LL, a4);
    v139 = a4;
LABEL_289:
    DxgkLogInternalTriageEvent(v139, 0x40000LL);
    SyncObject = -1073741811;
    goto LABEL_243;
  }
  v140 = (__int64 *)(v137 & ((unsigned __int64)v248 + v136));
  v247 = v140;
  if ( v248 > v140 )
  {
    WdLogSingleEntry1(1LL, v248);
    goto LABEL_289;
  }
  if ( v138 <= 0xFFFF0000 )
  {
    v141 = (unsigned int *)(v237 + 72);
    v234 = (unsigned int *)(v237 + 72);
  }
  else
  {
    v184 = (*(_DWORD *)(v104 + 72) & 0x400) == 0;
    v141 = (unsigned int *)(v104 + 72);
    v234 = (unsigned int *)(v104 + 72);
    if ( v184 )
    {
      WdLogSingleEntry1(1LL, 3604LL);
      goto LABEL_289;
    }
  }
  v142 = ~(_DWORD)v136 & ((unsigned int)v136 + a6);
  v233 = v142;
  if ( a6 > (unsigned int)v142 )
  {
    WdLogSingleEntry1(1LL, a6);
    goto LABEL_289;
  }
  if ( v142 + v138 < v138 || (__int64 *)((char *)v140 + v142) < v140 )
  {
    WdLogSingleEntry4(1LL, v138, v140, v138, (unsigned int)v142);
    v139 = v233;
    goto LABEL_289;
  }
  if ( (Value & 0x10000000) != 0 )
  {
    LODWORD(Value) = Value | 8;
    v231.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
  }
  v143 = *v141;
  if ( (Value & 0x1000) != 0 )
  {
    v143 |= 0x100000u;
    *v141 = v143;
  }
  v250 = (_QWORD *)(v104 + 384);
  *(_QWORD *)(v104 + 384) = a13;
  if ( (Value & 0x20000000) == 0 || (Value & 0x10) != 0 || (v144 = 0x40000, (v143 & 0x100000) != 0) )
    v144 = 0;
  v145 = v242;
  *(_QWORD *)(v104 + 8) = v138;
  *v141 = v144 | v143 & 0xFFFBFFFF;
  v237 = v104 + 8;
  v146 = *v145;
  *(_QWORD *)(v104 + 24) = v140;
  *(_QWORD *)(v104 + 16) = v138;
  v147 = v241;
  *(_DWORD *)(v104 + 144) = 0;
  *(_DWORD *)(v104 + 32) = v142;
  *v146 = Value;
  *(_DWORD *)(v104 + 60) = v229;
  *(_DWORD *)(v104 + 56) = a8;
  v246 = (_DWORD *)(v104 + 60);
  v245 = (_DWORD *)(v104 + 56);
  v148 = *v147 ^ (*v147 ^ (v55 << 7)) & 0x80;
  *(_QWORD *)(v104 + 40) = v131;
  *(_DWORD *)(v104 + 64) = a9;
  LODWORD(v146) = v148 ^ ((unsigned __int8)v148 ^ (unsigned __int8)(32 * v55)) & 0x40;
  *(_DWORD *)(v104 + 112) = 0;
  v149 = (unsigned __int8)v236;
  *v147 = (int)v146;
  v247 = (__int64 *)(v104 + 40);
  v150 = *v141 & 0xFFFFFF7F | (v149 << 7);
  *(_DWORD *)(v104 + 288) = 0;
  v151 = v150 & 0xFFBE0FFF | (v261 << 16) & 0xFFBFFFFF | (v227 << 12) & 0xFFBF1FFF | (v228 << 15) & 0xFFBFFFFF | (v267 << 13) & 0xFFBFBFFF | ((unsigned __int8)v232 << 14) & 0xFFBFFFFF | (v270 << 22);
  *v141 = v151;
  if ( !v131 || (v152 = 0x800000, (*(_DWORD *)(v131 + 4) & 0x10000000) == 0) )
    v152 = 0;
  *v141 = v152 | v151 & 0xFF7FFFFF;
  if ( v227 )
  {
    v153 = *(_QWORD *)(a2[1] + 32LL);
    v154 = *(_DWORD *)(v153 + 424);
    if ( (v154 & 0x100) != 0 )
    {
      v155 = *(_QWORD *)(v153 + 608);
    }
    else
    {
      v184 = (v154 & 0x80u) == 0;
      v155 = 0LL;
      if ( !v184 )
        v155 = *(_QWORD *)(a2[1] + 32LL);
    }
    v156 = *(_QWORD *)(v155 + 64);
    if ( v156 )
      v157 = *(_QWORD *)(v156 + 8);
    else
      v157 = 0LL;
    *(_QWORD *)(v104 + 544) = v157;
  }
  v158 = 0;
  if ( (Value & 1) != 0 )
  {
    IsEnabledDeviceUsage = Feature_Servicing_GfxDriverEventsMemoryLeak__private_IsEnabledDeviceUsage();
    v160 = *(DXGADAPTER **)(a1 + 24);
    if ( !IsEnabledDeviceUsage )
    {
      if ( !DXGADAPTER::IsSoftGPU(v160)
        && !VIDMM_GLOBAL::CheckForCpuVisibleMemorySegment(v161, v235[0], v229)
        && (*v234 & 0x100000) == 0 )
      {
        v145 = v242;
        v158 = 0;
        goto LABEL_333;
      }
      goto LABEL_326;
    }
    if ( (DXGADAPTER::IsSoftGPU(v160) || VIDMM_GLOBAL::CheckForCpuVisibleMemorySegment(v161, v235[0], v229)) && !a18
      || (*v234 & 0x100000) != 0 )
    {
LABEL_326:
      v145 = v242;
      v158 = 1;
      goto LABEL_333;
    }
    v145 = v242;
    v158 = 0;
  }
  else
  {
    v161 = (VIDMM_GLOBAL *)a1;
  }
LABEL_333:
  v162 = *v234 & 0xFFF7FFFF | (v158 << 19);
  v163 = *v147 & 0x3F;
  *v234 = v162;
  v164 = *((_QWORD *)v161 + 5028);
  v248 = *(__int64 **)(1616 * v163 + v164 + 448);
  if ( (*((_DWORD *)v249 + 18) & 1) != 0 )
  {
    v165 = v162 | 0x100;
  }
  else
  {
    if ( !dword_1C0076564 && (*(_BYTE *)(v164 + v239 + 16) & 1) == 0
      || (**(_DWORD **)(*((_QWORD *)v161 + 3) + 2824LL) & 0x4000) != 0
      || (v55 & 2) == 0
      || !v248
      || (*(_DWORD *)v248 & 0x200) == 0 && dword_1C0076564 != 2
      || (unsigned __int16)*(_QWORD *)v237 && *(_QWORD *)v237 <= (unsigned __int64)(unsigned int)dword_1C0076568
      || (v166 = 256, v158) )
    {
      v166 = 0;
    }
    v165 = v166 | v162 & 0xFFFFFEFF;
  }
  *v234 = v165;
  if ( a12 )
    a14 = *(_QWORD *)(a12 + 16);
  *((_QWORD *)*v145 + 5) = a14;
  SyncObject = VIDMM_GLOBAL::CommitGlobalBackingStore(v161, (struct _VIDMM_GLOBAL_ALLOC *)v104);
  if ( SyncObject < 0 )
    goto LABEL_243;
  if ( (Value & 0x4000) != 0 )
    *v234 |= 0x20u;
  if ( (*(_BYTE *)(v251 + 444) & 0xA) != 0 )
  {
    v168 = 1 << (*(_WORD *)(v251 + 36) - *(_BYTE *)(v251 + 28));
    *v245 |= v168;
    if ( (v55 & 2) != 0 && (Value & 0x8000) == 0 )
      *v246 |= v168;
  }
  v169 = v241;
  v170 = a1;
  *(_QWORD *)(v104 + 104) = a17;
  v245 = (_DWORD *)(v104 + 104);
  v171 = *v169 & 0xEFFFFFFF;
  v237 = 0LL;
  v172 = v171 | (a17 != 0 ? 0x10000000 : 0);
  *v169 = v172 ^ (v172 ^ (a16 << 29)) & 0x20000000;
  *(_DWORD *)(v104 + 400) = a15;
  *(_QWORD *)(v104 + 280) = v104 + 272;
  *(_QWORD *)(v104 + 272) = v104 + 272;
  *(_QWORD *)(v104 + 496) = -1LL;
  v173 = *v169;
  v174 = (*v169 & 0x80) != 0;
  if ( a9 )
  {
    if ( (a9 & 0x1F) != 0 )
    {
      v237 = *(_QWORD *)(*(_QWORD *)(a1 + 3712)
                       + 8LL * ((a9 & 0x1F) + *(_DWORD *)(*(_QWORD *)(a1 + 40224) + v239 + 28) - 1));
      v174 = *(_BYTE *)(v237 + 80);
    }
    else if ( ((a9 >> 6) & 0x1F) != 0 )
    {
      v237 = *(_QWORD *)(*(_QWORD *)(a1 + 3712)
                       + 8LL * (((a9 >> 6) & 0x1F) + *(_DWORD *)(*(_QWORD *)(a1 + 40224) + v239 + 28) - 1));
    }
  }
  v175 = v239;
  v176 = v173 ^ ((unsigned __int16)v173 ^ (unsigned __int16)(v174 << 10)) & 0x400;
  v177 = v229;
  *v169 = v176;
  v178 = v229;
  v262 = v176;
  v246 = *(_DWORD **)(a1 + 40224);
  v179 = *(_DWORD *)((char *)v246 + v175 + 28);
  v180 = v179;
  if ( (~*(_DWORD *)((char *)v246 + v175 + 24) & v229) != 0 )
  {
    v181 = 0;
    v239 = a1 + 3712;
LABEL_364:
    v182 = 0;
    goto LABEL_365;
  }
  if ( v229 )
  {
    do
    {
      if ( (v178 & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8LL * v180) + 80LL) & 0x80000) != 0 )
      {
        v185 = (_QWORD *)(a1 + 3712);
        v181 = 1;
        v177 = v229;
        v186 = *(_DWORD *)((char *)v246 + v175 + 28);
        v239 = a1 + 3712;
        v187 = v229;
        goto LABEL_373;
      }
      ++v180;
      v178 >>= 1;
    }
    while ( v178 );
  }
  v185 = (_QWORD *)(a1 + 3712);
  v181 = 0;
  v177 = v229;
  v186 = *(_DWORD *)((char *)v246 + v175 + 28);
  v239 = a1 + 3712;
  v187 = v229;
  if ( !v229 )
    goto LABEL_364;
LABEL_373:
  while ( (v187 & 1) == 0 || (*(_DWORD *)(*(_QWORD *)(*v185 + 8LL * v186) + 80LL) & 0x100000) == 0 )
  {
    ++v186;
    v187 >>= 1;
    if ( !v187 )
      goto LABEL_364;
    v185 = (_QWORD *)v239;
  }
  v182 = 1;
LABEL_365:
  if ( !v237 )
  {
    if ( !v181 )
    {
      v184 = v182 == 0;
      goto LABEL_382;
    }
LABEL_380:
    v188 = 2 * v182;
    v268 = 0;
    goto LABEL_384;
  }
  v183 = *(_DWORD *)(v237 + 80);
  if ( (v183 & 0x80000) != 0 )
    goto LABEL_380;
  v184 = (v183 & 0x100000) == 0;
LABEL_382:
  if ( v184 )
  {
    v268 = 2;
    v188 = 3;
    goto LABEL_395;
  }
  v188 = v181 + 1;
  v268 = 1;
LABEL_384:
  if ( v188 != 3 )
  {
    v189 = 0;
    if ( (~v246[6] & v229) != 0 )
      goto LABEL_393;
    if ( v229 )
    {
      v190 = 1;
      do
      {
        if ( (v177 & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v239 + 8LL * v179) + 80LL) & 0x180000) == 0 )
          v189 |= v190;
        v190 = __ROL4__(v190, 1);
        ++v179;
        v177 >>= 1;
      }
      while ( v177 );
      v170 = a1;
      if ( v189 )
      {
LABEL_393:
        WdLogSingleEntry1(1LL, 12962LL);
        DxgkLogInternalTriageEvent(v191, 0x40000LL);
        return 3221225485LL;
      }
    }
  }
LABEL_395:
  v192 = (unsigned int *)v241;
  v193 = v262 ^ (v262 ^ ((v268 | (16 * v188)) << 13)) & 0x1E0000 ^ (v262 ^ (v262 ^ ((v268 | (16 * v188)) << 13)) & 0x1E0000 ^ ((v268 | (16 * v188)) << 13)) & 0x1E000;
  *v241 = v193;
  if ( (Value & 0x10) != 0 || (Value & 0x20) != 0 )
    *(_BYTE *)(v104 + 82) = 1;
  v194 = a18;
  v232 = a18 != 0;
  *v192 = (v232 << 8) | v193 & 0xFFFFFEFF;
  v195 = (Value & 0x1000) != 0;
  v196 = v238;
  *(_QWORD *)v245 = a18;
  if ( v195 )
  {
    v197 = v243;
    v198 = (_QWORD *)((char *)v243 + 48);
    if ( !*((_QWORD *)v243 + 6) )
    {
      Physical = VIDMM_GLOBAL::AllocatePhysical(v196, v233, (void **)v243 + 6);
      v200 = v243;
      *((_QWORD *)v243 + 7) = Physical;
      v197 = v200;
      if ( !*v198 )
        goto LABEL_242;
    }
    PhysicalAddress = MmGetPhysicalAddress(*((PVOID *)v197 + 7));
    v194 = a18;
    *((PHYSICAL_ADDRESS *)v243 + 8) = PhysicalAddress;
  }
  if ( (unsigned int)Feature_Servicing_SystemBugcheckAfterStressTest__private_IsEnabledDeviceUsage() )
  {
    if ( !v194 )
    {
      SyncObject = SysMmAllocateLogicalMemory(
                     *(struct SYSMM_ADAPTER **)(*(_QWORD *)(v170 + 24) + 224LL),
                     v196,
                     (const void *)v104,
                     (void **)(v104 + 528));
      if ( SyncObject < 0 )
        goto LABEL_405;
    }
  }
  else
  {
    v202 = v104;
    if ( (*v241 & 0x40) == 0 )
      goto LABEL_409;
    SyncObject = SysMmAllocateLogicalMemory(
                   *(struct SYSMM_ADAPTER **)(*(_QWORD *)(v170 + 24) + 224LL),
                   v196,
                   (const void *)v104,
                   (void **)(v104 + 528));
    if ( SyncObject < 0 )
    {
LABEL_405:
      WdLogSingleEntry1(1LL, v104);
      DxgkLogInternalTriageEvent(v203, 0x40000LL);
      goto LABEL_243;
    }
  }
  v202 = v104;
LABEL_409:
  v204 = VIDMM_GLOBAL::AdapterId((VIDMM_GLOBAL *)v170);
  v205 = v249;
  *(_QWORD *)(v202 + 512) = *((_QWORD *)v249 + 5) + 384LL * v204;
  VidMmiReferencePartition(v205);
  v206 = v241;
  v207 = *(_DWORD *)*v242;
  if ( (v207 & 0x2003A) != 0
    || (*v234 & 0x2000) != 0
    || (*v241 & 0x100) != 0
    || (*v234 & 0x400) != 0
    || (v208 = 0x20000, (v207 & 0x40000000) != 0) )
  {
    v208 = 0;
  }
  v184 = bTracingEnabled == 0;
  *v234 = v208 | *v234 & 0xFFFDFFFF;
  if ( !v184 )
  {
    v269 = *(_WORD *)v206 & 0x3F;
    v209 = *v247;
    v250 = (_QWORD *)*v250;
    v210 = v209 ? *(unsigned int **)(v209 + 24) : 0LL;
    v247 = *(__int64 **)(v170 + 24);
    v246 = (_DWORD *)a2[3];
    CurrentProcessId = PsGetCurrentProcessId();
    LOBYTE(v271) = 0;
    v212 = 0LL;
    v245 = CurrentProcessId;
    LOBYTE(v213) = 0;
    LOBYTE(v259) = 0;
    v214 = 0LL;
    v263 = 0;
    LOBYTE(v215) = 0;
    LOBYTE(v216) = 0;
    LOBYTE(v217) = 0;
    if ( v210 )
    {
      v212 = *v210;
      v213 = v210[1];
      v214 = v210[2];
      v215 = v210[3];
      v216 = v210[4];
      v217 = v210[5];
      v271 = v210[6];
      v259 = v210[7];
      v218 = v210[8];
      v219 = v210[9];
      v263 = v218;
    }
    else
    {
      LOBYTE(v219) = 0;
    }
    if ( (byte_1C00769C1 & 8) != 0 )
      McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
        v212,
        &EventCreateAdapterAllocation,
        v214,
        (__int64)v245,
        (char)v246,
        (char)v247,
        v20,
        v238,
        v233,
        v225,
        v229,
        a9,
        v226,
        a8,
        a15,
        v202,
        v209,
        0,
        v212,
        v213,
        v214,
        v215,
        v216,
        v217,
        v271,
        v259,
        v263,
        v219,
        0,
        (char)v250,
        v269,
        v232);
  }
  v220 = v238;
  ++*(_DWORD *)(v170 + 7648);
  *(_QWORD *)(v170 + 7656) += v220;
  *(_QWORD *)(v170 + 40192) += v220;
  v221 = a2[2];
  if ( v221 )
  {
    if ( v220 <= 0x100000000LL )
    {
      v184 = !_BitScanReverse((unsigned int *)&v222, v220 >> 12);
      if ( !v184 )
        v29 = v222 + 1;
    }
    else
    {
      v29 = 21;
    }
    v220 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v221 + 8LL * v29 + 528), v220);
    _InterlockedIncrement((volatile signed __int32 *)(v221 + 4LL * v29 + 704));
    *(_BYTE *)(v221 + 792) = 1;
  }
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v220) + 24) = v202;
  *a20 = v202;
  return 0LL;
}
