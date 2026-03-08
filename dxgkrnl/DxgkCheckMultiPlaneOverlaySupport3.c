/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C02EAE20
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
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C0221744 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@I@Z @ 0x1C02217C2 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C02E1CDC (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C02E1DD4 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURC.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C02E3050 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport3(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  bool v8; // sf
  int v9; // eax
  _OWORD *v10; // rax
  __int64 v11; // r13
  __int64 CurrentProcess; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  bool v22; // sf
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v27; // rbx
  __int64 v28; // r12
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  const void *v34; // rdx
  char *v35; // rcx
  unsigned int i; // edx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v37; // r8
  __int64 v38; // rax
  struct DXGDEVICE *v39; // rcx
  unsigned __int64 v40; // r8
  __int64 v41; // rax
  struct DXGDEVICE *v42; // rcx
  const void *v43; // rdx
  char *v44; // rcx
  unsigned int j; // edx
  unsigned __int64 v46; // r8
  __int64 v47; // rcx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v48; // r8
  unsigned int v49; // edx
  struct DXGDEVICE *v50; // r9
  struct DXGDEVICE *v51; // r10
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v52; // rbx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v53; // rcx
  __int64 v54; // rax
  unsigned int v55; // edx
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v56; // rbx
  DXGDEVICE *v57; // rbx
  __int64 v58; // rbx
  __int64 v59; // r9
  int v60; // eax
  unsigned int v61; // r12d
  __int64 v62; // rcx
  __int64 v63; // r8
  int v64; // ebx
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v65; // r9
  _DWORD *v66; // r8
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  int *v70; // [rsp+30h] [rbp-3F8h]
  int *v71; // [rsp+30h] [rbp-3F8h]
  int v72; // [rsp+50h] [rbp-3D8h] BYREF
  __int64 v73; // [rsp+58h] [rbp-3D0h]
  char v74; // [rsp+60h] [rbp-3C8h]
  struct DXGDEVICE *v75; // [rsp+68h] [rbp-3C0h] BYREF
  PVOID P; // [rsp+70h] [rbp-3B8h] BYREF
  _BYTE v77[24]; // [rsp+78h] [rbp-3B0h] BYREF
  int v78; // [rsp+90h] [rbp-398h]
  PVOID v79; // [rsp+98h] [rbp-390h] BYREF
  _BYTE v80[24]; // [rsp+A0h] [rbp-388h] BYREF
  int v81; // [rsp+B8h] [rbp-370h]
  int v82; // [rsp+C0h] [rbp-368h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v83; // [rsp+C4h] [rbp-364h] BYREF
  struct DXGDEVICE *v84; // [rsp+C8h] [rbp-360h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **Elements; // [rsp+D0h] [rbp-358h]
  ULONG64 v86; // [rsp+D8h] [rbp-350h]
  unsigned int v87; // [rsp+E0h] [rbp-348h]
  unsigned int v88; // [rsp+E4h] [rbp-344h]
  BOOL v89; // [rsp+E8h] [rbp-340h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v90; // [rsp+F0h] [rbp-338h]
  struct DXGPROCESS *v91[2]; // [rsp+F8h] [rbp-330h] BYREF
  unsigned int v92[4]; // [rsp+108h] [rbp-320h]
  void *Src[2]; // [rsp+118h] [rbp-310h]
  void *v94[2]; // [rsp+128h] [rbp-300h]
  PVOID v95; // [rsp+140h] [rbp-2E8h] BYREF
  _BYTE v96[96]; // [rsp+148h] [rbp-2E0h] BYREF
  int v97; // [rsp+1A8h] [rbp-280h]
  PVOID v98; // [rsp+1B0h] [rbp-278h] BYREF
  _BYTE v99[132]; // [rsp+1B8h] [rbp-270h] BYREF
  int v100; // [rsp+23Ch] [rbp-1ECh]
  PVOID v101; // [rsp+240h] [rbp-1E8h] BYREF
  _BYTE v102[264]; // [rsp+248h] [rbp-1E0h] BYREF
  int v103; // [rsp+350h] [rbp-D8h]
  _BYTE v104[160]; // [rsp+360h] [rbp-C8h] BYREF

  v86 = a1;
  v72 = -1;
  v73 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v74 = 1;
    v72 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2093);
  }
  else
  {
    v74 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v72, 2093);
  Current = DXGPROCESS::GetCurrent(v4);
  v91[0] = Current;
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
    goto LABEL_7;
  }
  v9 = *((_DWORD *)Current + 106) >> 2;
  LOBYTE(v9) = !(v9 & 1);
  v89 = v9;
  v10 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v10 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v92 = *v10;
  *(_OWORD *)Src = v10[1];
  *(_OWORD *)v94 = v10[2];
  v11 = v92[2];
  if ( !v92[2] )
  {
    CurrentProcess = PsGetCurrentProcess(MmUserProbeAddress);
    WdLogSingleEntry3(2LL, 0LL, -1073741811LL, CurrentProcess);
    v70 = (int *)PsGetCurrentProcess(v13);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CheckMultiPlaneOverlaySupport3 multi plane overlay plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      0LL,
      -1073741811LL,
      (__int64)v70,
      0LL,
      0LL);
    goto LABEL_7;
  }
  v14 = LODWORD(Src[1]);
  if ( LODWORD(Src[1]) > 0x10 )
  {
    v15 = LODWORD(Src[1]);
    v16 = PsGetCurrentProcess(MmUserProbeAddress);
    WdLogSingleEntry3(2LL, (unsigned int)v15, -1073741811LL, v16);
    v71 = (int *)PsGetCurrentProcess(v17);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CheckMultiPlaneOverlaySupport3 post composition count count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v15,
      -1073741811LL,
      (__int64)v71,
      0LL,
      0LL);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v72);
    if ( v74 )
    {
      v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_131:
      if ( v8 )
        McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v72);
    }
    return 3221225485LL;
  }
  P = 0LL;
  v78 = 0;
  Elements = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                                  (__int64 *)&P,
                                                                  v92[2]);
  if ( !Elements )
  {
    v19 = PsGetCurrentProcess(v18);
    WdLogSingleEntry2(3LL, -1073741801LL, v19);
LABEL_17:
    if ( P != v77 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v78 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v72);
    if ( !v74 )
      return 3221225495LL;
    v22 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_61:
    if ( v22 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v72);
    return 3221225495LL;
  }
  v95 = 0LL;
  v97 = 0;
  v84 = (struct DXGDEVICE *)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3,3>::AllocateElements(
                              (__int64 *)&v95,
                              v11);
  if ( !v84 )
  {
    v24 = PsGetCurrentProcess(v23);
    WdLogSingleEntry2(3LL, -1073741801LL, v24);
LABEL_24:
    if ( v95 != v96 && v95 )
      ExFreePoolWithTag(v95, 0);
    v95 = 0LL;
    v97 = 0;
    goto LABEL_17;
  }
  v101 = 0LL;
  v103 = 0;
  v75 = (struct DXGDEVICE *)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::AllocateElements(
                              (__int64 *)&v101,
                              v11);
  if ( !v75 )
  {
    v26 = PsGetCurrentProcess(v25);
    WdLogSingleEntry2(3LL, -1073741801LL, v26);
LABEL_30:
    if ( v101 != v102 && v101 )
      ExFreePoolWithTag(v101, 0);
    v101 = 0LL;
    v103 = 0;
    goto LABEL_24;
  }
  v79 = 0LL;
  v81 = 0;
  v98 = 0LL;
  v100 = 0;
  v27 = 0LL;
  v90 = 0LL;
  v28 = 0LL;
  if ( (_DWORD)v14 )
  {
    v27 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                                               (__int64 *)&v79,
                                                                               v14);
    v90 = v27;
    if ( !v27 )
    {
      v30 = PsGetCurrentProcess(v29);
      WdLogSingleEntry2(3LL, -1073741801LL, v30);
      if ( v98 != v99 && v98 )
        ExFreePoolWithTag(v98, 0);
      v98 = 0LL;
      v100 = 0;
      if ( v79 != v80 && v79 )
        ExFreePoolWithTag(v79, 0);
      v79 = 0LL;
      v81 = 0;
      goto LABEL_30;
    }
    v28 = PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,3>::AllocateElements(
            (__int64 *)&v98,
            v14);
    if ( !v28 )
    {
      v32 = PsGetCurrentProcess(v31);
      WdLogSingleEntry2(3LL, -1073741801LL, v32);
      if ( v98 != v99 && v98 )
        ExFreePoolWithTag(v98, 0);
      v98 = 0LL;
      v100 = 0;
      if ( v79 != v80 && v79 )
        ExFreePoolWithTag(v79, 0);
      v79 = 0LL;
      v81 = 0;
      if ( v101 != v102 && v101 )
        ExFreePoolWithTag(v101, 0);
      v101 = 0LL;
      v103 = 0;
      if ( v95 != v96 && v95 )
        ExFreePoolWithTag(v95, 0);
      v95 = 0LL;
      v97 = 0;
      if ( P != v77 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v78 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v72);
      if ( !v74 )
        return 3221225495LL;
      LOBYTE(v20) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v22 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_61;
    }
  }
  v34 = Src[0];
  v35 = (char *)Src[0] + 8 * v11;
  if ( v35 < Src[0] || (unsigned __int64)v35 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(Elements, v34, 8 * v11);
  for ( i = 0; ; ++i )
  {
    v87 = i;
    if ( i >= (unsigned int)v11 )
      break;
    v37 = Elements[i];
    if ( &v37[1] < v37 || (unsigned __int64)&v37[1] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v38 = 32LL * i;
    v39 = v84;
    *(_OWORD *)((char *)v84 + v38) = *(_OWORD *)&v37->LayerIndex;
    *(_OWORD *)((char *)v39 + v38 + 16) = *(_OWORD *)&v37->VidPnSourceId;
    v40 = *(_QWORD *)((char *)v39 + v38 + 24);
    if ( v40 + 88 < v40 || v40 + 88 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v41 = 88LL * i;
    v42 = v75;
    *(_OWORD *)((char *)v75 + v41) = *(_OWORD *)v40;
    *(_OWORD *)((char *)v42 + v41 + 16) = *(_OWORD *)(v40 + 16);
    *(_OWORD *)((char *)v42 + v41 + 32) = *(_OWORD *)(v40 + 32);
    *(_OWORD *)((char *)v42 + v41 + 48) = *(_OWORD *)(v40 + 48);
    *(_OWORD *)((char *)v42 + v41 + 64) = *(_OWORD *)(v40 + 64);
    *(_QWORD *)((char *)v42 + v41 + 80) = *(_QWORD *)(v40 + 80);
    *(_DWORD *)((char *)v42 + v41 + 60) = 0;
    *(_QWORD *)((char *)v42 + v41 + 64) = 0LL;
  }
  if ( (_DWORD)v14 )
  {
    v43 = v94[0];
    v44 = (char *)v94[0] + 8 * v14;
    if ( v44 < v94[0] || (unsigned __int64)v44 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v27, v43, 8 * v14);
  }
  for ( j = 0; ; ++j )
  {
    v88 = j;
    if ( j >= (unsigned int)v14 )
      break;
    v46 = (unsigned __int64)v27[j];
    if ( v46 + 44 < v46 || v46 + 44 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v47 = 44LL * j;
    *(_OWORD *)(v47 + v28) = *(_OWORD *)v46;
    *(_OWORD *)(v47 + v28 + 16) = *(_OWORD *)(v46 + 16);
    *(_QWORD *)(v47 + v28 + 32) = *(_QWORD *)(v46 + 32);
    *(_DWORD *)(v47 + v28 + 40) = *(_DWORD *)(v46 + 40);
  }
  v48 = Elements;
  Src[0] = Elements;
  v49 = 0;
  v50 = v75;
  v51 = v84;
  while ( v49 < (unsigned int)v11 )
  {
    v52 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)((char *)v51 + 32 * v49);
    v48[v49] = v52;
    v53 = (D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)((char *)v50 + 88 * v49);
    v52->pPlaneAttributes = v53;
    if ( (v53->Flags & 4) != 0 )
    {
      _mm_lfence();
      v54 = PsGetCurrentProcess(v53);
      WdLogSingleEntry3(3LL, v52->pPlaneAttributes->Flags, -1073741811LL, v54);
      if ( v98 != v99 && v98 )
        ExFreePoolWithTag(v98, 0);
      v98 = 0LL;
      v100 = 0;
      if ( v79 != v80 && v79 )
        ExFreePoolWithTag(v79, 0);
      v79 = 0LL;
      v81 = 0;
      if ( v101 != v102 && v101 )
        ExFreePoolWithTag(v101, 0);
      v101 = 0LL;
      v103 = 0;
      if ( v95 != v96 && v95 )
        ExFreePoolWithTag(v95, 0);
      v95 = 0LL;
      v97 = 0;
      if ( P != v77 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v78 = 0;
      goto LABEL_7;
    }
    ++v49;
  }
  v55 = 0;
  v56 = v90;
  while ( v55 < (unsigned int)v14 )
  {
    v56[v55] = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)(v28 + 44LL * v55);
    ++v55;
  }
  v84 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v75, v92[1], (struct _KTHREAD **)v91[0], &v84);
  v57 = v84;
  if ( !v84 )
  {
    v58 = v92[1];
    WdLogSingleEntry2(2LL, v92[1], -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v58,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v75 && _InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v75 + 2), v75);
    if ( v98 != v99 && v98 )
      ExFreePoolWithTag(v98, 0);
    v98 = 0LL;
    v100 = 0;
    if ( v79 != v80 && v79 )
      ExFreePoolWithTag(v79, 0);
    v79 = 0LL;
    v81 = 0;
    if ( v101 != v102 && v101 )
      ExFreePoolWithTag(v101, 0);
    v101 = 0LL;
    v103 = 0;
    if ( v95 != v96 && v95 )
      ExFreePoolWithTag(v95, 0);
    v95 = 0LL;
    v97 = 0;
    if ( P != v77 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v78 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v72);
    if ( v74 )
    {
      LOBYTE(v6) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_131;
    }
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v91, v84);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v104, (__int64)v57, 2, v59, 0);
  v60 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v104, 0LL);
  v61 = v60;
  if ( v60 >= 0 )
  {
    v82 = 0;
    v83.0 = 0;
    v64 = DXGDEVICE::CheckMultiPlaneOverlaySupport3(v57, v11, Elements, v14, v90, v89, &v82, &v83);
    if ( v64 >= 0 )
    {
      v65 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)v86;
      v66 = (_DWORD *)(v86 + 40);
      if ( v86 + 40 >= MmUserProbeAddress )
        v66 = (_DWORD *)MmUserProbeAddress;
      *v66 = v82;
      v67 = v65 + 11;
      if ( (unsigned __int64)&v65[11] >= MmUserProbeAddress )
        v67 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)MmUserProbeAddress;
      v67->0 = v83.0;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v104);
    if ( v91[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v91);
    if ( v75 && _InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v75 + 2), v75);
    if ( v98 != v99 && v98 )
      ExFreePoolWithTag(v98, 0);
    v98 = 0LL;
    v100 = 0;
    if ( v79 != v80 && v79 )
      ExFreePoolWithTag(v79, 0);
    v79 = 0LL;
    v81 = 0;
    if ( v101 != v102 && v101 )
      ExFreePoolWithTag(v101, 0);
    v101 = 0LL;
    v103 = 0;
    if ( v95 != v96 && v95 )
      ExFreePoolWithTag(v95, 0);
    v95 = 0LL;
    v97 = 0;
    if ( P != v77 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v78 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v72);
    if ( v74 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v68, &EventProfilerExit, v69, v72);
    return (unsigned int)v64;
  }
  else
  {
    WdLogSingleEntry2(3LL, v57, v60);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v104);
    if ( v91[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v91);
    if ( v75 && _InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v75 + 2), v75);
    if ( v98 != v99 && v98 )
      ExFreePoolWithTag(v98, 0);
    v98 = 0LL;
    v100 = 0;
    if ( v79 != v80 && v79 )
      ExFreePoolWithTag(v79, 0);
    v79 = 0LL;
    v81 = 0;
    if ( v101 != v102 && v101 )
      ExFreePoolWithTag(v101, 0);
    v101 = 0LL;
    v103 = 0;
    if ( v95 != v96 && v95 )
      ExFreePoolWithTag(v95, 0);
    v95 = 0LL;
    v97 = 0;
    if ( P != v77 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v78 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v72);
    if ( v74 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v62, &EventProfilerExit, v63, v72);
    return v61;
  }
}
