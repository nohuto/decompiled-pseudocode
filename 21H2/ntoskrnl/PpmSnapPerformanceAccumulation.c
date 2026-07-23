/*
 * XREFs of PpmSnapPerformanceAccumulation @ 0x1402C5A90
 * Callers:
 *     PpmPerfSnapDeliveredPerformance @ 0x1402C5110 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x1402C54D0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmResetPerfTimes @ 0x1403C2720 (PpmResetPerfTimes.c)
 *     PpmCapturePerformanceDistributionCallback @ 0x140577080 (PpmCapturePerformanceDistributionCallback.c)
 *     PpmGetThroughputInfoCallback @ 0x1405772F0 (PpmGetThroughputInfoCallback.c)
 * Callees:
 *     PpmConvertTime @ 0x14026A1CC (PpmConvertTime.c)
 *     PpmUpdatePerformanceFeedback @ 0x1402C8970 (PpmUpdatePerformanceFeedback.c)
 *     HalpTimerGetInternalData @ 0x1402CF2E0 (HalpTimerGetInternalData.c)
 *     HalpTimerScaleCounter @ 0x140396440 (HalpTimerScaleCounter.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 */

char __fastcall PpmSnapPerformanceAccumulation(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4,
        unsigned __int64 *a5)
{
  unsigned __int64 *v5; // rbx
  char v6; // r14
  unsigned __int64 v9; // rbp
  ULONG_PTR v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r12
  unsigned __int128 v14; // rax
  unsigned __int64 v15; // r12
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  char result; // al
  ULONG_PTR v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r12
  unsigned __int128 v23; // rax
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // r8
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // r11
  __int64 v33; // rax
  signed __int64 v34; // rax
  signed __int64 v35; // rtt
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r12
  signed __int64 v39; // rdx
  __int64 v40; // rbx
  __int64 v41; // rax
  unsigned __int64 v42; // r11
  signed __int64 v43; // rax
  int v44; // r10d
  unsigned __int64 v45; // rcx
  __int64 v46; // r9
  __int64 v47; // r8
  unsigned __int64 v48; // r8
  __int64 v49; // rdx
  bool v50; // zf
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rax
  unsigned __int64 v54; // r11
  int v55; // r10d
  unsigned __int64 v56; // rcx
  __int64 v57; // r9
  __int64 v58; // r8
  unsigned __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // rax
  __int64 InternalData; // rax
  __int64 v64; // rax
  __int64 v65; // r12
  signed __int64 v66; // rdx
  __int64 v67; // rbx
  __int64 v68; // rax
  unsigned __int64 v69; // r11
  signed __int64 v70; // rax
  int v71; // r10d
  unsigned __int64 v72; // rcx
  __int64 v73; // r9
  __int64 v74; // r8
  unsigned __int64 v75; // r8
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rbx
  __int64 v79; // rax
  unsigned __int64 v80; // r11
  int v81; // r10d
  unsigned __int64 v82; // rcx
  __int64 v83; // r9
  __int64 v84; // r8
  unsigned __int64 v85; // r8
  __int64 v86; // rdx
  __int64 v87; // r8
  signed __int32 v88[8]; // [rsp+0h] [rbp-A8h] BYREF
  char v89; // [rsp+30h] [rbp-78h]
  unsigned __int8 v90; // [rsp+31h] [rbp-77h]
  __int64 v91; // [rsp+38h] [rbp-70h]
  __int64 v92; // [rsp+40h] [rbp-68h]
  unsigned __int64 v93; // [rsp+48h] [rbp-60h]
  __int128 v94; // [rsp+50h] [rbp-58h] BYREF
  __int64 v95; // [rsp+60h] [rbp-48h]

  v5 = 0LL;
  v89 = a4;
  v90 = a2;
  v95 = 0LL;
  v6 = a4;
  v93 = 0LL;
  v9 = 0LL;
  v94 = 0LL;
  if ( !a3 )
  {
    _disable();
    v19 = HalpPerformanceCounter;
    if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
    {
      v92 = 10000000LL;
      if ( !HalpTimerReferencePage )
      {
        if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
        {
          InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
          v64 = (*(__int64 (__fastcall **)(__int64))(v19 + 112))(InternalData);
          v65 = *(_QWORD *)(v19 + 208);
          v66 = v64;
        }
        else
        {
          do
          {
            v65 = *(_QWORD *)(v19 + 208);
            do
            {
              v67 = *(_QWORD *)(v19 + 200);
              v68 = HalpTimerGetInternalData(v19);
              v69 = (*(__int64 (__fastcall **)(__int64))(v19 + 112))(v68);
              _InterlockedOr(v88, 0);
              v70 = *(_QWORD *)(v19 + 200);
            }
            while ( v67 != v70 );
          }
          while ( v65 != *(_QWORD *)(v19 + 208) );
          v71 = *(_DWORD *)(v19 + 220);
          v72 = v67 ^ v69;
          if ( _bittest64((const __int64 *)&v72, (unsigned __int8)(v71 - 1)) )
          {
            v73 = 1LL;
            if ( v71 == 64 )
              v74 = -1LL;
            else
              v74 = (1LL << v71) - 1;
            if ( v71 != 64 )
              v73 = 1LL << v71;
            v75 = v67 & v74;
            v66 = v69 | v67 ^ v75;
            if ( v69 < v75 )
              v66 += v73;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 200), v66, v70);
          }
          else
          {
            if ( v71 == 64 )
              v76 = -1LL;
            else
              v76 = (1LL << v71) - 1;
            v66 = v69 | v67 & ~v76;
          }
        }
        v15 = HalpTimerScaleCounter(v65 + v66, *(_QWORD *)(v19 + 192), 10000000LL);
        goto LABEL_21;
      }
      if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
        v20 = *(_QWORD *)(HalpPerformanceCounter + 72)
            + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
      else
        v20 = *(_QWORD *)(HalpPerformanceCounter + 72);
      v21 = (*(__int64 (__fastcall **)(__int64))(HalpPerformanceCounter + 112))(v20);
      v22 = MEMORY[0xFFFFF780000003B8];
      v23 = (unsigned __int64)v21 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1);
    }
    else
    {
      v50 = *(_DWORD *)(HalpPerformanceCounter + 220) == 64;
      v92 = *(_QWORD *)(HalpPerformanceCounter + 192);
      if ( v50 )
      {
        v77 = HalpTimerGetInternalData(HalpPerformanceCounter);
        *(_QWORD *)&v23 = (*(__int64 (__fastcall **)(__int64))(v19 + 112))(v77);
        v22 = *(_QWORD *)(v19 + 208);
        *((_QWORD *)&v23 + 1) = v23;
      }
      else
      {
        do
        {
          v22 = *(_QWORD *)(v19 + 208);
          do
          {
            v78 = *(_QWORD *)(v19 + 200);
            v79 = HalpTimerGetInternalData(v19);
            v80 = (*(__int64 (__fastcall **)(__int64))(v19 + 112))(v79);
            _InterlockedOr(v88, 0);
            *(_QWORD *)&v23 = *(_QWORD *)(v19 + 200);
          }
          while ( v78 != (_QWORD)v23 );
        }
        while ( v22 != *(_QWORD *)(v19 + 208) );
        v81 = *(_DWORD *)(v19 + 220);
        v82 = v78 ^ v80;
        if ( _bittest64((const __int64 *)&v82, (unsigned __int8)(v81 - 1)) )
        {
          v83 = 1LL;
          if ( v81 == 64 )
            v84 = -1LL;
          else
            v84 = (1LL << v81) - 1;
          if ( v81 != 64 )
            v83 = 1LL << v81;
          v85 = v78 & v84;
          *((_QWORD *)&v23 + 1) = v80 | v78 ^ v85;
          if ( v80 < v85 )
            *((_QWORD *)&v23 + 1) += v83;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 200), *((signed __int64 *)&v23 + 1), v23);
        }
        else
        {
          if ( v81 == 64 )
            v86 = -1LL;
          else
            v86 = (1LL << v81) - 1;
          *((_QWORD *)&v23 + 1) = v80 | v78 & ~v86;
        }
      }
    }
    v15 = *((_QWORD *)&v23 + 1) + v22;
