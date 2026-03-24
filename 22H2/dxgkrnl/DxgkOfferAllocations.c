/*
 * XREFs of DxgkOfferAllocations @ 0x1C0153020
 * Callers:
 *     ?VmBusOfferAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0244380 (-VmBusOfferAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00033FC (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0005358 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C0005530 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z @ 0x1C01534C0 (-OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020D704 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkOfferAllocations(_D3DKMT_OFFERALLOCATIONS *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _KTHREAD **v12; // rdi
  struct _KTHREAD **v13; // rsi
  unsigned __int8 v14; // r14
  _OWORD *p_hDevice; // rcx
  __int64 hDevice; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DXGDEVICE *v19; // rsi
  __int64 v20; // rcx
  int v21; // edi
  struct _KEVENT *v22; // r15
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  ULONG64 v29; // rcx
  struct DXGDEVICE *v30; // rdi
  unsigned int v31; // esi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  UINT *p_Flags; // r13
  UINT Value; // edi
  struct DXGTHREAD *Current; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  bool v43; // zf
  __int64 v44; // rax
  __int64 v45; // rdx
  struct _KEVENT *v46; // rcx
  __int64 v47; // rcx
  unsigned __int8 v48; // di
  __int64 v49; // r8
  unsigned __int8 v50; // di
  _QWORD *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rdx
  struct DXGDEVICE *v61; // [rsp+30h] [rbp-138h] BYREF
  struct DXGDEVICE *v62; // [rsp+38h] [rbp-130h] BYREF
  int v63; // [rsp+40h] [rbp-128h] BYREF
  __int64 v64; // [rsp+48h] [rbp-120h]
  char v65; // [rsp+50h] [rbp-118h]
  struct DXGDEVICE *v66; // [rsp+58h] [rbp-110h] BYREF
  int v67; // [rsp+60h] [rbp-108h]
  _D3DKMT_OFFERALLOCATIONS v68; // [rsp+68h] [rbp-100h] BYREF
  _BYTE v69[8]; // [rsp+90h] [rbp-D8h] BYREF
  _BYTE v70[16]; // [rsp+98h] [rbp-D0h] BYREF
  DXGADAPTER *v71; // [rsp+A8h] [rbp-C0h]
  char v72; // [rsp+B0h] [rbp-B8h]
  __int64 v73; // [rsp+B8h] [rbp-B0h]
  _BYTE v74[16]; // [rsp+D8h] [rbp-90h] BYREF
  __int64 v75; // [rsp+E8h] [rbp-80h]
  __int64 v76; // [rsp+118h] [rbp-50h]
  char v77; // [rsp+120h] [rbp-48h]

  v63 = -1;
  v64 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v65 = 1;
    v63 = 2070;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2070);
  }
  else
  {
    v65 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v63, 2070LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6, v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v11, v10)) == 0LL
    || (v13 = (struct _KTHREAD **)*((_QWORD *)Current + 1)) == 0LL )
  {
    v13 = v12;
    if ( !v12 )
    {
      v39 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v39 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v39);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63, v40);
      v43 = v65 == 0;
      goto LABEL_50;
    }
  }
  v14 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  *(_QWORD *)&v68.Flags.0 = 0LL;
  if ( v14 )
  {
    p_hDevice = &a1->hDevice;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      p_hDevice = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)&v68.hDevice = *p_hDevice;
    *(_OWORD *)&v68.HandleList = p_hDevice[1];
  }
  else
  {
    v68 = *a1;
  }
  v62 = 0LL;
  hDevice = v68.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v61, v68.hDevice, v13, &v62);
  v19 = v62;
  if ( !v62 )
  {
    v44 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v44 + 24) = hDevice;
    *(_QWORD *)(v44 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v44);
    if ( v61 && _InterlockedExchangeAdd64((volatile signed __int64 *)v61 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v61 + 2), v61);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63, v45);
    v43 = v65 == 0;
LABEL_50:
    if ( v43 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_90;
  }
  v66 = v62;
  v20 = *(_QWORD *)(*((_QWORD *)v62 + 2) + 16LL);
  if ( *(int *)(v20 + 2328) >= 0x2000 || *(_BYTE *)(v20 + 2628) )
  {
    v21 = *((_DWORD *)DXGGLOBAL::GetGlobal(v20, v17) + 311);
    v67 = v21;
  }
  else
  {
    v21 = 0;
    v67 = 0;
  }
  v22 = (struct _KEVENT *)*((_QWORD *)v19 + 2);
  if ( *((_DWORD *)v19 + 108) == 2 )
  {
    if ( KeReadStateEvent(v22 + 5) )
      goto LABEL_16;
    v46 = v22 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v22 + 4) )
      goto LABEL_16;
    v46 = v22 + 4;
  }
  KeWaitForSingleObject(v46, Executive, 0, 0, 0LL);
LABEL_16:
  KeEnterCriticalRegion();
  if ( v21 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v19 + 144, 0LL) )
      goto LABEL_18;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 104LL));
    v50 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v19 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v19 + 144));
    if ( !v50 )
    {
LABEL_68:
      ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 104LL, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_18;
    }
LABEL_67:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v19 + 2) + 16LL));
    goto LABEL_68;
  }
  if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v19 + 17), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 104LL));
    v48 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v19 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v47, &EventBlockThread, v49, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v19 + 17), 1u);
    if ( !v48 )
      goto LABEL_68;
    goto LABEL_67;
  }
LABEL_18:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v69, (__int64)v19, 0, v23, 0);
  if ( v77 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v74, 0LL);
    v25 = *(unsigned int *)(v75 + 200);
    if ( (_DWORD)v25 != 1 )
    {
LABEL_76:
      COREACCESS::Release((COREACCESS *)v74);
LABEL_77:
      v55 = WdLogNewEntry5_WdWarning(v53, v52, v54);
      *(_QWORD *)(v55 + 24) = v62;
      *(_QWORD *)(v55 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v55);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v69);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v66);
      if ( v61 && _InterlockedExchangeAdd64((volatile signed __int64 *)v61 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v61 + 2), v61);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63, v56);
      if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v57, &EventProfilerExit, v58, v63);
      return 3221226166LL;
    }
  }
  if ( v72 )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24);
    v51[3] = 275LL;
    v51[4] = 4LL;
    v51[5] = v70;
    v51[6] = 0LL;
    v51[7] = 0LL;
    WdLogEvent5_WdCriticalError(v51);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v71 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v71 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v27, &EventBlockThread, v28, 72);
      KeWaitForSingleObject((char *)v71 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v71, 0LL);
  }
  v73 = 0LL;
  v72 = 1;
  if ( *(_DWORD *)(v76 + 576) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v70);
    if ( !v77 )
      goto LABEL_77;
    goto LABEL_76;
  }
  v29 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL);
  if ( *(_DWORD *)(v29 + 1872) >= 0x5010u )
  {
    if ( v14 )
    {
      p_Flags = (UINT *)&a1->Flags;
      v29 = MmUserProbeAddress;
      if ( (unsigned __int64)p_Flags >= MmUserProbeAddress )
        p_Flags = (UINT *)MmUserProbeAddress;
      Value = *p_Flags;
      v68.Flags.Value = *p_Flags;
    }
    else
    {
      Value = a1->Flags.Value;
      v68.Flags.Value = Value;
    }
    if ( (Value & 0xFFFFFFFC) != 0 )
    {
      v59 = WdLogNewEntry5_WdWarning(v29, v24, v26);
      *(_QWORD *)(v59 + 24) = (unsigned __int64)Value >> 2;
      WdLogEvent5_WdWarning(v59);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v69);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v66);
      if ( v61 && _InterlockedExchangeAdd64((volatile signed __int64 *)v61 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v61 + 2), v61);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63, v60);
      if ( !v65 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225485LL;
LABEL_90:
      McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v63);
      return 3221225485LL;
    }
  }
  v30 = v62;
  v31 = DXGDEVICE::OfferAllocations(v62, &v68, v14);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v69);
  if ( v67 )
    ExReleasePushLockSharedEx((char *)v30 + 144, 0LL);
  else
    ExReleaseResourceLite(*((PERESOURCE *)v30 + 17));
  KeLeaveCriticalRegion();
  if ( v61 && _InterlockedExchangeAdd64((volatile signed __int64 *)v61 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v61 + 2), v61);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63, v32);
  if ( v65 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v63);
  }
  return v31;
}
