/*
 * XREFs of XmDecOp @ 0x1403A25F0
 * Callers:
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 * Callees:
 *     XmSubOperands @ 0x1403A2C48 (XmSubOperands.c)
 */

__int64 __fastcall XmDecOp(__int64 a1)
{
  *(_DWORD *)(a1 + 108) = 1;
  return XmSubOperands(a1, 0LL);
}
