/*
 * XREFs of XmAddOp @ 0x1403C3A50
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     XmAddOperands @ 0x140396B70 (XmAddOperands.c)
 */

__int64 __fastcall XmAddOp(__int64 a1)
{
  return XmAddOperands(a1, 0);
}
