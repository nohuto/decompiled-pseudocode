/*
 * XREFs of XmAdcOp @ 0x1404E5C30
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     XmAddOperands @ 0x140396B70 (XmAddOperands.c)
 */

__int64 __fastcall XmAdcOp(__int64 a1)
{
  return XmAddOperands(a1, *(_DWORD *)(a1 + 16) & 1);
}
