/*
 * XREFs of XmStiOp @ 0x140371E70
 * Callers:
 *     XmEmulateStream @ 0x1403BDE80 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmStiOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) |= 0x200u;
}
