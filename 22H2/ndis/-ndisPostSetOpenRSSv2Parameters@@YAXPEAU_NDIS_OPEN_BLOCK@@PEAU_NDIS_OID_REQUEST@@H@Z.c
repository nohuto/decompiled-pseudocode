/*
 * XREFs of ?ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0089444
 * Callers:
 *     ?ndisOidPostRSSv2Parameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0089050 (-ndisOidPostRSSv2Parameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000E000 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqqL @ 0x1C000E1D0 (WPP_RECORDER_SF_qqqL.c)
 *     ?ndisPostSetOpenRSSParametersHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z @ 0x1C0037EC8 (-ndisPostSetOpenRSSParametersHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDI.c)
 *     ?ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00892C8 (-ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisShouldCacheRSSv2ParametersInMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C008A7D0 (-ndisShouldCacheRSSv2ParametersInMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 */

void __fastcall ndisPostSetOpenRSSv2Parameters(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdi
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rdx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x29u,
      (struct _GUID *)&WPP_55eab71d2273366299e40de7bd26ba8a_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  MiniportHandle = a1->MiniportHandle;
  if ( !a3 )
  {
    NdisRSSParameters = a1->NdisRSSParameters;
    if ( NdisRSSParameters )
      NdisRSSParameters->HashInformation = *((_DWORD *)a2->DATA.QUERY_INFORMATION.InformationBuffer + 2);
    ndisPostSetMiniportRSSv2Parameters(MiniportHandle, a2, 0);
    if ( ndisShouldCacheRSSv2ParametersInMiniport(a2) )
      ndisPostSetOpenRSSParametersHelper(MiniportHandle, a1, MiniportHandle->CombinedNdisRSSParameters);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0xBu,
      0x2Au,
      (struct _GUID *)&WPP_55eab71d2273366299e40de7bd26ba8a_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      (char)a2,
      a3);
}
