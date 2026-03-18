/*
 * XREFs of ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C01A1184
 * Callers:
 *     DxgkCreateDevice @ 0x1C01E9810 (DxgkCreateDevice.c)
 *     DxgkCreateDeviceInternal @ 0x1C01ED140 (DxgkCreateDeviceInternal.c)
 *     ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037A890 (-VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00074A8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00076C4 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0007998 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x1C0052528 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C018D67C (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C01B625C (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01C71F0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 */

__int64 __fastcall DxgkCreateDeviceImpl(
        struct _D3DKMT_CREATEDEVICE *a1,
        struct DXGADAPTER **a2,
        struct DXG_SET_GUEST_DATA **a3,
        char a4)
{
  struct DXGPROCESS *Current; // r13
  struct DXGADAPTER *v8; // rdx
  struct _D3DKMT_CREATEDEVICE *v9; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  struct DXGADAPTER **v12; // r9
  struct DXGADAPTER *v13; // r12
  struct DXGADAPTER **v14; // rbx
  struct DXGADAPTER **v15; // rax
  struct DXGADAPTER *v16; // rdx
  char *v17; // rbx
  _QWORD *v18; // r12
  __int64 v19; // r13
  struct DXGADAPTER *v20; // rdx
  struct DXGADAPTER *v21; // r8
  int v22; // eax
  unsigned int v23; // r15d
  unsigned int v24; // eax
  unsigned int v25; // ebx
  _DWORD *p_hDevice; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct DXGADAPTER **v30; // rax
  int PairingAdapters; // eax
  __int64 v32; // r13
  struct DXGADAPTER **v33; // rax
  const wchar_t *v34; // r9
  bool v35; // sf
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // r8
  struct DXGADAPTER *v43; // rbx
  _DWORD *v44; // rax
  struct _KEVENT *v45; // rbx
  KSPIN_LOCK *Global; // rax
  struct DXGADAPTER *v48; // [rsp+68h] [rbp-1B0h] BYREF
  unsigned __int64 v49; // [rsp+70h] [rbp-1A8h] BYREF
  int v50; // [rsp+78h] [rbp-1A0h] BYREF
  __int64 v51; // [rsp+80h] [rbp-198h]
  char v52; // [rsp+88h] [rbp-190h]
  struct DXGADAPTER *v53; // [rsp+90h] [rbp-188h] BYREF
  unsigned __int64 v54; // [rsp+98h] [rbp-180h] BYREF
  _QWORD *v55; // [rsp+A0h] [rbp-178h]
  DXGDEVICE *v56; // [rsp+A8h] [rbp-170h] BYREF
  struct DXGADAPTER *v57; // [rsp+B0h] [rbp-168h]
  struct DXGADAPTER *v58; // [rsp+B8h] [rbp-160h] BYREF
  _QWORD *v59; // [rsp+C0h] [rbp-158h]
  DXGADAPTER *v60; // [rsp+C8h] [rbp-150h] BYREF
  DXGADAPTER *v61; // [rsp+D8h] [rbp-140h] BYREF
  unsigned __int64 v62; // [rsp+E0h] [rbp-138h] BYREF
  struct DXG_SET_GUEST_DATA **v63; // [rsp+E8h] [rbp-130h]
  struct DXGK_VIRTUAL_GPU_PARAV *v64; // [rsp+F0h] [rbp-128h]
  struct _D3DKMT_CREATEDEVICE *v65; // [rsp+F8h] [rbp-120h]
  __int64 v66; // [rsp+100h] [rbp-118h]
  char *v67; // [rsp+108h] [rbp-110h]
  unsigned int v68[4]; // [rsp+110h] [rbp-108h]
  __int128 v69; // [rsp+120h] [rbp-F8h]
  __int128 v70; // [rsp+130h] [rbp-E8h]
  __int128 v71; // [rsp+140h] [rbp-D8h]
  _BYTE v72[144]; // [rsp+150h] [rbp-C8h] BYREF

  v63 = a3;
  v64 = (struct DXGK_VIRTUAL_GPU_PARAV *)a2;
  v65 = a1;
  v50 = -1;
  v51 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v52 = 1;
    v50 = 2009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2009);
  }
  else
  {
    v52 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v50, 2009);
  Current = DXGPROCESS::GetCurrent();
  v56 = Current;
  if ( !Current )
  {
    v25 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v34 = L"Invalid process context, returning 0x%I64x";
    goto LABEL_51;
  }
  if ( a2 )
    v8 = a2[2];
  else
    v8 = 0LL;
  v58 = v8;
  if ( a4 )
  {
    v9 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v9 = (struct _D3DKMT_CREATEDEVICE *)MmUserProbeAddress;
    *(_OWORD *)v68 = *(_OWORD *)&v9->hAdapter;
    v69 = *(_OWORD *)&v9->pCommandBuffer;
    v10 = *(_OWORD *)&v9->pAllocationList;
    v11 = *(_OWORD *)&v9->pPatchLocationList;
  }
  else
  {
    *(_OWORD *)v68 = *(_OWORD *)&a1->hAdapter;
    v69 = *(_OWORD *)&a1->pCommandBuffer;
    v10 = *(_OWORD *)&a1->pAllocationList;
    v11 = *(_OWORD *)&a1->pPatchLocationList;
  }
  v71 = v11;
  v70 = v10;
  if ( (v68[2] & 8) != 0 && !g_OSTestSigningEnabled )
  {
    v25 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v34 = L"TestDevice flag cannot be used, returning 0x%I64x";
LABEL_51:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v34, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
LABEL_40:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( !v52 )
      return v25;
    v35 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_62;
  }
  v12 = &v58;
  if ( v8 )
    v12 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v60, v68[0], (struct _KTHREAD **)Current, v12, 1);
  v13 = v58;
  if ( !v58 )
  {
    v25 = -1073741811;
    WdLogSingleEntry2(3LL, v68[0], -1073741811LL);
LABEL_58:
    if ( v60 )
      DXGADAPTER::ReleaseReference(v60);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( !v52 )
      return v25;
    LOBYTE(v27) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v35 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_62:
    if ( v35 )
      McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v50);
    return v25;
  }
  v57 = 0LL;
  while ( 1 )
  {
    v48 = 0LL;
    v53 = 0LL;
    v14 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v53);
    v15 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v48);
    if ( (int)DxgkpGetPairingAdapters(v13, 0, v15, &v49, v14, &v54, 0) < 0 )
    {
      v30 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v48);
      PairingAdapters = DxgkpGetPairingAdapters(v13, 0, v30, &v49, 0LL, 0LL, 0);
      v32 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v36 = v68[0];
        WdLogSingleEntry2(2LL, v68[0], PairingAdapters);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to get bound render adapter from hAdapter 0x%I64x (ntStatus = 0x%I64x).",
          v36,
          v32,
          0LL,
          0LL,
          0LL);
        DXGADAPTER_REFERENCE::Assign(&v53, 0LL);
        DXGADAPTER_REFERENCE::Assign(&v48, 0LL);
        if ( v60 )
          DXGADAPTER::ReleaseReference(v60);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
        if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v50);
        return (unsigned int)v32;
      }
      Current = v56;
    }
    v16 = v48;
    if ( !v48 || !*((_QWORD *)v48 + 366) )
    {
      WdLogSingleEntry1(1LL, 2077LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"RenderAdapterRef && RenderAdapterRef->IsRenderAdapter()",
        2077LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v16 = v48;
    }
    if ( v53 && !*((_QWORD *)v53 + 365) )
    {
      WdLogSingleEntry1(1LL, 2078LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!DisplayAdapterRef || DisplayAdapterRef->IsDisplayAdapter()",
        2078LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v16 = v48;
    }
    if ( v57 == v16 )
    {
      v25 = -1073741275;
      WdLogSingleEntry3(1LL, v16, v13, -1073741275LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DxgkpGetPairingAdapters keeps returning same disabled adapter 0x%I64x for display adapter 0x%I64x, returning 0x%I64x.",
        (__int64)v48,
        (__int64)v13,
        -1073741275LL,
        0LL,
        0LL);
      DXGADAPTER_REFERENCE::Assign(&v53, 0LL);
      DXGADAPTER_REFERENCE::Assign(&v48, 0LL);
      goto LABEL_58;
    }
    v17 = (char *)Current + 216;
    v67 = (char *)Current + 216;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)Current + 216, 0LL);
    v18 = (_QWORD *)((char *)Current + 224);
    v59 = (_QWORD *)((char *)Current + 224);
    *((_QWORD *)Current + 28) = KeGetCurrentThread();
    v66 = *((_QWORD *)v48 + 366) + 24LL;
    v19 = v66;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v19, 0LL);
    v55 = (_QWORD *)(v19 + 8);
    *(_QWORD *)(v19 + 8) = KeGetCurrentThread();
    v20 = v48;
    v21 = v53;
    if ( v48 == v53 )
      break;
    v61 = 0LL;
    v33 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v61);
    v13 = v58;
    LODWORD(v57) = DxgkpGetPairingAdapters(v58, 0, v33, &v62, 0LL, 0LL, 0);
    if ( (int)v57 < 0 )
    {
      DXGADAPTER_REFERENCE::Assign(&v61, 0LL);
      *v55 = 0LL;
      ExReleasePushLockExclusiveEx(v19, 0LL);
      KeLeaveCriticalRegion();
      *v59 = 0LL;
      ExReleasePushLockExclusiveEx(v17, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER_REFERENCE::Assign(&v53, 0LL);
      DXGADAPTER_REFERENCE::Assign(&v48, 0LL);
      if ( v60 )
        DXGADAPTER::ReleaseReference(v60);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
      if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v50);
      return (unsigned int)v57;
    }
    v57 = v48;
    if ( v61 == v48 )
    {
      DXGADAPTER_REFERENCE::Assign(&v61, 0LL);
      v20 = v48;
      v21 = v53;
      v18 = v59;
      break;
    }
    WdLogSingleEntry1(3LL, v48);
    DXGADAPTER_REFERENCE::Assign(&v61, 0LL);
    *v55 = 0LL;
    ExReleasePushLockExclusiveEx(v19, 0LL);
    KeLeaveCriticalRegion();
    *v59 = 0LL;
    ExReleasePushLockExclusiveEx(v17, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign(&v53, 0LL);
    DXGADAPTER_REFERENCE::Assign(&v48, 0LL);
    Current = v56;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v72, v20, v21);
  v22 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v72, 0LL);
  v23 = v22;
  if ( v22 >= 0 )
  {
    if ( !*((_BYTE *)v48 + 209) )
    {
      if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 889) )
      {
        v43 = v48;
        LODWORD(v44) = DXGADAPTER::GetAdapterType(v48);
        if ( (*v44 & 0x10) != 0 )
        {
          v45 = (struct _KEVENT *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v43 + 366)
                                                                                            + 736LL)
                                                                                + 8LL)
                                                                    + 904LL))(*(_QWORD *)(*((_QWORD *)v43 + 366) + 744LL));
          Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
          DXGGLOBAL::SetSchedulerCrossAdapterData(Global, v45);
          *((_BYTE *)v48 + 206) = 1;
        }
      }
    }
    v56 = 0LL;
    if ( v48 == v53 )
      v24 = (v68[2] >> 1) & 1;
    else
      LOBYTE(v24) = 0;
    v25 = ADAPTER_RENDER::CreateDevice(
            *((DXGADAPTER ***)v48 + 366),
            &v56,
            v68[2],
            (v68[2] & 1) == 0,
            v53,
            v24,
            (v68[2] & 4) != 0,
            0,
            (__int64)v64,
            (__int64)v63,
            0);
    if ( (v25 & 0x80000000) == 0 )
    {
      p_hDevice = &v65->hDevice;
      if ( a4 && (unsigned __int64)p_hDevice >= MmUserProbeAddress )
        p_hDevice = (_DWORD *)MmUserProbeAddress;
      *p_hDevice = *((_DWORD *)v56 + 117);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v72);
    *v55 = 0LL;
    ExReleasePushLockExclusiveEx(v19, 0LL);
    KeLeaveCriticalRegion();
    *v59 = 0LL;
    ExReleasePushLockExclusiveEx(v67, 0LL);
    KeLeaveCriticalRegion();
    if ( v53 )
      DXGADAPTER::ReleaseReference(v53);
    v53 = 0LL;
    if ( v48 )
      DXGADAPTER::ReleaseReference(v48);
    v48 = 0LL;
    if ( v60 )
      DXGADAPTER::ReleaseReference(v60);
    goto LABEL_40;
  }
  if ( v48 != v53 && (*((_DWORD *)v48 + 50) != 1 || *((_BYTE *)v48 + 2833)) )
    WdLogSingleEntry2(3LL, v48, v22);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v72);
  *v55 = 0LL;
  ExReleasePushLockExclusiveEx(v19, 0LL);
  KeLeaveCriticalRegion();
  *v18 = 0LL;
  ExReleasePushLockExclusiveEx(v17, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTER_REFERENCE::Assign(&v53, 0LL);
  DXGADAPTER_REFERENCE::Assign(&v48, 0LL);
  if ( v60 )
    DXGADAPTER::ReleaseReference(v60);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
  if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v50);
  return v23;
}
