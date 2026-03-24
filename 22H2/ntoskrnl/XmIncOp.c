/*
 * XREFs of XmIncOp @ 0x140395F60
 * Callers:
 *     XmEmulateStream @ 0x140396B08 (XmEmulateStream.c)
 * Callees:
 *     XmAddOperands @ 0x140396320 (XmAddOperands.c)
 */

__int64 __fastcall XmIncOp(__int64 a1)
{
  *(_DWORD *)(a1 + 108) = 1;
  return XmAddOperands(a1, 0LL);
}
