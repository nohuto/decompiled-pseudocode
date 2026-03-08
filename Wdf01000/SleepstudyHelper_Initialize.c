/*
 * XREFs of SleepstudyHelper_Initialize @ 0x1C00B2108
 * Callers:
 *     ?SleepStudyEvaluateDripsConstraint@FxPkgPnp@@QEAAXE@Z @ 0x1C0079228 (-SleepStudyEvaluateDripsConstraint@FxPkgPnp@@QEAAXE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SleepstudyHelper_Initialize(SS_LIBRARY__ **InitializeHandle, void *Tag)
{
  NTSTATUS v4; // eax
  unsigned int v5; // r8d

  v4 = RtlRunOnceExecuteOnce(
         &SleepstudyHelperInitializeRunOnce,
         (PRTL_RUN_ONCE_INIT_FN)SleepstudyHelperInitializeOnce,
         0LL,
         0LL);
  v5 = 0;
  if ( v4 >= 0 && SleepstudyHelperRoutineBlock.Initialize )
    return (unsigned int)SleepstudyHelperRoutineBlock.Initialize(InitializeHandle, Tag);
  else
    *InitializeHandle = (SS_LIBRARY__ *)&SleepstudyHelperUnsupportedHandle;
  return v5;
}
