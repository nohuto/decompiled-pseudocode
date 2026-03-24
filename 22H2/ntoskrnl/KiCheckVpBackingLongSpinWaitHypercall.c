/*
 * XREFs of KiCheckVpBackingLongSpinWaitHypercall @ 0x140390820
 * Callers:
 *     KeRemoveQueueEx @ 0x140204790 (KeRemoveQueueEx.c)
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiResolveProtoPteFault @ 0x140215390 (MiResolveProtoPteFault.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusive @ 0x14021D130 (ExpAcquireSpinLockExclusive.c)
 *     KxFlushEntireTb @ 0x14022F2F0 (KxFlushEntireTb.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140230F30 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiZeroLargePages @ 0x140231E90 (MiZeroLargePages.c)
 *     MiZeroPage @ 0x140232C80 (MiZeroPage.c)
 *     MiMapPagesToZero @ 0x1402339E0 (MiMapPagesToZero.c)
 *     KeRemovePriQueue @ 0x140241B40 (KeRemovePriQueue.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x14024BE10 (KiAcquireKobjectLockSafe.c)
 *     MiLockOwnedProtoPage @ 0x14029A9B0 (MiLockOwnedProtoPage.c)
 *     MmCheckCachedPageStates @ 0x1402A1C20 (MmCheckCachedPageStates.c)
 *     KeFlushMultipleRangeTb @ 0x1402BBCB0 (KeFlushMultipleRangeTb.c)
 *     KiIpiSendRequestEx @ 0x1402BC030 (KiIpiSendRequestEx.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402D8A70 (KxWaitForSpinLockAndAcquire.c)
 *     KxWaitForLockChainValid @ 0x1402DCF80 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402F3E80 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiIdleLoop @ 0x140401FD0 (KiIdleLoop.c)
 *     KxDispatchInterrupt @ 0x140405C60 (KxDispatchInterrupt.c)
 *     SwapContext @ 0x140405E40 (SwapContext.c)
 *     PopHandleNextState @ 0x1409938B0 (PopHandleNextState.c)
 * Callees:
 *     <none>
 */

char __fastcall KiCheckVpBackingLongSpinWaitHypercall()
{
  char v0; // dl
  int v2; // ecx
  __int64 *i; // r8
  __int64 v4; // r10

  v0 = 1;
  if ( (KiVelocityFlags & 0x400) != 0 && KeGetCurrentIrql() >= 2u && KeGetCurrentPrcb()->SchedulerAssist )
  {
    v2 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      for ( i = KiProcessorBlock; ; ++i )
      {
        if ( (*(_BYTE *)(*i + 35) & 1) != 0 )
        {
          v4 = *(_QWORD *)(*i + 33976);
          if ( !v4 || !*(_BYTE *)(v4 + 65) || !*(_BYTE *)(v4 + 64) )
            break;
        }
        if ( ++v2 >= (unsigned int)KeNumberProcessors_0 )
          return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return v0;
}
