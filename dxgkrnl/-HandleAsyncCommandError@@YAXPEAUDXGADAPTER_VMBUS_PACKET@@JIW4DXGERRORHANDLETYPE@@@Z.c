/*
 * XREFs of ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C03713B8
 * Callers:
 *     ?VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038DD30 (-VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038E510 (-VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038E8A0 (-VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038ED10 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038F510 (-VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038F760 (-VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0390AA0 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0001198 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0001314 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C00037CC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0003AE4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003FFEC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkMarkDeviceAsError @ 0x1C02ED1B0 (DxgkMarkDeviceAsError.c)
 */

void __fastcall HandleAsyncCommandError(__int64 *a1, int a2, unsigned int a3, int a4)
{
  __int64 v5; // r12
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // r14d
  struct DXGPROCESS *v10; // r8
  struct DXGPROCESS *v11; // r8
  struct _KTHREAD **v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  bool v16[8]; // [rsp+20h] [rbp-40h]
  bool v17[8]; // [rsp+28h] [rbp-38h]
  struct DXGDEVICE *v18[2]; // [rsp+50h] [rbp-10h] BYREF
  struct DXGHWQUEUE *v19; // [rsp+90h] [rbp+30h] BYREF

  v5 = a2;
  if ( !*(_BYTE *)(a1[13] + 339) )
    return;
  v7 = a1[17];
  v8 = *(unsigned int *)(v7 + 16);
  if ( (*(_DWORD *)(v7 + 12) & 0x100) == 0 )
    return;
  v9 = 0;
  if ( a4 == 1 )
  {
    v10 = (struct DXGPROCESS *)a1[11];
    v19 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v18, a3, v10, &v19, 0, 1);
    if ( !v19 )
    {
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v18);
      return;
    }
    v9 = *(_DWORD *)(*((_QWORD *)v19 + 2) + 468LL);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v18);
    goto LABEL_19;
  }
  if ( a4 == 2 )
  {
    v11 = (struct DXGPROCESS *)a1[11];
    v19 = 0LL;
    DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v18, a3, v11, &v19, 0);
    if ( !v19 )
    {
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v18);
      return;
    }
    v9 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 468LL);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v18);
    goto LABEL_19;
  }
  if ( a4 )
  {
LABEL_19:
    WdLogSingleEntry4(2LL, v5, a1[11], v9, v8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Async command failed: 0x%I64x, 0x%I64x, 0x%I64x 0x%I64x",
      v5,
      a1[11],
      v9,
      v8,
      0LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    {
      *(_DWORD *)v17 = v5;
      *(_DWORD *)v16 = v9;
      McTemplateK0pqq_EtwWriteTransfer(v14, &EventVmBusAsyncCommandFailure, v15, a1[11], *(_QWORD *)v16, *(_QWORD *)v17);
    }
    if ( v9 )
    {
      v19 = (struct DXGHWQUEUE *)(v9 | 0x1900000000LL);
      DxgkMarkDeviceAsError((__int64)&v19, v13, v15);
    }
    return;
  }
  v12 = (struct _KTHREAD **)a1[11];
  v18[0] = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v19, a3, v12, v18);
  if ( v18[0] )
  {
    v9 = a3;
    if ( v19 && _InterlockedExchangeAdd64((volatile signed __int64 *)v19 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v19 + 2), v19);
    goto LABEL_19;
  }
  if ( v19 && _InterlockedExchangeAdd64((volatile signed __int64 *)v19 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v19 + 2), v19);
}
