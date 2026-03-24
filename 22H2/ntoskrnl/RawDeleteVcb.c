/*
 * XREFs of RawDeleteVcb @ 0x1407190B4
 * Callers:
 *     RawInitiateDeleteVolume @ 0x14026D9DC (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x140394B44 (RawCheckForDeleteVolume.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     IoDeleteDevice @ 0x140360200 (IoDeleteDevice.c)
 */

void __fastcall RawDeleteVcb(__int64 a1)
{
  HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 176));
  IoDeleteDevice((PDEVICE_OBJECT)(a1 - 336));
}
