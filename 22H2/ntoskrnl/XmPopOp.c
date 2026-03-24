/*
 * XREFs of XmPopOp @ 0x140396270
 * Callers:
 *     XmEmulateStream @ 0x140396B08 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x1403966C0 (XmStoreResult.c)
 *     XmPopStack @ 0x1403967BC (XmPopStack.c)
 */

__int64 __fastcall XmPopOp(__int64 a1)
{
  unsigned int v2; // eax

  v2 = XmPopStack(a1);
  return XmStoreResult(a1, v2);
}
