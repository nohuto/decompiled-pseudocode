/*
 * XREFs of XmCliOp @ 0x14036DCD0
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmCliOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x200u;
}
