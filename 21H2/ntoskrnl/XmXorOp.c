/*
 * XREFs of XmXorOp @ 0x1403C6F90
 * Callers:
 *     XmEmulateStream @ 0x140397208 (XmEmulateStream.c)
 * Callees:
 *     XmSetLogicalResult @ 0x140396998 (XmSetLogicalResult.c)
 */

__int64 __fastcall XmXorOp(__int64 a1)
{
  return XmSetLogicalResult(a1, *(_DWORD *)(a1 + 104) ^ *(_DWORD *)(a1 + 108));
}
