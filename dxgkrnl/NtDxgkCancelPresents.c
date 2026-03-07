__int64 __fastcall NtDxgkCancelPresents(__int64 a1)
{
  ULONG64 v1; // rbx
  struct _KTHREAD **Current; // rdi
  __int64 v3; // rdi
  const wchar_t *v4; // r9
  __int128 v6; // xmm1
  __int64 v7; // xmm0_8
  __int64 v8; // rbx
  __int64 v9; // rbx
  const wchar_t *v10; // r9
  __int64 v11; // r9
  struct DXGDEVICE *v12; // rsi
  int v13; // eax
  unsigned int v14; // ebx
  struct DXGDEVICE *v15; // [rsp+50h] [rbp-118h] BYREF
  struct DXGDEVICE *v16; // [rsp+58h] [rbp-110h] BYREF
  _QWORD v17[2]; // [rsp+60h] [rbp-108h] BYREF
  unsigned int v18[4]; // [rsp+70h] [rbp-F8h]
  __int128 v19; // [rsp+80h] [rbp-E8h]
  __int64 v20; // [rsp+90h] [rbp-D8h]
  _BYTE v21[8]; // [rsp+98h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-C8h]
  char v23; // [rsp+A8h] [rbp-C0h]
  _BYTE v24[160]; // [rsp+B0h] [rbp-B8h] BYREF

  v1 = a1;
  v16 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    LODWORD(v3) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v4 = L"Invalid DXGPROCESS. Returning 0x%I64x";
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v4, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v3;
  }
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    if ( v1 >= MmUserProbeAddress )
      v1 = MmUserProbeAddress;
    *(_OWORD *)v18 = *(_OWORD *)v1;
    v6 = *(_OWORD *)(v1 + 16);
    v7 = *(_QWORD *)(v1 + 32);
  }
  else
  {
    *(_OWORD *)v18 = *(_OWORD *)v1;
    v6 = *(_OWORD *)(v1 + 16);
    v7 = *(_QWORD *)(v1 + 32);
  }
  v20 = v7;
  v19 = v6;
  if ( v18[0] != 40 )
  {
    LODWORD(v3) = -1073741811;
    WdLogSingleEntry3(2LL, v18[0], 40LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid cbSize:0x%I64x specified. Expected cbsize:0x%I64x. Returning:0x%I64x",
      v18[0],
      40LL,
      -1073741811LL,
      0LL,
      0LL);
    return (unsigned int)v3;
  }
  if ( !*((_QWORD *)&v19 + 1) )
  {
    LODWORD(v3) = -1073741811;
    WdLogSingleEntry1((unsigned int)((DWORD2(v19) | HIDWORD(v19)) + 2), -1073741811LL);
    v4 = L"Invalid CompSurfaceLuid for Cancel Presents, returning 0x%I64x";
    goto LABEL_3;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v15, v18[1], Current, &v16);
  if ( !v16 )
  {
    v8 = v18[1];
    LODWORD(v3) = -1073741811;
    WdLogSingleEntry2(2LL, v18[1], -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v8,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_16;
  }
  v9 = *(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL);
  if ( (*(_DWORD *)(v9 + 2792) & 8) != 0 )
  {
    WdLogSingleEntry1(2LL, *(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL));
    v10 = L"Presentation is not supported on MCDM DXGADAPTER: 0x%I64x";
    goto LABEL_23;
  }
  if ( *(_BYTE *)(v9 + 209) )
  {
    WdLogSingleEntry1(2LL, *(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL));
    v10 = L"NtDxgkCancelPresents is not currently supported on para-v adapter: 0x%I64x";
LABEL_23:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
    if ( v15 && _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v15 + 2), v15);
    LODWORD(v3) = -1073741811;
    return (unsigned int)v3;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17, v16);
  v22 = v9;
  v23 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
  if ( *(_DWORD *)(v9 + 200) != 1 )
  {
    LODWORD(v3) = -1073741823;
    WdLogSingleEntry2(2LL, v9, -1073741823LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGADAPTER: 0x%I64x stopped, returning 0x%I64x",
      v9,
      -1073741823LL,
      0LL,
      0LL,
      0LL);
    if ( v23 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
    if ( v17[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17);
    if ( !v15 )
      return (unsigned int)v3;
    goto LABEL_17;
  }
  v12 = v16;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v24, (__int64)v16, 2, v11, 0);
  v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v24, 0LL);
  v3 = v13;
  if ( v13 < 0 )
  {
    WdLogSingleEntry1(2LL, v13);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire CoreDeviceAccess, returning 0x%I64x",
      v3,
      0LL,
      0LL,
      0LL,
      0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v24);
    if ( v23 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
    if ( v17[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17);
LABEL_16:
    if ( !v15 )
      return (unsigned int)v3;
LABEL_17:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v15 + 2), v15);
    return (unsigned int)v3;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, unsigned int, unsigned int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 2928) + 736LL) + 8LL)
                                                                                               + 1048LL))(
          *((_QWORD *)v12 + 100),
          *((_QWORD *)&v19 + 1),
          v20,
          v19,
          v18[3],
          v18[2]);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v24);
  if ( v23 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
  if ( v17[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17);
  if ( v15 && _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v15 + 2), v15);
  return v14;
}
