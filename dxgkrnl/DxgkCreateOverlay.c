/*
 * XREFs of DxgkCreateOverlay @ 0x1C0330DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003634 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0024440 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0025208 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C005425C (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C02E407C (-CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkCreateOverlay(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  bool v8; // sf
  _D3DKMT_CREATEOVERLAY *v9; // rax
  struct ADAPTER_RENDER **v10; // rbx
  __int64 hDevice; // rbx
  __int64 v13; // r9
  unsigned int v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // r8
  bool v17; // sf
  int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // r8
  bool v21; // sf
  size_t PrivateDriverDataSize; // rsi
  void *v23; // r9
  char *v24; // rdx
  _DWORD *v25; // rdx
  struct DXGDEVICE *v26; // [rsp+50h] [rbp-168h] BYREF
  DXGDEVICE *v27; // [rsp+58h] [rbp-160h] BYREF
  int v28; // [rsp+60h] [rbp-158h] BYREF
  __int64 v29; // [rsp+68h] [rbp-150h]
  char v30; // [rsp+70h] [rbp-148h]
  _QWORD v31[2]; // [rsp+78h] [rbp-140h] BYREF
  _BYTE v32[24]; // [rsp+88h] [rbp-130h] BYREF
  _D3DKMT_CREATEOVERLAY v33; // [rsp+A0h] [rbp-118h] BYREF
  _BYTE v34[160]; // [rsp+F0h] [rbp-C8h] BYREF

  v28 = -1;
  v29 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2022;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2022);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 2022);
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( !v30 )
      return 3221225485LL;
    v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_16:
    if ( v8 )
      McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v28);
    return 3221225485LL;
  }
  v9 = (_D3DKMT_CREATEOVERLAY *)a1;
  if ( a1 >= MmUserProbeAddress )
    v9 = (_D3DKMT_CREATEOVERLAY *)MmUserProbeAddress;
  v33 = *v9;
  v27 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v26, v33.hDevice, (struct _KTHREAD **)Current, &v27);
  v10 = (struct ADAPTER_RENDER **)v27;
  if ( !v27 )
  {
    hDevice = v33.hDevice;
    WdLogSingleEntry2(2LL, v33.hDevice, -1073741811LL);
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
    if ( v26 && _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v26 + 2), v26);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( !v30 )
      return 3221225485LL;
    LOBYTE(v6) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_16;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31, v27);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v34, (__int64)v10, 0, v13, 0);
  v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v34, 0LL);
  if ( (v14 & 0x80000000) != 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v34);
    if ( v31[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
    if ( v26 && _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v26 + 2), v26);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( !v30 )
      return v14;
    v17 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_27:
    if ( v17 )
      McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v28);
    return v14;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 208LL))() )
  {
    v18 = -1073741790;
    WdLogSingleEntry1(4LL, -1073741790LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v34);
    if ( v31[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
    if ( v26 && _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v26 + 2), v26);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( !v30 )
      return (unsigned int)v18;
    LOBYTE(v19) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v21 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_38;
  }
  if ( v33.OverlayInfo.PrivateDriverDataSize && v33.OverlayInfo.pPrivateDriverData )
  {
    PrivateDriverDataSize = v33.OverlayInfo.PrivateDriverDataSize;
    v23 = (void *)operator new[](v33.OverlayInfo.PrivateDriverDataSize, 0x4B677844u, 256LL);
    v33.OverlayInfo.pPrivateDriverData = v23;
    if ( !v23 )
    {
      v14 = -1073741801;
      WdLogSingleEntry3(3LL, v10, (unsigned int)PrivateDriverDataSize, -1073741801LL);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v34);
      if ( v31[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
      if ( v26 && _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v26 + 2), v26);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( !v30 )
        return v14;
      LOBYTE(v15) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v17 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_27;
    }
    v24 = *(char **)(a1 + 48);
    if ( &v24[PrivateDriverDataSize] < v24 || (unsigned __int64)&v24[PrivateDriverDataSize] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v23, v24, PrivateDriverDataSize);
  }
  else
  {
    v33.OverlayInfo.PrivateDriverDataSize = 0;
    v33.OverlayInfo.pPrivateDriverData = 0LL;
  }
  if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v10) )
  {
    WdLogSingleEntry1(1LL, 638LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDevice->IsSupportOverlay()", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v32, v10[2]);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
  v18 = DXGDEVICE::CreateOverlay((DXGDEVICE *)v10, &v33);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32);
  operator delete(v33.OverlayInfo.pPrivateDriverData);
  if ( v18 >= 0 )
  {
    v25 = (_DWORD *)(a1 + 64);
    if ( a1 + 64 >= MmUserProbeAddress )
      v25 = (_DWORD *)MmUserProbeAddress;
    *v25 = v33.hOverlay;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v32);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v34);
  if ( v31[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
  if ( v26 && _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v26 + 2), v26);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 )
  {
    v21 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_38:
    if ( v21 )
      McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v28);
  }
  return (unsigned int)v18;
}
