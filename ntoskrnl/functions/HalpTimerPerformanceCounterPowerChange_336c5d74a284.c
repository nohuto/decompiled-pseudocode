_UNKNOWN **__fastcall HalpTimerPerformanceCounterPowerChange(ULONG_PTR BugCheckParameter3, char a2)
{
  _UNKNOWN **result; // rax
  ULONG_PTR v3; // r14
  __int64 InternalData; // rax
  int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  signed __int64 v11; // rax
  int v12; // r8d
  unsigned __int64 v13; // rcx
  __int64 v14; // rbp
  unsigned __int64 v15; // rbp
  signed __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // r11
  unsigned __int64 v22; // rdx
  __int64 v23; // rsi
  ULONG_PTR v24; // r13
  __int64 v25; // rbp
  __int64 v26; // r14
  __int64 v27; // rbx
  __int64 v28; // rax
  unsigned __int64 v29; // r11
  signed __int64 v30; // rax
  int v31; // r9d
  unsigned __int64 v32; // rcx
  __int64 v33; // r8
  unsigned __int64 v34; // r8
  signed __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // r12
  __int64 v40; // rsi
  __int64 v41; // r14
  __int64 v42; // rbx
  __int64 v43; // rax
  unsigned __int64 v44; // r11
  signed __int64 v45; // rax
  int v46; // r9d
  unsigned __int64 v47; // rcx
  __int64 v48; // r8
  unsigned __int64 v49; // r8
  signed __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rsi
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rcx
  __int64 v57; // r14
  __int64 v58; // rbx
  __int64 v59; // rax
  unsigned __int64 v60; // r9
  signed __int64 v61; // rax
  int v62; // r8d
  unsigned __int64 v63; // rcx
  __int64 v64; // rdi
  unsigned __int64 v65; // rbp
  signed __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rax
  unsigned __int64 v70; // rax
  __int64 v71; // r11
  int v72; // eax
  signed __int32 v73[8]; // [rsp+0h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = HalpTimerSavedPerformanceCounter;
  if ( HalpTimerSavedPerformanceCounter )
  {
    if ( BugCheckParameter3 == HalpTimerSavedPerformanceCounter && a2 )
    {
      InternalData = HalpTimerGetInternalData(HalpTimerSavedPerformanceCounter);
      v5 = (*(__int64 (__fastcall **)(__int64))(v3 + 104))(InternalData);
      if ( v5 < 0 )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0xFuLL, v3, v5);
      if ( HalpTimerDelayedQueryHardwareCount )
      {
        *(_QWORD *)(HalpPerformanceCounter + 112) = HalpTimerDelayedQueryHardwareCount;
        HalpTimerDelayedQueryHardwareCount = 0LL;
      }
      v6 = HalpPerformanceCounter;
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        v18 = HalpTimerGetInternalData(HalpPerformanceCounter);
        v19 = (*(__int64 (__fastcall **)(__int64))(v6 + 112))(v18);
        v7 = *(_QWORD *)(v6 + 208);
        v16 = v19;
      }
      else
      {
        do
        {
          v7 = *(_QWORD *)(v6 + 208);
          do
          {
            v8 = *(_QWORD *)(v6 + 200);
            v9 = HalpTimerGetInternalData(v6);
            v10 = (*(__int64 (__fastcall **)(__int64))(v6 + 112))(v9);
            _InterlockedOr(v73, 0);
            v11 = *(_QWORD *)(v6 + 200);
          }
          while ( v8 != v11 );
        }
        while ( v7 != *(_QWORD *)(v6 + 208) );
        v12 = *(_DWORD *)(v6 + 220);
        v13 = v8 ^ v10;
        if ( _bittest64((const __int64 *)&v13, (unsigned __int8)(v12 - 1)) )
        {
          v14 = -1LL;
          if ( v12 != 64 )
            v14 = (1LL << v12) - 1;
          v15 = v8 & v14;
          v16 = v10 | v8 ^ v15;
          if ( v10 < v15 )
            v16 += 1LL << v12;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 200), v16, v11);
        }
        else
        {
          if ( v12 == 64 )
            v17 = -1LL;
          else
            v17 = (1LL << v12) - 1;
          v16 = v10 | v8 & ~v17;
        }
      }
      v20 = HalpTimerScaleCounter(
              v7 + v16,
              *(_QWORD *)(HalpPerformanceCounter + 192),
              *(_QWORD *)(HalpTimerSavedPerformanceCounter + 192));
      v22 = *(_QWORD *)(v21 + 16);
      if ( v20 >= v22 )
        v22 = v20;
      result = (_UNKNOWN **)HalpTimerCalibratePerformanceCounter(v3, v22);
      if ( (int)result < 0 )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0x26uLL, v3, (int)result);
      HalpTimerSavedPerformanceCounter = 0LL;
      HalpPerformanceCounter = v3;
    }
  }
  else
  {
    v23 = HalpPerformanceCounter;
    if ( BugCheckParameter3 == HalpPerformanceCounter && !a2 )
    {
      v24 = HalpAlwaysOnCounter;
      HalpTimerSavedPerformanceCounter = HalpPerformanceCounter;
      if ( !HalpAlwaysOnCounter )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0x22uLL, BugCheckParameter3, 0LL);
      v25 = -1LL;
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        v37 = HalpTimerGetInternalData(HalpPerformanceCounter);
        v38 = (*(__int64 (__fastcall **)(__int64))(v23 + 112))(v37);
        v26 = *(_QWORD *)(v23 + 208);
        v35 = v38;
      }
      else
      {
        do
        {
          v26 = *(_QWORD *)(v23 + 208);
          do
          {
            v27 = *(_QWORD *)(v23 + 200);
            v28 = HalpTimerGetInternalData(v23);
            v29 = (*(__int64 (__fastcall **)(__int64))(v23 + 112))(v28);
            _InterlockedOr(v73, 0);
            v30 = *(_QWORD *)(v23 + 200);
          }
          while ( v27 != v30 );
        }
        while ( v26 != *(_QWORD *)(v23 + 208) );
        v31 = *(_DWORD *)(v23 + 220);
        v32 = v27 ^ v29;
        if ( _bittest64((const __int64 *)&v32, (unsigned __int8)(v31 - 1)) )
        {
          v33 = -1LL;
          if ( v31 != 64 )
            v33 = (1LL << v31) - 1;
          v34 = v27 & v33;
          v35 = v29 | v27 ^ v34;
          if ( v29 < v34 )
            v35 += 1LL << v31;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 200), v35, v30);
        }
        else
        {
          if ( v31 == 64 )
            v36 = -1LL;
          else
            v36 = (1LL << v31) - 1;
          v35 = v29 | v27 & ~v36;
        }
      }
      v39 = v26 + v35;
      v40 = HalpAlwaysOnCounter;
      *(_QWORD *)(HalpPerformanceCounter + 16) = v26 + v35;
      if ( *(_DWORD *)(v40 + 220) == 64 )
      {
        v52 = HalpTimerGetInternalData(v40);
        v53 = (*(__int64 (__fastcall **)(__int64))(v40 + 112))(v52);
        v41 = *(_QWORD *)(v40 + 208);
        v50 = v53;
      }
      else
      {
        do
        {
          v41 = *(_QWORD *)(v40 + 208);
          do
          {
            v42 = *(_QWORD *)(v40 + 200);
            v43 = HalpTimerGetInternalData(v40);
            v44 = (*(__int64 (__fastcall **)(__int64))(v40 + 112))(v43);
            _InterlockedOr(v73, 0);
            v45 = *(_QWORD *)(v40 + 200);
          }
          while ( v42 != v45 );
        }
        while ( v41 != *(_QWORD *)(v40 + 208) );
        v46 = *(_DWORD *)(v40 + 220);
        v47 = v42 ^ v44;
        if ( _bittest64((const __int64 *)&v47, (unsigned __int8)(v46 - 1)) )
        {
          v48 = -1LL;
          if ( v46 != 64 )
            v48 = (1LL << v46) - 1;
          v49 = v42 & v48;
          v50 = v44 | v42 ^ v49;
          if ( v44 < v49 )
            v50 += 1LL << v46;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v40 + 200), v50, v45);
        }
        else
        {
          if ( v46 == 64 )
            v51 = -1LL;
          else
            v51 = (1LL << v46) - 1;
          v50 = v44 | v42 & ~v51;
        }
      }
      v54 = HalpPerformanceCounter;
      v55 = HalpTimerScaleCounter(
              v41 + v50,
              *(_QWORD *)(HalpAlwaysOnCounter + 192),
              *(_QWORD *)(HalpPerformanceCounter + 192));
      v56 = v39 - v55;
      if ( v39 <= v55 )
        v56 = v55 - v39;
      if ( v56 > HalpTimerMaximumAllowableDrift )
      {
        ++HalpTimerDriftReadjustmentCount;
        if ( *(_DWORD *)(v54 + 220) == 64 )
        {
          v68 = HalpTimerGetInternalData(v54);
          v69 = (*(__int64 (__fastcall **)(__int64))(v54 + 112))(v68);
          v57 = *(_QWORD *)(v54 + 208);
          v66 = v69;
        }
        else
        {
          do
          {
            v57 = *(_QWORD *)(v54 + 208);
            do
            {
              v58 = *(_QWORD *)(v54 + 200);
              v59 = HalpTimerGetInternalData(v54);
              v60 = (*(__int64 (__fastcall **)(__int64))(v54 + 112))(v59);
              _InterlockedOr(v73, 0);
              v61 = *(_QWORD *)(v54 + 200);
            }
            while ( v58 != v61 );
          }
          while ( v57 != *(_QWORD *)(v54 + 208) );
          v62 = *(_DWORD *)(v54 + 220);
          v63 = v58 ^ v60;
          if ( _bittest64((const __int64 *)&v63, (unsigned __int8)(v62 - 1)) )
          {
            v64 = 1LL << v62;
            if ( v62 != 64 )
              v25 = v64 - 1;
            v65 = v58 & v25;
            v66 = v60 | v58 ^ v65;
            if ( v60 < v65 )
              v66 += v64;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v54 + 200), v66, v61);
          }
          else
          {
            if ( v62 == 64 )
              v67 = -1LL;
            else
              v67 = (1LL << v62) - 1;
            v66 = v60 | v58 & ~v67;
          }
        }
        v70 = HalpTimerScaleCounter(
                v57 + v66,
                *(_QWORD *)(HalpPerformanceCounter + 192),
                *(_QWORD *)(HalpAlwaysOnCounter + 192));
        v72 = HalpTimerCalibratePerformanceCounter(v71, v70);
        if ( v72 < 0 )
          KeBugCheckEx(0x5Cu, 0x113uLL, 0x26uLL, HalpAlwaysOnCounter, v72);
      }
      HalpTimerDelayedQueryHardwareCount = *(_QWORD *)(v24 + 112);
      *(_QWORD *)(v24 + 112) = HalpTimerDelayedQueryCounter;
      HalpTimerSavedPerformanceCounter = HalpPerformanceCounter;
      result = (_UNKNOWN **)HalpAlwaysOnCounter;
      HalpPerformanceCounter = HalpAlwaysOnCounter;
    }
  }
  return result;
}
