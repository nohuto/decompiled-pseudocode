/*
 * XREFs of XmMovOp @ 0x1403B42D0
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x1403B42E8 (XmStoreResult.c)
 */

__int64 __fastcall XmMovOp(__int64 a1)
{
  return XmStoreResult(a1, *(unsigned int *)(a1 + 108));
}
