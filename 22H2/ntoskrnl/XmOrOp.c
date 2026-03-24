/*
 * XREFs of XmOrOp @ 0x140395E70
 * Callers:
 *     XmEmulateStream @ 0x140396B08 (XmEmulateStream.c)
 * Callees:
 *     XmSetLogicalResult @ 0x140396298 (XmSetLogicalResult.c)
 */

__int64 __fastcall XmOrOp(__int64 a1)
{
  return XmSetLogicalResult(a1, (unsigned int)(*(_DWORD *)(a1 + 104) | *(_DWORD *)(a1 + 108)));
}
