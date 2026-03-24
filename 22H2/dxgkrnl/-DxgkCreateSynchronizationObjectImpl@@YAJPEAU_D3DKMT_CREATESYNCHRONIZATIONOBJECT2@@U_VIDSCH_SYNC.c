/*
 * XREFs of ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C0117F20
 * Callers:
 *     ?VmBusCreateSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D8E50 (-VmBusCreateSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateSynchronizationObject @ 0x1C01174D0 (DxgkCreateSynchronizationObject.c)
 *     ?DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z @ 0x1C0160570 (-DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z.c)
 *     ?VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023F880 (-VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateSynchronizationObjectInternal @ 0x1C0293A04 (DxgkCreateSynchronizationObjectInternal.c)
 * Callees:
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002DA4 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C00050D8 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C0005530 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0008C9C (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_2952048952__private_IsEnabledDeviceUsage @ 0x1C0027E58 (Feature_2952048952__private_IsEnabledDeviceUsage.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0047124 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C01174F4 (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0119EC8 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1C02907DC (-CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D.c)
 */

__int64 __fastcall DxgkCreateSynchronizationObjectImpl(ULONG64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v13; // rdx
  ULONG64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rsi
  struct DXGTHREAD *Current; // rax
  __int64 v18; // r15
  __int64 v19; // rax
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  bool v24; // zf
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  bool v33; // zf
  __int64 hDevice; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r9
  __int64 v38; // rax
  volatile signed __int64 *v39; // r12
  struct DXGDEVICE *v40; // rsi
  struct DXGADAPTER *v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rcx
  int v54; // esi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rdx
  _DWORD *v67; // rdx
  D3DKMT_HANDLE hSyncObject; // esi
  _DWORD *v69; // rdx
  ULONG64 v70; // r14
  D3DDDI_SYNCHRONIZATIONOBJECT_TYPE Type; // edx
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  _OWORD *v74; // rax
  D3DDDI_SYNCHRONIZATIONOBJECT_TYPE v75; // edx
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  __int64 v78; // r9
  struct _KTHREAD **v79; // rax
  __int64 MaxCount; // rbx
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // rax
  int IsEnabledDeviceUsage; // eax
  __int64 v85; // r14
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r14
  __int64 v89; // rax
  __int64 v90; // r8
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // r14
  __int64 v94; // rax
  __int64 v95; // rax
  char v96; // [rsp+50h] [rbp-318h]
  int v97; // [rsp+58h] [rbp-310h] BYREF
  __int64 v98; // [rsp+60h] [rbp-308h]
  char v99; // [rsp+68h] [rbp-300h]
  struct DXGDEVICE *v100; // [rsp+70h] [rbp-2F8h] BYREF
  __int64 v101; // [rsp+78h] [rbp-2F0h] BYREF
  int v102; // [rsp+80h] [rbp-2E8h]
  struct DXGDEVICE *v103; // [rsp+88h] [rbp-2E0h] BYREF
  __int64 v104; // [rsp+90h] [rbp-2D8h]
  struct DXGDEVICE *v105; // [rsp+98h] [rbp-2D0h] BYREF
  int v106; // [rsp+A0h] [rbp-2C8h]
  struct DXGADAPTER *v107[2]; // [rsp+A8h] [rbp-2C0h] BYREF
  _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v108[2]; // [rsp+B8h] [rbp-2B0h] BYREF
  struct DXGADAPTER *v109; // [rsp+C0h] [rbp-2A8h] BYREF
  int v110; // [rsp+C8h] [rbp-2A0h]
  struct DXGSYNCOBJECT *v111[2]; // [rsp+D0h] [rbp-298h] BYREF
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v112; // [rsp+E0h] [rbp-288h] BYREF
  __int64 v113; // [rsp+140h] [rbp-228h] BYREF
  DXGADAPTER *v114; // [rsp+148h] [rbp-220h] BYREF
  _BYTE v115[8]; // [rsp+160h] [rbp-208h] BYREF
  _BYTE v116[16]; // [rsp+168h] [rbp-200h] BYREF
  __int64 v117; // [rsp+178h] [rbp-1F0h]
  _BYTE v118[16]; // [rsp+1A8h] [rbp-1C0h] BYREF
  __int64 v119; // [rsp+1B8h] [rbp-1B0h]
  _BYTE v120[160]; // [rsp+1F0h] [rbp-178h] BYREF
  _BYTE v121[144]; // [rsp+290h] [rbp-D8h] BYREF
  unsigned int v122; // [rsp+378h] [rbp+10h]

  v122 = a2;
  *(_QWORD *)&v108[0].hSyncObject = a4;
  v102 = a3;
  v5 = a2;
  v97 = -1;
  v98 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v99 = 1;
    v97 = 2041;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2041);
  }
  else
  {
    v99 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v97, 2041LL);
  CurrentProcess = PsGetCurrentProcess(v8, v7, v9, v10);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v16 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v14, v13)) == 0LL
    || (v18 = *((_QWORD *)Current + 1)) == 0 )
  {
    v18 = v16;
  }
  v104 = v18;
  if ( !v18 )
  {
    v19 = WdLogNewEntry5_WdError(v14, v13);
    v20 = -1073741811;
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v97, v21);
    v24 = v99 == 0;
    goto LABEL_150;
  }
  v96 = *(_BYTE *)(v18 + 347) & 0x30;
  if ( v102 )
  {
    v14 = MmUserProbeAddress;
    v25 = (_D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)a1;
    if ( a1 >= MmUserProbeAddress )
      v25 = (_D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
    v112 = *v25;
    if ( (v5 & 0x7FFFFFFF) == 1 && (v112.Info.Flags.Value & 0x80000000) != 0 )
    {
      v5 = v5 & 0x80000000 | 5;
      v122 = v5;
    }
  }
  else
  {
    v112 = *(_D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)a1;
  }
  v112.hSyncObject = 0;
  if ( (v112.Info.Flags.Value & 0x7FFFFE00) != 0 )
  {
    v26 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    v20 = -1073741811;
    *(_QWORD *)(v26 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v26);
LABEL_149:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v97, v27);
    v24 = v99 == 0;
LABEL_150:
    if ( !v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v97);
    return (unsigned int)v20;
  }
  v28 = (v112.Info.Flags.Value >> 1) & 1;
  if ( ((v112.Info.Flags.Value >> 1) & 1) != 0 && (*(_BYTE *)&v112.Info.Flags.0 & 1) == 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&gDxgkrnlCounterAccumulated);
    v29 = WdLogNewEntry5_WdWarning(v112.Info.Flags.Value, v28, v15);
    *(_QWORD *)(v29 + 24) = 458LL;
