/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C0258BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C0252468 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C0252578 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@I@Z @ 0x1C0252600 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C0252688 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURC.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0253958 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport3(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  _OWORD *v14; // rax
  __int64 v15; // r13
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rbx
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v48; // rbx
  char *v49; // r12
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rcx
  __int64 v59; // r8
  const void *v61; // rdx
  char *v62; // rcx
  unsigned int i; // edx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v64; // r8
  __int64 v65; // rax
  char *v66; // rcx
  unsigned __int64 v67; // r8
  __int64 v68; // rax
  char *v69; // rcx
  const void *v70; // rdx
  char *v71; // rcx
  unsigned int j; // edx
  unsigned __int64 v73; // r8
  __int64 v74; // rcx
  unsigned int v75; // r8d
  char *v76; // r9
  char *v77; // r10
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v78; // rcx
  unsigned int k; // edx
  __int64 v80; // rdx
  __int64 v81; // rcx
  DXGDEVICE *v82; // rbx
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  int v87; // eax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r12
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  int v96; // ebx
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v97; // r9
  _DWORD *v98; // r8
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  bool v103; // [rsp+40h] [rbp-3E8h]
  int v104; // [rsp+48h] [rbp-3E0h] BYREF
  __int64 v105; // [rsp+50h] [rbp-3D8h]
  char v106; // [rsp+58h] [rbp-3D0h]
  PVOID v107; // [rsp+60h] [rbp-3C8h] BYREF
  _BYTE v108[24]; // [rsp+68h] [rbp-3C0h] BYREF
  int v109; // [rsp+80h] [rbp-3A8h]
  struct DXGDEVICE *v110; // [rsp+88h] [rbp-3A0h] BYREF
  int v111; // [rsp+90h] [rbp-398h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v112; // [rsp+94h] [rbp-394h] BYREF
  PVOID v113; // [rsp+98h] [rbp-390h] BYREF
  _BYTE v114[24]; // [rsp+A0h] [rbp-388h] BYREF
  int v115; // [rsp+B8h] [rbp-370h]
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v116; // [rsp+C0h] [rbp-368h]
  ULONG64 v117; // [rsp+C8h] [rbp-360h]
  unsigned int v118; // [rsp+D0h] [rbp-358h]
  unsigned int v119; // [rsp+D4h] [rbp-354h]
  char *v120; // [rsp+D8h] [rbp-350h]
  char *v121; // [rsp+E0h] [rbp-348h]
  struct DXGDEVICE *v122; // [rsp+E8h] [rbp-340h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v123; // [rsp+F0h] [rbp-338h]
  _QWORD v124[2]; // [rsp+F8h] [rbp-330h] BYREF
  struct DXGPROCESS *v125; // [rsp+108h] [rbp-320h]
  unsigned int v126[4]; // [rsp+110h] [rbp-318h]
  void *Src[2]; // [rsp+120h] [rbp-308h]
  void *v128[2]; // [rsp+130h] [rbp-2F8h]
  PVOID v129; // [rsp+140h] [rbp-2E8h] BYREF
  _BYTE v130[96]; // [rsp+148h] [rbp-2E0h] BYREF
  int v131; // [rsp+1A8h] [rbp-280h]
  PVOID P; // [rsp+1B0h] [rbp-278h] BYREF
  _BYTE v133[132]; // [rsp+1B8h] [rbp-270h] BYREF
  int v134; // [rsp+23Ch] [rbp-1ECh]
  PVOID v135; // [rsp+240h] [rbp-1E8h] BYREF
  _BYTE v136[264]; // [rsp+248h] [rbp-1E0h] BYREF
  int v137; // [rsp+350h] [rbp-D8h]
  _BYTE v138[160]; // [rsp+360h] [rbp-C8h] BYREF

  v117 = a1;
  v104 = -1;
  v105 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v106 = 1;
    v104 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2093);
  }
  else
  {
    v106 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v104, 2093LL);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v125 = Current;
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    v12 = v11;
LABEL_7:
    WdLogEvent5_WdError(v12);
LABEL_95:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v104, v13);
    if ( v106 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v84, &EventProfilerExit, v85, v104);
    }
    return 3221225485LL;
  }
  v103 = *((_BYTE *)Current + 346) == 0;
  v14 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v126 = *v14;
  *(_OWORD *)Src = v14[1];
  *(_OWORD *)v128 = v14[2];
  v15 = v126[2];
  if ( !v126[2] )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress, v9);
    v16[3] = 0LL;
