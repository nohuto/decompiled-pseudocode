/*
 * XREFs of ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0001198
 * Callers:
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C0163594 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C0222C18 (DxgkSubmitCommandToHwQueueInternal.c)
 *     ?DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C02DAFA0 (-DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?DxgkConnectDoorbellInternal@@YAJPEAU_D3DKMT_CONNECT_DOORBELL@@_N@Z @ 0x1C0312C4C (-DxgkConnectDoorbellInternal@@YAJPEAU_D3DKMT_CONNECT_DOORBELL@@_N@Z.c)
 *     ?DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z @ 0x1C03130A8 (-DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z.c)
 *     ?DxgkDestroyDoorbellInternal@@YAJPEAU_D3DKMT_DESTROY_DOORBELL@@_N@Z @ 0x1C0313948 (-DxgkDestroyDoorbellInternal@@YAJPEAU_D3DKMT_DESTROY_DOORBELL@@_N@Z.c)
 *     ?DxgkNotifyWorkSubmissionInternal@@YAJPEAU_D3DKMT_NOTIFY_WORK_SUBMISSION@@_N@Z @ 0x1C0313C48 (-DxgkNotifyWorkSubmissionInternal@@YAJPEAU_D3DKMT_NOTIFY_WORK_SUBMISSION@@_N@Z.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C0315DC8 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C03166DC (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C0317F44 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C03198F0 (DxgkSubmitPresentToHwQueue.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C03713B8 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0390AA0 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

DXGHWQUEUEBYHANDLE *__fastcall DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
        DXGHWQUEUEBYHANDLE *this,
        unsigned int a2,
        struct DXGPROCESS *a3,
        struct DXGHWQUEUE **a4,
        bool a5)
{
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v12; // r8
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  _BYTE v19[32]; // [rsp+60h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v19, a3);
  v9 = (a2 >> 6) & 0xFFFFFF;
  if ( v9 < *((_DWORD *)a3 + 74) )
  {
    v12 = *((_QWORD *)a3 + 35);
    if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v12 + 16LL * v9 + 8) & 0x60)
      && (*(_DWORD *)(v12 + 16LL * v9 + 8) & 0x2000) == 0 )
    {
      v13 = *(_DWORD *)(v12 + 16LL * v9 + 8) & 0x1F;
      if ( v13 )
      {
        if ( v13 == 15 )
        {
          v10 = *(_QWORD *)(v12 + 16LL * v9);
          goto LABEL_3;
        }
        WdLogSingleEntry1(2LL, 267LL);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v15,
            v14,
            v16,
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
  v10 = 0LL;
LABEL_3:
  *((_BYTE *)this + 8) = a5;
  *(_QWORD *)this = v10;
  if ( v10 && !a5 )
  {
    _m_prefetchw((const void *)(v10 + 104));
    v17 = *(_QWORD *)(v10 + 104);
    while ( v17 )
    {
      v18 = v17;
      v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 104), v17 + 1, v17);
      if ( v18 == v17 )
        goto LABEL_4;
    }
    *(_QWORD *)this = 0LL;
  }
LABEL_4:
  *a4 = *(struct DXGHWQUEUE **)this;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  return this;
}
