/*
 * XREFs of MiFlushAllPagesWorker @ 0x1406378D4
 * Callers:
 *     MiFlushAllPages @ 0x1406377FC (MiFlushAllPages.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403561BC (MiStoreUpdateMemoryConditions.c)
 *     CcNotifyWriteBehindEx @ 0x140534620 (CcNotifyWriteBehindEx.c)
 *     MiCanFlushMakeProgress @ 0x14063678C (MiCanFlushMakeProgress.c)
 *     MiWakeModifiedPageWriter @ 0x14063982C (MiWakeModifiedPageWriter.c)
 */

char __fastcall MiFlushAllPagesWorker(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 824));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 828));
  do
  {
    if ( !(unsigned int)MiCanFlushMakeProgress(a1, 0) || a4 && *(_DWORD *)(a4 + 4) )
      break;
    KeSetEvent((PRKEVENT)(a1 + 832), 0, 0);
    MiWakeModifiedPageWriter(a1, -1LL);
    CcNotifyWriteBehindEx(2u, *(_QWORD *)(a1 + 200));
    if ( *(_DWORD *)(a1 + 1192) )
      MiStoreUpdateMemoryConditions(a1);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    if ( KiQueryUnbiasedInterruptTime() - a2 > a3 )
      break;
  }
  while ( *(_QWORD *)(a1 + 17600) > 0x32uLL );
  _InterlockedAdd((volatile signed __int32 *)(a1 + 824), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 828), 0xFFFFFFFF);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
