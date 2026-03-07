__int64 __fastcall DxgkQueryAllocationResidency(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v3; // rbx
  unsigned __int8 v4; // r14
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  unsigned int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // r8
  bool v10; // sf
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  struct DXGPROCESS **v13; // rbx
  __int64 hDevice; // rbx
  __int64 v16; // r9
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGDEVICE *v21; // [rsp+50h] [rbp-128h] BYREF
  int v22; // [rsp+58h] [rbp-120h] BYREF
  __int64 v23; // [rsp+60h] [rbp-118h]
  char v24; // [rsp+68h] [rbp-110h]
  struct DXGDEVICE *v25; // [rsp+70h] [rbp-108h] BYREF
  _D3DKMT_QUERYALLOCATIONRESIDENCY v26; // [rsp+78h] [rbp-100h] BYREF
  _BYTE v27[24]; // [rsp+98h] [rbp-E0h] BYREF
  _BYTE v28[160]; // [rsp+B0h] [rbp-C8h] BYREF

  v3 = (__int128 *)a1;
  v22 = -1;
  v23 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2008);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2008);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    v7 = -1073741811;
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
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( !v24 )
      return v7;
    v10 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_20:
    if ( v10 )
      McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v22);
    return v7;
  }
  if ( v4 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int128 *)MmUserProbeAddress;
    v11 = *v3;
    v12 = v3[1];
  }
  else
  {
    v11 = *v3;
    v12 = v3[1];
  }
  *(_OWORD *)&v26.AllocationCount = v12;
  *(_OWORD *)&v26.hDevice = v11;
  v25 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v21, v11, Current, &v25);
  v13 = (struct DXGPROCESS **)v25;
  if ( !v25 )
  {
    hDevice = v26.hDevice;
    v7 = -1073741811;
    WdLogSingleEntry2(2LL, v26.hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( !v24 )
      return v7;
    LOBYTE(v8) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v10 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_20;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v27, v25);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v28, (__int64)v13, 0, v16, 0);
  v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v28, 0LL);
  v7 = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry2(3LL, v13, v17);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v28);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v27);
    if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
    goto LABEL_7;
  }
  v18 = DXGDEVICE::QueryAllocationResidency(v13, &v26, v4);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v28);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v27);
  if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v22);
  return v18;
}
