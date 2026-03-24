/*
 * XREFs of DxgkRender @ 0x1C00F3920
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0002BAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00033FC (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004F90 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0005010 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0005358 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C0005530 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000903C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A008 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A448 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001A6D4 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C00F42B0 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00F4E90 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C0107B00 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z @ 0x1C01600E8 (-ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020D704 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C02285C8 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C022CD2C (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C02805F0 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 */

__int64 __fastcall DxgkRender(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r15
  _OWORD *v14; // rax
  _D3DKMT_RENDER *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGCONTEXT *v20; // rsi
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // r13
  __int64 v24; // rcx
  int v25; // ebx
  struct _KEVENT *v26; // r12
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned __int64 BroadcastContextCount; // rdx
  __int64 v30; // rbx
  _QWORD *PoolWithTag; // rcx
  unsigned int v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct DXGADAPTER *v36; // rbx
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // r8
  struct DXGCONTEXT *v43; // rbx
  unsigned __int64 v44; // rdx
  PVOID CommandOffset; // rcx
  UINT AllocationCount; // r9d
  int v47; // r15d
  char Flags; // dl
  __int64 v49; // rax
  bool v50; // r12
  struct DXGALLOCATION **v51; // rax
  int v52; // eax
  int v53; // edx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  DXGGLOBAL **v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  bool v61; // zf
  __int64 NewCommandBufferSize; // r8
  UINT NewPatchLocationListSize; // r12d
  __int64 v65; // rdx
  __int64 v66; // rdx
  struct DXGTHREAD *Current; // rax
  __int64 v68; // rbx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  _QWORD *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // rax
  struct _KEVENT *v81; // rcx
  __int64 v82; // rcx
  unsigned __int8 v83; // bl
  __int64 v84; // r8
  unsigned __int8 v85; // bl
  __int64 v86; // rax
  __int64 v87; // rax
  PVOID v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // r9
  unsigned int v95; // ecx
  __int64 *v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // r12
  __int64 v101; // rdx
  int v102; // r8d
  __int64 v103; // rax
  __int64 v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rdx
  _QWORD *v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  _QWORD *v113; // rax
  __int64 CommandLength; // rcx
  __int64 v115; // rcx
  struct DXGALLOCATION **v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // rax
  __int64 v121; // rdx
  _QWORD *v122; // rax
  _QWORD *v123; // rax
  _QWORD *v124; // rax
  int v125; // [rsp+40h] [rbp-488h] BYREF
  __int64 v126; // [rsp+48h] [rbp-480h]
  char v127; // [rsp+50h] [rbp-478h]
  unsigned int v128[2]; // [rsp+58h] [rbp-470h] BYREF
  unsigned int v129[2]; // [rsp+60h] [rbp-468h]
  DXGCONTEXT *v130; // [rsp+68h] [rbp-460h] BYREF
  char v131; // [rsp+70h] [rbp-458h]
  PVOID P; // [rsp+78h] [rbp-450h]
  _BYTE v133[32]; // [rsp+80h] [rbp-448h] BYREF
  unsigned int v134; // [rsp+A0h] [rbp-428h]
  struct DXGCONTEXT *v135; // [rsp+A8h] [rbp-420h] BYREF
  __int64 v136; // [rsp+B0h] [rbp-418h] BYREF
  int v137; // [rsp+B8h] [rbp-410h]
  int v138; // [rsp+C0h] [rbp-408h] BYREF
  int v139; // [rsp+C4h] [rbp-404h] BYREF
  __int64 v140; // [rsp+C8h] [rbp-400h] BYREF
  struct DXGADAPTER *v141; // [rsp+D0h] [rbp-3F8h]
  char v142; // [rsp+D8h] [rbp-3F0h]
  __int64 v143; // [rsp+E0h] [rbp-3E8h]
  struct _D3DDDI_ALLOCATIONLIST *pNewAllocationList; // [rsp+E8h] [rbp-3E0h]
  _QWORD v145[2]; // [rsp+F0h] [rbp-3D8h] BYREF
  __int64 v146; // [rsp+100h] [rbp-3C8h]
  _BYTE v147[24]; // [rsp+108h] [rbp-3C0h] BYREF
  _QWORD v148[6]; // [rsp+120h] [rbp-3A8h] BYREF
  char v149; // [rsp+150h] [rbp-378h]
  __int64 v150; // [rsp+158h] [rbp-370h]
  __int64 v151; // [rsp+160h] [rbp-368h]
  PVOID v152; // [rsp+170h] [rbp-358h] BYREF
  _BYTE v153[256]; // [rsp+178h] [rbp-350h] BYREF
  int v154; // [rsp+278h] [rbp-250h]
  _D3DKMT_RENDER v155; // [rsp+280h] [rbp-248h] BYREF
  char v156[8]; // [rsp+3F0h] [rbp-D8h] BYREF
  _BYTE v157[16]; // [rsp+3F8h] [rbp-D0h] BYREF
  DXGADAPTER *v158; // [rsp+408h] [rbp-C0h]
  char v159; // [rsp+410h] [rbp-B8h]
  char *v160; // [rsp+418h] [rbp-B0h]
  _BYTE v161[16]; // [rsp+438h] [rbp-90h] BYREF
  __int64 v162; // [rsp+448h] [rbp-80h]
  __int64 v163; // [rsp+478h] [rbp-50h]
  char v164; // [rsp+480h] [rbp-48h]

  v125 = -1;
  v126 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v127 = 1;
    v125 = 2013;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2013);
  }
  else
  {
    v127 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v125, 2013LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6, v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v13 = *((_QWORD *)Current + 1)) == 0 )
  {
    v13 = v12;
  }
  v143 = v13;
  if ( !v13 )
  {
    v68 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v68 + 24) = PsGetCurrentProcess(v70, v69, v71, v72);
    v47 = -1073741811;
    *(_QWORD *)(v68 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v68);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v125, v73);
    v61 = v127 == 0;
    goto LABEL_84;
  }
  v14 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = (_OWORD *)MmUserProbeAddress;
  v15 = &v155;
  v16 = 2LL;
  do
  {
    *(_OWORD *)&v15->hDevice = *v14;
    *(_OWORD *)&v15->PatchLocationCount = v14[1];
    *(_OWORD *)&v15->NewCommandBufferSize = v14[2];
    *(_OWORD *)&v15->NewAllocationListSize = v14[3];
    *(_OWORD *)&v15->NewPatchLocationListSize = v14[4];
    *(_OWORD *)&v15->BroadcastContextCount = v14[5];
    *(_OWORD *)&v15->BroadcastContext[3] = v14[6];
    v15 = (_D3DKMT_RENDER *)((char *)v15 + 128);
    *(_OWORD *)&v15[-1].pPrivateDriverData = v14[7];
    v14 += 8;
    --v16;
  }
  while ( v16 );
  *(_OWORD *)&v15->hDevice = *v14;
  *(_OWORD *)&v15->PatchLocationCount = v14[1];
  *(_OWORD *)&v15->NewCommandBufferSize = v14[2];
  *(_OWORD *)&v15->NewAllocationListSize = v14[3];
  *(_OWORD *)&v15->NewPatchLocationListSize = v14[4];
  *(_OWORD *)&v15->BroadcastContextCount = v14[5];
  *(_OWORD *)&v15->BroadcastContext[3] = v14[6];
  v135 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v130, v155.hDevice, (struct DXGPROCESS *)v13, &v135, 0);
  v20 = v135;
  if ( !v135 )
  {
    v74 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
    v74[3] = v13;
    v74[4] = v155.hDevice;
    v47 = -1073741811;
    v74[5] = -1073741811LL;
    WdLogEvent5_WdError(v74);
    goto LABEL_163;
  }
  v21 = (unsigned int)(*(_DWORD *)&v155.Flags | (*(_DWORD *)&v155.Flags >> 1));
  if ( ((*(_BYTE *)&v155.Flags | (unsigned __int8)(*(_DWORD *)&v155.Flags >> 1)) & 0x20) != 0 )
  {
    v75 = WdLogNewEntry5_WdError(v21, v17);
    *(_QWORD *)(v75 + 24) = v155.hDevice;
    v47 = -1073741811;
    *(_QWORD *)(v75 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v75);
    goto LABEL_163;
  }
  v22 = *((_DWORD *)v135 + 105);
  if ( (v22 & 0x10) != 0 )
  {
    v76 = WdLogNewEntry5_WdError(v21, v17);
    *(_QWORD *)(v76 + 24) = v20;
LABEL_109:
    WdLogEvent5_WdError(v76);
LABEL_111:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v130);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v125, v77);
    if ( !v127 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return (unsigned int)-1073741811;
    goto LABEL_173;
  }
  if ( (v22 & 8) != 0 )
  {
    v80 = WdLogNewEntry5_WdWarning(v21, v17, v19);
    *(_QWORD *)(v80 + 24) = 88LL;
    WdLogEvent5_WdWarning(v80);
    goto LABEL_111;
  }
  if ( *((_BYTE *)v135 + 454) )
  {
    v76 = WdLogNewEntry5_WdError(v21, v17);
    *(_QWORD *)(v76 + 24) = v155.hDevice;
    goto LABEL_109;
  }
  v23 = *((_QWORD *)v135 + 2);
  v145[1] = v23;
  v136 = v23;
  v24 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL);
  if ( *(int *)(v24 + 2328) >= 0x2000 || *(_BYTE *)(v24 + 2628) )
    v25 = *((_DWORD *)DXGGLOBAL::GetGlobal(v24, v17) + 311);
  else
    v25 = 0;
  v137 = v25;
  v26 = *(struct _KEVENT **)(v23 + 16);
  if ( *(_DWORD *)(v23 + 432) == 2 )
  {
    if ( KeReadStateEvent(v26 + 5) )
      goto LABEL_21;
    v81 = v26 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v26 + 4) )
      goto LABEL_21;
    v81 = v26 + 4;
  }
  KeWaitForSingleObject(v81, Executive, 0, 0, 0LL);
