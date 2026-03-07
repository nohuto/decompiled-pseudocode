__int64 __fastcall DxgkChangeVideoMemoryReservationInternal(
        _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION *a1,
        char a2,
        __int64 a3)
{
  struct DXGADAPTER *v3; // r14
  ULONG64 v6; // rcx
  ULONG64 v7; // rax
  struct _KTHREAD **Current; // r15
  unsigned int v9; // edi
  HANDLE hProcess; // r12
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  bool v14; // sf
  struct DXGPROCESS *Process; // r12
  DXGADAPTER *v17; // rdi
  int PairingAdapters; // r15d
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGADAPTER *v21; // r14
  ADAPTER_RENDER *v22; // r9
  UINT *p_PhysicalAdapterIndex; // rdx
  unsigned int v24; // r14d
  __int64 v25; // rcx
  __int64 v26; // r8
  int v28; // [rsp+58h] [rbp-170h] BYREF
  __int64 v29; // [rsp+60h] [rbp-168h]
  char v30; // [rsp+68h] [rbp-160h]
  struct DXGADAPTER *v31; // [rsp+70h] [rbp-158h] BYREF
  DXGADAPTER *v32; // [rsp+78h] [rbp-150h]
  _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION v33; // [rsp+80h] [rbp-148h] BYREF
  DXGADAPTER *v34[2]; // [rsp+A0h] [rbp-128h] BYREF
  _BYTE v35[80]; // [rsp+B0h] [rbp-118h] BYREF
  _BYTE v36[144]; // [rsp+100h] [rbp-C8h] BYREF

  v3 = (struct DXGADAPTER *)a3;
  v28 = -1;
  v29 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2120;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2120);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 2120);
  memset(&v33, 0, sizeof(v33));
  if ( a2 )
  {
    v6 = MmUserProbeAddress;
    v7 = (ULONG64)a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v7 = MmUserProbeAddress;
    *(_OWORD *)&v33.hProcess = *(_OWORD *)v7;
    v33.Reservation = *(_QWORD *)(v7 + 16);
  }
  else
  {
    v33 = *a1;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6);
  if ( !Current )
  {
    v9 = -1073741811;
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
LABEL_15:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( !v30 )
      return v9;
    v14 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_17:
    if ( v14 )
      McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v28);
    return v9;
  }
  hProcess = v33.hProcess;
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v35, v33.hProcess, 512);
  if ( hProcess )
  {
    v11 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v35, 1);
    v9 = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry2(3LL, hProcess, v11);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v35);
      goto LABEL_15;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v35);
  }
  else
  {
    Process = (struct DXGPROCESS *)Current;
  }
  v31 = v3;
  v17 = 0LL;
  v32 = 0LL;
  if ( !v3 )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v34, v33.hAdapter, Current, &v31, 1);
    if ( !v31 )
    {
      v9 = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, Current, v33.hAdapter);
      if ( v34[0] )
        DXGADAPTER::ReleaseReference(v34[0]);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v35);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( !v30 )
        return v9;
      LOBYTE(v12) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v14 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_17;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v31 + 3);
    v3 = v31;
    v17 = v31;
    v32 = v31;
    if ( v34[0] )
      DXGADAPTER::ReleaseReference(v34[0]);
  }
  v31 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v3, 0, &v31, (unsigned __int64 *)v34, 0LL, 0LL, 0);
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry1(3LL, v3);
LABEL_32:
    if ( v17 )
      DXGADAPTER::ReleaseReference(v17);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v35);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v28);
    return (unsigned int)PairingAdapters;
  }
  v21 = v31;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v36, v31, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v36, 0LL);
  DXGADAPTER::ReleaseReference(v21);
  if ( PairingAdapters < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
    goto LABEL_32;
  }
  v22 = (ADAPTER_RENDER *)*((_QWORD *)v21 + 366);
  if ( a2 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v21 + 27) + 64LL) + 40LL) + 28LL) >= 0x5018u )
  {
    p_PhysicalAdapterIndex = &a1->PhysicalAdapterIndex;
    if ( (unsigned __int64)&a1->PhysicalAdapterIndex >= MmUserProbeAddress )
      p_PhysicalAdapterIndex = (UINT *)MmUserProbeAddress;
    v33.PhysicalAdapterIndex = *p_PhysicalAdapterIndex;
  }
  v24 = ADAPTER_RENDER::ChangeVideoMemoryReservation(v22, Process, &v33);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
  if ( v17 )
    DXGADAPTER::ReleaseReference(v17);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v35);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v28);
  return v24;
}
