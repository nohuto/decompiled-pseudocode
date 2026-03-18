/*
 * XREFs of XmCldOp @ 0x140372D50
 * Callers:
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmCldOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x400u;
}
