/*
 * XREFs of ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00F9FD0
 * Callers:
 *     ?VmBusCreateAllocationCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D80E0 (-VmBusCreateAllocationCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateAllocation @ 0x1C015C590 (DxgkCreateAllocation.c)
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023DEF0 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00033B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00033FC (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0005324 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0005358 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C0005530 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C00261B0 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     _lambda_3a889f2a3da19ece0881b5d4724e0c1b_::_lambda_invoker_cdecl_ @ 0x1C00D6C50 (_lambda_3a889f2a3da19ece0881b5d4724e0c1b_--_lambda_invoker_cdecl_.c)
 *     ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C00EEEC4 (-IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00FD200 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0123C80 (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0123CD0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0126818 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020D704 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEAPEAX@Z @ 0x1C0228AB8 (-GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEA.c)
 *     ?ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDALLOCATION@@_N@Z @ 0x1C0229874 (-ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDAL.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCreateAllocationInternal(struct _D3DKMT_CREATEALLOCATION *a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rbx
  struct DXGTHREAD *Current; // rax
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  bool v15; // bl
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  bool v20; // zf
  _D3DKMT_CREATEALLOCATION *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct DXGDEVICE *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int Flags; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 NumAllocations; // rdx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  int StandardAllocationDriverData; // ebx
  __int64 v37; // rcx
  int v38; // ebx
  struct _KEVENT *v39; // r12
  struct _KEVENT *v40; // rcx
  __int64 v41; // rcx
  unsigned __int8 v42; // bl
  __int64 v43; // r8
  volatile signed __int64 *v44; // rbx
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  SIZE_T v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  PVOID v64; // r12
  _QWORD *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  struct DXGDEVICE *v69; // r13
  __int64 v70; // rax
  __int64 v71; // rbx
  OUTPUTDUPL_MGR *v72; // rcx
  DXGGLOBAL *Global; // rax
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v75; // rdx
  unsigned int v76; // eax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  unsigned int v83; // edi
  _DWORD *p_hResource; // rdx
  _DWORD *p_hGlobalShare; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS *p_Flags; // rdx
  struct DXGADAPTER *v87; // rbx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  unsigned __int8 v91; // [rsp+80h] [rbp-208h]
  int v92; // [rsp+88h] [rbp-200h] BYREF
  __int64 v93; // [rsp+90h] [rbp-1F8h]
  char v94; // [rsp+98h] [rbp-1F0h]
  char v95[8]; // [rsp+A0h] [rbp-1E8h] BYREF
  struct DXGDEVICE *v96; // [rsp+A8h] [rbp-1E0h] BYREF
  unsigned int v97; // [rsp+B0h] [rbp-1D8h] BYREF
  unsigned __int64 *v98; // [rsp+B8h] [rbp-1D0h]
  _D3DKMT_CREATEALLOCATION v99; // [rsp+C0h] [rbp-1C8h] BYREF
  void *v100; // [rsp+110h] [rbp-178h] BYREF
  struct DXGDEVICE *v101; // [rsp+118h] [rbp-170h] BYREF
  int v102; // [rsp+120h] [rbp-168h]
  __int64 v103; // [rsp+128h] [rbp-160h]
  PVOID v104; // [rsp+130h] [rbp-158h]
  __int64 v105; // [rsp+138h] [rbp-150h] BYREF
  struct DXGADAPTER *v106; // [rsp+140h] [rbp-148h]
  char v107; // [rsp+148h] [rbp-140h]
  __int64 v108[3]; // [rsp+150h] [rbp-138h] BYREF
  int Size; // [rsp+180h] [rbp-108h] BYREF
  __int64 v110; // [rsp+184h] [rbp-104h]
  int v111; // [rsp+18Ch] [rbp-FCh]
  __int64 v112; // [rsp+190h] [rbp-F8h]
  struct _D3DKMT_CREATESTANDARDALLOCATION v113; // [rsp+198h] [rbp-F0h] BYREF
  char v114[8]; // [rsp+1B0h] [rbp-D8h] BYREF
  _BYTE v115[16]; // [rsp+1B8h] [rbp-D0h] BYREF
  DXGADAPTER *v116; // [rsp+1C8h] [rbp-C0h]
  char v117; // [rsp+1D0h] [rbp-B8h]
  __int64 v118; // [rsp+1D8h] [rbp-B0h]
  _BYTE v119[16]; // [rsp+1F8h] [rbp-90h] BYREF
  __int64 v120; // [rsp+208h] [rbp-80h]
  __int64 v121; // [rsp+238h] [rbp-50h]
  char v122; // [rsp+240h] [rbp-48h]

  v98 = a2;
  v92 = -1;
  v93 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v94 = 1;
    v92 = 2003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2003);
  }
  else
  {
    v94 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v92, 2003LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6, v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v12 = *((_QWORD *)Current + 1)) == 0 )
  {
    v12 = v10;
  }
  v103 = v12;
  v15 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v91 = v15;
  if ( !v12 )
  {
    v16 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92, v17);
    v20 = v94 == 0;
LABEL_103:
    if ( !v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v92);
    return 3221225485LL;
  }
  memset(&v113, 0, sizeof(v113));
  if ( v15 )
  {
    v21 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v21 = (_D3DKMT_CREATEALLOCATION *)MmUserProbeAddress;
    v99 = *v21;
  }
  else
  {
    v99 = *a1;
  }
  v96 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v95, v99.hDevice, (struct _KTHREAD **)v12, &v96);
  v24 = v96;
  if ( !v96 )
  {
    v25 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v25 + 24) = v99.hDevice;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v25);
LABEL_102:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v95);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92, v79);
    v20 = v94 == 0;
    goto LABEL_103;
  }
  v20 = (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() == 0;
  Flags = (unsigned int)v99.Flags;
  if ( v20 )
  {
    Flags = *(_DWORD *)&v99.Flags & 0xFFEFFFFF;
    *(_DWORD *)&v99.Flags &= ~0x100000u;
  }
  if ( (Flags & 0x100000) != 0 )
  {
    if ( (Flags & 0x10000) != 0 )
    {
      v30 = WdLogNewEntry5_WdError(v27, v26);
      *(_QWORD *)(v30 + 24) = 8707LL;
      WdLogEvent5_WdError(v30);
      goto LABEL_102;
    }
    if ( !g_OSTestSigningEnabled )
    {
      v31 = WdLogNewEntry5_WdError(v27, v26);
      *(_QWORD *)(v31 + 24) = 8712LL;
      WdLogEvent5_WdError(v31);
      goto LABEL_102;
    }
  }
  NumAllocations = v99.NumAllocations;
  if ( v99.NumAllocations > 0x682AA )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v99.NumAllocations, v28);
    v33[3] = v24;
    v33[4] = v99.NumAllocations;
    v33[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v33);
    goto LABEL_102;
  }
  v34 = *(unsigned __int8 *)(v12 + 347);
  LOBYTE(v34) = v34 & 0x20;
  if ( !(_BYTE)v34 && ((Flags & 8) != 0 || (Flags & 0x100) != 0 || (Flags & 0x1000) != 0 || (Flags & 0x200) != 0)
    || (Flags & 0x20) != 0 && (Flags & 0x10000) == 0 && !(_BYTE)v34 )
  {
LABEL_33:
    v35 = WdLogNewEntry5_WdWarning(v34, NumAllocations, v28);
    *(_QWORD *)(v35 + 24) = v24;
    *(_QWORD *)(v35 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v35);
    goto LABEL_102;
  }
  if ( (Flags & 0x20000) != 0 )
  {
    if ( (Flags & 0x10000) == 0 )
      goto LABEL_33;
  }
  else if ( (Flags & 0x10000) == 0 )
  {
    goto LABEL_43;
  }
  StandardAllocationDriverData = ValidateStandardAllocationParams(&v99, &v113, v15);
  if ( StandardAllocationDriverData < 0 )
    goto LABEL_109;
  LOBYTE(Flags) = v99.Flags;
  NumAllocations = v99.NumAllocations;
LABEL_43:
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 || !v99.hResource && !(_DWORD)NumAllocations )
    goto LABEL_33;
  v101 = v24;
  v37 = *(_QWORD *)(*((_QWORD *)v24 + 2) + 16LL);
  if ( *(int *)(v37 + 2328) >= 0x2000 || *(_BYTE *)(v37 + 2628) )
    v38 = *((_DWORD *)DXGGLOBAL::GetGlobal(v37, NumAllocations) + 311);
  else
    v38 = 0;
  v102 = v38;
  v39 = (struct _KEVENT *)*((_QWORD *)v24 + 2);
  if ( *((_DWORD *)v24 + 108) == 2 )
  {
    if ( KeReadStateEvent(v39 + 5) )
      goto LABEL_57;
    v40 = v39 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v39 + 4) )
      goto LABEL_57;
    v40 = v39 + 4;
  }
  KeWaitForSingleObject(v40, Executive, 0, 0, 0LL);
LABEL_57:
  KeEnterCriticalRegion();
  if ( v38 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v24 + 144, 0LL) )
      goto LABEL_68;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v24 + 2) + 16LL) + 104LL));
    v42 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v24 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v24 + 144));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v24 + 17), 0) )
      goto LABEL_68;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v24 + 2) + 16LL) + 104LL));
    v42 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v24 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v41, &EventBlockThread, v43, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v24 + 17), 1u);
  }
  if ( v42 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v24 + 2) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v24 + 2) + 16LL) + 104LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_68:
  v44 = *(volatile signed __int64 **)(*((_QWORD *)v24 + 2) + 16LL);
  v106 = (struct DXGADAPTER *)v44;
  _InterlockedIncrement64(v44 + 3);
  v105 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v44 + 17, 0LL);
  v107 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v114, (__int64)v96, 2, v45, 0);
  if ( v122 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v119, 0LL);
    v47 = *(unsigned int *)(v120 + 200);
    if ( (_DWORD)v47 != 1 )
    {
LABEL_81:
      COREACCESS::Release((COREACCESS *)v119);
LABEL_82:
      v54 = WdLogNewEntry5_WdWarning(v52, v51, v53);
      *(_QWORD *)(v54 + 24) = v96;
      *(_QWORD *)(v54 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v54);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v114);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v105);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v101);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v95);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92, v55);
      if ( v94 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v56, &EventProfilerExit, v57, v92);
      return 3221226166LL;
    }
  }
  if ( v117 )
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47, v46);
    v48[3] = 275LL;
    v48[4] = 4LL;
    v48[5] = v115;
    v48[6] = 0LL;
    v48[7] = 0LL;
    WdLogEvent5_WdCriticalError(v48);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v116 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v116 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v49, &EventBlockThread, v50, 72);
      KeWaitForSingleObject((char *)v116 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v116, 0LL);
  }
  v118 = 0LL;
  v117 = 1;
  if ( *(_DWORD *)(v121 + 576) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v115);
    if ( !v122 )
      goto LABEL_82;
    goto LABEL_81;
  }
  v59 = 8LL * v99.NumAllocations;
  if ( !is_mul_ok(v99.NumAllocations, 8uLL) )
    v59 = -1LL;
  v64 = operator new[](v59, 0x4B677844u, PagedPool);
  v104 = v64;
  if ( !v64 )
  {
    v65 = (_QWORD *)WdLogNewEntry5_WdLowResource(v61, v60, v62, v63);
    v65[3] = v96;
    v65[4] = v99.NumAllocations;
    v65[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v65);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v114);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v105);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v101);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v95);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92, v66);
    if ( v94 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v67, &EventProfilerExit, v68, v92);
    return 3221225495LL;
  }
  v69 = v96;
  v70 = *((_QWORD *)v96 + 231);
  if ( v70 )
  {
    v71 = *(_QWORD *)(v70 + 2696);
    v72 = *(OUTPUTDUPL_MGR **)(v71 + 104);
    if ( !v72 || (int)lambda_3a889f2a3da19ece0881b5d4724e0c1b_::_lambda_invoker_cdecl_(v72, v96) >= 0 )
    {
      v108[0] = *(_QWORD *)(*(_QWORD *)(v71 + 16) + 316LL);
      v108[1] = (__int64)lambda_3a889f2a3da19ece0881b5d4724e0c1b_::_lambda_invoker_cdecl_;
      v108[2] = (__int64)v69;
      Global = DXGGLOBAL::GetGlobal(v108[0], v60);
      DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
        Global,
        lambda_f082766c36497653ae8a33afcd4107b6_::_lambda_invoker_cdecl_,
        v108);
    }
  }
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
    OUTPUTDUPL_MGR::CleanUpPendingList(RemoteOutputDuplMgr, v69);
  v99.hGlobalShare = 0;
  v99.hDevice = 0;
  v100 = 0LL;
  v76 = 0;
  v97 = 0;
  if ( (*(_DWORD *)&v99.Flags & 0x10000) != 0 )
  {
    v77 = *(_QWORD *)(*((_QWORD *)v24 + 2) + 16LL);
    if ( *(int *)(v77 + 2596) < 2000 )
    {
      v78 = WdLogNewEntry5_WdError(v77, v75);
      *(_QWORD *)(v78 + 24) = v69;
      *(_QWORD *)(v78 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v78);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v114);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v105);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v101);
      goto LABEL_102;
    }
    v112 = 0LL;
    Size = v113.ExistingHeapData.Size;
    v110 = 1LL;
    v111 = 7;
    StandardAllocationDriverData = DXGDEVICE::GetStandardAllocationDriverData(
                                     v69,
                                     (enum _D3DKMDT_STANDARDALLOCATION_TYPE)v75,
                                     &Size,
                                     &v97,
                                     &v100);
    if ( StandardAllocationDriverData < 0 )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v114);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v105);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v101);
LABEL_109:
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v95);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92, v80);
      if ( v94 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v81, &EventProfilerExit, v82, v92);
      return (unsigned int)StandardAllocationDriverData;
    }
    v76 = v97;
  }
  v83 = DXGDEVICE::CreateAllocation(
          v69,
          &v99,
          v91,
          0,
          0LL,
          0LL,
          (struct COREDEVICEACCESS *)v114,
          0,
          0LL,
          0LL,
          0LL,
          v98,
          &v113,
          v100,
          v76);
  LODWORD(v98) = v83;
  if ( v91 )
  {
    p_hResource = &a1->hResource;
    if ( (unsigned __int64)&a1->hResource >= MmUserProbeAddress )
      p_hResource = (_DWORD *)MmUserProbeAddress;
    *p_hResource = v99.hResource;
    p_hGlobalShare = &a1->hGlobalShare;
    if ( (unsigned __int64)&a1->hGlobalShare >= MmUserProbeAddress )
      p_hGlobalShare = (_DWORD *)MmUserProbeAddress;
    *p_hGlobalShare = v99.hGlobalShare;
    p_Flags = &a1->Flags;
    if ( (unsigned __int64)&a1->Flags >= MmUserProbeAddress )
      p_Flags = (D3DKMT_CREATEALLOCATIONFLAGS *)MmUserProbeAddress;
    *p_Flags = v99.Flags;
  }
  else
  {
    a1->hResource = v99.hResource;
    a1->hGlobalShare = v99.hGlobalShare;
    a1->Flags = v99.Flags;
  }
  operator delete[](v64);
  operator delete[](v100);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v114);
  v87 = v106;
  ExReleasePushLockSharedEx((char *)v106 + 136, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v87 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v106 + 2), v106);
  if ( v102 )
    ExReleasePushLockSharedEx((char *)v96 + 144, 0LL);
  else
    ExReleaseResourceLite(*((PERESOURCE *)v96 + 17));
  KeLeaveCriticalRegion();
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v95);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92, v88);
  if ( v94 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v89, &EventProfilerExit, v90, v92);
  return v83;
}
