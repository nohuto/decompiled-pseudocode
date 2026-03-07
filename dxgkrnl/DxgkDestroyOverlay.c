__int64 __fastcall DxgkDestroyOverlay(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  bool v8; // sf
  __int64 v9; // rbx
  DXGDEVICE *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // r12
  unsigned int v15; // ebx
  __int64 v16; // r8
  int v17; // edx
  __int64 v18; // r14
  struct ADAPTER_RENDER **v19; // r15
  __int64 v20; // r8
  int v21; // edx
  struct DXGDEVICE *v22; // [rsp+50h] [rbp-D8h] BYREF
  int v23; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-C8h]
  char v25; // [rsp+68h] [rbp-C0h]
  __int64 v26; // [rsp+70h] [rbp-B8h]
  _QWORD v27[2]; // [rsp+78h] [rbp-B0h] BYREF
  DXGDEVICE *v28; // [rsp+88h] [rbp-A0h] BYREF
  _BYTE v29[16]; // [rsp+90h] [rbp-98h] BYREF
  _BYTE v30[32]; // [rsp+A0h] [rbp-88h] BYREF
  _BYTE v31[64]; // [rsp+C0h] [rbp-68h] BYREF

  v3 = (__int64 *)a1;
  v23 = -1;
  v24 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v25 = 1;
    v23 = 2025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2025);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 2025);
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
LABEL_45:
    if ( v8 )
      McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v23);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v9 = *v3;
  v26 = v9;
  v28 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v22, v9, (struct _KTHREAD **)Current, &v28);
  v10 = v28;
  if ( !v28 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)v9, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      (unsigned int)v9,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_13:
    if ( v22 && _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v22 + 2), v22);
    goto LABEL_7;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27, v28);
  COREACCESS::COREACCESS((COREACCESS *)v31, *(struct DXGADAPTER *const *)(*((_QWORD *)v10 + 2) + 16LL));
  COREACCESS::AcquireShared((COREACCESS *)v31, 0LL);
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) + 200LL) == 4 )
  {
    COREACCESS::~COREACCESS((COREACCESS *)v31);
    if ( v27[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
    if ( !v22 )
      goto LABEL_22;
    goto LABEL_20;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v30, Current);
  v14 = HIDWORD(v26);
  v15 = (HIDWORD(v26) >> 6) & 0xFFFFFF;
  if ( v15 >= *((_DWORD *)Current + 74) )
    goto LABEL_32;
  v16 = *((_QWORD *)Current + 35);
  if ( ((HIDWORD(v26) >> 25) & 0x60) != (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x60) )
    goto LABEL_32;
  if ( (*(_DWORD *)(v16 + 16LL * v15 + 8) & 0x2000) != 0 )
    goto LABEL_32;
  v17 = *(_DWORD *)(v16 + 16LL * v15 + 8) & 0x1F;
  if ( !v17 )
    goto LABEL_32;
  if ( v17 != 6 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_32:
    v18 = 0LL;
    goto LABEL_33;
  }
  v18 = *(_QWORD *)(v16 + 16LL * v15);
LABEL_33:
  if ( !v18 )
  {
    WdLogSingleEntry2(3LL, v14, -1073741811LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
    COREACCESS::~COREACCESS((COREACCESS *)v31);
    if ( v27[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
    goto LABEL_13;
  }
  v19 = (struct ADAPTER_RENDER **)v28;
  if ( v28 != *(DXGDEVICE **)(v18 + 16) )
  {
    WdLogSingleEntry3(3LL, v14, (unsigned int)v26, -1073741811LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
    COREACCESS::~COREACCESS((COREACCESS *)v31);
    if ( v27[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
    if ( v22 && _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v22 + 2), v22);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( !v25 )
      return 3221225485LL;
    LOBYTE(v6) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_45;
  }
  if ( !DXGDEVICE::IsSupportOverlay(v28) )
  {
    WdLogSingleEntry1(1LL, 984LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDevice->IsSupportOverlay()", 984LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v15 < *((_DWORD *)Current + 74) )
  {
    v20 = *((_QWORD *)Current + 35);
    v21 = *(_DWORD *)(v20 + 16LL * v15 + 8);
    if ( (((unsigned int)v14 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16LL * v15 + 8) & 0x60)
      && (v21 & 0x2000) == 0
      && (v21 & 0x1F) != 0 )
    {
      *(_DWORD *)(v20 + 16LL * (((unsigned int)v14 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
  DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v29, v19[2]);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  DXGDEVICE::DestroyOverlay((DXGDEVICE *)v19, (struct DXGOVERLAY ***)v18);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
  COREACCESS::~COREACCESS((COREACCESS *)v31);
  if ( v27[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
  if ( v22 )
  {
LABEL_20:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v22 + 2), v22);
  }
LABEL_22:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v23);
  return 0LL;
}
