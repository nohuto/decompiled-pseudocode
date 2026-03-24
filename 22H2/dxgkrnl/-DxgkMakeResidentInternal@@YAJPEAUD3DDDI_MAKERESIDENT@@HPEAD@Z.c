/*
 * XREFs of ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z @ 0x1C0154250
 * Callers:
 *     ?VmBusMakeResidentCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D98C0 (-VmBusMakeResidentCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEAD@Z @ 0x1C0154130 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEAD@Z.c)
 *     DxgkMakeResident @ 0x1C0154230 (DxgkMakeResident.c)
 *     ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02436A0 (-VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00033FC (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0005358 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C0005530 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0005790 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0019DC8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001E090 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0026010 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C0026914 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     McTemplateK0qxx_EtwWriteTransfer @ 0x1C0047748 (McTemplateK0qxx_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020D704 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C024A2B8 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C027CF54 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C027CF94 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02857F4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkMakeResidentInternal(struct D3DDDI_MAKERESIDENT *a1, int a2, char *a3)
{
  struct D3DDDI_MAKERESIDENT *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  ULONG64 v11; // rdx
  __int128 *v12; // rcx
  __int64 v13; // r8
  struct DXGPROCESS *v14; // rbx
  struct DXGPROCESS *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGPAGINGQUEUE *v19; // r15
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 NumAllocations; // rbx
  _BYTE *v25; // r13
  _BYTE *PoolWithTag; // r12
  unsigned int *AllocationList; // rsi
  unsigned int *v28; // r13
  __int64 v29; // rdi
  __int64 v30; // rcx
  int v31; // ebx
  struct _KEVENT *v32; // r15
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r8
  char *v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  struct _KTHREAD **v46; // rbx
  struct _KTHREAD **v47; // r15
  unsigned int *v48; // rcx
  unsigned int v49; // r8d
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  struct _EX_RUNDOWN_REF *v53; // rax
  ULONG_PTR Count; // rbx
  ULONG_PTR *v55; // rcx
  _QWORD *v56; // rbx
  struct _EX_RUNDOWN_REF *v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  struct DXGTHREAD *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  struct DXGTHREAD *v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  struct DXGPAGINGQUEUE *v67; // rdi
  __int64 v68; // rsi
  struct D3DDDI_MAKERESIDENT *v69; // r15
  int v70; // ebx
  unsigned __int64 *p_PagingFenceValue; // r13
  __int64 v72; // rdx
  __int64 v73; // rcx
  int Resident; // ebx
  __int64 v75; // r8
  int v76; // r9d
  struct D3DDDI_MAKERESIDENT *v77; // r8
  _QWORD *v78; // rcx
  _QWORD *v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  bool v89; // zf
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rax
  bool v94; // cf
  SIZE_T v95; // rax
  char *v96; // rax
  struct _KEVENT *v97; // rcx
  __int64 v98; // rcx
  unsigned __int8 v99; // bl
  __int64 v100; // r8
  unsigned __int8 v101; // bl
  _QWORD *v102; // rax
  _BYTE *v103; // rcx
  signed __int64 v104; // rbx
  char v105; // al
  _BYTE *v106; // rax
  _BYTE *v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  struct DXGTHREAD *v111; // rax
  __int64 v112; // rax
  __int64 v113; // rdx
  struct _EX_RUNDOWN_REF *v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rdx
  __int64 v117; // rax
  _QWORD *v118; // rax
  __int64 v119; // rax
  __int64 v120; // rdi
  unsigned int v121; // esi
  unsigned __int64 *p_NumBytesToTrim; // rbx
  unsigned int HostProcess; // eax
  __int64 v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  char v128; // [rsp+50h] [rbp-458h]
  int v129; // [rsp+58h] [rbp-450h] BYREF
  __int64 v130; // [rsp+60h] [rbp-448h]
  char v131; // [rsp+68h] [rbp-440h]
  struct _EX_RUNDOWN_REF *v132; // [rsp+70h] [rbp-438h] BYREF
  DXGPAGINGQUEUE *v133; // [rsp+78h] [rbp-430h] BYREF
  struct D3DDDI_MAKERESIDENT *v134; // [rsp+80h] [rbp-428h]
  struct DXGALLOCATIONREFERENCE *v135; // [rsp+88h] [rbp-420h]
  struct DXGPAGINGQUEUE *v136; // [rsp+90h] [rbp-418h] BYREF
  struct D3DDDI_MAKERESIDENT *v137; // [rsp+98h] [rbp-410h]
  __int64 v138; // [rsp+A0h] [rbp-408h] BYREF
  int v139; // [rsp+A8h] [rbp-400h]
  struct DXGPROCESS *v140; // [rsp+B0h] [rbp-3F8h]
  char *v141; // [rsp+B8h] [rbp-3F0h]
  ULONG_PTR *v142; // [rsp+C0h] [rbp-3E8h]
  struct DXGALLOCATIONREFERENCE *v143; // [rsp+C8h] [rbp-3E0h]
  __int64 v144; // [rsp+D0h] [rbp-3D8h]
  unsigned int v145; // [rsp+D8h] [rbp-3D0h]
  struct D3DDDI_MAKERESIDENT *v146; // [rsp+E0h] [rbp-3C8h]
  _BYTE v147[24]; // [rsp+E8h] [rbp-3C0h] BYREF
  __int128 v148; // [rsp+100h] [rbp-3A8h] BYREF
  __int128 v149; // [rsp+110h] [rbp-398h]
  __int128 v150; // [rsp+120h] [rbp-388h]
  PVOID P; // [rsp+130h] [rbp-378h]
  _BYTE v152[320]; // [rsp+138h] [rbp-370h] BYREF
  int v153; // [rsp+278h] [rbp-230h]
  char v154[8]; // [rsp+280h] [rbp-228h] BYREF
  _BYTE v155[16]; // [rsp+288h] [rbp-220h] BYREF
  DXGADAPTER *v156; // [rsp+298h] [rbp-210h]
  char v157; // [rsp+2A0h] [rbp-208h]
  _BYTE *v158; // [rsp+2A8h] [rbp-200h]
  _BYTE v159[24]; // [rsp+2B0h] [rbp-1F8h] BYREF
  _BYTE v160[16]; // [rsp+2C8h] [rbp-1E0h] BYREF
  __int64 v161; // [rsp+2D8h] [rbp-1D0h]
  __int64 v162; // [rsp+308h] [rbp-1A0h]
  char v163; // [rsp+310h] [rbp-198h]
  _BYTE *v164; // [rsp+320h] [rbp-188h] BYREF
  _BYTE v165[320]; // [rsp+328h] [rbp-180h] BYREF
  int v166; // [rsp+468h] [rbp-40h]

  v141 = a3;
  v4 = a1;
  v137 = a1;
  v146 = a1;
  v129 = -1;
  v130 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v131 = 1;
    v129 = 2115;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2115);
  }
  else
  {
    v131 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v129, 2115LL);
  CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v14 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent((__int64)v12, v11)) == 0LL
    || (v15 = (struct DXGPROCESS *)*((_QWORD *)Current + 1), (v140 = v15) == 0LL) )
  {
    v15 = v14;
    v140 = v14;
    if ( !v14 )
    {
      v85 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v85 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v85);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v129, v86);
      v89 = v131 == 0;
LABEL_97:
      if ( !v89 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        goto LABEL_171;
      return 3221225485LL;
    }
  }
  v148 = 0LL;
  v149 = 0LL;
  v150 = 0LL;
  v134 = 0LL;
  if ( a2 )
  {
    v12 = (__int128 *)v4;
    v11 = MmUserProbeAddress;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v12 = (__int128 *)MmUserProbeAddress;
    v148 = *v12;
    v149 = v12[1];
    v150 = v12[2];
    v4 = (struct D3DDDI_MAKERESIDENT *)&v148;
    v134 = (struct D3DDDI_MAKERESIDENT *)&v148;
    v15 = v140;
  }
  else
  {
    v134 = v4;
  }
  if ( !v4->NumAllocations )
  {
    v90 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v90 + 24) = -1073741811LL;
LABEL_95:
    WdLogEvent5_WdWarning(v90);
LABEL_96:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v129, v91);
    v89 = v131 == 0;
    goto LABEL_97;
  }
  if ( !v4->AllocationList )
  {
    v90 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v90 + 24) = 498LL;
    goto LABEL_95;
  }
  if ( v4->Flags.Value >= 4 )
  {
    v90 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v90 + 24) = 505LL;
    goto LABEL_95;
  }
  v136 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v133, v4->hPagingQueue, (struct _KTHREAD **)v15, &v136, 1);
  v19 = v136;
  if ( !v136 )
  {
    v92 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v92 + 24) = v4->hPagingQueue;
    *(_QWORD *)(v92 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v92);
LABEL_104:
    if ( v133 )
      DXGPAGINGQUEUE::ReleaseReference(v133, v91);
    goto LABEL_96;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,40>::PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v164);
  P = 0LL;
  v153 = 0;
  NumAllocations = v4->NumAllocations;
  if ( (unsigned int)NumAllocations <= 0x28 )
  {
    v25 = v165;
    v135 = (struct DXGALLOCATIONREFERENCE *)v165;
    goto LABEL_16;
  }
  v20 = 0xFFFFFFFFFFFFFFFFuLL % NumAllocations;
  if ( 0xFFFFFFFFFFFFFFFFuLL / NumAllocations >= 8 )
  {
    v93 = 8 * NumAllocations;
    if ( !is_mul_ok(NumAllocations, 8uLL) )
      v93 = -1LL;
    v94 = __CFADD__(v93, 8LL);
    v95 = v93 + 8;
    if ( v94 )
      v95 = -1LL;
    v96 = (char *)operator new[](v95, 0x4B677844u, PagedPool);
    if ( !v96 )
    {
      v25 = 0LL;
      v135 = 0LL;
      v164 = 0LL;
      goto LABEL_17;
    }
    *(_QWORD *)v96 = NumAllocations;
    v25 = v96 + 8;
    v135 = (struct DXGALLOCATIONREFERENCE *)(v96 + 8);
    `vector constructor iterator'(
      v96 + 8,
      8LL,
      NumAllocations,
      (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
LABEL_16:
    v164 = v25;
LABEL_17:
    v166 = NumAllocations;
    LODWORD(NumAllocations) = v4->NumAllocations;
    goto LABEL_18;
  }
  v25 = 0LL;
  v135 = 0LL;
LABEL_18:
  if ( (unsigned int)NumAllocations > 0x28 )
  {
    v20 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)NumAllocations;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)NumAllocations < 8 )
    {
      PoolWithTag = 0LL;
      goto LABEL_22;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)NumAllocations, 0x4B677844u);
    P = PoolWithTag;
  }
  else
  {
    PoolWithTag = v152;
    P = v152;
  }
  v153 = NumAllocations;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8LL * (unsigned int)NumAllocations);
    PoolWithTag = P;
  }
LABEL_22:
  if ( !v25 || !PoolWithTag )
  {
    v124 = WdLogNewEntry5_WdLowResource(v21, v20, v22, v23);
    *(_QWORD *)(v124 + 24) = 540LL;
    WdLogEvent5_WdLowResource(v124);
    if ( P != v152 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v153 = 0;
    PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v164);
    if ( v133 )
      DXGPAGINGQUEUE::ReleaseReference(v133, v125);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v129, v125);
    if ( v131 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v126, &EventProfilerExit, v127, v129);
    return 3221225495LL;
  }
  AllocationList = (unsigned int *)v4->AllocationList;
  v28 = &AllocationList[v4->NumAllocations];
  v143 = v135;
  v142 = (ULONG_PTR *)PoolWithTag;
  v29 = *((_QWORD *)v19 + 2);
  v144 = v29;
  v138 = v29;
  v30 = *(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL);
  if ( *(int *)(v30 + 2328) >= 0x2000 || *(_BYTE *)(v30 + 2628) )
    v31 = *((_DWORD *)DXGGLOBAL::GetGlobal(v30, v20) + 311);
  else
    v31 = 0;
  v139 = v31;
  v32 = *(struct _KEVENT **)(v29 + 16);
  if ( *(_DWORD *)(v29 + 432) == 2 )
  {
    if ( KeReadStateEvent(v32 + 5) )
      goto LABEL_28;
    v97 = v32 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v32 + 4) )
      goto LABEL_28;
    v97 = v32 + 4;
  }
  KeWaitForSingleObject(v97, Executive, 0, 0, 0LL);
LABEL_28:
  KeEnterCriticalRegion();
  if ( !v31 )
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v29 + 136), 0) )
      goto LABEL_30;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL) + 104LL));
    v99 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v29 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v98, &EventBlockThread, v100, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v29 + 136), 1u);
    if ( v99 )
      goto LABEL_129;
    goto LABEL_130;
  }
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v29 + 144, 0LL) )
  {
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL) + 104LL));
    v101 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v29 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v29 + 144));
    if ( v101 )
LABEL_129:
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v29 + 16) + 16LL));
LABEL_130:
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL) + 104LL, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_30:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v154, v29, 0, v33, 0);
  if ( v163 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v160, 0LL);
    v35 = *(unsigned int *)(v161 + 200);
    if ( (_DWORD)v35 != 1 )
    {
LABEL_148:
      COREACCESS::Release((COREACCESS *)v160);
LABEL_149:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v154);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v138);
      if ( P != v152 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v153 = 0;
      PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v164);
      if ( v133 )
        DXGPAGINGQUEUE::ReleaseReference(v133, v108);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v129, v108);
      if ( v131 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v109, &EventProfilerExit, v110, v129);
      return 3221226166LL;
    }
  }
  if ( v157 )
  {
    v102 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v34);
    v102[3] = 275LL;
    v102[4] = 4LL;
    v102[5] = v155;
    v102[6] = 0LL;
    v102[7] = 0LL;
    WdLogEvent5_WdCriticalError(v102);
  }
  if ( KeGetCurrentThread() == *((struct _KTHREAD **)v156 + 23) )
  {
    v40 = v141;
  }
  else
  {
    if ( !KeReadStateEvent((PRKEVENT)v156 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v38, &EventBlockThread, v39, 72);
      KeWaitForSingleObject((char *)v156 + 48, Executive, 0, 0, 0LL);
    }
    v40 = v141;
    DXGADAPTER::AcquireCoreResourceShared(v156, v141);
  }
  v158 = 0LL;
  if ( v40 )
  {
    v34 = 17LL;
    v103 = v159;
    v104 = v40 - v159;
    do
    {
      if ( v34 == -2147483629 )
        break;
      v105 = v103[v104];
      if ( !v105 )
        break;
      *v103++ = v105;
      --v34;
    }
    while ( v34 );
    v106 = v103 - 1;
    if ( v34 )
      v106 = v103;
    *v106 = 0;
    v107 = v159;
    if ( !v34 )
      v107 = v158;
    v158 = v107;
  }
  v157 = 1;
  if ( *(_DWORD *)(v162 + 576) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v155);
    if ( !v163 )
      goto LABEL_149;
    goto LABEL_148;
  }
  v41 = *(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL);
  v128 = *(_BYTE *)(v41 + 209);
  v42 = PsGetCurrentProcess(v41, v34, v36, v37);
  v43 = PsGetProcessDxgProcess(v42);
  v46 = (struct _KTHREAD **)v43;
  if ( v43 && (*(_BYTE *)(v43 + 347) & 0x10) == 0
    || (v111 = DXGTHREAD::GetCurrent(v45, v44)) == 0LL
    || (v47 = (struct _KTHREAD **)*((_QWORD *)v111 + 1)) == 0LL )
  {
    v47 = v46;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v147, v47);
  while ( 1 )
  {
    if ( AllocationList == v28 )
    {
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v147);
      if ( v128 )
      {
        v120 = *(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL);
        v121 = *((_DWORD *)v136 + 7);
        v69 = v134;
        p_PagingFenceValue = &v134->PagingFenceValue;
        p_NumBytesToTrim = &v134->NumBytesToTrim;
        HostProcess = DXGPROCESS::GetHostProcess(v140);
        Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(v120 + 4240),
                     HostProcess,
                     0,
                     v121,
                     v69->Flags,
                     v69->NumAllocations,
                     v135,
                     p_PagingFenceValue,
                     p_NumBytesToTrim);
      }
      else
      {
        v67 = v136;
        v68 = *((_QWORD *)v136 + 2);
        if ( !*(_BYTE *)(v68 + 1871) )
        {
          if ( *(_DWORD *)(v68 + 432) != 2
            || (v65 = *(_QWORD *)(*(_QWORD *)(v68 + 16) + 16LL), *(int *)(v65 + 2596) < 2000) )
          {
            v119 = WdLogNewEntry5_WdError(v65, v64);
            *(_QWORD *)(v119 + 24) = v67;
            WdLogEvent5_WdError(v119);
            Resident = -1073741637;
            v69 = v134;
            v76 = a2;
            goto LABEL_87;
          }
        }
        v69 = v134;
        v70 = v134->Flags.Value & 1;
        if ( (v134->Flags.Value & 2) != 0 )
          v70 |= 2u;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          McTemplateK0pxqt_EtwWriteTransfer(
            *(_QWORD *)(*((_QWORD *)v136 + 5) + 32LL),
            &EventMakeResidentBegin,
            v66,
            v136,
            *(_QWORD *)(*((_QWORD *)v136 + 5) + 32LL),
            v134->NumAllocations,
            v134->Flags.Value);
        p_PagingFenceValue = &v69->PagingFenceValue;
        Resident = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, _QWORD, int, UINT64 *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v68 + 16) + 640LL) + 8LL) + 776LL))(
                     *(_QWORD *)(*(_QWORD *)(v68 + 16) + 648LL),
                     *((_QWORD *)v67 + 4),
                     PoolWithTag,
                     v69->NumAllocations,
                     v70,
                     &v69->PagingFenceValue,
                     &v69->NumBytesToTrim);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          McTemplateK0qxx_EtwWriteTransfer(v73, v72, v75, Resident, v69->NumBytesToTrim, *p_PagingFenceValue);
      }
      v76 = a2;
      if ( Resident >= 0 && a2 )
      {
        v77 = v137;
        v78 = &v137->PagingFenceValue;
        if ( (unsigned __int64)&v137->PagingFenceValue >= MmUserProbeAddress )
          v78 = (_QWORD *)MmUserProbeAddress;
        *v78 = *p_PagingFenceValue;
        goto LABEL_72;
      }
LABEL_87:
      v77 = v137;
LABEL_72:
      if ( v76 )
      {
        v79 = &v77->NumBytesToTrim;
        if ( (unsigned __int64)&v77->NumBytesToTrim >= MmUserProbeAddress )
          v79 = (_QWORD *)MmUserProbeAddress;
        *v79 = v69->NumBytesToTrim;
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v154);
      if ( v139 )
        ExReleasePushLockSharedEx(v138 + 144, 0LL);
      else
        ExReleaseResourceLite(*(PERESOURCE *)(v138 + 136));
      KeLeaveCriticalRegion();
      if ( P != v152 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v153 = 0;
      PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v164);
      if ( v133 )
        DXGPAGINGQUEUE::ReleaseReference(v133, v80);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v129, v80);
      if ( v131 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v81, &EventProfilerExit, v82, v129);
      return (unsigned int)Resident;
    }
    if ( a2 )
    {
      v48 = AllocationList;
      if ( (unsigned __int64)AllocationList >= MmUserProbeAddress )
        v48 = (unsigned int *)MmUserProbeAddress;
      v49 = *v48;
      v145 = *v48;
    }
    else
    {
      v49 = *AllocationList;
    }
    DXGPROCESS::GetAllocationUnsafe((__int64)v47, (DXGALLOCATIONREFERENCE *)&v132, v49);
    v53 = v132;
    if ( !v132 )
    {
      v112 = WdLogNewEntry5_WdError(v51, v50);
      *(_QWORD *)(v112 + 24) = v132;
      WdLogEvent5_WdError(v112);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v132, v113);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v147);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v154);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v138);
      if ( P != v152 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v153 = 0;
      PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v164);
      goto LABEL_104;
    }
    if ( v132[1].Count != v29 )
      break;
    if ( !v128 )
    {
      Count = v132[3].Count;
      if ( !Count )
      {
        v117 = WdLogNewEntry5_WdWarning(v51, v50, v52);
        *(_QWORD *)(v117 + 24) = v132;
        WdLogEvent5_WdWarning(v117);
        v53 = v132;
      }
      v55 = v142;
      *v142 = Count;
      v142 = v55 + 1;
    }
    v56 = v143;
    v57 = *(struct _EX_RUNDOWN_REF **)v143;
    if ( *(_QWORD *)v143 )
    {
      ExReleaseRundownProtection(v57 + 11);
      v53 = v132;
    }
    *v56 = v53;
    v132 = 0LL;
    v143 = (struct DXGALLOCATIONREFERENCE *)(v56 + 1);
    ++AllocationList;
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v57, v50) + 311) )
    {
      v60 = DXGTHREAD::GetCurrent(v59, v58);
      v63 = v60;
      if ( v60 )
      {
        if ( *((_DWORD *)v60 + 8) )
        {
          v118 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v62, v61);
          v118[3] = 275LL;
          v118[4] = 38LL;
          v118[5] = *((int *)v63 + 8);
          v118[6] = 0LL;
          v118[7] = 0LL;
          WdLogEvent5_WdCriticalError(v118);
        }
      }
    }
  }
  v114 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(v51, v50);
  v114[3].Count = v29;
  v114[4].Count = v132[1].Count;
  WdLogEvent5_WdError(v114);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v132, v115);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v147);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v154);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v138);
  if ( P != v152 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v153 = 0;
  PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v164);
  if ( v133 )
    DXGPAGINGQUEUE::ReleaseReference(v133, v116);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v129, v116);
  if ( !v131 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
    return 3221225485LL;
LABEL_171:
  McTemplateK0q_EtwWriteTransfer(v87, &EventProfilerExit, v88, v129);
  return 3221225485LL;
}
