/*
 * XREFs of XmStcOp @ 0x140365650
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmStcOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) |= 1u;
}
