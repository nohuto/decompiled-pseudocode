/*
 * XREFs of SleepstudyHelper_Uninitialize @ 0x1C00B21E0
 * Callers:
 *     ?SleepStudyStop@FxPkgPnp@@QEAAXXZ @ 0x1C0079834 (-SleepStudyStop@FxPkgPnp@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SleepstudyHelper_Uninitialize(SS_LIBRARY__ *InitializeHandle)
{
  if ( SleepstudyHelperRoutineBlock.Uninitialize )
    SleepstudyHelperRoutineBlock.Uninitialize(InitializeHandle);
}
