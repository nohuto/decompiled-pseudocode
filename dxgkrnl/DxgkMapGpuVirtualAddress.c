__int64 __fastcall DxgkMapGpuVirtualAddress(ULONG64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  bool v5; // r12
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v9; // rdi
  struct DXGPROCESS *v10; // r15
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v11; // r14
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v12; // rax
  unsigned __int64 Value; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  struct _KEVENT *v16; // rdi
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  struct _EX_RUNDOWN_REF *v21; // rbx
  ULONG_PTR Count; // r8
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA v23; // rax
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  struct DXGTHREAD *DxgThread; // rax
  _QWORD *v26; // rcx
  __int64 v27; // rax
  bool v28; // r9
  int v29; // eax
  unsigned int v30; // edi
  _QWORD *v31; // rcx
  _QWORD *v32; // rcx
  struct DXGTHREAD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  struct DXGPROCESS *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  DXGPAGINGQUEUE *v43; // rcx
  struct _KEVENT *v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // r8
  struct DXGPAGINGQUEUE *v49; // rdi
  unsigned int Ptr_high; // r12d
  unsigned int v51; // edi
  unsigned int HostProcess; // eax
  int Timeout; // [rsp+20h] [rbp-218h]
  bool v54; // [rsp+50h] [rbp-1E8h]
  int v55; // [rsp+58h] [rbp-1E0h] BYREF
  __int64 v56; // [rsp+60h] [rbp-1D8h]
  char v57; // [rsp+68h] [rbp-1D0h]
  DXGPAGINGQUEUE *v58; // [rsp+70h] [rbp-1C8h] BYREF
  struct DXGPAGINGQUEUE *v59; // [rsp+78h] [rbp-1C0h] BYREF
  struct _EX_RUNDOWN_REF *v60; // [rsp+80h] [rbp-1B8h] BYREF
  __int64 v61; // [rsp+88h] [rbp-1B0h] BYREF
  int v62; // [rsp+90h] [rbp-1A8h]
  struct DXGTHREAD *v63; // [rsp+98h] [rbp-1A0h] BYREF
  struct DXGPROCESS *v64; // [rsp+A0h] [rbp-198h]
  struct DXGTHREAD *v65; // [rsp+A8h] [rbp-190h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v66; // [rsp+B0h] [rbp-188h]
  struct _EX_RUNDOWN_REF *v67; // [rsp+B8h] [rbp-180h] BYREF
  DXG_GUEST_VIRTUALGPU_VMBUS *v68; // [rsp+C0h] [rbp-178h]
  _QWORD *v69; // [rsp+C8h] [rbp-170h]
  struct D3DDDI_MAPGPUVIRTUALADDRESS v70; // [rsp+F0h] [rbp-148h] BYREF
  _BYTE v71[8]; // [rsp+160h] [rbp-D8h] BYREF
  _BYTE v72[16]; // [rsp+168h] [rbp-D0h] BYREF
  DXGADAPTER *v73; // [rsp+178h] [rbp-C0h]
  char v74; // [rsp+180h] [rbp-B8h]
  __int64 v75; // [rsp+188h] [rbp-B0h]
  _BYTE v76[16]; // [rsp+1A8h] [rbp-90h] BYREF
  __int64 v77; // [rsp+1B8h] [rbp-80h]
  __int64 v78; // [rsp+1E8h] [rbp-50h]
  char v79; // [rsp+1F0h] [rbp-48h]

  v55 = -1;
  v4 = 0;
  v56 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v57 = 1;
    v55 = 2100;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2100);
  }
  else
  {
    v57 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v55, 2100);
  v5 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v54 = v5;
  CurrentProcess = PsGetCurrentProcess(v6);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
    goto LABEL_5;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v10 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( v10 )
    {
      v64 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      goto LABEL_6;
    }
