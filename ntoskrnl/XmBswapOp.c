/*
 * XREFs of XmBswapOp @ 0x140532090
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x1403B42E8 (XmStoreResult.c)
 */

_WORD *__fastcall XmBswapOp(__int64 a1)
{
  return XmStoreResult(a1, _byteswap_ulong(*(_DWORD *)(a1 + 108)));
}
