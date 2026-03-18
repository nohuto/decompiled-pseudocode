/*
 * XREFs of XmMovOp @ 0x1403B8F90
 * Callers:
 *     XmEmulateStream @ 0x1403BDE80 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x1403B8FA8 (XmStoreResult.c)
 */

__int64 __fastcall XmMovOp(__int64 a1)
{
  return XmStoreResult(a1, *(unsigned int *)(a1 + 108));
}
