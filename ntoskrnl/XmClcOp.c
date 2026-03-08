/*
 * XREFs of XmClcOp @ 0x14036DCB0
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmClcOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~1u;
}
