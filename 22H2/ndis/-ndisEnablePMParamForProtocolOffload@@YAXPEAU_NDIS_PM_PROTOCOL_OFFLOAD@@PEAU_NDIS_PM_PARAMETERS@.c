/*
 * XREFs of ?ndisEnablePMParamForProtocolOffload@@YAXPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1C00905F4
 * Callers:
 *     ?ndisOidPostAddPMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091970 (-ndisOidPostAddPMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisUpdateWmiPMParamsForProtocolOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0095CC0 (-ndisUpdateWmiPMParamsForProtocolOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisEnablePMParamForProtocolOffload(
        struct _NDIS_PM_PROTOCOL_OFFLOAD *a1,
        struct _NDIS_PM_PARAMETERS *a2)
{
  _NDIS_PM_PROTOCOL_OFFLOAD_TYPE ProtocolOffloadType; // eax

  ProtocolOffloadType = a1->ProtocolOffloadType;
  if ( ProtocolOffloadType == NdisPMProtocolOffloadIdIPv4ARP )
  {
    a2->EnabledProtocolOffloads |= 1u;
  }
  else if ( ProtocolOffloadType == NdisPMProtocolOffloadIdIPv6NS )
  {
    a2->EnabledProtocolOffloads |= 2u;
  }
  else if ( (unsigned int)(ProtocolOffloadType - 3) <= 1 )
  {
    a2->EnabledProtocolOffloads |= 0x80u;
  }
}
