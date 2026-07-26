/*
 * XREFs of ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0037A88
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001AE74 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00377AC (-ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C006BCE0 (-ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     ?ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C006BF6C (-ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     ?ndisQueryMiniportRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009F534 (-ndisQueryMiniportRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsRssEnabledForMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_RECEIVE_SCALE_PARAMETERS *CombinedNdisRSSParameters; // r8
  bool v2; // dl

  CombinedNdisRSSParameters = a1->CombinedNdisRSSParameters;
  v2 = CombinedNdisRSSParameters != 0LL;
  if ( (a1->RecvScaleCapabilities.CapabilitiesFlags & 0x40000000) != 0 && CombinedNdisRSSParameters )
    return (CombinedNdisRSSParameters->Flags & 0x10) == 0 && LOBYTE(CombinedNdisRSSParameters->HashInformation);
  return v2;
}
