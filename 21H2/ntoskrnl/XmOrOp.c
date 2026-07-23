/*
 * XREFs of XmOrOp @ 0x1403966C0
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     XmSetLogicalResult @ 0x140396AE8 (XmSetLogicalResult.c)
 */

__int64 __fastcall XmOrOp(__int64 a1)
{
  return XmSetLogicalResult(a1, (unsigned int)(*(_DWORD *)(a1 + 104) | *(_DWORD *)(a1 + 108)));
}