LABEL_5:
    v10 = v9;
    v64 = v9;
    goto LABEL_6;
  }
  CurrentThread = KeGetCurrentThread();
  Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
  v40 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
  v10 = v40;
  if ( !v40 )
  {
    WdLogSingleEntry1(2LL, 2923LL);
    v4 = 0;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_5;
  }
  v64 = v40;
  v4 = 0;
LABEL_6:
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
    if ( !v57 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_134;
  }
  memset(&v70, 0, sizeof(v70));
  if ( v5 )
  {
    v11 = &v70;
    v66 = &v70;
    v12 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v70 = *v12;
  }
  else
  {
    v11 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)a1;
    v66 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)a1;
  }
  v59 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v58, v11->hPagingQueue, v10, &v59, 1);
  if ( !v59 )
  {
    WdLogSingleEntry2(3LL, v11->hPagingQueue, -1073741811LL);
    v43 = v58;
    if ( !v58 )
    {
LABEL_81:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
      if ( !v57 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
      goto LABEL_134;
    }
LABEL_80:
    DXGPAGINGQUEUE::ReleaseReference(v43);
    goto LABEL_81;
  }
  Value = v11->Protection.Value;
  if ( (Value & 0x10) != 0 || Value >= 0x20 )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    if ( v58 )
      DXGPAGINGQUEUE::ReleaseReference(v58);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
    if ( !v57 )
      return 3221225485LL;
    v41 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_134:
    McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v55);
    return 3221225485LL;
  }
  v14 = *((_QWORD *)v59 + 2);
  v61 = v14;
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL);
  if ( *(int *)(v15 + 2552) >= 0x2000 || *(_BYTE *)(v15 + 2852) )
    v4 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 340);
  v62 = v4;
  v16 = *(struct _KEVENT **)(v14 + 16);
  if ( *(_DWORD *)(v14 + 464) == 2 )
  {
    if ( KeReadStateEvent(v16 + 5) )
      goto LABEL_18;
    v44 = v16 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v16 + 4) )
      goto LABEL_18;
    v44 = v16 + 4;
  }
  KeWaitForSingleObject(v44, Executive, 0, 0, 0LL);
LABEL_18:
  KeEnterCriticalRegion();
  if ( v4 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v14 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 160));
      v18 = 1;
    }
    else
    {
      KeLeaveCriticalRegion();
      v18 = 0;
    }
    if ( !v18 )
    {
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v14 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v14 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v14 + 16) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v14 + 136), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v14 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v45, (const EVENT_DESCRIPTOR *)"g", v46, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v14 + 136), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v14 + 16) + 16LL));
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v71, v14, 0, v17, 0);
  if ( v79 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v76, 0LL);
    if ( *(_DWORD *)(v77 + 200) != 1 )
      goto LABEL_103;
  }
  if ( v74 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v72, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v73 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v73 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, (const EVENT_DESCRIPTOR *)"g", v20, 72);
      KeWaitForSingleObject((char *)v73 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v73, 0LL);
  }
  v75 = 0LL;
  v74 = 1;
  if ( *(_DWORD *)(v78 + 608) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v72);
    if ( !v79 )
    {
LABEL_104:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v71);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v61);
      if ( v58 )
        DXGPAGINGQUEUE::ReleaseReference(v58);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
      if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v47, &EventProfilerExit, v48, v55);
      return 3221226166LL;
    }