LABEL_25:
    WdLogEvent5_WdWarning(v29);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v97, v30);
    v33 = v99 == 0;
LABEL_72:
    if ( !v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v97);
    return (unsigned int)-1073741811;
  }
  if ( (unsigned int)(v112.Info.Type - 5) <= 1 )
  {
    if ( a4 )
    {
      v29 = WdLogNewEntry5_WdWarning(v112.Info.Flags.Value, v28, v15);
      *(_QWORD *)(v29 + 24) = 467LL;
      goto LABEL_25;
    }
    if ( (*(_BYTE *)&v112.Info.Flags.0 & 1) != 0 && !(_DWORD)v28 )
    {
      v29 = WdLogNewEntry5_WdWarning(v112.Info.Flags.Value, v28, v15);
      *(_QWORD *)(v29 + 24) = 472LL;
      goto LABEL_25;
    }
    if ( (*(_BYTE *)&v112.Info.Flags.0 & 0x10) != 0 && (*(_BYTE *)&v112.Info.Flags.0 & 0x20) != 0 )
    {
      v29 = WdLogNewEntry5_WdWarning(v112.Info.Flags.Value, v28, v15);
      *(_QWORD *)(v29 + 24) = 478LL;
      goto LABEL_25;
    }
  }
  else if ( *(_BYTE *)&v112.Info.Flags.0 < 0 )
  {
    v29 = WdLogNewEntry5_WdWarning(v112.Info.Flags.Value, v28, v15);
    *(_QWORD *)(v29 + 24) = 484LL;
    goto LABEL_25;
  }
  v103 = 0LL;
  hDevice = v112.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v100, v112.hDevice, (struct _KTHREAD **)v18, &v103);
  if ( !v103 && (v102 || (_DWORD)hDevice) )
  {
    v38 = WdLogNewEntry5_WdError(v36, v35);
    *(_QWORD *)(v38 + 24) = hDevice;
    v20 = -1073741811;
    *(_QWORD *)(v38 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v38);
LABEL_146:
    if ( v100 && _InterlockedExchangeAdd64((volatile signed __int64 *)v100 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v100 + 2), v100);
    goto LABEL_149;
  }
  v111[0] = 0LL;
  v113 = 0LL;
  v39 = 0LL;
  v107[0] = 0LL;
  v40 = v103;
  v105 = v103;
  v106 = 0;
  if ( *(_QWORD *)&v108[0].hSyncObject )
  {
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v121,
      *(struct DXGADAPTER *const *)&v108[0].hSyncObject,
      0LL);
    v110 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v121, 0LL);
    if ( v110 >= 0 )
    {
      LOBYTE(v62) = 1;
      v20 = CreateSynchronizationObjectInternal(
              v40,
              v62,
              *(_QWORD *)(*(_QWORD *)&v108[0].hSyncObject + 2704LL),
              &v112,
              v5,
              0,
              v111,
              0LL,
              0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v121, v66);
LABEL_85:
      if ( v20 < 0 )
      {
        v95 = WdLogNewEntry5_WdWarning(v51, v50, v52);
        *(_QWORD *)(v95 + 24) = v20;
        WdLogEvent5_WdWarning(v95);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
        DXGADAPTER_REFERENCE::Assign(v107, 0LL);
      }
      else
      {
        if ( v102 )
        {
          v67 = (_DWORD *)(a1 + 88);
          if ( a1 + 88 >= MmUserProbeAddress )
            v67 = (_DWORD *)MmUserProbeAddress;
          hSyncObject = v112.hSyncObject;
          *v67 = v112.hSyncObject;
          if ( (*(_BYTE *)&v112.Info.Flags.0 & 1) != 0 && ((*(_BYTE *)&v112.Info.Flags.0 & 2) == 0 || v96) )
          {
            v69 = (_DWORD *)(a1 + 80);
            if ( a1 + 80 >= MmUserProbeAddress )
              v69 = (_DWORD *)MmUserProbeAddress;
            *v69 = v112.Info.SharedHandle;
          }
          v70 = a1 + 16;
          Type = v112.Info.Type;
          v72 = *(_OWORD *)&v112.Info.SynchronizationMutex.InitialState;
          v73 = *(_OWORD *)&v112.Info.Reserved.Reserved[2];
          if ( v112.Info.Type == D3DDDI_MONITORED_FENCE )
          {
            v74 = (_OWORD *)v70;
            if ( v70 >= MmUserProbeAddress )
              v74 = (_OWORD *)MmUserProbeAddress;
            *v74 = *(_OWORD *)&v112.Info.SynchronizationMutex.InitialState;
            v74[1] = v73;
          }
          if ( Type == D3DDDI_PERIODIC_MONITORED_FENCE )
          {
            if ( v70 >= MmUserProbeAddress )
              v70 = MmUserProbeAddress;
            *(_OWORD *)v70 = v72;
            *(_OWORD *)(v70 + 16) = v73;
            *(_QWORD *)(v70 + 32) = v112.Info.Reserved.Reserved[4];
          }
        }
        else
        {
          hSyncObject = v112.hSyncObject;
          *(_DWORD *)(a1 + 88) = v112.hSyncObject;
          if ( (*(_BYTE *)&v112.Info.Flags.0 & 1) != 0 && ((*(_BYTE *)&v112.Info.Flags.0 & 2) == 0 || v96) )
            *(_DWORD *)(a1 + 80) = v112.Info.SharedHandle;
          v75 = v112.Info.Type;
          v76 = *(_OWORD *)&v112.Info.SynchronizationMutex.InitialState;
          v77 = *(_OWORD *)&v112.Info.Reserved.Reserved[2];
          if ( v112.Info.Type == D3DDDI_MONITORED_FENCE )
          {
            *(_OWORD *)(a1 + 16) = *(_OWORD *)&v112.Info.SynchronizationMutex.InitialState;
            *(_OWORD *)(a1 + 32) = v77;
          }
          if ( v75 == D3DDDI_PERIODIC_MONITORED_FENCE )
          {
            *(_OWORD *)(a1 + 16) = v76;
            *(_OWORD *)(a1 + 32) = v77;
            *(_QWORD *)(a1 + 48) = v112.Info.Reserved.Reserved[4];
          }
        }
        if ( bTracingEnabled )
        {
          v78 = v113 ? *(_QWORD *)(v113 + 32) : 0LL;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0ppp_EtwWriteTransfer((__int64)v103, &EventOpenSyncObject, v52, v78, hSyncObject, v103);
        }
        if ( v112.Info.Type == D3DDDI_PERIODIC_MONITORED_FENCE )
        {
          v109 = 0LL;
          v79 = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
          MaxCount = v112.Info.Semaphore.MaxCount;
          DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
            (DXGADAPTERBYHANDLE *)&v114,
            v112.Info.Semaphore.MaxCount,
            v79,
            &v109,
            1);
          if ( v109 )
          {
            v20 = CreatePeriodicMonitoredFenceNotificationInternal(v109, (struct DXGADAPTER *)v39, v111[0], &v112, 0);
            if ( v114 )
              DXGADAPTER::ReleaseReference(v114);
            hSyncObject = v112.hSyncObject;
          }
          else
          {
            v83 = WdLogNewEntry5_WdWarning(0LL, v81, v82);
            *(_QWORD *)(v83 + 24) = MaxCount;
            v20 = -1073741811;
            *(_QWORD *)(v83 + 32) = -1073741811LL;
            WdLogEvent5_WdWarning(v83);
            if ( v114 )
              DXGADAPTER::ReleaseReference(v114);
          }
        }
        IsEnabledDeviceUsage = Feature_2952048952__private_IsEnabledDeviceUsage();
        v85 = v18 + 208;
        v104 = v18 + 208;
        if ( IsEnabledDeviceUsage )
        {
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v18 + 208));
          v86 = (hSyncObject >> 6) & 0xFFFFFF;
          if ( (unsigned int)v86 < *(_DWORD *)(v18 + 256) )
          {
            v87 = *(_QWORD *)(v18 + 240);
            if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v87 + 16 * v86 + 8) & 0x60)
              && (*(_DWORD *)(v87 + 16 * v86 + 8) & 0x1F) != 0 )
            {
              v88 = 2 * ((*(_QWORD *)&v112.hSyncObject >> 6) & 0xFFFFFFLL);
              if ( (*(_DWORD *)(v87 + 16 * ((*(_QWORD *)&v112.hSyncObject >> 6) & 0xFFFFFFLL) + 8) & 0x2000) == 0 )
              {
                v89 = WdLogNewEntry5_WdAssertion((hSyncObject >> 25) & 0x60, v87);
                *(_QWORD *)(v89 + 24) = 222LL;
                WdLogEvent5_WdAssertion(v89);
                v87 = *(_QWORD *)(v18 + 240);
              }
              *(_DWORD *)(v87 + 8 * v88 + 8) &= ~0x2000u;
              v85 = v104;
            }
          }
          *(_QWORD *)(v85 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v85, 0LL);
          KeLeaveCriticalRegion();
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
        }
        else
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v18 + 208));
          v91 = (hSyncObject >> 6) & 0xFFFFFF;
          if ( (unsigned int)v91 < *(_DWORD *)(v18 + 256) )
          {
            v92 = *(_QWORD *)(v18 + 240);
            if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v92 + 16 * v91 + 8) & 0x60)
              && (*(_DWORD *)(v92 + 16 * v91 + 8) & 0x1F) != 0 )
            {
              v93 = 2 * ((*(_QWORD *)&v112.hSyncObject >> 6) & 0xFFFFFFLL);
              if ( (*(_DWORD *)(v92 + 16 * ((*(_QWORD *)&v112.hSyncObject >> 6) & 0xFFFFFFLL) + 8) & 0x2000) == 0 )
              {
                v94 = WdLogNewEntry5_WdAssertion((hSyncObject >> 25) & 0x60, v92);
                *(_QWORD *)(v94 + 24) = 222LL;
                WdLogEvent5_WdAssertion(v94);
                v92 = *(_QWORD *)(v18 + 240);
              }
              *(_DWORD *)(v92 + 8 * v93 + 8) &= ~0x2000u;
              v85 = v104;
            }
          }
          *(_QWORD *)(v85 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v85, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( v20 < 0 )
        {
          v108[0].hSyncObject = hSyncObject;
          DxgkDestroySynchronizationObjectImpl(v108, 0, v90);
        }
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
        if ( v39 && _InterlockedExchangeAdd64(v39 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v107[0] + 2), v107[0]);
      }
      goto LABEL_146;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v121, v62);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
    DXGADAPTER_REFERENCE::Assign(v107, 0LL);
    if ( v100 && _InterlockedExchangeAdd64((volatile signed __int64 *)v100 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v100 + 2), v100);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v97, v63);
    if ( v99 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v64, &EventProfilerExit, v65, v97);
    return (unsigned int)v110;
  }
  else
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v120, (__int64)v103, 0, v37, 0);
    v41 = (struct DXGDEVICE *)((char *)v40 + 16);
    v109 = v41;
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v115,
      *(struct DXGADAPTER *const *)(*(_QWORD *)v41 + 16LL),
      0LL);
    if ( (unsigned int)(v112.Info.Type - 5) > 1 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v118, 0LL);
      if ( *(_DWORD *)(v119 + 200) != 1 )
        goto LABEL_47;
      if ( v117 != v119 )
      {
        COREACCESS::AcquireShared((COREACCESS *)v116, 0LL);
        if ( *(_DWORD *)(v117 + 200) != 1 )
        {
          COREACCESS::Release((COREACCESS *)v116);
LABEL_47:
          COREACCESS::Release((COREACCESS *)v118);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v115, v43);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v120);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
          DXGADAPTER_REFERENCE::Assign(v107, 0LL);
          if ( v100 && _InterlockedExchangeAdd64((volatile signed __int64 *)v100 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v100 + 2), v100);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v97, v44);
          if ( v99 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v45, &EventProfilerExit, v46, v97);
          return 3221226166LL;
        }
      }
      v115[1] = 1;
      v48 = *(_QWORD *)v41;
      v5 = v122;
      goto LABEL_55;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
    v54 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v120, 0LL);
    if ( v54 >= 0 )
    {
      v41 = v109;
      v48 = *(_QWORD *)v109;
      v58 = *(_QWORD *)(*(_QWORD *)v109 + 16LL);
      if ( *(int *)(v58 + 2328) < 0x2000 && !*(_BYTE *)(v58 + 2628) )
      {
        v59 = WdLogNewEntry5_WdWarning(v53, v42, v48);
        *(_QWORD *)(v59 + 24) = 533LL;
        WdLogEvent5_WdWarning(v59);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v115, v60);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v120);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
        DXGADAPTER_REFERENCE::Assign(v107, 0LL);
        if ( v100 && _InterlockedExchangeAdd64((volatile signed __int64 *)v100 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v100 + 2), v100);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v97, v61);
        v33 = v99 == 0;
        goto LABEL_72;
      }
LABEL_55:
      v39 = *(volatile signed __int64 **)(v48 + 16);
      v107[0] = (struct DXGADAPTER *)v39;
      if ( v39 )
      {
        _InterlockedIncrement64(v39 + 3);
        v107[1] = (struct DXGADAPTER *)-1LL;
        v48 = *(_QWORD *)v41;
        v5 = v122;
        v39 = (volatile signed __int64 *)v107[0];
      }
      v101 = 0LL;
      LOBYTE(v42) = 1;
      v20 = CreateSynchronizationObjectInternal(v103, v42, v48, &v112, v5, 0, v111, &v101, &v113);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v115, v49);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v120);
      goto LABEL_85;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v115, v42);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v120);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
    DXGADAPTER_REFERENCE::Assign(v107, 0LL);
    if ( v100 && _InterlockedExchangeAdd64((volatile signed __int64 *)v100 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v100 + 2), v100);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v97, v55);
    if ( v99 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v56, &EventProfilerExit, v57, v97);
    return (unsigned int)v54;
  }
}
