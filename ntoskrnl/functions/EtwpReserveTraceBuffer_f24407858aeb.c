__int64 __fastcall EtwpReserveTraceBuffer(__int64 a1, unsigned int a2, __int64 a3, __int64 *a4, __int16 a5)
{
  __int64 v7; // r8
  unsigned int v8; // edi
  unsigned int v9; // ebx
  signed __int64 *v10; // r9
  __int64 Number; // rcx
  __int64 v12; // rax
  __int64 v13; // r12
  _QWORD *v14; // r12
  signed __int64 *v15; // r15
  signed __int64 v16; // rsi
  signed __int64 v17; // rax
  int v18; // eax
  unsigned __int64 v19; // rsi
  unsigned __int32 v20; // r13d
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rax
  ULONG_PTR v25; // r11
  __int64 v26; // r8
  unsigned __int128 v27; // rax
  __int64 SystemTimePrecise; // rax
  unsigned __int32 v29; // eax
  __int64 v30; // rdx
  __int64 result; // rax
  int v32; // eax
  signed __int64 v33; // rax
  signed __int64 i; // rcx
  signed __int64 v35; // rtt
  bool v36; // zf
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // edi
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v41; // r8
  signed __int64 v42; // r9
  signed __int64 v43; // rcx
  signed __int64 v44; // rax
  signed __int64 v45; // rtt
  __int64 v46; // r11
  signed __int64 v47; // r10
  unsigned __int32 v48; // eax
  __int64 v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // rax
  unsigned __int64 v52; // r10
  signed __int64 v53; // rax
  ULONG_PTR v54; // r11
  int v55; // r9d
  unsigned __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rcx
  unsigned __int64 v59; // r8
  signed __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 InternalData; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rbx
  __int64 v69; // rax
  __int64 v70; // r9
  int v71; // r10d
  __int64 v72; // rcx
  __int64 v73; // r9
  __int64 v74; // rcx
  unsigned __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // r8
  signed __int32 v79[8]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned int v80; // [rsp+30h] [rbp-88h]
  unsigned int v81; // [rsp+34h] [rbp-84h]
  ULONG_PTR v82; // [rsp+38h] [rbp-80h]
  unsigned int v83; // [rsp+40h] [rbp-78h]
  __int64 v84; // [rsp+48h] [rbp-70h]
  signed __int64 v85; // [rsp+50h] [rbp-68h] BYREF
  __int64 v86; // [rsp+58h] [rbp-60h] BYREF
  int v87; // [rsp+60h] [rbp-58h]
  __int64 v88; // [rsp+68h] [rbp-50h]
  __int64 v89; // [rsp+70h] [rbp-48h] BYREF
  unsigned __int64 v90; // [rsp+78h] [rbp-40h]
  unsigned __int8 v91; // [rsp+C0h] [rbp+8h] BYREF
  __int64 *v92; // [rsp+D8h] [rbp+20h]

  v92 = a4;
  if ( *(int *)(a1 + 16) < 0 || a2 > *(_DWORD *)(a1 + 8) )
  {
LABEL_53:
    EtwpUpdateEventsLostCount(a1);
    return 0LL;
  }
  v7 = *(unsigned int *)(a1 + 4);
  v8 = *(_DWORD *)a1;
  v9 = (a2 + 7) & 0xFFFFFFF8;
  v81 = v9;
  v80 = v7;
  v83 = v8;
  while ( 1 )
  {
    v10 = KiProcessorBlock;
    Number = KeGetCurrentPrcb()->Number;
    v12 = *(_QWORD *)(a1 + 1096);
    v87 = Number;
    if ( v12 == EtwpHostSiloState )
    {
      if ( (unsigned int)Number >= (unsigned int)KeNumberProcessors_0 )
      {
        v13 = 0LL;
      }
      else
      {
        _mm_lfence();
        v13 = KiProcessorBlock[Number];
      }
      v14 = (_QWORD *)(*(_QWORD *)(v13 + 34472) + 320LL);
    }
    else
    {
      v14 = (_QWORD *)(*(_QWORD *)(v12 + 4144) + (Number << 6));
    }
    if ( (*(_DWORD *)(a1 + 12) & 0x10000000) != 0 )
      v15 = (signed __int64 *)(a1 + 128);
    else
      v15 = (signed __int64 *)(*v14 + 8LL * v8);
    v91 = 0;
    _m_prefetchw(v15);
    v16 = *v15;
    if ( (*v15 & 0xF) != 0 )
    {
      do
      {
        v17 = _InterlockedCompareExchange64(v15, v16 - 1, v16);
        if ( v16 == v17 )
          break;
        v16 = v17;
      }
      while ( (v17 & 0xF) != 0 );
    }
    if ( !v16 )
    {
      v19 = 0LL;
      goto LABEL_45;
    }
    v18 = v16 & 0xF;
    if ( (v16 & 0xF) != 0 )
    {
      v19 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v18 == 1 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 12), 0xFu);
        _m_prefetchw(v15);
        v44 = *v15;
        while ( (v44 & 0xF) == 0 )
        {
          if ( v19 != (v44 & 0xFFFFFFFFFFFFFFF0uLL) )
            break;
          v45 = v44;
          v44 = _InterlockedCompareExchange64(v15, v44 + 15, v44);
          if ( v45 == v44 )
            goto LABEL_15;
        }
        _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 12), 0xFFFFFFF1);
      }
    }
    else
    {
      EtwpLockBufferList(a1, &v91);
      v19 = *v15 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v19 )
        _InterlockedIncrement((volatile signed __int32 *)(v19 + 12));
      EtwpUnlockBufferList(a1, &v91);
      v7 = v80;
    }
