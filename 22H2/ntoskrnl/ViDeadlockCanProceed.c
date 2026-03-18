/*
 * XREFs of ViDeadlockCanProceed @ 0x140AC179A
 * Callers:
 *     VfDeadlockDeleteMemoryRange @ 0x140AC16EC (VfDeadlockDeleteMemoryRange.c)
 *     VfDeadlockAcquireResource @ 0x140AD7DAC (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x140AD8738 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x140AD8ECC (VfDeadlockReleaseResource.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14022EBF0 (KeAreInterruptsEnabled.c)
 *     ViDeadlockCheckStackLimits @ 0x140AD9CDC (ViDeadlockCheckStackLimits.c)
 */

_BOOL8 __fastcall ViDeadlockCanProceed(LONG *a1)
{
  _BOOL8 result; // rax

  result = 0;
  if ( ViDeadlockDetectionEnabled )
  {
    if ( (unsigned int)KeNumberProcessors_0 <= 4 && KeGetCurrentIrql() <= 2u && KeAreInterruptsEnabled() )
    {
      if ( ViDeadlockGlobals )
      {
        ViDeadlockCheckStackLimits();
        if ( a1 != &ViDeadlockDatabaseLock && (struct _KTHREAD *)ViDeadlockDatabaseOwner != KeGetCurrentThread() )
          return 1;
      }
    }
  }
  return result;
}
