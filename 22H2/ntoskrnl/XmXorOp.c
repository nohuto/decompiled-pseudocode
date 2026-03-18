/*
 * XREFs of XmXorOp @ 0x1403A32C0
 * Callers:
 *     XmEmulateStream @ 0x1403BDE80 (XmEmulateStream.c)
 * Callees:
 *     XmSetLogicalResult @ 0x1403B8790 (XmSetLogicalResult.c)
 */

__int64 __fastcall XmXorOp(__int64 a1)
{
  return XmSetLogicalResult(a1, (unsigned int)(*(_DWORD *)(a1 + 104) ^ *(_DWORD *)(a1 + 108)));
}
