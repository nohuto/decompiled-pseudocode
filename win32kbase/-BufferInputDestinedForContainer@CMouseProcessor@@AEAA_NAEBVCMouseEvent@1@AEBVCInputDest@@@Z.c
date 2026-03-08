/*
 * XREFs of ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C007CFCC
 * Callers:
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C007D110 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C022C04C (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C022C35C (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 * Callees:
 *     IsMouseIVEnabled @ 0x1C007AFD0 (IsMouseIVEnabled.c)
 *     isRootPartition @ 0x1C007B02C (isRootPartition.c)
 *     ?GetContainerId@CInputDest@@QEBA?AUCONTAINER_ID@@XZ @ 0x1C01E37B8 (-GetContainerId@CInputDest@@QEBA-AUCONTAINER_ID@@XZ.c)
 *     ?GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ @ 0x1C01E37DC (-GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C022B55C (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1C022CEC8 (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x1C0231448 (-StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDes.c)
 */

bool __fastcall CMouseProcessor::BufferInputDestinedForContainer(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        const struct CInputDest *a3)
{
  bool v4; // di
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  const struct tagBASEWNDCONTAINERINFO *ContainerInfo; // rbp
  char v13; // dl
  char v14; // cl
  int v15; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  if ( IsMouseIVEnabled() && isRootPartition(v8, v7, v9, v10) )
  {
    CInputDest::GetContainerId(a3, &v15);
    ContainerInfo = CInputDest::GetContainerInfo(a3);
    v13 = 1;
    v4 = ContainerInfo != 0LL;
    if ( *((_WORD *)this + 2480) != (_WORD)v15 || (v14 = 1, *((_WORD *)this + 2481) != HIWORD(v15)) )
      v14 = 0;
    if ( *((_WORD *)this + 2464) )
      v13 = 0;
    else
      *((_DWORD *)this + 1240) = v15;
    if ( ContainerInfo && v13 && v14 )
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