LABEL_21:
    if ( v19 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
    {
      v87 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
        v87 = 10000000LL;
      v15 = HalpTimerScaleCounter(v15, v92, v87);
    }
    v24 = __rdtsc();
    if ( (*(_QWORD *)(a1 + 34208) & 0x8000000000LL) != 0 )
      v25 = __readmsr(0xDB2u);
    else
      v25 = 0LL;
    v26 = v15 - *(_QWORD *)(a1 + 32880);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 32896), v26);
    if ( (*(_QWORD *)(a1 + 34208) & 0x8000000000LL) != 0 )
      *(_QWORD *)(a1 + 32968) += PpmConvertTime(v26, v24 - *(_QWORD *)(a1 + 32848), v25 - *(_QWORD *)(a1 + 32960));
    v27 = *(_QWORD *)(a1 + 32848);
    *(_QWORD *)(a1 + 32880) = v15;
    if ( v24 > v27 )
      *(_QWORD *)(a1 + 32856) += v24 - v27;
    *(_QWORD *)(a1 + 32848) = v24;
    v5 = 0LL;
    if ( (*(_QWORD *)(a1 + 34208) & 0x8000000000LL) != 0 )
      *(_QWORD *)(a1 + 32960) = v25;
    v6 = v89;
    goto LABEL_31;
  }
  v10 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
  {
    v50 = *(_DWORD *)(HalpPerformanceCounter + 220) == 64;
    v91 = *(_QWORD *)(HalpPerformanceCounter + 192);
    if ( v50 )
    {
      v51 = HalpTimerGetInternalData(HalpPerformanceCounter);
      *(_QWORD *)&v14 = (*(__int64 (__fastcall **)(__int64))(v10 + 112))(v51);
      v13 = *(_QWORD *)(v10 + 208);
      *((_QWORD *)&v14 + 1) = v14;
    }
    else
    {
      do
      {
        v13 = *(_QWORD *)(v10 + 208);
        do
        {
          v52 = *(_QWORD *)(v10 + 200);
          v53 = HalpTimerGetInternalData(v10);
          v54 = (*(__int64 (__fastcall **)(__int64))(v10 + 112))(v53);
          _InterlockedOr(v88, 0);
          *(_QWORD *)&v14 = *(_QWORD *)(v10 + 200);
        }
        while ( v52 != (_QWORD)v14 );
      }
      while ( v13 != *(_QWORD *)(v10 + 208) );
      v55 = *(_DWORD *)(v10 + 220);
      v56 = v52 ^ v54;
      if ( _bittest64((const __int64 *)&v56, (unsigned __int8)(v55 - 1)) )
      {
        v57 = 1LL;
        if ( v55 == 64 )
          v58 = -1LL;
        else
          v58 = (1LL << v55) - 1;
        if ( v55 != 64 )
          v57 = 1LL << v55;
        v59 = v52 & v58;
        *((_QWORD *)&v14 + 1) = v54 | v52 ^ v59;
        if ( v54 < v59 )
          *((_QWORD *)&v14 + 1) += v57;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 200), *((signed __int64 *)&v14 + 1), v14);
        v5 = 0LL;
      }
      else
      {
        if ( v55 == 64 )
          v60 = -1LL;
        else
          v60 = (1LL << v55) - 1;
        *((_QWORD *)&v14 + 1) = v54 | v52 & ~v60;
        v5 = 0LL;
      }
    }
    goto LABEL_7;
  }
  v91 = 10000000LL;
  if ( HalpTimerReferencePage )
  {
    if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
      v11 = *(_QWORD *)(HalpPerformanceCounter + 72)
          + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
    else
      v11 = *(_QWORD *)(HalpPerformanceCounter + 72);
    v12 = (*(__int64 (__fastcall **)(__int64))(HalpPerformanceCounter + 112))(v11);
    v13 = MEMORY[0xFFFFF780000003B8];
    v14 = (unsigned __int64)v12 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1);
