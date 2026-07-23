/*
 * XREFs of XmCliOp @ 0x140365600
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmCliOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x200u;
}