LABEL_12:
    v21 = v16;
    v16[4] = -1073741811LL;
    v16[5] = PsGetCurrentProcess(v18, v17, v19, v20);
    v12 = (__int64)v21;
    goto LABEL_7;
  }
  v22 = LODWORD(Src[1]);
  if ( LODWORD(Src[1]) > 0x10 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress, v9);
    v16[3] = v22;
    goto LABEL_12;
  }
  v107 = 0LL;
  v109 = 0;
  v116 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                              &v107,
                                                              v126[2]);
  if ( !v116 )
  {
    v26 = WdLogNewEntry5_WdWarning(v24, v23, v25);
    *(_QWORD *)(v26 + 24) = -1073741801LL;
    *(_QWORD *)(v26 + 32) = PsGetCurrentProcess(v28, v27, v29, v30);
    WdLogEvent5_WdWarning(v26);
LABEL_39:
    if ( v107 != v108 && v107 )
      ExFreePoolWithTag(v107, 0);
    v107 = 0LL;
    v109 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v104, v31);
    if ( v106 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v58, &EventProfilerExit, v59, v104);
    return 3221225495LL;
  }
  v129 = 0LL;
  v131 = 0;
  v121 = (char *)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3,3>::AllocateElements(&v129, v15);
  if ( !v121 )
  {
    v35 = WdLogNewEntry5_WdWarning(v33, v32, v34);
    *(_QWORD *)(v35 + 24) = -1073741801LL;
    *(_QWORD *)(v35 + 32) = PsGetCurrentProcess(v37, v36, v38, v39);
    WdLogEvent5_WdWarning(v35);
LABEL_35:
    if ( v129 != v130 && v129 )
      ExFreePoolWithTag(v129, 0);
    v131 = 0;
    v129 = 0LL;
    goto LABEL_39;
  }
  v135 = 0LL;
  v137 = 0;
  v120 = (char *)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::AllocateElements(&v135, v15);
  if ( !v120 )
  {
    v43 = WdLogNewEntry5_WdWarning(v41, v40, v42);
    *(_QWORD *)(v43 + 24) = -1073741801LL;
    *(_QWORD *)(v43 + 32) = PsGetCurrentProcess(v45, v44, v46, v47);
    WdLogEvent5_WdWarning(v43);
LABEL_31:
    if ( v135 != v136 && v135 )
      ExFreePoolWithTag(v135, 0);
    v135 = 0LL;
    v137 = 0;
    goto LABEL_35;
  }
  v113 = 0LL;
  v115 = 0;
  P = 0LL;
  v134 = 0;
  v48 = 0LL;
  v123 = 0LL;
  v49 = 0LL;
  if ( (_DWORD)v22 )
  {
    v48 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                                               &v113,
                                                                               v22);
    v123 = v48;
    if ( !v48
      || (v49 = (char *)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,3>::AllocateElements(
                          &P,
                          v22)) == 0LL )
    {
      v53 = WdLogNewEntry5_WdWarning(v51, v50, v52);
      *(_QWORD *)(v53 + 24) = -1073741801LL;
      *(_QWORD *)(v53 + 32) = PsGetCurrentProcess(v55, v54, v56, v57);
      WdLogEvent5_WdWarning(v53);
      if ( P != v133 && P )
        ExFreePoolWithTag(P, 0);
      v134 = 0;
      P = 0LL;
      if ( v113 != v114 && v113 )
        ExFreePoolWithTag(v113, 0);
      v115 = 0;
      v113 = 0LL;
      goto LABEL_31;
    }
  }
  v61 = Src[0];
  v62 = (char *)Src[0] + 8 * v15;
  if ( v62 < Src[0] || (unsigned __int64)v62 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v116, v61, 8 * v15);
  for ( i = 0; ; ++i )
  {
    v118 = i;
    if ( i >= (unsigned int)v15 )
      break;
    v64 = v116[i];
    if ( &v64[1] < v64 || (unsigned __int64)&v64[1] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v65 = 32LL * i;
    v66 = v121;
    *(_OWORD *)&v121[v65] = *(_OWORD *)&v64->LayerIndex;
    *(_OWORD *)&v66[v65 + 16] = *(_OWORD *)&v64->VidPnSourceId;
    v67 = *(_QWORD *)&v66[v65 + 24];
    if ( v67 + 88 < v67 || v67 + 88 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v68 = 88LL * i;
    v69 = v120;
    *(_OWORD *)&v120[v68] = *(_OWORD *)v67;
    *(_OWORD *)&v69[v68 + 16] = *(_OWORD *)(v67 + 16);
    *(_OWORD *)&v69[v68 + 32] = *(_OWORD *)(v67 + 32);
    *(_OWORD *)&v69[v68 + 48] = *(_OWORD *)(v67 + 48);
    *(_OWORD *)&v69[v68 + 64] = *(_OWORD *)(v67 + 64);
    *(_QWORD *)&v69[v68 + 80] = *(_QWORD *)(v67 + 80);
  }
  if ( (_DWORD)v22 )
  {
    v70 = v128[0];
    v71 = (char *)v128[0] + 8 * v22;
    if ( v71 < v128[0] || (unsigned __int64)v71 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v48, v70, 8 * v22);
  }
  for ( j = 0; ; ++j )
  {
    v119 = j;
    if ( j >= (unsigned int)v22 )
      break;
    v73 = (unsigned __int64)v48[j];
    if ( v73 + 44 < v73 || v73 + 44 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v74 = 44LL * j;
    *(_OWORD *)&v49[v74] = *(_OWORD *)v73;
    *(_OWORD *)&v49[v74 + 16] = *(_OWORD *)(v73 + 16);
    *(_QWORD *)&v49[v74 + 32] = *(_QWORD *)(v73 + 32);
    *(_DWORD *)&v49[v74 + 40] = *(_DWORD *)(v73 + 40);
  }
  v75 = 0;
  v76 = v120;
  v77 = v121;
  while ( v75 < (unsigned int)v15 )
  {
    v78 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)&v77[32 * v75];
    v116[v75] = v78;
    v78->pPlaneAttributes = (D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)&v76[88 * v75++];
  }
  for ( k = 0; k < (unsigned int)v22; ++k )
    v48[k] = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)&v49[44 * k];
  v122 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v110, v126[1], (struct _KTHREAD **)v125, &v122);
  v82 = v122;
  if ( !v122 )
  {
    v83 = WdLogNewEntry5_WdError(v81, v80);
    *(_QWORD *)(v83 + 24) = v126[1];
    *(_QWORD *)(v83 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v83);
    if ( v110 && _InterlockedExchangeAdd64((volatile signed __int64 *)v110 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v110 + 2), v110);
    if ( P != v133 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v134 = 0;
    if ( v113 != v114 && v113 )
      ExFreePoolWithTag(v113, 0);
    v113 = 0LL;
    v115 = 0;
    if ( v135 != v136 && v135 )
      ExFreePoolWithTag(v135, 0);
    v135 = 0LL;
    v137 = 0;
    if ( v129 != v130 && v129 )
      ExFreePoolWithTag(v129, 0);
    v129 = 0LL;
    v131 = 0;
    if ( v107 != v108 && v107 )
      ExFreePoolWithTag(v107, 0);
    v107 = 0LL;
    v109 = 0;
    goto LABEL_95;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v124, v122);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v138, (__int64)v82, 2, v86, 0);
  v87 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v138, 0LL);
  v91 = v87;
  if ( v87 >= 0 )
  {
    v111 = 0;
    v112.0 = 0;
    v96 = DXGDEVICE::CheckMultiPlaneOverlaySupport3(v82, v15, v116, v22, v123, v103, &v111, &v112);
    if ( v96 >= 0 )
    {
      v97 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)v117;
      v98 = (_DWORD *)(v117 + 40);
      if ( v117 + 40 >= MmUserProbeAddress )
        v98 = (_DWORD *)MmUserProbeAddress;
      *v98 = v111;
      v99 = v97 + 11;
      if ( (unsigned __int64)&v97[11] >= MmUserProbeAddress )
        v99 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)MmUserProbeAddress;
      v99->0 = v112.0;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v138);
    if ( v124[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v124);
    if ( v110 && _InterlockedExchangeAdd64((volatile signed __int64 *)v110 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v110 + 2), v110);
    if ( P != v133 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v134 = 0;
    if ( v113 != v114 && v113 )
      ExFreePoolWithTag(v113, 0);
    v113 = 0LL;
    v115 = 0;
    if ( v135 != v136 && v135 )
      ExFreePoolWithTag(v135, 0);
    v135 = 0LL;
    v137 = 0;
    if ( v129 != v130 && v129 )
      ExFreePoolWithTag(v129, 0);
    v129 = 0LL;
    v131 = 0;
    if ( v107 != v108 && v107 )
      ExFreePoolWithTag(v107, 0);
    v107 = 0LL;
    v109 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v104, v100);
    if ( v106 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v101, &EventProfilerExit, v102, v104);
    return (unsigned int)v96;
  }
  else
  {
    v92 = WdLogNewEntry5_WdWarning(v89, v88, v90);
    *(_QWORD *)(v92 + 24) = v82;
    *(_QWORD *)(v92 + 32) = v91;
    WdLogEvent5_WdWarning(v92);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v138);
    if ( v124[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v124);
    if ( v110 && _InterlockedExchangeAdd64((volatile signed __int64 *)v110 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v110 + 2), v110);
    if ( P != v133 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v134 = 0;
    if ( v113 != v114 && v113 )
      ExFreePoolWithTag(v113, 0);
    v113 = 0LL;
    v115 = 0;
    if ( v135 != v136 && v135 )
      ExFreePoolWithTag(v135, 0);
    v135 = 0LL;
    v137 = 0;
    if ( v129 != v130 && v129 )
      ExFreePoolWithTag(v129, 0);
    v129 = 0LL;
    v131 = 0;
    if ( v107 != v108 && v107 )
      ExFreePoolWithTag(v107, 0);
    v107 = 0LL;
    v109 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v104, v93);
    if ( v106 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v94, &EventProfilerExit, v95, v104);
    return (unsigned int)v91;
  }
}
