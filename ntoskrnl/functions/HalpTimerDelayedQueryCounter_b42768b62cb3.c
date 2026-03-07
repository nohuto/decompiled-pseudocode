__int64 __fastcall HalpTimerDelayedQueryCounter(__int64 a1)
{
  __int64 (__fastcall *v1)(__int64); // rbp
  unsigned __int64 v3; // r15
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r10
  signed __int64 v10; // rax
  int v11; // r9d
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // r8
  signed __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 InternalData; // rax
  __int64 v19; // rax
  signed __int32 v21[18]; // [rsp+0h] [rbp-48h] BYREF

  v1 = (__int64 (__fastcall *)(__int64))HalpTimerDelayedQueryHardwareCount;
  ++HalpTimerHeavilyPenalizedQpcCalls;
  *(_QWORD *)(HalpPerformanceCounter + 112) = HalpTimerDelayedQueryHardwareCount;
  HalpTimerDelayedQueryHardwareCount = 0LL;
  v3 = *(_QWORD *)(HalpTimerSavedPerformanceCounter + 16);
  if ( v3 )
  {
    do
    {
      v4 = HalpPerformanceCounter;
      v5 = *(_QWORD *)(HalpPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
        v19 = (*(__int64 (__fastcall **)(__int64))(v4 + 112))(InternalData);
        v6 = *(_QWORD *)(v4 + 208);
        v16 = v19;
      }
      else
      {
        do
        {
          v6 = *(_QWORD *)(v4 + 208);
          do
          {
            v7 = *(_QWORD *)(v4 + 200);
            v8 = HalpTimerGetInternalData(v4);
            v9 = (*(__int64 (__fastcall **)(__int64))(v4 + 112))(v8);
            _InterlockedOr(v21, 0);
            v10 = *(_QWORD *)(v4 + 200);
          }
          while ( v7 != v10 );
        }
        while ( v6 != *(_QWORD *)(v4 + 208) );
        v11 = *(_DWORD *)(v4 + 220);
        v12 = v7 ^ v9;
        if ( _bittest64((const __int64 *)&v12, (unsigned __int8)(v11 - 1)) )
        {
          if ( v11 == 64 )
            v13 = -1LL;
          else
            v13 = (1LL << v11) - 1;
          v14 = 1LL;
          if ( v11 != 64 )
            v14 = 1LL << v11;
          v15 = v7 & v13;
          v16 = v9 | v7 ^ v15;
          if ( v9 < v15 )
            v16 += v14;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 200), v16, v10);
        }
        else
        {
          if ( v11 == 64 )
            v17 = -1LL;
          else
            v17 = (1LL << v11) - 1;
          v16 = v9 | v7 & ~v17;
        }
      }
    }
    while ( HalpTimerScaleCounter(v6 + v16, v5, *(_QWORD *)(HalpTimerSavedPerformanceCounter + 192)) < v3 );
  }
  return v1(a1);
}
