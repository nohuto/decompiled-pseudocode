/*
 * XREFs of DxgkSetGammaRamp @ 0x1C02EDBA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003634 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0003DD8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C0004868 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ??0DXGK_GAMMA_RAMP@@QEAA@XZ @ 0x1C00050E4 (--0DXGK_GAMMA_RAMP@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A280 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?SetDeviceGammaRamp@DXGDEVICE@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00489BC (-SetDeviceGammaRamp@DXGDEVICE@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     MonitorNotifyDXGIGammaRampChange @ 0x1C0179CDC (MonitorNotifyDXGIGammaRampChange.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C01AFF6C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 */

__int64 __fastcall DxgkSetGammaRamp(__int64 a1)
{
  _OWORD *v1; // rbx
  struct _KTHREAD **Current; // rdx
  __int64 v4; // r14
  struct DXGDEVICE *v5; // rsi
  __int64 v6; // r13
  unsigned int v7; // ebx
  enum _D3DDDI_GAMMARAMP_TYPE v8; // r15d
  unsigned int v9; // r12d
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // ebx
  DXGK_GAMMA_RAMP *v13; // rax
  DXGK_GAMMA_RAMP *v14; // rdi
  __int64 v15; // r15
  void *v16; // rcx
  const void *v17; // rdx
  char *v18; // r9
  __int64 v19; // rbx
  unsigned int v20; // esi
  __int64 v21; // r8
  int v22; // eax
  char v23; // al
  struct DXGDEVICE *v24; // [rsp+50h] [rbp-138h] BYREF
  struct _KTHREAD **v25; // [rsp+58h] [rbp-130h]
  _QWORD v26[2]; // [rsp+60h] [rbp-128h] BYREF
  unsigned int v27; // [rsp+70h] [rbp-118h] BYREF
  unsigned int v28; // [rsp+74h] [rbp-114h]
  struct DXGDEVICE *v29[2]; // [rsp+78h] [rbp-110h] BYREF
  unsigned int v30[4]; // [rsp+88h] [rbp-100h]
  void *Src[2]; // [rsp+98h] [rbp-F0h]
  _BYTE v32[160]; // [rsp+B0h] [rbp-D8h] BYREF

  v1 = (_OWORD *)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  v25 = Current;
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
    return 3221225485LL;
  }
  if ( (unsigned __int64)v1 >= MmUserProbeAddress )
    v1 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v30 = *v1;
  *(_OWORD *)Src = v1[1];
  v29[0] = 0LL;
  v4 = v30[0];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v24, v30[0], Current, v29);
  v5 = v29[0];
  if ( !v29[0] )
  {
    WdLogSingleEntry2(2LL, (unsigned int)v4, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v4,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_36:
    if ( v24 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v24 + 2), v24);
    }
    return 3221225485LL;
  }
  v6 = *((_QWORD *)v29[0] + 235);
  if ( !v6 )
  {
    v7 = -1073741637;
    WdLogSingleEntry2(3LL, v4, -1073741637LL);
    goto LABEL_10;
  }
  v7 = 0;
  v8 = v30[2];
  v9 = (unsigned int)Src[1];
  if ( v30[2] == 2 )
  {
    v7 = (*(_DWORD *)(v6 + 2264) & 1) == 0 ? 0xC000000D : 0;
    if ( LODWORD(Src[1]) != 1536 )
      v7 = -1073741811;
  }
  else if ( v30[2] != 3 || LODWORD(Src[1]) != 12324 )
  {
    v7 = -1073741811;
  }
  if ( (v7 & 0x80000000) != 0 )
  {
    WdLogSingleEntry3(3LL, (int)v30[2], v4, (int)v7);
LABEL_10:
    if ( !v24 )
      return v7;
LABEL_11:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v24 + 2), v24);
    return v7;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26, v29[0]);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v32, (__int64)v5, 1, v10, 0);
  if ( *(_BYTE *)(*(_QWORD *)(v6 + 2920) + 291LL) )
    v11 = COREDEVICEACCESS::AcquireExclusive((__int64)v32, 1LL);
  else
    v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v32, 0LL);
  v7 = v11;
  if ( v11 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
    if ( v26[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
    if ( !v24 )
      return v7;
    goto LABEL_11;
  }
  if ( *(_DWORD *)(*(_QWORD *)(v6 + 2920) + 96LL) != *((_DWORD *)v5 + 472) )
  {
    WdLogSingleEntry1(1LL, 4207LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->GetDisplayCore()->GetNumVidPnSources() == pDevice->GetNumVidPnSources()",
      4207LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v12 = v30[1];
  v28 = v30[1];
  if ( *((_DWORD *)v5 + 472) <= v30[1] )
  {
    WdLogSingleEntry3(3LL, v5, v30[1], -1073741811LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
    if ( v26[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
    goto LABEL_36;
  }
  v13 = (DXGK_GAMMA_RAMP *)operator new[](0x30uLL, 0x4B677844u, 256LL);
  if ( v13 )
    v14 = DXGK_GAMMA_RAMP::DXGK_GAMMA_RAMP(v13);
  else
    v14 = 0LL;
  v29[1] = v14;
  if ( v14 )
  {
    LODWORD(v15) = DXGK_GAMMA_RAMP::Initialize(v14, v8, 0LL);
    if ( (int)v15 >= 0 )
    {
      v16 = (void *)*((_QWORD *)v14 + 4);
      v17 = Src[0];
      v18 = (char *)Src[0] + v9;
      if ( v18 < Src[0] || (unsigned __int64)v18 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v16, v17, v9);
      DXGDEVICE::SetDeviceGammaRamp(v5, v12, v14);
      v19 = 0LL;
      v27 = -1;
      v20 = v28;
      while ( 1 )
      {
        v21 = v19++;
        if ( (int)DmmEnumClientVidPnPathTargetsFromSource((_QWORD *)v6, v20, v21, &v27) < 0 || v27 == -1 )
          break;
        v22 = MonitorNotifyDXGIGammaRampChange((DXGADAPTER *)v6, v27);
        v15 = v22;
        if ( v22 < 0 )
        {
          WdLogSingleEntry1(2LL, v22);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to DXGI gamma ramp, (Status == 0x%I64x)!",
            v15,
            0LL,
            0LL,
            0LL,
            0LL);
          break;
        }
      }
      v23 = *((_BYTE *)v25 + 428);
      *((_BYTE *)v25 + 428) = 1;
      if ( !v23 )
        DxgkLogCodePointPacket(0x5Eu, 3u, v15, 0, *(_QWORD *)(v6 + 404));
    }
    ReferenceCounted::Release(v14);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
    if ( v26[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
    if ( v24 && _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v24 + 2), v24);
    return (unsigned int)v15;
  }
  else
  {
    WdLogSingleEntry1(6LL, v5);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Device 0x%I64x: Unable to allocate gamma ramp.",
      (__int64)v5,
      0LL,
      0LL,
      0LL,
      0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
    if ( v26[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
    if ( v24 && _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v24 + 2), v24);
    return 3221225495LL;
  }
}
