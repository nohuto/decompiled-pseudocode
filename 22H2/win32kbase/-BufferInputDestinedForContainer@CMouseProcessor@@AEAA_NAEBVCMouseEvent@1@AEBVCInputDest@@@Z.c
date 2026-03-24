/*
 * XREFs of ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C0044D10
 * Callers:
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C00464AC (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C004C9DC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01BF3D8 (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 * Callees:
 *     IsMouseIVEnabled @ 0x1C0042988 (IsMouseIVEnabled.c)
 *     isRootPartition @ 0x1C0042A98 (isRootPartition.c)
 *     Feature_InputVirtualizationDesktopSpecific__private_ReportDeviceUsage @ 0x1C00CD4D8 (Feature_InputVirtualizationDesktopSpecific__private_ReportDeviceUsage.c)
 *     ?IsContainer@CInputDest@@QEBA_NXZ @ 0x1C0182D08 (-IsContainer@CInputDest@@QEBA_NXZ.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C01BEF28 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1C01C00FC (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x1C01C21D0 (-StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDes.c)
 */

bool __fastcall CMouseProcessor::BufferInputDestinedForContainer(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        const struct CInputDest *a3)
{
  int v6; // ebx
  bool IsContainer; // si
  char v8; // al
  bool v9; // cl

  if ( !IsMouseIVEnabled() || !isRootPartition() )
    return 0;
  v6 = *((_DWORD *)a3 + 27);
  if ( IsMouseIVEnabled() )
    Feature_InputVirtualizationDesktopSpecific__private_ReportDeviceUsage();
  IsContainer = CInputDest::IsContainer(a3);
  v8 = 1;
  v9 = *(_DWORD *)((char *)this + 4962) == v6;
  if ( *((_WORD *)this + 2464) )
    v8 = 0;
  else
    *(_DWORD *)((char *)this + 4962) = v6;
  if ( (!IsContainer || !v8 || !v9) && *((_BYTE *)this + 4960) )
  {
    CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput((CMouseProcessor *)((char *)this + 3904), a2);
    CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer((CMouseProcessor *)((char *)this + 3904));
  }
  if ( IsContainer )
    CMouseProcessor::ContainerMouseInputBuffer::StageMouseChunk((CMouseProcessor *)((char *)this + 3904), a2, a3);
  return IsContainer;
}