LABEL_15:
    if ( v19 )
    {
      v85 = 0LL;
      v86 = 0LL;
      _m_prefetchw((const void *)(v19 + 8));
      v20 = *(_DWORD *)(v19 + 8);
      if ( v20 <= (unsigned int)v7 )
        break;
    }
LABEL_45:
    v39 = EtwpSwitchBuffer(a1, v19, v15, v87, a5);
    if ( (*(_DWORD *)(a1 + 12) & 0x4000000) != 0 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v41 = PerformanceCounter.QuadPart
          - _InterlockedExchange64((volatile __int64 *)(a1 + 1256), PerformanceCounter.QuadPart);
      do
      {
        v42 = *(_QWORD *)(a1 + 1264);
        if ( v42 )
          v43 = (v42 + v41 + 2 * v42) / 4;
        else
          v43 = v41;
      }
      while ( v42 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1264), v43, v42) );
    }
    if ( v39 < 0 )
      goto LABEL_53;
    v8 = v83;
    v7 = v80;
  }
  while ( (*(_DWORD *)(a1 + 816) & 0x8000000) != 0 )
  {
    if ( (unsigned int)EtwpGetTimeStampAndQpcDelta(a1, &v86, &v85, v10) )
      goto LABEL_82;
    v46 = 8LL * v8;
    v47 = *(_QWORD *)(v46 + v14[2]);
    if ( v85 == v47 && v20 != 72 )
    {
      SystemTimePrecise = v86;
      goto LABEL_28;
    }
    v48 = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 8), v20 + 24, v20);
    if ( v20 == v48 )
    {
      if ( (unsigned __int64)v48 + 24 > v80 )
      {
        *(_DWORD *)(v19 + 4) = v48;
        goto LABEL_45;
      }
      v36 = v47 == _InterlockedCompareExchange64((volatile signed __int64 *)(v14[2] + v46), v85, v47);
      *(_DWORD *)(v48 + v19 + 4) = 5308440;
      v20 = v48;
      *(_QWORD *)(v48 + v19 + 8) = v86;
      if ( v36 )
      {
        *(_QWORD *)(v48 + v19 + 16) = v85;
        *(_DWORD *)(v48 + v19) = -1072627710;
      }
      else
      {
        *(_DWORD *)(v48 + v19) = -1072627711;
        *(_QWORD *)(v48 + v19 + 16) = 0LL;
      }
    }
    else
    {
      v20 = v48;
    }
LABEL_82:
    v7 = v80;
