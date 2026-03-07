__int64 __fastcall DxgkFlipOverlay(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_FLIPOVERLAY *v3; // rbx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v6; // rcx
  __int64 v7; // r8
  bool v8; // sf
  struct ADAPTER_RENDER **v9; // rsi
  __int64 hDevice; // rbx
  D3DKMT_HANDLE v11; // eax
  __int64 v12; // r8
  int v13; // edx
  struct DXGOVERLAY *v14; // rbx
  int v16; // r14d
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGDEVICE *v22; // [rsp+50h] [rbp-E8h] BYREF
  int v23; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-D8h]
  char v25; // [rsp+68h] [rbp-D0h]
  DXGDEVICE *v26; // [rsp+70h] [rbp-C8h] BYREF
  _QWORD v27[2]; // [rsp+78h] [rbp-C0h] BYREF
  _D3DKMT_FLIPOVERLAY v28; // [rsp+88h] [rbp-B0h] BYREF
  _BYTE v29[16]; // [rsp+A8h] [rbp-90h] BYREF
  _BYTE v30[24]; // [rsp+B8h] [rbp-80h] BYREF
  _BYTE v31[80]; // [rsp+D0h] [rbp-68h] BYREF

  v3 = (_D3DKMT_FLIPOVERLAY *)a1;
  v23 = -1;
  v24 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v25 = 1;
    v23 = 2024;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2024);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 2024);
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( !v25 )
      return 3221225485LL;
    v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_35:
    if ( v8 )
      McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v23);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_D3DKMT_FLIPOVERLAY *)MmUserProbeAddress;
  v28 = *v3;
  v26 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v22, v28.hDevice, (struct _KTHREAD **)Current, &v26);
  v9 = (struct ADAPTER_RENDER **)v26;
  if ( !v26 )
  {
    hDevice = v28.hDevice;
    WdLogSingleEntry2(2LL, v28.hDevice, -1073741811LL);
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
    if ( v22 && _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v22 + 2), v22);
    goto LABEL_7;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27, v26);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v30, Current);
  v11 = (v28.hOverlay >> 6) & 0xFFFFFF;
  if ( v11 >= *((_DWORD *)Current + 74) )
    goto LABEL_22;
  v12 = *((_QWORD *)Current + 35);
  if ( ((v28.hOverlay >> 25) & 0x60) != (*(_BYTE *)(v12 + 16LL * v11 + 8) & 0x60) )
    goto LABEL_22;
  if ( (*(_DWORD *)(v12 + 16LL * v11 + 8) & 0x2000) != 0 )
    goto LABEL_22;
  v13 = *(_DWORD *)(v12 + 16LL * v11 + 8) & 0x1F;
  if ( !v13 )
    goto LABEL_22;
  if ( v13 != 6 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_22:
    v14 = 0LL;
    goto LABEL_23;
  }
  v14 = *(struct DXGOVERLAY **)(v12 + 16LL * v11);
LABEL_23:
  if ( !v14 )
  {
    WdLogSingleEntry2(3LL, v28.hOverlay, -1073741811LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
    if ( v27[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
    goto LABEL_13;
  }
  if ( v9 != *((struct ADAPTER_RENDER ***)v14 + 2) )
  {
    WdLogSingleEntry3(3LL, v28.hOverlay, v28.hDevice, -1073741811LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
    if ( v27[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
    if ( v22 && _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v22 + 2), v22);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( !v25 )
      return 3221225485LL;
    LOBYTE(v6) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_35;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
  COREOVERLAYACCESS::COREOVERLAYACCESS((COREOVERLAYACCESS *)v31, v14);
  v16 = COREOVERLAYACCESS::AcquireShared((COREOVERLAYACCESS *)v31);
  if ( v16 >= 0 )
  {
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v9) )
    {
      WdLogSingleEntry1(1LL, 877LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDevice->IsSupportOverlay()", 877LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v29, v9[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
    v19 = DXGOVERLAY::FlipOverlay(v14, &v28);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v31);
    if ( v27[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
    if ( v22 && _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v22 + 2), v22);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v23);
    return v19;
  }
  else
  {
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v31);
    if ( v27[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
    if ( v22 && _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v22 + 2), v22);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v23);
    return (unsigned int)v16;
  }
}
