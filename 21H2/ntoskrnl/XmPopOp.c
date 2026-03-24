/*
 * XREFs of XmPopOp @ 0x140396970
 * Callers:
 *     XmEmulateStream @ 0x140397208 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x140396DC0 (XmStoreResult.c)
 *     XmPopStack @ 0x140396EBC (XmPopStack.c)
 */

__int64 __fastcall XmPopOp(__int64 a1)
{
  unsigned int v2; // eax

  v2 = XmPopStack(a1);
  return XmStoreResult(a1, v2);
}