LABEL_50:
    if ( v20 > (unsigned int)v7 )
      goto LABEL_45;
  }
  v21 = *(_QWORD *)(a1 + 24);
  if ( v21 > 3 )
    goto LABEL_129;
  if ( (_DWORD)v21 == 1 )
  {
    v82 = HalpPerformanceCounter;
    if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
    {
      v22 = 10000000LL;
      v88 = 10000000LL;
      if ( HalpTimerReferencePage )
      {
        if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
          v23 = *(_QWORD *)(HalpPerformanceCounter + 72)
              + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
        else
          v23 = *(_QWORD *)(HalpPerformanceCounter + 72);
        v24 = (*(__int64 (__fastcall **)(__int64, ULONG_PTR, __int64, signed __int64 *))(HalpPerformanceCounter + 112))(
                v23,
                HalpPerformanceCounter,
                v7,
                v10);
        v25 = v82;
        v26 = MEMORY[0xFFFFF780000003B8];
        v27 = (unsigned __int64)v24 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1);
        goto LABEL_25;
      }
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
        v66 = (*(__int64 (__fastcall **)(__int64))(v65 + 112))(InternalData);
        v54 = v82;
        v60 = v66;
        v61 = *(_QWORD *)(v82 + 208);
      }
      else
      {
        v49 = HalpPerformanceCounter;
        do
        {
          v84 = *(_QWORD *)(v49 + 208);
          do
          {
            v50 = *(_QWORD *)(v49 + 200);
            v51 = HalpTimerGetInternalData(v49);
            v52 = (*(__int64 (__fastcall **)(__int64))(v49 + 112))(v51);
            _InterlockedOr(v79, 0);
            v53 = *(_QWORD *)(v49 + 200);
          }
          while ( v50 != v53 );
        }
        while ( v84 != *(_QWORD *)(v49 + 208) );
        v54 = v82;
        v22 = v88;
        v55 = *(_DWORD *)(v82 + 220);
        v56 = v50 ^ v52;
        if ( _bittest64((const __int64 *)&v56, (unsigned __int8)(v55 - 1)) )
        {
          if ( v55 == 64 )
            v57 = -1LL;
          else
            v57 = (1LL << v55) - 1;
          v58 = 0LL;
          if ( v55 != 64 )
            v58 = 1LL << v55;
          v59 = v50 & v57;
          v60 = v52 | v50 ^ v59;
          if ( v52 < v59 )
            v60 += v58;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v82 + 200), v60, v53);
          v9 = v81;
          v61 = v84;
        }
        else
        {
          if ( v55 == 64 )
            v62 = -1LL;
          else
            v62 = (1LL << v55) - 1;
          v61 = v84;
          v63 = v50 & ~v62;
          v9 = v81;
          v60 = v52 | v63;
        }
      }
      SystemTimePrecise = HalpTimerScaleCounter(v61 + v60, *(_QWORD *)(v54 + 192), 10000000LL);
    }
    else
    {
      v36 = *(_DWORD *)(HalpPerformanceCounter + 220) == 64;
      v22 = *(_QWORD *)(HalpPerformanceCounter + 192);
      v88 = v22;
      if ( v36 )
      {
        v37 = HalpTimerGetInternalData(HalpPerformanceCounter);
        *(_QWORD *)&v27 = (*(__int64 (__fastcall **)(__int64))(v38 + 112))(v37);
        v25 = v82;
        *((_QWORD *)&v27 + 1) = v27;
        v26 = *(_QWORD *)(v82 + 208);
      }
      else
      {
        v67 = HalpPerformanceCounter;
        do
        {
          v84 = *(_QWORD *)(v67 + 208);
          do
          {
            v68 = *(_QWORD *)(v67 + 200);
            v69 = HalpTimerGetInternalData(v67);
            v70 = (*(__int64 (__fastcall **)(__int64))(v67 + 112))(v69);
            v90 = v70;
            _InterlockedOr(v79, 0);
            *(_QWORD *)&v27 = *(_QWORD *)(v67 + 200);
          }
          while ( v68 != (_QWORD)v27 );
          v26 = v84;
        }
        while ( v84 != *(_QWORD *)(v67 + 208) );
        v25 = v82;
        v22 = v88;
        v71 = *(_DWORD *)(v82 + 220);
        v72 = v68 ^ v70;
        if ( _bittest64(&v72, (unsigned __int8)(v71 - 1)) )
        {
          if ( v71 == 64 )
            v73 = -1LL;
          else
            v73 = (1LL << v71) - 1;
          v74 = 0LL;
          if ( v71 != 64 )
            v74 = 1LL << v71;
          v75 = v68 & v73;
          *((_QWORD *)&v27 + 1) = v90 | v68 ^ v75;
          if ( v90 < v75 )
            *((_QWORD *)&v27 + 1) += v74;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v82 + 200), *((signed __int64 *)&v27 + 1), v27);
          v9 = v81;
        }
        else
        {
          if ( v71 == 64 )
            v76 = -1LL;
          else
            v76 = (1LL << v71) - 1;
          v77 = v68 & ~v76;
          v9 = v81;
          *((_QWORD *)&v27 + 1) = v70 | v77;
        }
      }
LABEL_25:
      SystemTimePrecise = v26 + *((_QWORD *)&v27 + 1);
    }
    if ( v25 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
    {
      v78 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
        v78 = 10000000LL;
      SystemTimePrecise = HalpTimerScaleCounter(SystemTimePrecise, v22, v78);
    }
    v8 = v83;
    goto LABEL_28;
  }
  if ( !(_DWORD)v21 )
  {
    SystemTimePrecise = RtlGetSystemTimePrecise();
LABEL_28:
    v7 = v80;
    goto LABEL_29;
  }
  v32 = v21 - 2;
  if ( !v32 )
  {
    v89 = 0LL;
    ((void (__fastcall *)(__int64 *, _QWORD, __int64, signed __int64 *))off_140C01DF0[0])(&v89, 0LL, v7, v10);
    SystemTimePrecise = v89;
    goto LABEL_28;
  }
  if ( v32 != 1 )
LABEL_129:
    __fastfail(0x3Du);
  SystemTimePrecise = __rdtsc();
LABEL_29:
  v10 = v92;
  *v92 = SystemTimePrecise;
  v29 = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 8), v9 + v20, v20);
  v30 = v29;
  if ( v20 != v29 )
  {
    v20 = v29;
    goto LABEL_50;
  }
  if ( v29 + v9 > (unsigned int)v7 )
  {
    *(_DWORD *)(v19 + 4) = v29;
    goto LABEL_45;
  }
  if ( (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
  {
    v33 = *(_QWORD *)(v19 + 16);
    for ( i = *v10; *v10 > v33; i = *v10 )
    {
      v35 = v33;
      v33 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 16), i, v33);
      if ( v35 == v33 )
        break;
    }
  }
  ++*(_QWORD *)(v14[1] + 8LL * v8);
  result = v19 + v30;
  *(_QWORD *)a3 = v19;
  *(_QWORD *)(a3 + 8) = v15;
  *(_DWORD *)(a3 + 16) = v30;
  return result;
}
