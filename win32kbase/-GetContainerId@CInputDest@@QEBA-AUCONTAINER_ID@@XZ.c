/*
 * XREFs of ?GetContainerId@CInputDest@@QEBA?AUCONTAINER_ID@@XZ @ 0x1C01E37B8
 * Callers:
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C007CFCC (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01EB57C (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x1C0231448 (-StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDes.c)
 * Callees:
 *     ?GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ @ 0x1C01E37DC (-GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ.c)
 */

_DWORD *__fastcall CInputDest::GetContainerId(CInputDest *a1)
{
  const struct tagBASEWNDCONTAINERINFO *ContainerInfo; // rax
  _DWORD *v2; // rdx

  ContainerInfo = CInputDest::GetContainerInfo(a1);
  if ( ContainerInfo )
    LODWORD(ContainerInfo) = *(_DWORD *)ContainerInfo;
  *v2 = (_DWORD)ContainerInfo;
  return v2;
}
