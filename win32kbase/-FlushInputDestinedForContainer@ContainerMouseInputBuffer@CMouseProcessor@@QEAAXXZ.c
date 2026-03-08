/*
 * XREFs of ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1C022CEC8
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C007AB10 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C007CFCC (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C022B55C (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x1C022ED3C (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?SendMouseInput@Mouse@IVRootDeliver@@YAJAEAUCONTAINER_ID@@AEAUContainerMouseInput@@@Z @ 0x1C02269D4 (-SendMouseInput@Mouse@IVRootDeliver@@YAJAEAUCONTAINER_ID@@AEAUContainerMouseInput@@@Z.c)
 */

void __fastcall CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer(
        CMouseProcessor::ContainerMouseInputBuffer *this,
        __int64 a2,
        struct ContainerMouseInput *a3,
        __int64 a4)
{
  __int64 v5; // xmm0_8
  int v6; // eax
  CMouseProcessor::ContainerMouseInputBuffer *v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+2Ch] [rbp-1Ch]
  int v10; // [rsp+34h] [rbp-14h]

  if ( *((_WORD *)this + 512) )
  {
    v5 = *(_QWORD *)((char *)this + 1044);
    v8 = *((unsigned __int16 *)this + 512);
    v6 = *((_DWORD *)this + 263);
    v7 = this;
    v9 = v5;
    v10 = v6;
    IVRootDeliver::Mouse::SendMouseInput(
      (CMouseProcessor::ContainerMouseInputBuffer *)((char *)this + 1056),
      (struct CONTAINER_ID *)&v7,
      a3,
      a4);
    memset(this, 0, (unsigned __int64)*((unsigned __int16 *)this + 512) << 6);
    *((_WORD *)this + 512) = 0;
    *((_QWORD *)this + 129) = this;
    *((_BYTE *)this + 1041) = 0;
    *((_BYTE *)this + 1052) = 0;
  }
}