LABEL_7:
    v15 = *((_QWORD *)&v14 + 1) + v13;
    goto LABEL_8;
  }
  if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
  {
    v36 = HalpTimerGetInternalData(HalpPerformanceCounter);
    v37 = (*(__int64 (__fastcall **)(__int64))(v10 + 112))(v36);
    v38 = *(_QWORD *)(v10 + 208);
    v39 = v37;
  }
  else
  {
    do
    {
      v38 = *(_QWORD *)(v10 + 208);
      do
      {
        v40 = *(_QWORD *)(v10 + 200);
        v41 = HalpTimerGetInternalData(v10);
        v42 = (*(__int64 (__fastcall **)(__int64))(v10 + 112))(v41);
        _InterlockedOr(v88, 0);
        v43 = *(_QWORD *)(v10 + 200);
      }
      while ( v40 != v43 );
    }
    while ( v38 != *(_QWORD *)(v10 + 208) );
    v44 = *(_DWORD *)(v10 + 220);
    v45 = v40 ^ v42;
    if ( _bittest64((const __int64 *)&v45, (unsigned __int8)(v44 - 1)) )
    {
      v46 = 1LL;
      if ( v44 == 64 )
        v47 = -1LL;
      else
        v47 = (1LL << v44) - 1;
      if ( v44 != 64 )
        v46 = 1LL << v44;
      v48 = v40 & v47;
      v39 = v42 | v40 ^ v48;
      if ( v42 < v48 )
        v39 += v46;
      _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 200), v39, v43);
      v5 = 0LL;
    }
    else
    {
      if ( v44 == 64 )
        v49 = -1LL;
      else
        v49 = (1LL << v44) - 1;
      v39 = v42 | v40 & ~v49;
      v5 = 0LL;
    }
  }
  v15 = HalpTimerScaleCounter(v38 + v39, *(_QWORD *)(v10 + 192), 10000000LL);
