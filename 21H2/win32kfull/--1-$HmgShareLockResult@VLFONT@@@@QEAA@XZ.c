/*
 * XREFs of ??1?$HmgShareLockResult@VLFONT@@@@QEAA@XZ @ 0x1C015F2FC
 * Callers:
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 *     GreSelectFont @ 0x1C00E8510 (GreSelectFont.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?CleanupRoutine@?$HmgShareLockResult@VLFONT@@@@QEAAXXZ @ 0x1C015F330 (-CleanupRoutine@-$HmgShareLockResult@VLFONT@@@@QEAAXXZ.c)
 */

__int64 __fastcall HmgShareLockResult<LFONT>::~HmgShareLockResult<LFONT>(__int64 a1)
{
  HmgShareLockResult<LFONT>::CleanupRoutine();
  return UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(a1 + 8);
}
