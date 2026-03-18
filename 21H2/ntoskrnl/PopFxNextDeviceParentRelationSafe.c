/*
 * XREFs of PopFxNextDeviceParentRelationSafe @ 0x1404199C0
 * Callers:
 *     PopFxNotifyPreDIrpIssue @ 0x1403B5A24 (PopFxNotifyPreDIrpIssue.c)
 * Callees:
 *     PopFxNextParentRelationSafe @ 0x1404199DC (PopFxNextParentRelationSafe.c)
 */

__int64 __fastcall PopFxNextDeviceParentRelationSafe(__int64 a1, __int64 a2, __int64 a3)
{
  return PopFxNextParentRelationSafe(a1 + 1264, a2, a3);
}
