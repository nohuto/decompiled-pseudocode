/*
 * XREFs of CmUnlockHiveSecurity @ 0x1406E2FD4
 * Callers:
 *     CmpCreateTombstone @ 0x1404ED49C (CmpCreateTombstone.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x1405CD308 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpCreateChild @ 0x1406E08C4 (CmpCreateChild.c)
 *     CmpSetKeySecurity @ 0x1406E6CFC (CmpSetKeySecurity.c)
 *     CmpCreateHiveRootCell @ 0x14078DAF0 (CmpCreateHiveRootCell.c)
 *     CmpAssignKeySecurity @ 0x1407D0370 (CmpAssignKeySecurity.c)
 *     CmSaveMergedKeys @ 0x14087CAE0 (CmSaveMergedKeys.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 */

char __fastcall CmUnlockHiveSecurity(__int64 a1)
{
  return ExReleasePushLockEx(a1 + 1776, 0LL);
}
