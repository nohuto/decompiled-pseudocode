/*
 * XREFs of ViDeadlockCanProceed @ 0x140ABD79A
 * Callers:
 *     VfDeadlockDeleteMemoryRange @ 0x140ABD6EC (VfDeadlockDeleteMemoryRange.c)
 *     VfDeadlockAcquireResource @ 0x140AD3DAC (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x140AD4738 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x140AD4ECC (VfDeadlockReleaseResource.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140312C60 (KeAreInterruptsEnabled.c)
 *     ViDeadlockCheckStackLimits @ 0x140AD5CDC (ViDeadlockCheckStackLimits.c)
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
