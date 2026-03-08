/*
 * XREFs of KiFastExitThreadWait @ 0x140239300
 * Callers:
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     KeWaitForGate @ 0x1402931D8 (KeWaitForGate.c)
 *     KeWaitForAlertByThreadId @ 0x140293354 (KeWaitForAlertByThreadId.c)
 *     KiWaitForAllObjects @ 0x1402936D0 (KiWaitForAllObjects.c)
 *     KeRemoveQueueEx @ 0x140315D50 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KeRemovePriQueue @ 0x140352720 (KeRemovePriQueue.c)
 * Callees:
 *     KiExitThreadWait @ 0x140239380 (KiExitThreadWait.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiFastExitThreadWait(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  int v8; // [rsp+48h] [rbp+20h] BYREF

  v3 = a3;
  *(_BYTE *)(a2 + 388) = 2;
  _InterlockedOr(v7, 0);
  if ( *(_QWORD *)(a2 + 64) )
  {
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v8);
      while ( *(_QWORD *)(a2 + 64) );
    }
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  LOBYTE(a3) = v3;
  return KiExitThreadWait(a1, a2, a3);
}
