/*
 * XREFs of XmDecOp @ 0x140396550
 * Callers:
 *     XmEmulateStream @ 0x140397208 (XmEmulateStream.c)
 * Callees:
 *     XmSubOperands @ 0x140396BA8 (XmSubOperands.c)
 */

__int64 __fastcall XmDecOp(__int64 a1)
{
  *(_DWORD *)(a1 + 108) = 1;
  return XmSubOperands(a1, 0LL);
}
