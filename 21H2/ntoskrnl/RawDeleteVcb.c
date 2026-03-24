/*
 * XREFs of RawDeleteVcb @ 0x14071B46C
 * Callers:
 *     RawInitiateDeleteVolume @ 0x140360A2C (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x140395244 (RawCheckForDeleteVolume.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     IoDeleteDevice @ 0x140360D90 (IoDeleteDevice.c)
 */

void __fastcall RawDeleteVcb(__int64 a1)
{
  HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 176));
  IoDeleteDevice((PDEVICE_OBJECT)(a1 - 336));
}
