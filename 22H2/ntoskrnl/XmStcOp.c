/*
 * XREFs of XmStcOp @ 0x140371E50
 * Callers:
 *     XmEmulateStream @ 0x1403BDE80 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmStcOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) |= 1u;
}
