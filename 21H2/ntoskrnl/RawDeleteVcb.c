/*
 * XREFs of RawDeleteVcb @ 0x1406C98D8
 * Callers:
 *     RawInitiateDeleteVolume @ 0x1402A592C (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x140395394 (RawCheckForDeleteVolume.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IoDeleteDevice @ 0x1402A5DF0 (IoDeleteDevice.c)
 */

void __fastcall RawDeleteVcb(__int64 a1)
{
  HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 176));
  IoDeleteDevice((PDEVICE_OBJECT)(a1 - 336));
}
