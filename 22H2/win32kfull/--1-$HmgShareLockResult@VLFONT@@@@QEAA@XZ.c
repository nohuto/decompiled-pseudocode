/*
 * XREFs of ??1?$HmgShareLockResult@VLFONT@@@@QEAA@XZ @ 0x1C013FFC8
 * Callers:
 *     GreSelectFontInternal @ 0x1C0119F34 (GreSelectFontInternal.c)
 *     GreSelectFont @ 0x1C011BD80 (GreSelectFont.c)
 * Callees:
 *     ?CleanupRoutine@?$HmgShareLockResult@VLFONT@@@@QEAAXXZ @ 0x1C013FFF4 (-CleanupRoutine@-$HmgShareLockResult@VLFONT@@@@QEAAXXZ.c)
 */

__int64 __fastcall HmgShareLockResult<LFONT>::~HmgShareLockResult<LFONT>(__int64 a1)
{
  HmgShareLockResult<LFONT>::CleanupRoutine();
  return PopThreadGuardedObject(a1 + 8);
}
