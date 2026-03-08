/*
 * XREFs of XmSbbOp @ 0x140530F40
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmSubOperands @ 0x1403B3B58 (XmSubOperands.c)
 */

__int64 __fastcall XmSbbOp(_DWORD *a1)
{
  return XmSubOperands(a1, a1[4] & 1);
}