LABEL_103:
    COREACCESS::Release((COREACCESS *)v76);
    goto LABEL_104;
  }
  v21 = 0LL;
  v60 = 0LL;
  Count = 0LL;
  v23 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)v11->Protection.Value;
  if ( (*(_BYTE *)&v23 & 4) == 0 && (*(_BYTE *)&v23 & 8) == 0 )
  {
    AllocationSafe = DXGPROCESS::GetAllocationSafe((__int64)v10, (DXGALLOCATIONREFERENCE *)&v67, v11->hAllocation);
    v21 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    v60 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    *(_QWORD *)AllocationSafe = 0LL;
    if ( v67 )
      ExReleaseRundownProtection(v67 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
    {
      v63 = 0LL;
      if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v63) >= 0 )
      {
        DxgThread = v63;
        if ( v63 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v63 = DxgThread) != 0LL) )
        {
          if ( *((_DWORD *)DxgThread + 12) )
            WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
        }
      }
    }
    if ( !v21 )
    {
      WdLogSingleEntry3(2LL, -1073741811LL, v11->hAllocation, v10);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x Invalid hAllocation=0x%I64x specified DXGPROCESS=0x%I64x",
        -1073741811LL,
        v11->hAllocation,
        (__int64)v10,
        0LL,
        0LL);
      goto LABEL_114;
    }
    Count = v21[3].Count;
    if ( !Count && (*(_BYTE *)(v14 + 1901) & 1) == 0 )
    {
      WdLogSingleEntry2(2LL, -1073741811LL, v21);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x DXGALLOCATION 0x%p does not have a VidMm handle",
        -1073741811LL,
        (__int64)v21,
        0LL,
        0LL,
        0LL);
LABEL_114:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v60);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v71);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v61);
      v43 = v58;
      if ( !v58 )
        goto LABEL_81;
      goto LABEL_80;
    }
    if ( v21[1].Count != v14 )
    {
      v49 = v59;
      WdLogSingleEntry3(2LL, -1073741811LL, v21, v59);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x DXGALLOCATION 0x%p device does not match DXGPAGINGQUEUE 0x%p device",
        -1073741811LL,
        (__int64)v21,
        (__int64)v49,
        0LL,
        0LL);
      goto LABEL_114;
    }
  }
  v26 = *(_QWORD **)(v14 + 16);
  v27 = v26[2];
  v69 = v26;
  if ( *(_BYTE *)(v27 + 209) )
  {
    v68 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(v27 + 4472);
    if ( v21 )
      Ptr_high = HIDWORD(v21[2].Ptr);
    else
      Ptr_high = 0;
    v51 = *((_DWORD *)v59 + 7);
    HostProcess = DXGPROCESS::GetHostProcess(v10);
    v29 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(v68, HostProcess, 0LL, v51, Ptr_high, v11);
    v5 = v54;
  }
  else
  {
    v28 = *(_BYTE *)(v14 + 1903) || *(_DWORD *)(v14 + 464) == 2 && *(int *)(v27 + 2820) >= 2000;
    LOBYTE(Timeout) = v28;
    v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, struct D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(v26[95] + 8LL) + 792LL))(
            v26[96],
            *((_QWORD *)v59 + 4),
            Count,
            v11,
            Timeout,
            -2);
  }
  v30 = v29;
  if ( v29 >= 0 && v5 )
  {
    v31 = (_QWORD *)(a1 + 88);
    if ( a1 + 88 >= MmUserProbeAddress )
      v31 = (_QWORD *)MmUserProbeAddress;
    *v31 = v11->VirtualAddress;
    v32 = (_QWORD *)(a1 + 96);
    if ( a1 + 96 >= MmUserProbeAddress )
      v32 = (_QWORD *)MmUserProbeAddress;
    *v32 = v11->PagingFenceValue;
  }
  if ( v21 )
    ExReleaseRundownProtection(v21 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
  {
    v65 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v65) >= 0 )
    {
      v33 = v65;
      if ( v65 || (v33 = DxgkThreadObjectCreateDxgThread(1), (v65 = v33) != 0LL) )
      {
        if ( *((_DWORD *)v33 + 12) )
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v33 + 12), 0LL, 0LL);
      }
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v71);
  if ( v62 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v14 + 160));
    ExReleasePushLockSharedEx(v14 + 144, 0LL);
  }
  else
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v14 + 136));
  }
  KeLeaveCriticalRegion();
  if ( v58 )
    DXGPAGINGQUEUE::ReleaseReference(v58);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
  if ( v57 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v55);
  }
  return v30;
}
