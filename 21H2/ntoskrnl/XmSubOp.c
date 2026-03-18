/*
 * XREFs of XmSubOp @ 0x1403A2C30
 * Callers:
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 * Callees:
 *     XmSubOperands @ 0x1403A2C48 (XmSubOperands.c)
 */

__int64 __fastcall XmSubOp(__int64 a1)
{
  return XmSubOperands(a1, 0LL);
}
