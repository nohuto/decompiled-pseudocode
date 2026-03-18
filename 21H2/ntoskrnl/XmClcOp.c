/*
 * XREFs of XmClcOp @ 0x140372D40
 * Callers:
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmClcOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~1u;
}
