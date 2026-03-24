/*
 * XREFs of HvLockHiveFlusherShared @ 0x1406DF0B4
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140360E58 (CmpRemoveHiveFromNamespace.c)
 *     CmpCreateTombstone @ 0x1404ED49C (CmpCreateTombstone.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x1405CD308 (CmpUndoDeleteKeyForTransEx.c)
 *     CmEnumerateKey @ 0x1405F4350 (CmEnumerateKey.c)
 *     CmpDoParseKey @ 0x140646890 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x1406DD4B0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1406DF334 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x1406E08C4 (CmpCreateChild.c)
 *     CmDeleteKey @ 0x1406E47E4 (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x1406E6CFC (CmpSetKeySecurity.c)
 *     CmpInitCmRM @ 0x14070D220 (CmpInitCmRM.c)
 *     CmpCreateHive @ 0x14071D9E8 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14071FE88 (CmpReorganizeHive.c)
 *     CmpCreateHiveRootCell @ 0x14078DAF0 (CmpCreateHiveRootCell.c)
 *     CmpLoadHiveThread @ 0x14079F180 (CmpLoadHiveThread.c)
 *     CmpAssignKeySecurity @ 0x1407D0370 (CmpAssignKeySecurity.c)
 *     CmSetKeyFlags @ 0x14086DCC8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086E18C (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x14087BF80 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14087D448 (CmpRefreshHive.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall HvLockHiveFlusherShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 72, 0LL);
}
