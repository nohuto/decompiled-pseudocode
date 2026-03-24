/*
 * XREFs of ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C0138B5C
 * Callers:
 *     DxgkCreateDevice @ 0x1C0139120 (DxgkCreateDevice.c)
 *     DxgkCreateDeviceInternal @ 0x1C0156B0C (DxgkCreateDeviceInternal.c)
 *     ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023E970 (-VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0008C9C (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C000A318 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x1C0046CD4 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0101D60 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C01384D0 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 */

__int64 __fastcall DxgkCreateDeviceImpl(
        struct _D3DKMT_CREATEDEVICE *a1,
        struct DXGADAPTER **a2,
        struct DXG_SET_GUEST_DATA **a3,
        char a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // r14
  struct DXGADAPTER *v14; // rdx
  struct _D3DKMT_CREATEDEVICE *v15; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  struct DXGADAPTER **v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGADAPTER *v22; // r15
  struct DXGADAPTER *i; // r13
  struct DXGADAPTER **v24; // rbx
  __int64 v25; // rdx
  struct DXGADAPTER **v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct DXGADAPTER *v29; // rax
  struct DXGADAPTER *v30; // rcx
  __int64 v31; // r13
  struct DXGADAPTER *v32; // rdx
  struct DXGADAPTER *v33; // r8
  int v34; // eax
  _DWORD *p_hDevice; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rbx
  struct DXGADAPTER *v39; // rbx
  unsigned int v40; // edx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  struct DXGADAPTER **v45; // rax
  int PairingAdapters; // eax
  struct DXGADAPTER **v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  struct DXGADAPTER *v61; // rcx
  __int64 v62; // rax
  struct _KEVENT *v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  KSPIN_LOCK *Global; // rax
  _QWORD *v67; // rax
  struct DXGADAPTER *v69; // [rsp+58h] [rbp-1A0h] BYREF
  unsigned __int64 v70; // [rsp+60h] [rbp-198h] BYREF
  int v71; // [rsp+68h] [rbp-190h] BYREF
  __int64 v72; // [rsp+70h] [rbp-188h]
  char v73; // [rsp+78h] [rbp-180h]
  struct DXGADAPTER *v74; // [rsp+80h] [rbp-178h] BYREF
  unsigned __int64 v75; // [rsp+88h] [rbp-170h] BYREF
  struct DXGADAPTER *v76; // [rsp+90h] [rbp-168h] BYREF
  struct DXGADAPTER *v77; // [rsp+98h] [rbp-160h] BYREF
  DXGADAPTER *v78; // [rsp+A0h] [rbp-158h] BYREF
  DXGADAPTER *v79; // [rsp+B0h] [rbp-148h] BYREF
  unsigned __int64 v80; // [rsp+B8h] [rbp-140h] BYREF
  int v81; // [rsp+C0h] [rbp-138h] BYREF
  __int64 v82; // [rsp+C8h] [rbp-130h]
  struct DXG_SET_GUEST_DATA **v83; // [rsp+D0h] [rbp-128h]
  struct DXGK_VIRTUAL_GPU_PARAV *v84; // [rsp+D8h] [rbp-120h]
  struct DXGPROCESS *v85; // [rsp+E0h] [rbp-118h]
  __int64 v86; // [rsp+E8h] [rbp-110h]
  unsigned int v87[4]; // [rsp+F0h] [rbp-108h]
  __int128 v88; // [rsp+100h] [rbp-F8h]
  __int128 v89; // [rsp+110h] [rbp-E8h]
  __int128 v90; // [rsp+120h] [rbp-D8h]
  _BYTE v91[144]; // [rsp+130h] [rbp-C8h] BYREF

  v83 = a3;
  v84 = (struct DXGK_VIRTUAL_GPU_PARAV *)a2;
  v71 = -1;
  v72 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v73 = 1;
    v71 = 2009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2009);
  }
  else
  {
    v73 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v71, 2009LL);
  Current = DXGPROCESS::GetCurrent(v8, v7, v9, v10);
  v85 = Current;
  if ( !Current )
  {
    v51 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v51 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v51);
