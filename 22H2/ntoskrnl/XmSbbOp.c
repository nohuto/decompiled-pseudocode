/*
 * XREFs of XmSbbOp @ 0x140533410
 * Callers:
 *     XmEmulateStream @ 0x1403BDE80 (XmEmulateStream.c)
 * Callees:
 *     XmSubOperands @ 0x1403B8818 (XmSubOperands.c)
 */

__int64 __fastcall XmSbbOp(_DWORD *a1)
{
  return XmSubOperands(a1, a1[4] & 1);
}
