/*
 * XREFs of XmAddOp @ 0x1403CF380
 * Callers:
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 * Callees:
 *     XmAddOperands @ 0x1403A2AC0 (XmAddOperands.c)
 */

__int64 __fastcall XmAddOp(__int64 a1)
{
  return XmAddOperands(a1, 0);
}