LABEL_53:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71, v52);
    if ( v73 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v54, &EventProfilerExit, v55, v71);
    return 3221225485LL;
  }
  if ( a2 )
    v14 = a2[2];
  else
    v14 = 0LL;
  v77 = v14;
  if ( a4 )
  {
    v15 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v15 = (struct _D3DKMT_CREATEDEVICE *)MmUserProbeAddress;
    *(_OWORD *)v87 = *(_OWORD *)&v15->hAdapter;
    v88 = *(_OWORD *)&v15->pCommandBuffer;
    v16 = *(_OWORD *)&v15->pAllocationList;
    v17 = *(_OWORD *)&v15->pPatchLocationList;
  }
  else
  {
    *(_OWORD *)v87 = *(_OWORD *)&a1->hAdapter;
    v88 = *(_OWORD *)&a1->pCommandBuffer;
    v16 = *(_OWORD *)&a1->pAllocationList;
    v17 = *(_OWORD *)&a1->pPatchLocationList;
  }
  v90 = v17;
  v89 = v16;
  v18 = &v77;
  if ( v14 )
    v18 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v78, v87[0], (struct _KTHREAD **)Current, v18, 1);
  v22 = v77;
  if ( !v77 )
  {
    v53 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v53 + 24) = v87[0];
    *(_QWORD *)(v53 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v53);
    if ( v78 )
      DXGADAPTER::ReleaseReference(v78);
    goto LABEL_53;
  }
  for ( i = 0LL; ; i = v76 )
  {
    v69 = 0LL;
    v74 = 0LL;
    v24 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v74, v19);
    v26 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v69, v25);
    if ( (int)DxgkpGetPairingAdapters(v22, 0LL, v26, &v70, v24, &v75, 0) < 0 )
    {
      v45 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v69, v27);
      PairingAdapters = DxgkpGetPairingAdapters(v22, 0LL, v45, &v70, 0LL, 0LL, 0);
      v38 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v60 = WdLogNewEntry5_WdError(v28, v27);
        *(_QWORD *)(v60 + 24) = v87[0];
        *(_QWORD *)(v60 + 32) = v38;
        WdLogEvent5_WdError(v60);
        goto LABEL_37;
      }
    }
    v29 = v69;
    if ( !v69 || !*((_QWORD *)v69 + 338) )
    {
      v56 = WdLogNewEntry5_WdAssertion(v28, v27);
      *(_QWORD *)(v56 + 24) = 2005LL;
      WdLogEvent5_WdAssertion(v56);
      v29 = v69;
    }
    v30 = v74;
    if ( v74 && !*((_QWORD *)v74 + 337) )
    {
      v57 = WdLogNewEntry5_WdAssertion(v74, v27);
      *(_QWORD *)(v57 + 24) = 2006LL;
      WdLogEvent5_WdAssertion(v57);
      v29 = v69;
    }
    if ( i == v29 )
      break;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)Current + 176, 0LL);
    *((_QWORD *)Current + 23) = KeGetCurrentThread();
    v31 = *((_QWORD *)v69 + 338);
    v86 = v31;
    v82 = v31 + 24;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v31 + 24, 0LL);
    *(_QWORD *)(v31 + 32) = KeGetCurrentThread();
    v32 = v69;
    v33 = v74;
    if ( v69 == v74 )
      goto LABEL_23;
    v79 = 0LL;
    v47 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v79, (__int64)v69);
    v22 = v77;
    LODWORD(v38) = DxgkpGetPairingAdapters(v77, 0LL, v47, &v80, 0LL, 0LL, 0);
    if ( (int)v38 < 0 )
    {
      DXGADAPTER_REFERENCE::Assign(&v79, 0LL);
      goto LABEL_36;
    }
    v76 = v69;
    if ( v79 == v69 )
    {
      DXGADAPTER_REFERENCE::Assign(&v79, 0LL);
      v32 = v69;
      v33 = v74;
LABEL_23:
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v91, v32, v33);
      v34 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v91, 0LL);
      v38 = v34;
      if ( v34 < 0 )
      {
        if ( v69 != v74 )
        {
          v61 = (struct DXGADAPTER *)*((unsigned int *)v69 + 50);
          if ( (_DWORD)v61 != 1 || (v61 = v69, *((_BYTE *)v69 + 2609)) )
          {
            v62 = WdLogNewEntry5_WdWarning(v61, p_hDevice, v37);
            *(_QWORD *)(v62 + 24) = v69;
            *(_QWORD *)(v62 + 32) = v38;
            WdLogEvent5_WdWarning(v62);
          }
        }
      }
      else
      {
        if ( !*((_BYTE *)v69 + 209) )
        {
          if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v36, (__int64)p_hDevice) + 761) )
          {
            v39 = v69;
            if ( (*DXGADAPTER::GetAdapterType(v69, &v81) & 0x10) != 0 )
            {
              v63 = (struct _KEVENT *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v39 + 338)
                                                                                                + 616LL)
                                                                                    + 8LL)
                                                                        + 904LL))(*(_QWORD *)(*((_QWORD *)v39 + 338)
                                                                                            + 624LL));
              Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal(v65, v64);
              DXGGLOBAL::SetSchedulerCrossAdapterData(Global, v63);
              *((_BYTE *)v69 + 206) = 1;
            }
          }
        }
        v76 = 0LL;
        if ( v69 == v74 )
          v40 = (v87[2] >> 1) & 1;
        else
          LOBYTE(v40) = 0;
        LODWORD(v38) = ADAPTER_RENDER::CreateDevice(
                         *((DXGADAPTER ***)v69 + 338),
                         (__int64 *)&v76,
                         v87[2],
                         (v87[2] & 1) == 0,
                         v74,
                         v40,
                         (v87[2] & 4) != 0,
                         0,
                         (__int64)v84,
                         (__int64)v83);
        if ( (int)v38 >= 0 )
        {
          p_hDevice = &a1->hDevice;
          if ( a4 && (unsigned __int64)p_hDevice >= MmUserProbeAddress )
            p_hDevice = (_DWORD *)MmUserProbeAddress;
          *p_hDevice = *((_DWORD *)v76 + 109);
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v91, (__int64)p_hDevice);
LABEL_36:
      *(_QWORD *)(v31 + 32) = 0LL;
      ExReleasePushLockExclusiveEx(v31 + 24, 0LL);
      KeLeaveCriticalRegion();
      *((_QWORD *)Current + 23) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 176, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_37;
    }
    v58 = WdLogNewEntry5_WdWarning(v49, v48, v50);
    *(_QWORD *)(v58 + 24) = v69;
    WdLogEvent5_WdWarning(v58);
    DXGADAPTER_REFERENCE::Assign(&v79, 0LL);
    v59 = v82;
    *(_QWORD *)(v82 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v59, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)Current + 23) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 176, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign(&v74, 0LL);
    DXGADAPTER_REFERENCE::Assign(&v69, 0LL);
  }
  v67 = (_QWORD *)WdLogNewEntry5_WdAssertion(v30, v27);
  v67[3] = v69;
  v67[4] = v22;
  LODWORD(v38) = -1073741275;
  v67[5] = -1073741275LL;
  WdLogEvent5_WdAssertion(v67);
LABEL_37:
  DXGADAPTER_REFERENCE::Assign(&v74, 0LL);
  DXGADAPTER_REFERENCE::Assign(&v69, 0LL);
  if ( v78 )
    DXGADAPTER::ReleaseReference(v78);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71, v41);
  if ( v73 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v42, &EventProfilerExit, v43, v71);
  }
  return (unsigned int)v38;
}
