/*
 * XREFs of XmStcOp @ 0x14036DD20
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmStcOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) |= 1u;
}
