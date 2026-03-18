/*
 * XREFs of XmPopOp @ 0x1403B89F0
 * Callers:
 *     XmEmulateStream @ 0x1403BDE80 (XmEmulateStream.c)
 * Callees:
 *     XmPopStack @ 0x1403B8E14 (XmPopStack.c)
 *     XmStoreResult @ 0x1403B8FA8 (XmStoreResult.c)
 */

__int64 __fastcall XmPopOp(__int64 a1)
{
  unsigned int v2; // eax

  v2 = XmPopStack(a1);
  return XmStoreResult(a1, v2);
}
