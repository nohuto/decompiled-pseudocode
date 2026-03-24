/*
 * XREFs of CmpLogTransactionAbortedForRollbackPacket @ 0x14066D87C
 * Callers:
 *     CmpTryToRundownHive @ 0x140360C44 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x14066CBFC (CmpPerformUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x140867AD0 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14086CA54 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14086DCC8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086E18C (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x14087BF80 (CmRestoreKey.c)
 * Callees:
 *     CmpLogTransactionAbortedWithChildName @ 0x1406A4E54 (CmpLogTransactionAbortedWithChildName.c)
 */

__int64 __fastcall CmpLogTransactionAbortedForRollbackPacket(__int64 a1, unsigned int a2)
{
  return CmpLogTransactionAbortedWithChildName(a1, 0LL, a2);
}