LABEL_21:
  KeEnterCriticalRegion();
  if ( !v25 )
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v23 + 136), 0) )
      goto LABEL_23;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 104LL));
    v83 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v82, &EventBlockThread, v84, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v23 + 136), 1u);
    if ( !v83 )
      goto LABEL_128;
    goto LABEL_127;
  }
  if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v23 + 144, 0LL) )
    goto LABEL_23;
  KeLeaveCriticalRegion();
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 104LL));
  v85 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v23 + 144));
  if ( v85 )
LABEL_127:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
LABEL_128:
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 104LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_23:
  BroadcastContextCount = v155.BroadcastContextCount;
  if ( v155.BroadcastContextCount
    && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 16LL))
    || (unsigned int)BroadcastContextCount > 0x40 )
  {
    v86 = WdLogNewEntry5_WdWarning(v27, BroadcastContextCount, v28);
    *(_QWORD *)(v86 + 24) = v20;
    v47 = -1073741811;
    *(_QWORD *)(v86 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v86);
    goto LABEL_162;
  }
  v30 = (unsigned int)(BroadcastContextCount + 1);
  PoolWithTag = 0LL;
  P = 0LL;
  v134 = 0;
  if ( (unsigned int)v30 > 4 )
  {
    BroadcastContextCount = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v30;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v30 < 8 )
      goto LABEL_29;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v30, 0x4B677844u);
    P = PoolWithTag;
  }
  else
  {
    PoolWithTag = v133;
    P = v133;
  }
  v134 = v30;
  if ( !PoolWithTag )
  {
LABEL_133:
    v87 = WdLogNewEntry5_WdWarning(PoolWithTag, BroadcastContextCount, v28);
    *(_QWORD *)(v87 + 24) = 126LL;
    WdLogEvent5_WdWarning(v87);
    v88 = P;
    if ( P != v133 && P )
      goto LABEL_135;
    goto LABEL_136;
  }
  memset(PoolWithTag, 0, 8 * v30);
  PoolWithTag = P;
