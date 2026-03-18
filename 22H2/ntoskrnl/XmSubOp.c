/*
 * XREFs of XmSubOp @ 0x1403AF820
 * Callers:
 *     XmEmulateStream @ 0x1403BDE80 (XmEmulateStream.c)
 * Callees:
 *     XmSubOperands @ 0x1403B8818 (XmSubOperands.c)
 */

__int64 __fastcall XmSubOp(__int64 a1)
{
  return XmSubOperands(a1, 0LL);
}
