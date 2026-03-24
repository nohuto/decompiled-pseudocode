/*
 * XREFs of EtwpDeleteRealTimeConnectionObject @ 0x1406A5DF0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 */

void __fastcall EtwpDeleteRealTimeConnectionObject(__int64 a1)
{
  ZwClose(*(HANDLE *)(a1 + 16));
  HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 48));
  HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 56));
}
