/*
 * XREFs of XmIncOp @ 0x1403B3600
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmAddOperands @ 0x1403B3968 (XmAddOperands.c)
 */

__int64 __fastcall XmIncOp(__int64 a1)
{
  *(_DWORD *)(a1 + 108) = 1;
  return XmAddOperands(a1, 0LL);
}
