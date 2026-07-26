/*
 * XREFs of ?ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B67B0
 * Callers:
 *     NdisCmNotifyCloseAddressFamily @ 0x1C00B6F00 (NdisCmNotifyCloseAddressFamily.c)
 *     NdisClMakeCall @ 0x1C00B7A90 (NdisClMakeCall.c)
 *     NdisCmDispatchIncomingCall @ 0x1C00B7E20 (NdisCmDispatchIncomingCall.c)
 *     NdisClRegisterSap @ 0x1C00B8560 (NdisClRegisterSap.c)
 *     NdisCoOidRequest @ 0x1C00BA9B0 (NdisCoOidRequest.c)
 *     NdisCoRequest @ 0x1C00BAEE0 (NdisCoRequest.c)
 *     NdisMCmOidRequest @ 0x1C00BB360 (NdisMCmOidRequest.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisReferenceAf(struct _NDIS_CO_AF_BLOCK *a1)
{
  unsigned __int64 *p_Lock; // rsi
  char v3; // di
  KIRQL v4; // al

  p_Lock = &a1->Lock;
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  if ( (a1->Flags & 0x80000000) == 0 )
  {
    ++a1->References;
    v3 = 1;
  }
  KeReleaseSpinLock(p_Lock, v4);
  return v3;
}
