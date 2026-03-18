/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@V?$HmgShareLockResult@VLFONT@@@@@@SAXPEAX@Z @ 0x1C015F360
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanupRoutine@?$HmgShareLockResult@VLFONT@@@@QEAAXXZ @ 0x1C015F330 (-CleanupRoutine@-$HmgShareLockResult@VLFONT@@@@QEAAXXZ.c)
 */

void __fastcall UnexpectedThreadTerminationHandler<HmgShareLockResult<LFONT>>::OnUnexpectedThreadTerminationStatic(
        struct LFONT **a1)
{
  HmgShareLockResult<LFONT>::CleanupRoutine(a1);
}