LABEL_29:
  if ( !PoolWithTag )
    goto LABEL_133;
  *PoolWithTag = v20;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v147, (struct _KTHREAD **)v13);
  v32 = 0;
  if ( !v155.BroadcastContextCount )
  {
LABEL_31:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v147);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v148,
      P,
      v134);
    if ( !v149 )
    {
      v141 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 16LL);
      _InterlockedIncrement64((volatile signed __int64 *)v141 + 3);
      v140 = -1LL;
      v36 = v141;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx((char *)v36 + 136, 0LL);
      v142 = 1;
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v156, *((_QWORD *)v20 + 2), 0, v37, 0);
      if ( v164 )
      {
        COREACCESS::AcquireShared((COREACCESS *)v161, 0LL);
        v39 = *(unsigned int *)(v162 + 200);
        if ( (_DWORD)v39 != 1 )
          goto LABEL_182;
      }
      if ( v159 )
      {
        v109 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v39, v38);
        v109[3] = 275LL;
        v109[4] = 4LL;
        v109[5] = v157;
        v109[6] = 0LL;
        v109[7] = 0LL;
        WdLogEvent5_WdCriticalError(v109);
      }
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v158 + 23) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v158 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v41, &EventBlockThread, v42, 72);
          KeWaitForSingleObject((char *)v158 + 48, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(v158, 0LL);
      }
      v160 = 0LL;
      v159 = 1;
      if ( *(_DWORD *)(v163 + 576) == 1 )
      {
        v43 = v135;
        v44 = *((_QWORD *)v135 + 6);
        CommandOffset = (PVOID)v155.CommandOffset;
        if ( v155.CommandOffset >= v44 )
        {
          v113 = (_QWORD *)WdLogNewEntry5_WdWarning(v155.CommandOffset, v44, v40);
          v113[3] = v43;
          CommandLength = v155.CommandOffset;
        }
        else
        {
          if ( v155.CommandOffset + (unsigned __int64)v155.CommandLength <= v44 )
          {
            AllocationCount = v155.AllocationCount;
            v128[0] = v155.AllocationCount;
            if ( v155.AllocationCount > *((_DWORD *)v135 + 18) )
            {
              v113 = (_QWORD *)WdLogNewEntry5_WdWarning(v155.CommandOffset, v44, v155.CommandLength);
              v113[3] = v43;
              v113[4] = v155.AllocationCount;
              v115 = *((unsigned int *)v43 + 18);
            }
            else
            {
              if ( v155.PatchLocationCount <= *((_DWORD *)v135 + 26) )
              {
                v47 = 0;
                Flags = (char)v155.Flags;
                if ( !v155.CommandLength )
                {
LABEL_61:
                  if ( (Flags & 1) == 0 && (Flags & 2) == 0 && (Flags & 4) == 0 )
                    goto LABEL_64;
                  if ( (Flags & 1) != 0 )
                    NewCommandBufferSize = v155.NewCommandBufferSize;
                  else
                    NewCommandBufferSize = *((unsigned int *)v43 + 50);
                  v128[0] = NewCommandBufferSize;
                  if ( (Flags & 2) != 0 )
                    CommandOffset = (PVOID)v155.NewAllocationListSize;
                  else
                    CommandOffset = (PVOID)*((unsigned int *)v43 + 53);
                  v129[0] = (unsigned int)CommandOffset;
                  if ( (Flags & 4) != 0 )
                    NewPatchLocationListSize = v155.NewPatchLocationListSize;
                  else
                    NewPatchLocationListSize = *((_DWORD *)v43 + 54);
                  v65 = *((unsigned int *)v43 + 50);
                  if ( (unsigned int)NewCommandBufferSize < (unsigned int)v65 )
                    goto LABEL_217;
                  if ( (unsigned int)CommandOffset >= *((_DWORD *)v43 + 53)
                    && NewPatchLocationListSize >= *((_DWORD *)v43 + 54) )
                  {
                    if ( DXGADAPTER::IsCoreResourceSharedOwner(v158) )
                      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v156, v66);
                    DXGCONTEXT::ResizeUserModeBuffers(
                      v43,
                      *((struct VIDMM_DMA_POOL **)v43 + 29),
                      v128[0],
                      v129[0],
                      NewPatchLocationListSize);
                    v47 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v156, 0LL);
                    goto LABEL_64;
                  }
                  if ( (unsigned int)NewCommandBufferSize < (unsigned int)v65 )
                  {
LABEL_217:
                    v122 = (_QWORD *)WdLogNewEntry5_WdWarning(CommandOffset, v65, NewCommandBufferSize);
                    v122[3] = v43;
                    v122[4] = v128[0];
                    v122[5] = *((unsigned int *)v43 + 50);
                    WdLogEvent5_WdWarning(v122);
                    CommandOffset = (PVOID)v129[0];
                  }
                  if ( (unsigned int)CommandOffset < *((_DWORD *)v43 + 53) )
                  {
                    v123 = (_QWORD *)WdLogNewEntry5_WdWarning(CommandOffset, v65, NewCommandBufferSize);
                    v123[3] = v43;
                    v123[4] = v129[0];
                    v123[5] = *((unsigned int *)v43 + 53);
                    WdLogEvent5_WdWarning(v123);
                  }
                  if ( NewPatchLocationListSize >= *((_DWORD *)v43 + 54) )
                    goto LABEL_64;
                  v113 = (_QWORD *)WdLogNewEntry5_WdWarning(CommandOffset, v65, NewCommandBufferSize);
                  v113[3] = v43;
                  v113[4] = NewPatchLocationListSize;
                  v115 = *((unsigned int *)v43 + 54);
LABEL_222:
                  v113[5] = v115;
                  WdLogEvent5_WdWarning(v113);
LABEL_64:
                  v52 = 0;
                  v145[0] = 0LL;
                  v53 = 0;
                  v138 = 0;
                  v54 = 0LL;
                  v139 = 0;
                  v55 = 0LL;
                  if ( v47 != -1073741130 )
                  {
                    if ( !v159 )
                    {
                      v124 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CommandOffset, 0LL);
                      v124[3] = 275LL;
                      v124[4] = 4LL;
                      v124[5] = v157;
                      v124[6] = 0LL;
                      v124[7] = 0LL;
                      WdLogEvent5_WdCriticalError(v124);
                    }
                    v159 = 0;
                    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v158 + 23) )
                      DXGADAPTER::ReleaseCoreResource(v158, v160);
                    v160 = 0LL;
                    if ( v164 )
                      COREACCESS::Release((COREACCESS *)v161);
                    v43 = v135;
                    if ( !*((_BYTE *)v20 + 454) )
                      (*(void (__fastcall **)(_QWORD, _QWORD *, int *, int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 640LL)
                                                                                         + 8LL)
                                                                             + 488LL))(
                        *((_QWORD *)v135 + 29),
                        v145,
                        &v138,
                        &v139);
                    v56 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 616LL) + 8LL);
                    LODWORD(v55) = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(v56 + 448))(
                                     *((_QWORD *)v43 + 34),
                                     v56,
                                     v54,
                                     v55);
                    v52 = v145[0];
                    v53 = v138;
                    LODWORD(v54) = v139;
                  }
                  v150 = *((_QWORD *)v43 + 7);
                  *(_QWORD *)(a1 + 24) = v150;
                  *(_DWORD *)(a1 + 32) = v52;
                  v151 = *((_QWORD *)v43 + 11);
                  *(_QWORD *)(a1 + 40) = v151;
                  *(_DWORD *)(a1 + 48) = v53;
                  v146 = *((_QWORD *)v43 + 15);
                  *(_QWORD *)(a1 + 56) = v146;
                  *(_DWORD *)(a1 + 64) = v54;
                  *(_DWORD *)(a1 + 340) = v55;
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v156);
                  if ( v142 )
                  {
                    v142 = 0;
                    ExReleasePushLockSharedEx((char *)v141 + 136, 0LL);
                    KeLeaveCriticalRegion();
                    v57 = (DXGGLOBAL **)v141;
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v141 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      DXGGLOBAL::DestroyAdapter(v57[2], (struct DXGADAPTER *)v57);
                  }
                  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v148);
                  if ( P != v133 && P )
                    ExFreePoolWithTag(P, 0);
                  P = 0LL;
                  v134 = 0;
                  if ( v137 )
                    ExReleasePushLockSharedEx(v23 + 144, 0LL);
                  else
                    ExReleaseResourceLite(*(PERESOURCE *)(v23 + 136));
                  KeLeaveCriticalRegion();
                  if ( v130 && !v131 )
                    DXGCONTEXT::ReleaseReference(v130);
                  goto LABEL_83;
                }
                if ( (*(_BYTE *)&v155.Flags & 0x20) != 0 )
                  pNewAllocationList = v155.pNewAllocationList;
                else
                  pNewAllocationList = (struct _D3DDDI_ALLOCATIONLIST *)*((_QWORD *)v135 + 11);
                v49 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 16LL);
                v50 = *(int *)(v49 + 2328) >= 0x2000 || *(_BYTE *)(v49 + 2628);
                v128[1] = v155.AllocationCount;
                v152 = 0LL;
                v154 = 0;
                v51 = 0LL;
                *(_QWORD *)v129 = 0LL;
                if ( !v50 )
                {
LABEL_50:
                  if ( v47 >= 0 )
                  {
                    v47 = DXGCONTEXT::Render(
                            v43,
                            &v155,
                            (struct COREDEVICEACCESS *)v156,
                            (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v140,
                            (struct DXGCONTEXT **)P,
                            v51,
                            0LL);
                    Flags = (char)v155.Flags;
                    AllocationCount = v128[0];
                    v51 = *(struct DXGALLOCATION ***)v129;
                  }
                  if ( v50 )
                  {
                    DxgkUnreferenceAllocationList(AllocationCount, v51);
                    Flags = (char)v155.Flags;
                  }
                  if ( v47 >= 0 && (Flags & 0x10) != 0 )
                  {
                    v47 = DXGCONTEXT::HandleVistaBltStub(
                            v43,
                            v155.PresentHistoryToken,
                            1,
                            (struct COREDEVICEACCESS *)v156,
                            (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v140,
                            v155.BroadcastContextCount,
                            v155.BroadcastContext,
                            (struct DXGCONTEXT **)P);
                    Flags = (char)v155.Flags;
                  }
                  CommandOffset = v152;
                  if ( v152 != v153 && v152 )
                  {
                    ExFreePoolWithTag(v152, 0);
                    Flags = (char)v155.Flags;
                  }
                  if ( v47 < 0 )
                    goto LABEL_64;
                  goto LABEL_61;
                }
                v116 = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                                  &v152,
                                                  v155.AllocationCount);
                *(_QWORD *)v129 = v116;
                if ( v116 )
                {
                  v47 = DxgkReferenceAllocationList(&v128[1], pNewAllocationList, v116, *((struct DXGDEVICE **)v20 + 2));
                  Flags = (char)v155.Flags;
                  AllocationCount = v128[1];
                  v128[0] = v128[1];
                  v51 = *(struct DXGALLOCATION ***)v129;
                  goto LABEL_50;
                }
                v120 = WdLogNewEntry5_WdWarning(v118, v117, v119);
                *(_QWORD *)(v120 + 24) = 278LL;
                WdLogEvent5_WdWarning(v120);
                if ( v152 != v153 && v152 )
                  ExFreePoolWithTag(v152, 0);
                v152 = 0LL;
                v154 = 0;
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v156);
                if ( v142 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v140);
                DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v148);
                if ( P != v133 && P )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v134 = 0;
                DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v136);
                DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v130);
                DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v125, v121);
                if ( !v127 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
                  return 3221225495LL;
LABEL_211:
                McTemplateK0q_EtwWriteTransfer(v90, &EventProfilerExit, v91, v125);
                return 3221225495LL;
              }
              v113 = (_QWORD *)WdLogNewEntry5_WdWarning(v155.CommandOffset, v44, v155.CommandLength);
              v113[3] = v43;
              v113[4] = v155.PatchLocationCount;
              v115 = *((unsigned int *)v43 + 26);
            }
