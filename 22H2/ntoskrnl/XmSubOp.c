/*
 * XREFs of XmSubOp @ 0x140396490
 * Callers:
 *     XmEmulateStream @ 0x140396B08 (XmEmulateStream.c)
 * Callees:
 *     XmSubOperands @ 0x1403964A8 (XmSubOperands.c)
 */

__int64 __fastcall XmSubOp(__int64 a1)
{
  return XmSubOperands(a1, 0LL);
}
