/*
 * XREFs of ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003B9D4
 * Callers:
 *     ?ndisOidPostPMAddWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00176A0 (-ndisOidPostPMAddWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C003B42C (-ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C003B690 (-ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0077458 (-ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0077B14 (-ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostIovCreateNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0079410 (-ndisOidPostIovCreateNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostIovDeleteNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0079800 (-ndisOidPostIovDeleteNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovBarResources@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0079F40 (-ndisOidPreIovBarResources@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovCreateNicSwitch@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007A1F0 (-ndisOidPreIovCreateNicSwitch@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovDeleteNicSwitch@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007A550 (-ndisOidPreIovDeleteNicSwitch@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovDeleteVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007A710 (-ndisOidPreIovDeleteVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovEnumVFs@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007AAB0 (-ndisOidPreIovEnumVFs@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovEnumVPorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007ADE0 (-ndisOidPreIovEnumVPorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovFreeVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007B1E0 (-ndisOidPreIovFreeVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovGetVFVendorDeviceId@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007B350 (-ndisOidPreIovGetVFVendorDeviceId@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovInvalidateConfigBlock@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007B490 (-ndisOidPreIovInvalidateConfigBlock@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007B5A0 (-ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovProbedBars@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007BA50 (-ndisOidPreIovProbedBars@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovReadVFConfigBlock@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007BB80 (-ndisOidPreIovReadVFConfigBlock@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovReadVFConfigSpace@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007BCF0 (-ndisOidPreIovReadVFConfigSpace@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovResetVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007BE60 (-ndisOidPreIovResetVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovSetVFPowerState@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007BFA0 (-ndisOidPreIovSetVFPowerState@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovVPortParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007C260 (-ndisOidPreIovVPortParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovWriteVFConfigBlock@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007C730 (-ndisOidPreIovWriteVFConfigBlock@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovWriteVFConfigSpace@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007C880 (-ndisOidPreIovWriteVFConfigSpace@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00854B4 (-ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterClearFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0086960 (-ndisOidPreRcvFilterClearFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterEnumQueues@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0086DA0 (-ndisOidPreRcvFilterEnumQueues@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterFreeQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0087030 (-ndisOidPreRcvFilterFreeQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterMoveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0087270 (-ndisOidPreRcvFilterMoveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterQueueParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00875E0 (-ndisOidPreRcvFilterQueueParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0087A84 (-ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisMiniportPostRemoveWoLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0091474 (-ndisMiniportPostRemoveWoLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C009153C (-ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisMiniportPreRemoveWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0091774 (-ndisMiniportPreRemoveWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisOidPostAddPMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091970 (-ndisOidPostAddPMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostPMRemoveWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091BC0 (-ndisOidPostPMRemoveWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostRemovePMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091D40 (-ndisOidPostRemovePMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRemovePMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0092BB0 (-ndisOidPreRemovePMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisXlateRemoveWolPatternToPacketPatternOid@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0096710 (-ndisXlateRemoveWolPatternToPacketPatternOid@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisOidPrePDCloseProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C011D7F0 (-ndisOidPrePDCloseProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C011DB80 (-ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall ndisGetOidSourceHandle(struct _NDIS_OID_REQUEST *a1)
{
  UCHAR *i; // rax

  for ( i = a1->NdisReserved; (*((_DWORD *)i + 4) & 0x4000) != 0; i = (UCHAR *)(*((_QWORD *)i + 3) + 72LL) )
    ;
  return (void *)*((_QWORD *)i + 4);
}
