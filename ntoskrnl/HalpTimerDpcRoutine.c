/*
 * XREFs of HalpTimerDpcRoutine @ 0x1402FEBF0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     HalpTimerGetInternalData @ 0x14022CC50 (HalpTimerGetInternalData.c)
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 HalpTimerDpcRoutine()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  __int64 result; // rax
  ULONG_PTR v3; // rcx
  __int64 InternalData; // rax
  __int64 v5; // rax
  __int64 v6; // rsi
  signed __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // r11
  signed __int64 v11; // rax
  int v12; // r9d
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  signed __int32 v17[8]; // [rsp+0h] [rbp-38h] BYREF

  KeQueryPerformanceCounter(0LL);
  v0 = HalpAlwaysOnCounter;
  if ( HalpAlwaysOnCounter )
  {
    if ( *(_DWORD *)(HalpAlwaysOnCounter + 220) == 64 )
    {
      InternalData = HalpTimerGetInternalData(HalpAlwaysOnCounter);
      v5 = (*(__int64 (__fastcall **)(__int64))(v0 + 112))(InternalData);
      v6 = *(_QWORD *)(v0 + 208);
      v7 = v5;
    }
    else
    {
      do
      {
        v6 = *(_QWORD *)(v0 + 208);
        do
        {
          v8 = *(_QWORD *)(v0 + 200);
          v9 = HalpTimerGetInternalData(v0);
          v10 = (*(__int64 (__fastcall **)(__int64))(v0 + 112))(v9);
          _InterlockedOr(v17, 0);
          v11 = *(_QWORD *)(v0 + 200);
        }
        while ( v8 != v11 );
      }
      while ( v6 != *(_QWORD *)(v0 + 208) );
      v12 = *(_DWORD *)(v0 + 220);
      if ( ((v8 ^ v10) & (1LL << ((unsigned __int8)v12 - 1))) != 0 )
      {
        if ( v12 == 64 )
          v13 = -1LL;
        else
          v13 = (1LL << v12) - 1;
        v14 = 0LL;
        if ( v12 != 64 )
          v14 = 1LL << v12;
        v15 = v8 & v13;
        v7 = v10 | v8 ^ v15;
        if ( v10 < v15 )
          v7 += v14;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v0 + 200), v7, v11);
      }
      else
      {
        if ( v12 == 64 )
          v16 = -1LL;
        else
          v16 = (1LL << v12) - 1;
        v7 = v10 | v8 & ~v16;
      }
    }
    if ( v6 + v7 < HalpTimerLastAlwaysOnCounterValue )
      KeBugCheckEx(0x5Cu, 0x113uLL, 0x27uLL, v6 + v7, HalpTimerLastAlwaysOnCounterValue);
    HalpTimerLastAlwaysOnCounterValue = v6 + v7;
  }
  v1 = MEMORY[0xFFFFF78000000014];
  result = MEMORY[0xFFFFF78000000014] - HalpTimerLastDpc;
  if ( (unsigned __int64)(MEMORY[0xFFFFF78000000014] - HalpTimerLastDpc) >= 0x47868C00 )
  {
    result = KiProcessorBlock[0];
    v3 = _InterlockedExchange64((volatile __int64 *)(KiProcessorBlock[0] + 224), 0LL);
    if ( v3 )
      result = KiInsertQueueDpc(v3, (unsigned int)v1, HIDWORD(v1), 0LL, 0);
    HalpTimerLastDpc = v1;
  }
  return result;
}
