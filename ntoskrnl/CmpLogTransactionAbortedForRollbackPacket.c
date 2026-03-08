/*
 * XREFs of CmpLogTransactionAbortedForRollbackPacket @ 0x14074C358
 * Callers:
 *     CmpTryToRundownHive @ 0x1402BFA88 (CmpTryToRundownHive.c)
 * Callees:
 *     CmpLogTransactionAbortedWithChildName @ 0x14079B2C8 (CmpLogTransactionAbortedWithChildName.c)
 */

__int64 __fastcall CmpLogTransactionAbortedForRollbackPacket(__int64 a1, unsigned int a2)
{
  return CmpLogTransactionAbortedWithChildName(a1, 0LL, a2);
}
