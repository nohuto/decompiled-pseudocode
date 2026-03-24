/*
 * XREFs of DxgkSetQueuedLimit @ 0x1C01573F0
 * Callers:
 *     ?VmBusSetQueuedLimit@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024F4F0 (-VmBusSetQueuedLimit@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00033FC (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C0005530 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z @ 0x1C01577AC (-SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020D704 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_SETQUEUEDLIMIT@@@Z @ 0x1C024C498 (-VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3.c)
 */

__int64 __fastcall DxgkSetQueuedLimit(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_SETQUEUEDLIMIT *v3; // r14
  bool v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KTHREAD **v13; // rdi
  struct _KTHREAD **v14; // r12
  _D3DKMT_SETQUEUEDLIMIT *v15; // r15
  _D3DKMT_SETQUEUEDLIMIT *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DXGDEVICE *v19; // rdi
  struct _KEVENT *v20; // rsi
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGDEVICE *v26; // rsi
  D3DKMT_QUEUEDLIMIT_TYPE Type; // eax
  int v28; // eax
  unsigned int v29; // edi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  bool v37; // zf
  __int64 v38; // rax
  __int64 v39; // rdx
  struct _KEVENT *v40; // rcx
  __int64 v41; // rcx
  unsigned __int8 v42; // si
  __int64 v43; // r8
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  struct DXGDEVICE *v48; // [rsp+30h] [rbp-128h] BYREF
  struct DXGDEVICE *v49; // [rsp+38h] [rbp-120h] BYREF
  int v50; // [rsp+40h] [rbp-118h] BYREF
  __int64 v51; // [rsp+48h] [rbp-110h]
  char v52; // [rsp+50h] [rbp-108h]
  struct DXGDEVICE *v53; // [rsp+58h] [rbp-100h] BYREF
  int v54; // [rsp+60h] [rbp-F8h]
  _D3DKMT_SETQUEUEDLIMIT v55; // [rsp+68h] [rbp-F0h] BYREF
  _BYTE v56[8]; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v57[16]; // [rsp+88h] [rbp-D0h] BYREF
  DXGADAPTER *v58; // [rsp+98h] [rbp-C0h]
  char v59; // [rsp+A0h] [rbp-B8h]
  __int64 v60; // [rsp+A8h] [rbp-B0h]
  _BYTE v61[16]; // [rsp+C8h] [rbp-90h] BYREF
  __int64 v62; // [rsp+D8h] [rbp-80h]
  __int64 v63; // [rsp+108h] [rbp-50h]
  char v64; // [rsp+110h] [rbp-48h]

  v3 = (_D3DKMT_SETQUEUEDLIMIT *)a1;
  v50 = -1;
  v51 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v52 = 1;
    v50 = 2035;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2035);
  }
  else
  {
    v52 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v50, 2035LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v13 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v12, v11)) == 0LL
    || (v14 = (struct _KTHREAD **)*((_QWORD *)Current + 1)) == 0LL )
  {
    v14 = v13;
    if ( !v13 )
    {
      v35 = WdLogNewEntry5_WdError(v12, v11);
      v29 = -1073741811;
      *(_QWORD *)(v35 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v35);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50, v36);
      v37 = v52 == 0;
      goto LABEL_47;
    }
  }
  v55 = 0LL;
  v15 = &v55;
  if ( v4 )
  {
    v16 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v16 = (_D3DKMT_SETQUEUEDLIMIT *)MmUserProbeAddress;
    v55 = *v16;
  }
  else
  {
    v15 = v3;
  }
  v48 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v49, v15->hDevice, v14, &v48);
  v19 = v48;
  if ( !v48 )
  {
    v38 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v38 + 24) = v15->hDevice;
    v29 = -1073741811;
    *(_QWORD *)(v38 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v38);
    if ( v49 && _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50, v39);
    v37 = v52 == 0;
LABEL_47:
    if ( v37 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v29;
    goto LABEL_78;
  }
  v53 = v48;
  v20 = (struct _KEVENT *)*((_QWORD *)v48 + 2);
  if ( *((_DWORD *)v48 + 108) == 2 )
  {
    if ( KeReadStateEvent(v20 + 5) )
      goto LABEL_13;
    v40 = v20 + 5;
LABEL_53:
    KeWaitForSingleObject(v40, Executive, 0, 0, 0LL);
    goto LABEL_13;
  }
  if ( !KeReadStateEvent(v20 + 4) )
  {
    v40 = v20 + 4;
    goto LABEL_53;
  }
LABEL_13:
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v19 + 17), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 104LL));
    v42 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v19 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v41, &EventBlockThread, v43, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v19 + 17), 1u);
    if ( v42 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v19 + 2) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 104LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v54 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v56, (__int64)v19, 2, v21, 0);
  if ( v64 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v61, 0LL);
    v23 = *(unsigned int *)(v62 + 200);
    if ( (_DWORD)v23 != 1 )
      goto LABEL_67;
  }
  if ( v59 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v22);
    v44[3] = 275LL;
    v44[4] = 4LL;
    v44[5] = v57;
    v44[6] = 0LL;
    v44[7] = 0LL;
    WdLogEvent5_WdCriticalError(v44);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v58 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v58 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, &EventBlockThread, v25, 72);
      KeWaitForSingleObject((char *)v58 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v58, 0LL);
  }
  v60 = 0LL;
  v59 = 1;
  if ( *(_DWORD *)(v63 + 576) == 1 )
  {
    v26 = v48;
    if ( (*((_BYTE *)v48 + 1869) & 1) != 0 )
    {
      v28 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetQueuedLimit(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 4240LL),
              (struct DXGPROCESS *)v14,
              v48,
              v15);
    }
    else
    {
      Type = v15->Type;
      if ( Type == D3DKMT_SET_QUEUEDLIMIT_PRESENT )
      {
        v28 = DXGDEVICE::SetQueuedPresentLimit(v48, v15->QueuedPresentLimit);
      }
      else
      {
        if ( Type != D3DKMT_GET_QUEUEDLIMIT_PRESENT )
        {
          v29 = -1073741811;
          goto LABEL_30;
        }
        v28 = (*(__int64 (__fastcall **)(_QWORD, union _D3DKMT_SETQUEUEDLIMIT::$A93923BD602231B9E75A21ABFFB5534A *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 616LL) + 8LL) + 176LL))(
                *((_QWORD *)v48 + 96),
                &v15->8);
      }
    }
    v29 = v28;
    if ( v28 >= 0 && v4 )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_D3DKMT_SETQUEUEDLIMIT *)MmUserProbeAddress;
      *v3 = *v15;
    }
LABEL_30:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v56);
    ExReleaseResourceLite(*((PERESOURCE *)v26 + 17));
    KeLeaveCriticalRegion();
    if ( v49 && _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50, v30);
    if ( !v52 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v29;
LABEL_78:
    McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v50);
    return v29;
  }
  COREACCESS::Release((COREACCESS *)v57);
  if ( v64 )
LABEL_67:
    COREACCESS::Release((COREACCESS *)v61);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v56);
  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v53);
  if ( v49 && _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50, v45);
  if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v46, &EventProfilerExit, v47, v50);
  return 3221226166LL;
}
