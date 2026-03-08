/*
 * XREFs of ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C00037CC
 * Callers:
 *     DxgkSetContextInProcessSchedulingPriority @ 0x1C017BCE0 (DxgkSetContextInProcessSchedulingPriority.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1C0188F60 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C0190840 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1C01944A0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C0198420 (DxgkPresentMultiPlaneOverlay3.c)
 *     DxgkPresent @ 0x1C01C8120 (DxgkPresent.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C02D7690 (DxgkUpdateGpuVirtualAddress.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z @ 0x1C02DA240 (-DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z.c)
 *     ?DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C02DAFA0 (-DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1C02EC890 (DxgkGetContextInProcessSchedulingPriority.c)
 *     DxgkGetContextSchedulingPriority @ 0x1C02ECD20 (DxgkGetContextSchedulingPriority.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C02ED6E0 (DxgkSetContextSchedulingPriority.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C030302C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C0315DC8 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkCreateHwQueueInternal @ 0x1C0318D00 (DxgkCreateHwQueueInternal.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C0320670 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C0320FA0 (DxgkPresentMultiPlaneOverlay2.c)
 *     OutputDuplPresent @ 0x1C032C14C (OutputDuplPresent.c)
 *     DxgkRender @ 0x1C0348D00 (DxgkRender.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C034F87C (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C03713B8 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C0371F08 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0373510 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0373960 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0390AA0 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

DXGCONTEXTBYHANDLE *__fastcall DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
        DXGCONTEXTBYHANDLE *this,
        unsigned int a2,
        struct DXGPROCESS *a3,
        struct DXGCONTEXT **a4,
        bool a5,
        bool a6)
{
  unsigned int v10; // eax
  __int64 v11; // rdx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  __int64 v15; // r8
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  _BYTE v20[32]; // [rsp+60h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v20, a3);
  v10 = (a2 >> 6) & 0xFFFFFF;
  if ( v10 < *((_DWORD *)a3 + 74) )
  {
    v15 = *((_QWORD *)a3 + 35);
    if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16LL * v10 + 8) & 0x60)
      && (*(_DWORD *)(v15 + 16LL * v10 + 8) & 0x2000) == 0 )
    {
      v16 = *(_DWORD *)(v15 + 16LL * v10 + 8) & 0x1F;
      if ( v16 )
      {
        if ( v16 == 7 )
        {
          v11 = *(_QWORD *)(v15 + 16LL * v10);
          goto LABEL_3;
        }
        if ( a6 )
        {
          WdLogSingleEntry1(2LL, 267LL);
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v18,
                v17,
                v19,
                0,
                0,
                -1,
                (__int64)L"Handle type mismatch",
                11,
                0,
                0,
                0,
                0);
          }
        }
      }
    }
  }
  v11 = 0LL;
LABEL_3:
  *((_BYTE *)this + 8) = a5;
  *(_QWORD *)this = v11;
  if ( v11 && !a5 )
  {
    _m_prefetchw((const void *)(v11 + 32));
    v12 = *(_QWORD *)(v11 + 32);
    while ( v12 )
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 32), v12 + 1, v12);
      if ( v13 == v12 )
        goto LABEL_10;
    }
    *(_QWORD *)this = 0LL;
  }
LABEL_10:
  *a4 = *(struct DXGCONTEXT **)this;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  return this;
}
