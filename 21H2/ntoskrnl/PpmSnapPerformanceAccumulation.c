/*
 * XREFs of PpmSnapPerformanceAccumulation @ 0x1403051E0
 * Callers:
 *     PpmPerfSnapDeliveredPerformance @ 0x140304CE0 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmResetPerfTimes @ 0x1403B4C90 (PpmResetPerfTimes.c)
 *     PpmGetThroughputInfoCallback @ 0x14045E870 (PpmGetThroughputInfoCallback.c)
 *     PpmCapturePerformanceDistributionCallback @ 0x1405D71E0 (PpmCapturePerformanceDistributionCallback.c)
 * Callees:
 *     PpmConvertTime @ 0x14029394C (PpmConvertTime.c)
 *     HalpTimerGetInternalData @ 0x140303720 (HalpTimerGetInternalData.c)
 *     PpmUpdatePerformanceFeedback @ 0x1403072A0 (PpmUpdatePerformanceFeedback.c)
 *     HalpTimerScaleCounter @ 0x1403A572C (HalpTimerScaleCounter.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall PpmSnapPerformanceAccumulation(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4,
        __int64 a5,
        _DWORD *a6)
{
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r12
  unsigned __int128 v12; // rax
  unsigned __int64 v13; // r12
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  signed __int64 v16; // rbp
  unsigned int v17; // edi
  unsigned int v18; // ebx
  unsigned int i; // eax
  unsigned int v20; // r10d
  unsigned int v21; // r11d
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int8 v24; // di
  unsigned __int64 *v25; // rbx
  char result; // al
  __int64 v27; // r8
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r9
  __int64 v31; // rax
  signed __int64 v32; // rax
  signed __int64 v33; // rtt
  __int64 v34; // rbp
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r12
  unsigned __int128 v39; // rax
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // rcx
  __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r12
  signed __int64 v48; // rdx
  __int64 v49; // rdi
  __int64 v50; // rax
  unsigned __int64 v51; // r11
  signed __int64 v52; // rax
  int v53; // r10d
  unsigned __int64 v54; // rcx
  __int64 v55; // r9
  __int64 v56; // r8
  unsigned __int64 v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rax
  unsigned __int64 v62; // r11
  int v63; // r10d
  unsigned __int64 v64; // rcx
  __int64 v65; // r9
  __int64 v66; // r8
  unsigned __int64 v67; // r8
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rax
  __int64 InternalData; // rax
  __int64 v72; // rax
  __int64 v73; // r12
  signed __int64 v74; // rdx
  __int64 v75; // rdi
  __int64 v76; // rax
  unsigned __int64 v77; // r11
  signed __int64 v78; // rax
  int v79; // r10d
  unsigned __int64 v80; // rcx
  __int64 v81; // r9
  __int64 v82; // r8
  unsigned __int64 v83; // r8
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rdi
  __int64 v87; // rax
  unsigned __int64 v88; // r11
  int v89; // r10d
  unsigned __int64 v90; // rcx
  __int64 v91; // r9
  __int64 v92; // r8
  unsigned __int64 v93; // r8
  __int64 v94; // rdx
  __int64 v95; // r8
  signed __int32 v96[8]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int8 v97; // [rsp+30h] [rbp-78h]
  unsigned __int8 v98; // [rsp+31h] [rbp-77h]
  char v99; // [rsp+32h] [rbp-76h]
  unsigned __int64 v100; // [rsp+38h] [rbp-70h]
  signed __int64 v101; // [rsp+40h] [rbp-68h]
  __int128 v102; // [rsp+48h] [rbp-60h] BYREF
  __int64 v103; // [rsp+58h] [rbp-50h]

  v99 = a4;
  v97 = a3;
  v98 = a2;
  v103 = 0LL;
  v101 = 0LL;
  v100 = 0LL;
  v102 = 0LL;
  if ( !a3 )
  {
    _disable();
    v34 = HalpPerformanceCounter;
    if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
    {
      v35 = 10000000LL;
      if ( !HalpTimerReferencePage )
      {
        if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
        {
          InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
          v72 = (*(__int64 (__fastcall **)(__int64))(v34 + 112))(InternalData);
          v73 = *(_QWORD *)(v34 + 208);
          v74 = v72;
        }
        else
        {
          do
          {
            v73 = *(_QWORD *)(v34 + 208);
            do
            {
              v75 = *(_QWORD *)(v34 + 200);
              v76 = HalpTimerGetInternalData(v34);
              v77 = (*(__int64 (__fastcall **)(__int64))(v34 + 112))(v76);
              _InterlockedOr(v96, 0);
              v78 = *(_QWORD *)(v34 + 200);
            }
            while ( v75 != v78 );
          }
          while ( v73 != *(_QWORD *)(v34 + 208) );
          v79 = *(_DWORD *)(v34 + 220);
          v80 = v75 ^ v77;
          if ( _bittest64((const __int64 *)&v80, (unsigned __int8)(v79 - 1)) )
          {
            v81 = 1LL;
            if ( v79 == 64 )
              v82 = -1LL;
            else
              v82 = (1LL << v79) - 1;
            if ( v79 != 64 )
              v81 = 1LL << v79;
            v83 = v75 & v82;
            v74 = v77 | v75 ^ v83;
            if ( v77 < v83 )
              v74 += v81;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 200), v74, v78);
          }
          else
          {
            if ( v79 == 64 )
              v84 = -1LL;
            else
              v84 = (1LL << v79) - 1;
            v74 = v77 | v75 & ~v84;
          }
        }
        v13 = HalpTimerScaleCounter(v73 + v74, *(_QWORD *)(v34 + 192), 10000000LL);
        goto LABEL_61;
      }
      if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
        v36 = *(_QWORD *)(HalpPerformanceCounter + 72)
            + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
      else
        v36 = *(_QWORD *)(HalpPerformanceCounter + 72);
      v37 = (*(__int64 (__fastcall **)(__int64))(HalpPerformanceCounter + 112))(v36);
      v38 = MEMORY[0xFFFFF780000003B8];
      v39 = (unsigned __int64)v37 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1);
    }
    else
    {
      v35 = *(_QWORD *)(HalpPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        v85 = HalpTimerGetInternalData(HalpPerformanceCounter);
        *(_QWORD *)&v39 = (*(__int64 (__fastcall **)(__int64))(v34 + 112))(v85);
        v38 = *(_QWORD *)(v34 + 208);
        *((_QWORD *)&v39 + 1) = v39;
      }
      else
      {
        do
        {
          v38 = *(_QWORD *)(v34 + 208);
          do
          {
            v86 = *(_QWORD *)(v34 + 200);
            v87 = HalpTimerGetInternalData(v34);
            v88 = (*(__int64 (__fastcall **)(__int64))(v34 + 112))(v87);
            _InterlockedOr(v96, 0);
            *(_QWORD *)&v39 = *(_QWORD *)(v34 + 200);
          }
          while ( v86 != (_QWORD)v39 );
        }
        while ( v38 != *(_QWORD *)(v34 + 208) );
        v89 = *(_DWORD *)(v34 + 220);
        v90 = v86 ^ v88;
        if ( _bittest64((const __int64 *)&v90, (unsigned __int8)(v89 - 1)) )
        {
          v91 = 1LL;
          if ( v89 == 64 )
            v92 = -1LL;
          else
            v92 = (1LL << v89) - 1;
          if ( v89 != 64 )
            v91 = 1LL << v89;
          v93 = v86 & v92;
          *((_QWORD *)&v39 + 1) = v88 | v86 ^ v93;
          if ( v88 < v93 )
            *((_QWORD *)&v39 + 1) += v91;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 200), *((signed __int64 *)&v39 + 1), v39);
        }
        else
        {
          if ( v89 == 64 )
            v94 = -1LL;
          else
            v94 = (1LL << v89) - 1;
          *((_QWORD *)&v39 + 1) = v88 | v86 & ~v94;
        }
      }
    }
    v13 = *((_QWORD *)&v39 + 1) + v38;
LABEL_61:
    if ( v34 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
    {
      v95 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
        v95 = 10000000LL;
      v13 = HalpTimerScaleCounter(v13, v35, v95);
    }
    v40 = __rdtsc();
    if ( _bittest64((const signed __int64 *)(a1 + 35232), 0x27u) )
      v41 = __readmsr(0xDB2u);
    else
      v41 = 0LL;
    v42 = v13 - *(_QWORD *)(a1 + 33720);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 33736), v42);
    v43 = *(_QWORD *)(a1 + 35232);
    if ( (v43 & 0x8000000000LL) != 0 )
    {
      *(_QWORD *)(a1 + 33808) += PpmConvertTime(v42, v40 - *(_QWORD *)(a1 + 33688), v41 - *(_QWORD *)(a1 + 33800));
      v43 = *(_QWORD *)(a1 + 35232);
    }
    v44 = *(_QWORD *)(a1 + 33688);
    *(_QWORD *)(a1 + 33720) = v13;
    if ( v40 > v44 )
      *(_QWORD *)(a1 + 33696) += v40 - v44;
    v16 = v101;
    *(_QWORD *)(a1 + 33688) = v40;
    if ( (v43 & 0x8000000000LL) != 0 )
      *(_QWORD *)(a1 + 33800) = v41;
    goto LABEL_15;
  }
  v7 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
  {
    v8 = *(_QWORD *)(HalpPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
    {
      v59 = HalpTimerGetInternalData(HalpPerformanceCounter);
      *(_QWORD *)&v12 = (*(__int64 (__fastcall **)(__int64))(v7 + 112))(v59);
      v11 = *(_QWORD *)(v7 + 208);
      *((_QWORD *)&v12 + 1) = v12;
    }
    else
    {
      do
      {
        v11 = *(_QWORD *)(v7 + 208);
        do
        {
          v60 = *(_QWORD *)(v7 + 200);
          v61 = HalpTimerGetInternalData(v7);
          v62 = (*(__int64 (__fastcall **)(__int64))(v7 + 112))(v61);
          _InterlockedOr(v96, 0);
          *(_QWORD *)&v12 = *(_QWORD *)(v7 + 200);
        }
        while ( v60 != (_QWORD)v12 );
      }
      while ( v11 != *(_QWORD *)(v7 + 208) );
      v63 = *(_DWORD *)(v7 + 220);
      v64 = v60 ^ v62;
      if ( _bittest64((const __int64 *)&v64, (unsigned __int8)(v63 - 1)) )
      {
        v65 = 1LL;
        if ( v63 == 64 )
          v66 = -1LL;
        else
          v66 = (1LL << v63) - 1;
        if ( v63 != 64 )
          v65 = 1LL << v63;
        v67 = v60 & v66;
        *((_QWORD *)&v12 + 1) = v62 | v60 ^ v67;
        if ( v62 < v67 )
          *((_QWORD *)&v12 + 1) += v65;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 200), *((signed __int64 *)&v12 + 1), v12);
      }
      else
      {
        if ( v63 == 64 )
          v68 = -1LL;
        else
          v68 = (1LL << v63) - 1;
        *((_QWORD *)&v12 + 1) = v62 | v60 & ~v68;
      }
    }
    goto LABEL_7;
  }
  v8 = 10000000LL;
  if ( HalpTimerReferencePage )
  {
    if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
      v9 = *(_QWORD *)(HalpPerformanceCounter + 72) + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
    else
      v9 = *(_QWORD *)(HalpPerformanceCounter + 72);
    v10 = (*(__int64 (__fastcall **)(__int64))(HalpPerformanceCounter + 112))(v9);
    v11 = MEMORY[0xFFFFF780000003B8];
    v12 = (unsigned __int64)v10 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1);
LABEL_7:
    v13 = *((_QWORD *)&v12 + 1) + v11;
    goto LABEL_8;
  }
  if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
  {
    v45 = HalpTimerGetInternalData(HalpPerformanceCounter);
    v46 = (*(__int64 (__fastcall **)(__int64))(v7 + 112))(v45);
    v47 = *(_QWORD *)(v7 + 208);
    v48 = v46;
  }
  else
  {
    do
    {
      v47 = *(_QWORD *)(v7 + 208);
      do
      {
        v49 = *(_QWORD *)(v7 + 200);
        v50 = HalpTimerGetInternalData(v7);
        v51 = (*(__int64 (__fastcall **)(__int64))(v7 + 112))(v50);
        _InterlockedOr(v96, 0);
        v52 = *(_QWORD *)(v7 + 200);
      }
      while ( v49 != v52 );
    }
    while ( v47 != *(_QWORD *)(v7 + 208) );
    v53 = *(_DWORD *)(v7 + 220);
    v54 = v49 ^ v51;
    if ( _bittest64((const __int64 *)&v54, (unsigned __int8)(v53 - 1)) )
    {
      v55 = 1LL;
      if ( v53 == 64 )
        v56 = -1LL;
      else
        v56 = (1LL << v53) - 1;
      if ( v53 != 64 )
        v55 = 1LL << v53;
      v57 = v49 & v56;
      v48 = v51 | v49 ^ v57;
      if ( v51 < v57 )
        v48 += v55;
      _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 200), v48, v52);
    }
    else
    {
      if ( v53 == 64 )
        v58 = -1LL;
      else
        v58 = (1LL << v53) - 1;
      v48 = v51 | v49 & ~v58;
    }
  }
  v13 = HalpTimerScaleCounter(v47 + v48, *(_QWORD *)(v7 + 192), 10000000LL);
LABEL_8:
  if ( v7 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
  {
    v69 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v69 = 10000000LL;
    v13 = HalpTimerScaleCounter(v13, v8, v69);
  }
  _m_prefetchw((const void *)(a1 + 33632));
  v14 = *(_QWORD *)(a1 + 33632);
  do
  {
    v15 = v14;
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 33632), v14, v14);
  }
  while ( v15 != v14 );
  v16 = v14;
  if ( (v14 & 1) == 0 )
    return 0;
  if ( v14 )
  {
    if ( *(_DWORD *)(a1 + 33824) == 3 )
    {
      v70 = *(_QWORD *)(a1 + 34512);
      v16 = *(_QWORD *)(v70 + 8LL * DWORD2(xmmword_140CF7090)) >> 1;
      if ( (*(_QWORD *)(v70 + 8LL * DWORD2(xmmword_140CF7090)) & 1) == 0 )
        return 0;
    }
  }
  if ( !v16 )
    return 0;
LABEL_15:
  *(_OWORD *)a5 = 0LL;
  *(_OWORD *)(a5 + 16) = 0LL;
  *(_OWORD *)(a5 + 32) = 0LL;
  *(_QWORD *)(a5 + 48) = 0LL;
  if ( a6 )
  {
    v17 = a6[12];
    memset(a6, 0, (int)(96 * v17 + 56));
    a6[12] = v17;
    v18 = 0;
    *((_QWORD *)a6 + 1) = *(_QWORD *)(a1 + 33192) + *(_QWORD *)(a1 + 33400);
    *((_QWORD *)a6 + 2) = *(_QWORD *)(a1 + 33160);
    *((_QWORD *)a6 + 3) = *(_QWORD *)(a1 + 33168);
    *((_QWORD *)a6 + 4) = *(_QWORD *)(a1 + 33176);
    *((_QWORD *)a6 + 5) = *(_QWORD *)(a1 + 33184);
    do
    {
      for ( i = 0; i < 2; ++i )
      {
        v20 = 0;
        if ( v17 )
        {
          v21 = i + 2 * v18;
          do
          {
            v22 = v20 + (_DWORD)KiHgsPlusConfiguration * v21;
            v23 = v20 + v21 * a6[12];
            ++v20;
            *(_QWORD *)&a6[2 * v23 + 14] = *(_QWORD *)(*(_QWORD *)(a1 + 33200) + 8 * v22);
          }
          while ( v20 < v17 );
        }
      }
      ++v18;
    }
    while ( v18 < 6 );
  }
  v24 = v97;
  if ( !v97 )
    _enable();
  v25 = 0LL;
  if ( *(_DWORD *)(a1 + 33824) == 3 )
    v25 = (unsigned __int64 *)&v102;
  result = PpmUpdatePerformanceFeedback(a1, v98, v97, 0, (__int64)v25);
  if ( result )
  {
    if ( v99 && PopSnapEnergyCounters )
    {
      LOBYTE(v27) = 1;
      PopSnapEnergyCounters(*(unsigned int *)(a1 + 36), v24, v27);
    }
    if ( v25 )
    {
      v13 = *v25;
      v29 = v25[1];
      v30 = v25[2];
      v28 = v100;
    }
    else
    {
      v28 = *(_QWORD *)(a1 + 33640);
      v100 = v28;
      if ( v13 <= v28 )
        v13 = v28;
      v29 = *(_QWORD *)(a1 + 33624);
      v30 = *(_QWORD *)(a1 + 33696);
    }
    if ( *(_QWORD *)(a1 + 33704) )
    {
      v31 = *(_QWORD *)(a1 + 33744);
    }
    else if ( *(_QWORD *)(a1 + 33712) )
    {
      v31 = *(_QWORD *)(a1 + 33752);
    }
    else
    {
      v31 = 100LL * *(_QWORD *)(a1 + 33728);
    }
    *(_QWORD *)(a5 + 24) = v31;
    if ( *(_QWORD *)(a1 + 33712) )
      v31 = *(_QWORD *)(a1 + 33752);
    *(_QWORD *)(a5 + 32) = v31;
    *(_QWORD *)(a5 + 40) = *(_QWORD *)(a1 + 33768);
    *(_QWORD *)(a5 + 16) = *(_QWORD *)(a1 + 33808);
    *(_DWORD *)(a5 + 48) = *(_DWORD *)(a1 + 13148);
    if ( !v24 )
    {
      if ( !v25 )
        v29 += *(_QWORD *)(a1 + 33616);
      goto LABEL_48;
    }
    _m_prefetchw((const void *)(a1 + 33632));
    v32 = *(_QWORD *)(a1 + 33632);
    do
    {
      v33 = v32;
      v32 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 33632), v32, v32);
    }
    while ( v33 != v32 );
    if ( (v32 & 1) != 0 )
    {
      if ( v32 )
      {
        if ( *(_DWORD *)(a1 + 33824) == 3 )
        {
          v32 = *(_QWORD *)(*(_QWORD *)(a1 + 34512) + 8LL * DWORD2(xmmword_140CF7090)) >> 1;
          v28 = v100;
          if ( (*(_QWORD *)(*(_QWORD *)(a1 + 34512) + 8LL * DWORD2(xmmword_140CF7090)) & 1) == 0 )
            v32 = 0LL;
        }
      }
    }
    else
    {
      v32 = 0LL;
    }
    if ( v16 == v32 )
    {
      if ( !v25 )
        v29 += v13 - v28;
LABEL_48:
      *(_QWORD *)a5 = v13;
      *(_QWORD *)(a5 + 8) = v13 - v29;
      if ( a6 )
        *(_QWORD *)a6 = v30;
      return 1;
    }
    return 0;
  }
  return result;
}
