void __stdcall KeStallExecutionProcessor(ULONG MicroSeconds)
{
  __int64 v1; // r8
  ULONG_PTR v3; // rsi
  __int64 InternalData; // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r11
  signed __int64 v9; // rax
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // r10
  unsigned __int64 v13; // rdx
  signed __int64 v14; // rcx
  signed __int32 v15[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( HalpTimerProcessorsFrozen )
  {
    v3 = HalpAlwaysOnCounter;
    if ( HalpAlwaysOnCounter )
    {
      if ( *(_DWORD *)(HalpAlwaysOnCounter + 220) == 64 )
      {
        InternalData = HalpTimerGetInternalData(HalpAlwaysOnCounter);
        (*(void (__fastcall **)(__int64))(v3 + 112))(InternalData);
      }
      else
      {
        do
        {
          v5 = *(_QWORD *)(v3 + 208);
          do
          {
            v6 = *(_QWORD *)(v3 + 200);
            v7 = HalpTimerGetInternalData(v3);
            v8 = (*(__int64 (__fastcall **)(__int64))(v3 + 112))(v7);
            _InterlockedOr(v15, 0);
            v9 = *(_QWORD *)(v3 + 200);
          }
          while ( v6 != v9 );
        }
        while ( v5 != *(_QWORD *)(v3 + 208) );
        v10 = *(_DWORD *)(v3 + 220);
        if ( ((v6 ^ v8) & (1LL << ((unsigned __int8)v10 - 1))) != 0 )
        {
          if ( v10 == 64 )
            v11 = -1LL;
          else
            v11 = (1LL << v10) - 1;
          v12 = 0LL;
          if ( v10 != 64 )
            v12 = 1LL << v10;
          v13 = v6 & v11;
          v14 = v8 | v6 ^ v13;
          if ( v8 < v13 )
            v14 += v12;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 200), v14, v9);
        }
      }
    }
    KiCheckStall((__int64)KeGetCurrentPrcb(), 0);
  }
  LOBYTE(v1) = 1;
  HalpTimerStallExecutionProcessor(HalpStallCounter, 10 * MicroSeconds, v1);
}
