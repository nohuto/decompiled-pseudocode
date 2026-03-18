/*
 * XREFs of VfWdInit @ 0x140ADF0B8
 * Callers:
 *     ViIovInitialization @ 0x140ADD358 (ViIovInitialization.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x1402BE630 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1402BF970 (KeInitializeDpc.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1403C2C70 (ExInitializeNPagedLookasideListInternal.c)
 *     VfWdSetCancelTimeout @ 0x140ADF17C (VfWdSetCancelTimeout.c)
 */

__int64 VfWdInit()
{
  __int64 result; // rax

  if ( !VfSafeMode )
  {
    result = (unsigned int)ViWdInitialized;
    if ( !ViWdInitialized )
    {
      VfWdIrpListLock = 0LL;
      qword_140D70690 = (__int64)&VfWdIrpListHead;
      VfWdIrpListHead = (__int64)&VfWdIrpListHead;
      ExInitializeNPagedLookasideListInternal(
        (__int64)&ViWdIrpLookasideList,
        0LL,
        (void (__stdcall *)(PVOID))VfUtilFreePoolDispatchLevel,
        512,
        32,
        1683449430,
        16,
        VfInitializedWithoutReboot);
      KeInitializeTimerEx(&ViWdIrpTimer, NotificationTimer);
      KeInitializeDpc(&ViWdIrpTimerDpc, ViWdIrpTimerDpcRoutine, 0LL);
      VfWdSetCancelTimeout((unsigned int)VfWdIrpTimeoutMsec);
      return (unsigned int)_InterlockedExchange(&ViWdInitialized, 1);
    }
  }
  return result;
}
