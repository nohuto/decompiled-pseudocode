/*
 * XREFs of ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0001314
 * Callers:
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C0168B54 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C02311B8 (DxgkSubmitCommandToHwQueueInternal.c)
 *     ?DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C02DFD30 (-DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?DxgkConnectDoorbellInternal@@YAJPEAU_D3DKMT_CONNECT_DOORBELL@@_N@Z @ 0x1C0317C28 (-DxgkConnectDoorbellInternal@@YAJPEAU_D3DKMT_CONNECT_DOORBELL@@_N@Z.c)
 *     ?DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z @ 0x1C0318084 (-DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z.c)
 *     ?DxgkDestroyDoorbellInternal@@YAJPEAU_D3DKMT_DESTROY_DOORBELL@@_N@Z @ 0x1C0318924 (-DxgkDestroyDoorbellInternal@@YAJPEAU_D3DKMT_DESTROY_DOORBELL@@_N@Z.c)
 *     ?DxgkNotifyWorkSubmissionInternal@@YAJPEAU_D3DKMT_NOTIFY_WORK_SUBMISSION@@_N@Z @ 0x1C0318C24 (-DxgkNotifyWorkSubmissionInternal@@YAJPEAU_D3DKMT_NOTIFY_WORK_SUBMISSION@@_N@Z.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C031ADA4 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C031B6B8 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C031CF20 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C031E8D0 (DxgkSubmitPresentToHwQueue.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C0375A78 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0395380 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00042E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0004690 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00075BC (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0008088 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0043074 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C018C168 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03178C0 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE(DXGHWQUEUEBYHANDLE *this)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 v6; // rsi
  struct DXGDEVICE *v7; // rbx
  __int64 v8; // rax
  char *v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  char *v12; // rdx
  _QWORD v13[2]; // [rsp+70h] [rbp-98h] BYREF
  char v14; // [rsp+80h] [rbp-88h]
  _BYTE v15[8]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v16; // [rsp+90h] [rbp-78h]
  char v17; // [rsp+98h] [rbp-70h]
  _QWORD v18[2]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v19[3]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v20[8]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v21[64]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v22[88]; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v23[8]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v24[64]; // [rsp+170h] [rbp+68h] BYREF
  _BYTE v25[88]; // [rsp+1B0h] [rbp+A8h] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this && !*((_BYTE *)this + 8) )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(v1 + 104));
    if ( v2 >= 0 )
    {
      if ( !v2 )
      {
        v6 = *(_QWORD *)(v1 + 16);
        v7 = *(struct DXGDEVICE **)(v6 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v18, v7);
        v8 = *((_QWORD *)v7 + 2);
        v14 = 0;
        v13[1] = *(_QWORD *)(v8 + 16);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
        COREDEVICEACCESS::COREDEVICEACCESS(v20, v7, 2LL);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v20, v9);
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 200LL) != 4 )
          DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v6, (PVOID)v1, (struct COREDEVICEACCESS *)v20);
        COREACCESS::~COREACCESS((COREACCESS *)v22);
        COREACCESS::~COREACCESS((COREACCESS *)v21);
        if ( v14 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
        if ( v18[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v18);
        if ( !_InterlockedDecrement64((volatile signed __int64 *)(v6 + 32)) )
        {
          v10 = *(_QWORD *)(v6 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v19,
            (struct DXGDEVICE *)v10);
          v11 = *(_QWORD *)(v6 + 16);
          v17 = 0;
          v16 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
          COREDEVICEACCESS::COREDEVICEACCESS(v23, v10, 2LL);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v23, v12);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL) + 200LL) != 4 )
            DXGDEVICE::DestroyContext((DXGDEVICE *)v10, (struct DXGCONTEXT *)v6, (struct COREDEVICEACCESS *)v23);
          COREACCESS::~COREACCESS((COREACCESS *)v25);
          COREACCESS::~COREACCESS((COREACCESS *)v24);
          if ( v17 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
          if ( v19[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v19);
          if ( !_InterlockedDecrement64((volatile signed __int64 *)(v10 + 64)) )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
        }
      }
    }
    else
    {
      WdLogSingleEntry1(1LL, 141LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v4,
            v3,
            v5,
            0,
            2,
            -1,
            (__int64)L"NewReferenceCount >= 0",
            141,
            0,
            0,
            0,
            0);
      }
    }
  }
}
