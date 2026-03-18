/*
 * XREFs of XmSbbOp @ 0x140535790
 * Callers:
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 * Callees:
 *     XmSubOperands @ 0x1403A2C48 (XmSubOperands.c)
 */

__int64 __fastcall XmSbbOp(_DWORD *a1)
{
  return XmSubOperands(a1, a1[4] & 1);
}
