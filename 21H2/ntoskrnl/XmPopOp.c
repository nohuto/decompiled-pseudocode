/*
 * XREFs of XmPopOp @ 0x1403A2A10
 * Callers:
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x1403A2E60 (XmStoreResult.c)
 *     XmPopStack @ 0x1403A2F5C (XmPopStack.c)
 */

__int64 __fastcall XmPopOp(__int64 a1)
{
  unsigned int v2; // eax

  v2 = XmPopStack(a1);
  return XmStoreResult(a1, v2);
}
