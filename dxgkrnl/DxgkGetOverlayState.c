__int64 __fastcall DxgkGetOverlayState(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  bool v8; // sf
  _D3DKMT_GETOVERLAYSTATE *v9; // rax
  __int64 hDevice; // r14
  struct ADAPTER_RENDER **v11; // rsi
  D3DKMT_HANDLE v12; // eax
  __int64 v13; // rbx
  unsigned int v14; // ecx
  int v15; // ecx
  struct DXGOVERLAY *v16; // rbx
  int v18; // r14d
  __int64 v19; // rcx
  __int64 v20; // r8
  int OverlayState; // ebx
  __int64 v22; // rcx
  __int64 v23; // r8
  _BYTE *v24; // rdx
  struct DXGDEVICE *v25; // [rsp+50h] [rbp-E8h] BYREF
  DXGDEVICE *v26; // [rsp+58h] [rbp-E0h] BYREF
  int v27; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-D0h]
  char v29; // [rsp+70h] [rbp-C8h]
  _D3DKMT_GETOVERLAYSTATE v30; // [rsp+78h] [rbp-C0h] BYREF
  _BYTE v31[16]; // [rsp+88h] [rbp-B0h] BYREF
  _BYTE v32[16]; // [rsp+98h] [rbp-A0h] BYREF
  _BYTE v33[24]; // [rsp+A8h] [rbp-90h] BYREF
  _BYTE v34[80]; // [rsp+C0h] [rbp-78h] BYREF

  v27 = -1;
  v28 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v29 = 1;
    v27 = 2057;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2057);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 2057);
  Current = DXGPROCESS::GetCurrent(v4);
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
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( !v29 )
      return 3221225485LL;
    v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_32:
    if ( v8 )
      McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v27);
    return 3221225485LL;
  }
  v9 = (_D3DKMT_GETOVERLAYSTATE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v9 = (_D3DKMT_GETOVERLAYSTATE *)MmUserProbeAddress;
  v30 = *v9;
  v26 = 0LL;
  hDevice = v30.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v25, v30.hDevice, (struct _KTHREAD **)Current, &v26);
  v11 = (struct ADAPTER_RENDER **)v26;
  if ( !v26 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)hDevice, -1073741811LL);
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
LABEL_13:
    if ( v25 && _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
    goto LABEL_7;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v31, v26);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v33, Current);
  v12 = (v30.hOverlay >> 6) & 0xFFFFFF;
  if ( v12 >= *((_DWORD *)Current + 74) )
    goto LABEL_22;
  v13 = *((_QWORD *)Current + 35);
  v14 = *(_DWORD *)(v13 + 16LL * v12 + 8);
  if ( v30.hOverlay >> 30 != ((v14 >> 5) & 3) )
    goto LABEL_22;
  if ( (v14 & 0x2000) != 0 )
    goto LABEL_22;
  v15 = v14 & 0x1F;
  if ( !v15 )
    goto LABEL_22;
  if ( v15 != 6 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_22:
    v16 = 0LL;
    goto LABEL_23;
  }
  v16 = *(struct DXGOVERLAY **)(v13 + 16LL * v12);
LABEL_23:
  if ( !v16 )
  {
    WdLogSingleEntry2(3LL, v30.hOverlay, -1073741811LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v31);
    goto LABEL_13;
  }
  if ( v11 != *((struct ADAPTER_RENDER ***)v16 + 2) )
  {
    WdLogSingleEntry3(3LL, v30.hOverlay, hDevice, -1073741811LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v31);
    if ( v25 && _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( !v29 )
      return 3221225485LL;
    LOBYTE(v6) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_32;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
  COREOVERLAYACCESS::COREOVERLAYACCESS((COREOVERLAYACCESS *)v34, v16);
  v18 = COREOVERLAYACCESS::AcquireShared((COREOVERLAYACCESS *)v34);
  if ( v18 < 0 )
  {
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v34);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v31);
    if ( v25 && _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v27);
    return (unsigned int)v18;
  }
  if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v11) )
  {
    WdLogSingleEntry1(1LL, 1092LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDevice->IsSupportOverlay()", 1092LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v32, v11[2]);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
  OverlayState = DXGOVERLAY::GetOverlayState(v16, &v30);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32);
  if ( OverlayState >= 0 )
  {
    v24 = (_BYTE *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v24 = (_BYTE *)MmUserProbeAddress;
    *v24 = v30.OverlayEnabled;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v32);
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v34);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v31);
    if ( !v25 )
      goto LABEL_49;
    goto LABEL_47;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v32);
  COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v34);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v31);
  if ( v25 )
  {
LABEL_47:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
  }
LABEL_49:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v27);
  return (unsigned int)OverlayState;
}