LABEL_196:
            v47 = -1073741811;
            v113[6] = -1073741811LL;
            goto LABEL_222;
          }
          v113 = (_QWORD *)WdLogNewEntry5_WdWarning(v155.CommandOffset, v44, v155.CommandLength);
          v113[3] = v43;
          CommandLength = v155.CommandLength;
        }
        v113[4] = CommandLength;
        v115 = *((_QWORD *)v43 + 6);
        goto LABEL_196;
      }
      COREACCESS::Release((COREACCESS *)v157);
      if ( v164 )
LABEL_182:
        COREACCESS::Release((COREACCESS *)v161);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v156);
      if ( v142 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v140);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v148);
      if ( P != v133 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v134 = 0;
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v136);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v130);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v125, v110);
      if ( v127 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v111, &EventProfilerExit, v112, v125);
      return 3221226166LL;
    }
    if ( !v148[0] )
    {
      v106 = WdLogNewEntry5_WdWarning(v34, v33, v35);
      *(_QWORD *)(v106 + 24) = 190LL;
      WdLogEvent5_WdWarning(v106);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v148);
      v88 = P;
      if ( P != v133 && P )
LABEL_135:
        ExFreePoolWithTag(v88, 0);
LABEL_136:
      P = 0LL;
      v134 = 0;
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v136);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v130);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v125, v89);
      if ( !v127 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225495LL;
      goto LABEL_211;
    }
    v107 = WdLogNewEntry5_WdWarning(v34, v33, v35);
    *(_QWORD *)(v107 + 24) = 195LL;
    WdLogEvent5_WdWarning(v107);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v148);
    if ( P != v133 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v134 = 0;
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v136);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v130);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v125, v108);
    if ( !v127 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return (unsigned int)-1073741811;
LABEL_173:
    McTemplateK0q_EtwWriteTransfer(v78, &EventProfilerExit, v79, v125);
    return (unsigned int)-1073741811;
  }
  while ( 1 )
  {
    v92 = (v155.BroadcastContext[v32] >> 6) & 0xFFFFFF;
    v93 = v155.BroadcastContext[v32] >> 30;
    if ( (unsigned int)v92 < *(_DWORD *)(v13 + 256) )
    {
      v94 = *(_QWORD *)(v13 + 240);
      v95 = *(_DWORD *)(v94 + 16 * v92 + 8);
      if ( (_DWORD)v93 == ((v95 >> 5) & 3) && (v95 & 0x2000) == 0 && (v95 & 0x1F) != 0 )
      {
        v96 = (__int64 *)(v94 + 16LL * (unsigned int)v92);
        v97 = v95 & 0x1F;
        if ( (_BYTE)v97 == 7 )
        {
          v99 = *v96;
          goto LABEL_146;
        }
        v98 = WdLogNewEntry5_WdError(v97, v93);
        *(_QWORD *)(v98 + 24) = 316LL;
        WdLogEvent5_WdError(v98);
      }
    }
    v99 = 0LL;
LABEL_146:
    v128[1] = v32 + 1;
    v100 = 8LL * (v32 + 1);
    *(_QWORD *)((char *)P + v100) = v99;
    v101 = *(_QWORD *)((char *)P + v100);
    if ( !v101 )
      break;
    v102 = *(_DWORD *)(v101 + 420);
    if ( (v102 & 8) != 0 )
      break;
    v99 = *(_QWORD *)(v101 + 16);
    if ( v99 != *((_QWORD *)v20 + 2) )
      break;
    if ( (v102 & 0x10) != 0 )
    {
      v104 = WdLogNewEntry5_WdError(v99, v101);
      *(_QWORD *)(v104 + 24) = *(_QWORD *)((char *)P + v100);
      WdLogEvent5_WdError(v104);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v147);
      if ( P != v133 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v134 = 0;
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v136);
      goto LABEL_111;
    }
    if ( *(_BYTE *)(v101 + 454) )
    {
      v103 = WdLogNewEntry5_WdAssertion(v99, v101);
      *(_QWORD *)(v103 + 24) = 178LL;
      WdLogEvent5_WdAssertion(v103);
    }
    v32 = v128[1];
    if ( v128[1] >= v155.BroadcastContextCount )
      goto LABEL_31;
  }
  v105 = (_QWORD *)WdLogNewEntry5_WdError(v99, v101);
  v105[3] = v20;
  v105[4] = v155.BroadcastContext[v32];
  v105[5] = v32;
  v47 = -1073741811;
  v105[6] = -1073741811LL;
  WdLogEvent5_WdError(v105);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v147);
  if ( P != v133 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v134 = 0;
LABEL_162:
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v136);
LABEL_163:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v130);
LABEL_83:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v125, v58);
  v61 = v127 == 0;
LABEL_84:
  if ( !v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v59, &EventProfilerExit, v60, v125);
  return (unsigned int)v47;
}
