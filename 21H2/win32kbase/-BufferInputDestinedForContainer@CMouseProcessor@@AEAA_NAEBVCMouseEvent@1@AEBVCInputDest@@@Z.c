/*
 * XREFs of ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C003595C
 * Callers:
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0033DD0 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C0040DAC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01F9E20 (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 * Callees:
 *     IsMouseIVEnabled @ 0x1C0038414 (IsMouseIVEnabled.c)
 *     isRootPartition @ 0x1C00384A0 (isRootPartition.c)
 *     ?GetContainerId@CInputDest@@QEBA?AUCONTAINER_ID@@XZ @ 0x1C01B8D74 (-GetContainerId@CInputDest@@QEBA-AUCONTAINER_ID@@XZ.c)
 *     ?GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ @ 0x1C01B8D98 (-GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C01F96B0 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1C01FA61C (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x1C01FC7A8 (-StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDes.c)
 */

bool __fastcall CMouseProcessor::BufferInputDestinedForContainer(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        const struct CInputDest *a3)
{
  bool v4; // di
  const struct tagBASEWNDCONTAINERINFO *ContainerInfo; // rbp
  char v9; // dl
  char v10; // cl
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  if ( (unsigned __int8)IsMouseIVEnabled() && (unsigned __int8)isRootPartition() )
  {
    CInputDest::GetContainerId(a3, &v11);
    ContainerInfo = CInputDest::GetContainerInfo(a3);
    v9 = 1;
    v4 = ContainerInfo != 0LL;
    if ( *((_WORD *)this + 2480) != (_WORD)v11 || (v10 = 1, *((_WORD *)this + 2481) != HIWORD(v11)) )
      v10 = 0;
    if ( *((_WORD *)this + 2464) )
      v9 = 0;
    else
      *((_DWORD *)this + 1240) = v11;
    if ( ContainerInfo && v9 && v10 )
      goto LABEL_16;
    if ( *((_BYTE *)this + 4945) )
    {
      CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput((CMouseProcessor *)((char *)this + 3904), a2);
      CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer((CMouseProcessor *)((char *)this + 3904));
    }
    if ( ContainerInfo )
LABEL_16:
      CMouseProcessor::ContainerMouseInputBuffer::StageMouseChunk((CMouseProcessor *)((char *)this + 3904), a2, a3);
  }
  return v4;
}
