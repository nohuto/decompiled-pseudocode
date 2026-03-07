__int64 __fastcall DxgkQueryVideoMemoryInfo(_OWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  bool v4; // r13
  struct DXGADAPTER *v5; // rdi
  ULONG64 v6; // rcx
  _D3DKMT_QUERYVIDEOMEMORYINFO *v7; // r14
  _OWORD *v8; // rax
  struct _KTHREAD **Current; // rbx
  DXGPROCESS *Process; // r12
  int v11; // eax
  int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  int PairingAdapters; // ebx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGADAPTER *v21; // rbx
  UINT *v22; // rdx
  DXG_GUEST_VIRTUALGPU_VMBUS *v23; // rdi
  unsigned int v24; // ebx
  unsigned int HostProcess; // eax
  int VideoMemoryInfo; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // [rsp+50h] [rbp-178h] BYREF
  __int64 v30; // [rsp+58h] [rbp-170h]
  char v31; // [rsp+60h] [rbp-168h]
  struct DXGADAPTER *v32; // [rsp+68h] [rbp-160h] BYREF
  DXGADAPTER *v33; // [rsp+70h] [rbp-158h] BYREF
  _D3DKMT_QUERYVIDEOMEMORYINFO v34; // [rsp+80h] [rbp-148h] BYREF
  unsigned __int64 v35; // [rsp+B8h] [rbp-110h] BYREF
  _BYTE v36[80]; // [rsp+C0h] [rbp-108h] BYREF
  _BYTE v37[144]; // [rsp+110h] [rbp-B8h] BYREF

  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v29 = -1;
  LOBYTE(v5) = 0;
  v30 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v31 = 1;
    v29 = 2119;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2119);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 2119);
  memset(&v34, 0, sizeof(v34));
  v7 = &v34;
  if ( v4 )
  {
    v6 = MmUserProbeAddress;
    v8 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v8 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)&v34.hProcess = *v8;
    *(_OWORD *)&v34.Budget = v8[1];
    *(_OWORD *)&v34.CurrentReservation = v8[2];
  }
  else
  {
    v7 = (_D3DKMT_QUERYVIDEOMEMORYINFO *)a1;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6);
  if ( !Current )
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
LABEL_24:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 != (_BYTE)v5 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v29);
    return 3221225485LL;
  }
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v36, v7->hProcess, 1024);
  Process = (DXGPROCESS *)Current;
  if ( v7->hProcess )
  {
    v11 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v36, 1);
    v12 = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry2(3LL, v7->hProcess, v11);
LABEL_15:
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v36);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
      if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v29);
      return (unsigned int)v12;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v36);
  }
  v32 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v33, v7->hAdapter, Current, &v32, 1);
  v5 = v32;
  if ( !v32 )
  {
    WdLogSingleEntry2(2LL, Current, v7->hAdapter);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid adapter, pDxgProcess=0x%I64x, hAdapter=0x%8x",
      (__int64)Current,
      v7->hAdapter,
      0LL,
      0LL,
      0LL);
    if ( v33 )
      DXGADAPTER::ReleaseReference(v33);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v36);
    goto LABEL_24;
  }
  v32 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v5, 0, &v32, &v35, 0LL, 0LL, 0);
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry1(3LL, v5);
LABEL_30:
    if ( v33 )
      DXGADAPTER::ReleaseReference(v33);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v36);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v29);
    return (unsigned int)PairingAdapters;
  }
  v21 = v32;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, v32, 0LL);
  v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v37, 0LL);
  DXGADAPTER::ReleaseReference(v21);
  if ( v12 < 0 )
  {
    WdLogSingleEntry1(3LL, v21);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37);
    if ( v33 )
      DXGADAPTER::ReleaseReference(v33);
    goto LABEL_15;
  }
  if ( v4 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v21 + 27) + 64LL) + 40LL) + 28LL) >= 0x5018u )
  {
    v22 = (UINT *)(a1 + 3);
    if ( (unsigned __int64)(a1 + 3) >= MmUserProbeAddress )
      v22 = (UINT *)MmUserProbeAddress;
    v7->PhysicalAdapterIndex = *v22;
    v21 = v32;
  }
  if ( *((_BYTE *)v21 + 209) )
  {
    v23 = (struct DXGADAPTER *)((char *)v21 + 4472);
    v24 = *((_DWORD *)v21 + 1140);
    HostProcess = DXGPROCESS::GetHostProcess(Process);
    VideoMemoryInfo = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryVideoMemoryInfo(v23, HostProcess, v24, v7);
  }
  else
  {
    VideoMemoryInfo = ADAPTER_RENDER::QueryVideoMemoryInfo(*((ADAPTER_RENDER **)v21 + 366), Process, v7);
  }
  PairingAdapters = VideoMemoryInfo;
  if ( VideoMemoryInfo < 0 )
  {
    WdLogSingleEntry1(3LL, VideoMemoryInfo);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37);
    goto LABEL_30;
  }
  if ( v4 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    *a1 = *(_OWORD *)&v7->hProcess;
    a1[1] = *(_OWORD *)&v7->Budget;
    a1[2] = *(_OWORD *)&v7->CurrentReservation;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37);
  if ( v33 )
    DXGADAPTER::ReleaseReference(v33);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v36);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v29);
  return 0LL;
}
