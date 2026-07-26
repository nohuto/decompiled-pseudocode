/*
 * XREFs of ?ndisUpdateWmiPMParamsForProtocolOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0095CC0
 * Callers:
 *     ?ndisMIndicatePMOffloadReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0090BD8 (-ndisMIndicatePMOffloadReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisOidPostRemovePMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091D40 (-ndisOidPostRemovePMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisEnablePMParamForProtocolOffload@@YAXPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1C00905F4 (-ndisEnablePMParamForProtocolOffload@@YAXPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@PEAU_NDIS_PM_PARAMETERS@.c)
 */

void __fastcall ndisUpdateWmiPMParamsForProtocolOffloads(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _SINGLE_LIST_ENTRY *Next; // r8
  struct _NDIS_MINIPORT_BLOCK *v2; // r10
  _SINGLE_LIST_ENTRY *i; // r9
  struct _NDIS_PM_PARAMETERS v4; // [rsp+20h] [rbp-28h] BYREF

  Next = a1->PMProtocolOffloadList.Next;
  v2 = a1;
  memset(&v4, 0, sizeof(v4));
  while ( Next )
  {
    for ( i = Next + 1; i; i = i->Next )
    {
      if ( i[2].Next == (_SINGLE_LIST_ENTRY *)&ndisIntReqWmi )
        ndisEnablePMParamForProtocolOffload((struct _NDIS_PM_PROTOCOL_OFFLOAD *)&Next[6], &v4);
    }
    Next = Next->Next;
  }
  v2->PMWmiParameters.EnabledProtocolOffloads = v4.EnabledProtocolOffloads;
}