LABEL_8:
  if ( v10 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
  {
    v61 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v61 = 10000000LL;
    v15 = HalpTimerScaleCounter(v15, v91, v61);
  }
  _m_prefetchw((const void *)(a1 + 32800));
  v16 = *(_QWORD *)(a1 + 32800);
  do
  {
    v17 = v16;
    v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32800), v16, v16);
  }
  while ( v17 != v16 );
  v9 = v16;
  if ( v16 )
  {
    if ( *(_DWORD *)(a1 + 32984) == 3 )
    {
      v62 = *(_QWORD *)(a1 + 33616);
      v9 = *(_QWORD *)(v62 + 8LL * DWORD2(xmmword_140CED590)) >> 1;
      if ( (*(_QWORD *)(v62 + 8LL * DWORD2(xmmword_140CED590)) & 1) == 0 )
        v9 = 0LL;
    }
  }
  if ( !v9 )
    return 0;
LABEL_31:
  memset(a5, 0, 0x60uLL);
  a5[7] = *(_QWORD *)(a1 + 32488) + *(_QWORD *)(a1 + 32568);
  a5[8] = *(_QWORD *)(a1 + 32464);
  a5[9] = *(_QWORD *)(a1 + 32472);
  a5[10] = *(_QWORD *)(a1 + 32480);
  if ( !a3 )
    _enable();
  if ( *(_DWORD *)(a1 + 32984) == 3 )
    v5 = (unsigned __int64 *)&v94;
  result = PpmUpdatePerformanceFeedback(a1, v90, a3, 0, (__int64)v5);
  if ( result )
  {
    if ( v6 && PopSnapEnergyCounters )
    {
      LOBYTE(v28) = 1;
      PopSnapEnergyCounters(*(unsigned int *)(a1 + 36), a3, v28);
    }
    if ( v5 )
    {
      v31 = *v5;
      v29 = v5[1];
      v30 = v5[2];
      v32 = v93;
    }
    else
    {
      v29 = *(_QWORD *)(a1 + 32792);
      v30 = *(_QWORD *)(a1 + 32856);
      v31 = v9;
      if ( v15 > v9 )
        v31 = v15;
      v32 = v9;
    }
    if ( *(_QWORD *)(a1 + 32864) )
    {
      v33 = *(_QWORD *)(a1 + 32904);
    }
    else if ( *(_QWORD *)(a1 + 32872) )
    {
      v33 = *(_QWORD *)(a1 + 32912);
    }
    else
    {
      v33 = 100LL * *(_QWORD *)(a1 + 32888);
    }
    a5[3] = v33;
    if ( *(_QWORD *)(a1 + 32872) )
      v33 = *(_QWORD *)(a1 + 32912);
    a5[4] = v33;
    a5[5] = *(_QWORD *)(a1 + 32928);
    a5[2] = *(_QWORD *)(a1 + 32968);
    *((_DWORD *)a5 + 22) = *(_DWORD *)(a1 + 12508);
    if ( a3 )
    {
      _m_prefetchw((const void *)(a1 + 32800));
      v34 = *(_QWORD *)(a1 + 32800);
      do
      {
        v35 = v34;
        v34 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32800), v34, v34);
      }
      while ( v35 != v34 );
      if ( v34 )
      {
        if ( *(_DWORD *)(a1 + 32984) == 3 )
        {
          v34 = *(_QWORD *)(*(_QWORD *)(a1 + 33616) + 8LL * DWORD2(xmmword_140CED590)) >> 1;
          if ( (*(_QWORD *)(*(_QWORD *)(a1 + 33616) + 8LL * DWORD2(xmmword_140CED590)) & 1) == 0 )
            v34 = 0LL;
        }
      }
      if ( v9 != v34 )
        return 0;
      if ( !v5 )
        v29 += v31 - v32;
    }
    else if ( !v5 )
    {
      v29 += *(_QWORD *)(a1 + 32784);
    }
    *a5 = v31;
    result = 1;
    a5[6] = v30;
    a5[1] = v31 - v29;
  }
  return result;
}
