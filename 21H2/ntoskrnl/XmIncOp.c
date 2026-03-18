/*
 * XREFs of XmIncOp @ 0x1403A2700
 * Callers:
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 * Callees:
 *     XmAddOperands @ 0x1403A2AC0 (XmAddOperands.c)
 */

__int64 __fastcall XmIncOp(__int64 a1)
{
  *(_DWORD *)(a1 + 108) = 1;
  return XmAddOperands(a1, 0LL);
}
