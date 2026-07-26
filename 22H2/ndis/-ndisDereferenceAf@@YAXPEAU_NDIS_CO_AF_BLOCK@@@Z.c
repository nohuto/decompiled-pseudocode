/*
 * XREFs of ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B65FC
 * Callers:
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C00B68C0 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C00B6E00 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisClMakeCall @ 0x1C00B7A90 (NdisClMakeCall.c)
 *     NdisCmCloseCallComplete @ 0x1C00B7C50 (NdisCmCloseCallComplete.c)
 *     NdisCmMakeCallComplete @ 0x1C00B7F70 (NdisCmMakeCallComplete.c)
 *     NdisCmDeregisterSapComplete @ 0x1C00B8660 (NdisCmDeregisterSapComplete.c)
 *     NdisCmRegisterSapComplete @ 0x1C00B86C0 (NdisCmRegisterSapComplete.c)
 *     NdisCoOidRequest @ 0x1C00BA9B0 (NdisCoOidRequest.c)
 *     NdisCoOidRequestComplete @ 0x1C00BAE10 (NdisCoOidRequestComplete.c)
 *     NdisCoRequest @ 0x1C00BAEE0 (NdisCoRequest.c)
 *     NdisCoRequestComplete @ 0x1C00BB2B0 (NdisCoRequestComplete.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisDereferenceAf(KSPIN_LOCK *P)
{
  KSPIN_LOCK *v1; // rdi
  KIRQL v3; // al
  int v4; // ebx

  v1 = P + 48;
  v3 = KeAcquireSpinLockRaiseToDpc(P + 48);
  v4 = --*((_DWORD *)P + 3);
  KeReleaseSpinLock(v1, v3);
  if ( !v4 )
    ExFreePoolWithTag(P, 0);
}
