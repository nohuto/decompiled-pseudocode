/*
 * XREFs of DxgkCheckSinglePlaneForMultiPlaneOverlaySupport @ 0x1C02EC0A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003634 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C02E3050 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 */

__int64 __fastcall DxgkCheckSinglePlaneForMultiPlaneOverlaySupport(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rbx
  unsigned int v6; // r14d
  __int64 v7; // rcx
  __int64 v8; // r8
  bool v9; // sf
  _OWORD *v10; // rax
  __int64 v11; // rbx
  __int64 CurrentProcess; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v17; // rdx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v18; // rdx
  __int64 v19; // rdx
  ULONG64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  DXGDEVICE *v23; // rbx
  __int64 v24; // rbx
  __int64 v26; // r9
  int v27; // eax
  int v28; // ebx
  _DWORD *v29; // r8
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int *v33; // [rsp+30h] [rbp-1E8h]
  int *v34; // [rsp+30h] [rbp-1E8h]
  int *v35; // [rsp+30h] [rbp-1E8h]
  int v36; // [rsp+50h] [rbp-1C8h] BYREF
  __int64 v37; // [rsp+58h] [rbp-1C0h]
  char v38; // [rsp+60h] [rbp-1B8h]
  struct DXGDEVICE *v39; // [rsp+68h] [rbp-1B0h] BYREF
  int v40; // [rsp+70h] [rbp-1A8h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v41; // [rsp+74h] [rbp-1A4h] BYREF
  struct DXGDEVICE *v42; // [rsp+78h] [rbp-1A0h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v43; // [rsp+80h] [rbp-198h] BYREF
  _QWORD v44[2]; // [rsp+88h] [rbp-190h] BYREF
  __int128 v45; // [rsp+98h] [rbp-180h] BYREF
  __int128 v46; // [rsp+A8h] [rbp-170h]
  unsigned int v47[4]; // [rsp+B8h] [rbp-160h]
  __int128 v48; // [rsp+C8h] [rbp-150h]
  __int128 v49; // [rsp+D8h] [rbp-140h]
  _OWORD v50[6]; // [rsp+F0h] [rbp-128h] BYREF
  _BYTE v51[160]; // [rsp+150h] [rbp-C8h] BYREF

  v36 = -1;
  v37 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v38 = 1;
    v36 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2093);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v36, 2093);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    v6 = -1073741811;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( !v38 )
      return v6;
    v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_32:
    if ( v9 )
      McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v36);
    return v6;
  }
  v10 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v10 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v47 = *v10;
  v48 = v10[1];
  v49 = v10[2];
  if ( v47[2] != 1 )
  {
    v11 = v47[2];
    CurrentProcess = PsGetCurrentProcess(MmUserProbeAddress);
    v6 = -1073741811;
    WdLogSingleEntry3(2LL, (unsigned int)v11, -1073741811LL, CurrentProcess);
    v33 = (int *)PsGetCurrentProcess(v13);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CheckSinglePlaneForMultiPlaneOverlaySupport plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v11,
      -1073741811LL,
      (__int64)v33,
      0LL,
      0LL);
    goto LABEL_7;
  }
  if ( DWORD2(v48) )
  {
    v14 = DWORD2(v48);
    v15 = PsGetCurrentProcess(MmUserProbeAddress);
    v6 = -1073741811;
    WdLogSingleEntry3(2LL, (unsigned int)v14, -1073741811LL, v15);
    v34 = (int *)PsGetCurrentProcess(v16);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CheckSinglePlaneForMultiPlaneOverlaySupport post composition count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v14,
      -1073741811LL,
      (__int64)v34,
      0LL,
      0LL);
    goto LABEL_7;
  }
  v43 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  memset(v50, 0, 0x58uLL);
  v17 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)v48;
  if ( (__int64)v48 + 8 < (unsigned __int64)v48 || (__int64)v48 + 8 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  v43 = *v17;
  v18 = v43;
  if ( &v43[1] < v43 || (unsigned __int64)&v43[1] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  v45 = *(_OWORD *)&v18->LayerIndex;
  v46 = *(_OWORD *)&v18->VidPnSourceId;
  v19 = *((_QWORD *)&v46 + 1);
  v20 = *((_QWORD *)&v46 + 1) + 88LL;
  if ( (unsigned __int64)(*((_QWORD *)&v46 + 1) + 88LL) < *((_QWORD *)&v46 + 1) || v20 > MmUserProbeAddress )
  {
    v20 = MmUserProbeAddress;
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  v50[0] = *(_OWORD *)v19;
  v50[1] = *(_OWORD *)(v19 + 16);
  v50[2] = *(_OWORD *)(v19 + 32);
  v50[3] = *(_OWORD *)(v19 + 48);
  v50[4] = *(_OWORD *)(v19 + 64);
  *(_QWORD *)&v50[5] = *(_QWORD *)(v19 + 80);
  HIDWORD(v50[3]) = 0;
  *(_QWORD *)&v50[4] = 0LL;
  v43 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)&v45;
  *((_QWORD *)&v46 + 1) = v50;
  if ( (v50[0] & 4) == 0 )
  {
    v21 = PsGetCurrentProcess(v20);
    v6 = -1073741811;
    WdLogSingleEntry3(2LL, LODWORD(v50[0]), -1073741811LL, v21);
    v35 = (int *)PsGetCurrentProcess(v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CheckSinglePlaneForMultiPlaneOverlaySupport plane flag value (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      LODWORD(v50[0]),
      -1073741811LL,
      (__int64)v35,
      0LL,
      0LL);
    goto LABEL_7;
  }
  v42 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v39, v47[1], Current, &v42);
  v23 = v42;
  if ( !v42 )
  {
    v24 = v47[1];
    v6 = -1073741811;
    WdLogSingleEntry2(2LL, v47[1], -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v24,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( !v38 )
      return v6;
    LOBYTE(v7) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_32;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44, v42);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v51, (__int64)v23, 2, v26, 0);
  v27 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v51, 0LL);
  v6 = v27;
  if ( v27 < 0 )
  {
    WdLogSingleEntry2(3LL, v23, v27);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
    if ( v44[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
    if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
    goto LABEL_7;
  }
  v40 = 0;
  v41.0 = 0;
  v28 = DXGDEVICE::CheckMultiPlaneOverlaySupport3(v23, 1u, &v43, 0, 0LL, 0, &v40, &v41);
  if ( v28 >= 0 )
  {
    v29 = (_DWORD *)(a1 + 40);
    if ( a1 + 40 >= MmUserProbeAddress )
      v29 = (_DWORD *)MmUserProbeAddress;
    *v29 = v40;
    v30 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)(a1 + 44);
    if ( a1 + 44 >= MmUserProbeAddress )
      v30 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)MmUserProbeAddress;
    v30->0 = v41.0;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
  if ( v44[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
  if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v36);
  return (unsigned int)v28;
}
