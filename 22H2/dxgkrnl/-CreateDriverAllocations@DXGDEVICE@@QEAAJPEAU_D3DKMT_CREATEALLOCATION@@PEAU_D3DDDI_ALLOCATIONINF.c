/*
 * XREFs of ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C012B190
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00FD200 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00028F0 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0004C60 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0004D20 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0004DC0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000903C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C000907C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DriverSupportsWDDM3Features@DXGADAPTER@@QEBAEXZ @ 0x1C0025DD4 (-DriverSupportsWDDM3Features@DXGADAPTER@@QEBAEXZ.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C00261B0 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C01527BC (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C015C100 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 */

__int64 __fastcall DXGDEVICE::CreateDriverAllocations(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        struct _DXGK_ALLOCATIONINFO *a4,
        struct DXGALLOCATION *a5,
        struct DXGRESOURCE *a6,
        void **a7,
        void **a8,
        void *Src,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a10,
        int a11,
        struct _D3DKMT_CREATESTANDARDALLOCATION *a12)
{
  struct _D3DKMT_CREATEALLOCATION *v12; // r12
  DXGDEVICE *v13; // r13
  struct _DXGK_ALLOCATIONINFO *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  UINT NumAllocations; // ecx
  UINT v21; // ebx
  struct _DXGK_ALLOCATIONINFO *v22; // r13
  struct _D3DDDI_ALLOCATIONINFO2 *v23; // rcx
  UINT PrivateDriverDataSize; // r9d
  __int64 v25; // r8
  void *v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  UINT v29; // eax
  PVOID v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // rax
  const struct _D3DKM_CREATESTANDARDALLOCATION *v35; // rsi
  UINT v36; // edx
  __int64 v37; // rax
  __int64 v38; // rdx
  struct DXGRESOURCE *v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdi
  struct DXGTHREAD *Current; // rax
  __int64 v52; // rbx
  __int64 v53; // rdi
  int v54; // r13d
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // r8
  int v58; // r9d
  __int64 v59; // rdx
  __int64 v60; // rcx
  unsigned __int8 CurrentIrql; // r12
  struct DXGTHREAD *ThreadProperty; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v64; // rax
  int CurrentProcessSessionId; // r15d
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  __int64 v71; // rbx
  void *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 ThreadWin32Thread; // rax
  int v81; // r15d
  __int64 v82; // rdx
  __int64 v83; // rsi
  __int64 v84; // rcx
  _QWORD *v85; // rax
  unsigned __int8 v86; // cl
  _QWORD *v87; // rax
  _QWORD *v88; // rax
  struct _DXGK_ALLOCATIONINFO *v89; // rcx
  __int64 Value; // rdx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // r8
  UINT v94; // r9d
  struct DXGALLOCATION *v95; // rdi
  struct _DXGK_ALLOCATIONINFO *v96; // r15
  __int64 v97; // r14
  struct _DXGK_ALLOCATIONINFO *v98; // rdx
  _DWORD *pPrivateDriverData; // rcx
  struct _DXGK_ALLOCATIONINFO *v100; // rbx
  __int64 v101; // rdx
  __int64 v102; // rcx
  int v103; // r8d
  __int64 v104; // r10
  int v105; // edx
  int v106; // r8d
  UINT v107; // eax
  UINT v108; // eax
  SIZE_T v109; // rax
  __int64 Flags; // rdx
  __int64 v111; // rcx
  DXGADAPTER *v112; // rcx
  __int64 v113; // r8
  int v114; // r9d
  unsigned int v115; // r11d
  __int64 v116; // rdx
  __int64 (__fastcall **v117)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  __int64 v118; // rcx
  int v119; // eax
  int v120; // r8d
  unsigned int v121; // ecx
  int v122; // ecx
  int v123; // eax
  unsigned int v124; // eax
  int v125; // eax
  int v126; // edx
  unsigned int v127; // ecx
  int v128; // ecx
  int v129; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v130; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v131; // eax
  _QWORD *v132; // rax
  _QWORD *v133; // rax
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  _QWORD *v138; // rax
  __int64 v139; // rcx
  _QWORD *v140; // rax
  unsigned int v142; // [rsp+20h] [rbp-B9h]
  struct _D3DDDI_ALLOCATIONINFO2 *v143; // [rsp+28h] [rbp-B1h]
  void *v145; // [rsp+40h] [rbp-99h] BYREF
  UINT Size; // [rsp+48h] [rbp-91h]
  UINT Size_4; // [rsp+4Ch] [rbp-8Dh]
  struct _DXGK_ALLOCATIONINFO *v148; // [rsp+50h] [rbp-89h]
  __int64 v149; // [rsp+58h] [rbp-81h]
  int v150; // [rsp+60h] [rbp-79h]
  int v151; // [rsp+64h] [rbp-75h]
  struct DXGALLOCATION *v152; // [rsp+68h] [rbp-71h]
  struct _DXGK_ALLOCATIONINFO *v153; // [rsp+70h] [rbp-69h]
  int v154; // [rsp+78h] [rbp-61h] BYREF
  __int64 v155; // [rsp+80h] [rbp-59h]
  char v156; // [rsp+88h] [rbp-51h]
  struct _D3DKMT_CREATEALLOCATION *v157; // [rsp+90h] [rbp-49h]
  char v158[8]; // [rsp+98h] [rbp-41h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp-39h] BYREF

  v12 = a2;
  v13 = this;
  v14 = a4;
  v157 = a2;
  v152 = a5;
  v15 = *((_QWORD *)this + 2);
  v151 = 0;
  v16 = *(_QWORD *)(v15 + 16);
  v153 = a4;
  v143 = a3;
  v142 = 0;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 168)) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v18, v17);
      *(_QWORD *)(v19 + 24) = 2952LL;
      WdLogEvent5_WdAssertion(v19);
    }
    a3 = v143;
  }
  NumAllocations = v12->NumAllocations;
  v21 = 0;
  v145 = 0LL;
  if ( NumAllocations )
  {
    v22 = v153;
    do
    {
      v23 = &a3[v21];
      if ( v23->pPrivateDriverData )
      {
        PrivateDriverDataSize = v23->PrivateDriverDataSize;
        v25 = v21;
        v22[v25].PrivateDriverDataSize = PrivateDriverDataSize;
        if ( !a11 || (*(_DWORD *)&v12->Flags & 0x10000) != 0 )
        {
          v22[v25].pPrivateDriverData = v23->pPrivateDriverData;
        }
        else
        {
          v26 = a7[v21];
          v22[v25].pPrivateDriverData = v26;
          memmove(v26, a8[v21], PrivateDriverDataSize);
        }
        a3 = v143;
      }
      NumAllocations = v12->NumAllocations;
      ++v21;
    }
    while ( v21 < NumAllocations );
    v13 = this;
    v14 = v153;
  }
  v150 = 0;
  if ( a6 )
  {
    v27 = *((_QWORD *)a6 + 7);
    v28 = *((_DWORD *)a6 + 1);
    v150 = 1;
    if ( (v28 & 1) != 0 )
      v149 = *(_QWORD *)(v27 + 16);
    else
      v149 = v27;
  }
  else
  {
    v149 = 0LL;
  }
  v29 = v12->PrivateDriverDataSize;
  Size_4 = NumAllocations;
  v148 = v14;
  if ( v29 && v12->pStandardAllocation )
  {
    Size = v29;
    v30 = operator new[](v29, 0x4B677844u, PagedPool);
    v145 = v30;
    if ( !v30 )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
      v34[3] = v13;
      v34[4] = Size;
      v142 = -1073741801;
      v34[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v34);
      goto LABEL_225;
    }
    if ( a11 )
      memmove(v30, Src, Size);
    else
      memmove(v30, v12->pStandardAllocation, Size);
  }
  else
  {
    Size = 0;
  }
  v35 = a10;
  if ( a10
    && (*(_DWORD *)a10 & 0x3000) != 0
    && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL))
    && v12->NumAllocations )
  {
    do
    {
      v37 = v36++;
      v148[v37].Flags.Value |= 0x400u;
    }
    while ( v36 < v12->NumAllocations );
  }
  if ( !(unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() )
    *(_DWORD *)&v12->Flags &= ~0x100000u;
  if ( (*(_DWORD *)&v12->Flags & 0x100000) != 0 )
    goto LABEL_96;
  v41 = *((_QWORD *)v13 + 2);
  v154 = -1;
  v155 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v156 = 1;
    v154 = 5002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)v39, &EventProfilerEnter, v40, 5002);
  }
  else
  {
    v156 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v154, 5002LL);
  CurrentProcess = PsGetCurrentProcess(v43, v42, v44, v45);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v50 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v49, v48)) == 0LL
    || (v52 = *((_QWORD *)Current + 1)) == 0 )
  {
    v52 = v50;
  }
  v53 = v52 + 112;
  v54 = 0;
  if ( !v52 )
    v53 = 0LL;
  if ( v53 && *(struct _KTHREAD **)(v53 + 8) == KeGetCurrentThread() )
  {
    v55 = WdLogNewEntry5_WdAssertion(v49, v48);
    *(_QWORD *)(v55 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v55);
  }
  if ( v52 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v53, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v58 = *(_DWORD *)(v53 + 24);
        if ( v58 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v56, &EventBlockThread, v57, v58);
      }
      ExAcquirePushLockExclusiveEx(v53, 0LL);
    }
    v54 = 2;
    *(_QWORD *)(v53 + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v41 + 16), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v41 + 16) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  ThreadProperty = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_77;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v64 = WdLogNewEntry5_WdAssertion(v60, v59);
    *(_QWORD *)(v64 + 24) = 507LL;
    WdLogEvent5_WdAssertion(v64);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v60, v59);
  v70 = PsGetCurrentProcess(v67, v66, v68, v69);
  v71 = PsGetProcessDxgProcess(v70);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
    && v71
    && (v72 = *(void **)(v71 + 88)) != 0LL
    && v72 != &gDxgkWin32kEngInterface
    && (!(unsigned __int8)KeIsAttachedProcess()
     || (v77 = PsGetCurrentProcess(v74, v73, v75, v76),
         ProcessSessionId = PsGetProcessSessionIdEx(v77),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
    && *(_QWORD *)ThreadWin32Thread )
  {
    ThreadProperty = *(struct DXGTHREAD **)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    ThreadProperty = (struct DXGTHREAD *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
    if ( !ThreadProperty )
    {
      ThreadProperty = DxgkThreadObjectCreateDxgThread();
      if ( !ThreadProperty )
      {
        ThreadProperty = 0LL;
LABEL_77:
        v81 = 0;
        goto LABEL_78;
      }
    }
    ObfDereferenceObject(ThreadProperty);
  }
  if ( !ThreadProperty )
    goto LABEL_77;
  v81 = *((_DWORD *)ThreadProperty + 8);
LABEL_78:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v158,
    *(struct DXGADAPTER **)(v41 + 16));
  v83 = (*(int (__fastcall **)(_QWORD, void **))(*(_QWORD *)(v41 + 16) + 376LL))(
          *(_QWORD *)(*(_QWORD *)(v41 + 16) + 272LL),
          &v145);
  if ( v158[0] )
    KeUnstackDetachProcess(&ApcState);
  v84 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v84 )
  {
    v85 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v84, v82);
    v85[3] = 275LL;
    v85[4] = 16LL;
    v85[5] = v41;
    v85[6] = CurrentIrql;
    v86 = KeGetCurrentIrql();
    v85[7] = v86;
    WdLogEvent5_WdCriticalError(v85);
  }
  if ( ThreadProperty && *((_DWORD *)ThreadProperty + 8) != v81 )
  {
    v87 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v84, v82);
    v87[3] = 275LL;
    v87[4] = 38LL;
    v87[5] = *((int *)ThreadProperty + 8);
    v87[6] = v81;
    v87[7] = 0LL;
    WdLogEvent5_WdCriticalError(v87);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v41 + 16) + 4364LL));
  v88 = (_QWORD *)WdLogNewEntry5_WdTrace(v84, v82);
  v88[3] = v83;
  v88[4] = v149;
  v88[5] = v148->hAllocation;
  v88[6] = v148->Flags.Value;
  v89 = v148;
  Value = v148->PreferredSegment.Value;
  v88[7] = Value;
  if ( (_DWORD)v83 != -1073741811 && (_DWORD)v83 != -1073741801 && (_DWORD)v83 )
  {
    v91 = WdLogNewEntry5_WdError(v89, Value);
    *(_QWORD *)(v91 + 24) = v83;
    WdLogEvent5_WdError(v91);
  }
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v41 + 16));
  if ( v54 == 2 )
  {
    *(_QWORD *)(v53 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v53, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v154, v92);
  if ( v156 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)v39, &EventProfilerExit, v93, v154);
  v142 = v83;
  if ( (int)v83 < 0 )
    goto LABEL_225;
  v13 = this;
  v12 = v157;
  v35 = a10;
LABEL_96:
  v94 = 0;
  v95 = v152;
  if ( v12->NumAllocations )
  {
    v96 = v153;
    while ( 1 )
    {
      v97 = v94;
      if ( (*(_DWORD *)&v12->Flags & 0x100000) != 0 )
      {
        v98 = &v96[v94];
        if ( v98->PrivateDriverDataSize < 0x40 )
        {
          v132 = (_QWORD *)WdLogNewEntry5_WdError(v39, v98);
          v132[3] = 3086LL;
          goto LABEL_207;
        }
        if ( (v143[v94].Flags.Value & 1) != 0 )
        {
          v132 = (_QWORD *)WdLogNewEntry5_WdError(v143, v98);
          v132[3] = 3092LL;
LABEL_207:
          WdLogEvent5_WdError(v132);
          v142 = -1073741811;
          goto LABEL_225;
        }
        *((_DWORD *)v95 + 18) |= 0x200000u;
        *(_DWORD *)(*((_QWORD *)v95 + 6) + 4LL) |= 0x200000u;
        pPrivateDriverData = v98->pPrivateDriverData;
        v98->Alignment = *(_DWORD *)v98->pPrivateDriverData;
        v98->Size = *((_QWORD *)pPrivateDriverData + 1);
        v98->PitchAlignedSize = *((_QWORD *)pPrivateDriverData + 2);
        v98->HintedBank.Value = pPrivateDriverData[6];
        v98->PreferredSegment.Value = pPrivateDriverData[7];
        v98->SupportedReadSegmentSet = pPrivateDriverData[8];
        v98->SupportedWriteSegmentSet = pPrivateDriverData[9];
        v98->EvictionSegmentSet = pPrivateDriverData[10];
        v98->MaximumRenamingListLength = pPrivateDriverData[11];
        v98->Flags.Value = pPrivateDriverData[12];
        v98->AllocationPriority = pPrivateDriverData[13];
        *(&v98->AllocationPriority + 1) = pPrivateDriverData[14];
      }
      v100 = &v96[v94];
      *(_QWORD *)(*((_QWORD *)v95 + 6) + 16LL) = v100->hAllocation;
      *(_QWORD *)(*((_QWORD *)v95 + 6) + 24LL) = v100->pAllocationUsageHint;
      *(_DWORD *)(*((_QWORD *)v95 + 6) + 4LL) = *(_DWORD *)(*((_QWORD *)v95 + 6) + 4LL) & 0xFFFFF7FF | ((v100->Flags.Value & 0x30) != 0 ? 0x800 : 0);
      *(_DWORD *)(*((_QWORD *)v95 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v95 + 6) + 4LL) ^ (v100->Flags.Value << 17)) & 0x80000;
      v100->Flags.Value &= 0x807FFFFu;
      if ( DXGADAPTER::DriverSupportsWDDM3Features(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL))
        && *(&v100->AllocationPriority + 1) >= 2 )
      {
        v132 = (_QWORD *)WdLogNewEntry5_WdError(v102, v101);
        v132[3] = 3147LL;
        goto LABEL_207;
      }
      v105 = v103;
      if ( (*(_DWORD *)(v102 + 2060) & 0x40) != 0 && *(_BYTE *)(v102 + 2630) )
      {
        v105 = v103 | 0x8000;
        v100->Flags.Value = v103 | 0x8000;
      }
      v106 = v105;
      if ( (v105 & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 2631LL) )
      {
        v106 = v105 | 0x10000;
        v100->Flags.Value = v105 | 0x10000;
      }
      if ( v35 )
      {
        if ( (*(_DWORD *)v35 & 0x1000) != 0 )
          v100->Flags.Value = v106 | 0x20000;
        v107 = *((_DWORD *)v35 + 96);
        if ( v107 )
        {
          v100->SupportedWriteSegmentSet = v107;
          v100->PreferredSegment.Value = *((_DWORD *)v35 + 97);
        }
        v108 = *((_DWORD *)v35 + 98);
        if ( v108 )
          v100->Alignment = v108;
        if ( (*(_DWORD *)v35 & 0x2000) != 0 )
          *(_DWORD *)(*(_QWORD *)(96 * v97 + v104 + 48) + 4LL) |= 0x8000u;
        v109 = *((_QWORD *)v35 + 50);
        if ( v109 )
          v100->Size = v109;
        if ( (*(_DWORD *)v35 & 0x8000) != 0 )
          v96[v97].Flags.Value |= 0x8000u;
        if ( *((_DWORD *)v35 + 4) == 5 )
        {
          *(_DWORD *)(*(_QWORD *)(96 * v97 + v104 + 48) + 4LL) |= 0x10000u;
          v96[v97].Flags.Value |= 0x8000u;
        }
      }
      Flags = (unsigned int)v12->Flags;
      v111 = *(_DWORD *)&v12->Flags & 0x10000;
      if ( (*(_DWORD *)&v12->Flags & 0x10000) != 0 && v100->Size != a12->ExistingHeapData.Size )
      {
        v132 = (_QWORD *)WdLogNewEntry5_WdError(v111, Flags);
        v132[3] = v96[v97].Size;
        v132[4] = a12->ExistingHeapData.Size;
        v132[5] = -1073741811LL;
        goto LABEL_207;
      }
      if ( (_DWORD)v111 && (Flags & 0x20020) != 0 || v35 && (*((_QWORD *)v35 + 42) || *((_QWORD *)v35 + 41)) )
        v100->Flags.Value |= 1u;
      if ( *((_DWORD *)v13 + 108) == 2
        && (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL)) > 1
        && !DXGADAPTER::ReplicateGdiContent(v112)
        && (v143[v97].Flags.Value & 1) == 0 )
      {
        v96[v97].MaximumRenamingListLength = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 2724LL);
      }
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL)) )
        *((_DWORD *)v95 + 18) ^= (*((_DWORD *)v95 + 18) ^ (v100->MaximumRenamingListLength << 12)) & 0x3F000;
      else
        *((_DWORD *)v95 + 18) &= 0xFFFC0FFF;
      v116 = v100->Flags.Value;
      if ( (v116 & 0x200) != 0
        && (v117 = *(__int64 (__fastcall ***)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(*((_QWORD *)v13 + 2) + 16LL),
            v117[74] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange)
        || (v116 & 0x100) != 0
        && (!DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL))
         || v117[76] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
         || v117[84] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
         || v117[83] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
         || v117[82] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange) )
      {
        v133 = (_QWORD *)WdLogNewEntry5_WdError(v117, v116);
        v133[3] = v13;
        v133[4] = *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL);
        v133[5] = -1073741637LL;
        WdLogEvent5_WdError(v133);
        v142 = -1073741637;
        goto LABEL_225;
      }
      v118 = (unsigned int)v12->Flags;
      if ( (v118 & 0x100000) == 0 && !*(_QWORD *)(*((_QWORD *)v95 + 6) + 16LL) )
      {
        v132 = (_QWORD *)WdLogNewEntry5_WdError(v118, v116);
        v132[3] = v13;
        v132[4] = v95;
        v132[5] = -1073741811LL;
        goto LABEL_207;
      }
      v38 = 96 * v97;
      v119 = *(_DWORD *)(96 * v97 + v113 + 32);
      if ( (v119 & 2) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)v95 + 6) + 4LL) |= 0x1000u;
        LODWORD(v118) = v12->Flags;
        v119 = *(_DWORD *)(v38 + v113 + 32);
      }
      if ( (v119 & 1) == 0 || (v100->Flags.Value & 0x100) != 0 )
      {
        if ( (v118 & 2) != 0 )
          v100->Flags.Value |= 0x20000000u;
        if ( *((_DWORD *)v13 + 108) == 2 && *((_QWORD *)v13 + 231) != *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) )
        {
          if ( v35 )
          {
            if ( *((_QWORD *)v35 + 4) )
            {
              if ( *((_QWORD *)v35 + 5) )
              {
                if ( *((_DWORD *)v35 + 4) == 2 )
                {
                  v130 = v12->Flags;
                  if ( (*(_BYTE *)&v130 & 0x20) == 0 && (*(_BYTE *)&v130 & 2) != 0 )
                  {
                    *(_DWORD *)(*((_QWORD *)v95 + 6) + 4LL) |= 2u;
                    *(_DWORD *)(*((_QWORD *)v95 + 6) + 4LL) |= 4u;
                    v96[v97].Flags.Value = v96[v97].Flags.Value & 0x3DBFFFFF | 0x2400000;
                  }
                }
              }
            }
          }
        }
        goto LABEL_196;
      }
      v120 = *(_DWORD *)(v38 + v113 + 28);
      if ( (v118 & 2) != 0 )
      {
        v125 = *((_DWORD *)v13 + 108);
        if ( v125 == 2 )
        {
          *(_DWORD *)(*((_QWORD *)v95 + 6) + 4LL) |= 2u;
          v100->Flags.Value |= 0x40000000u;
          goto LABEL_181;
        }
        if ( (v118 & 0x800) != 0 )
        {
          if ( (v118 & 0x400) != 0 )
          {
            if ( v125 != 1 || (v126 = 0x2000, !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 2531LL)) )
              v126 = v115;
            *(_DWORD *)(*((_QWORD *)v95 + 6) + 4LL) = v126 | *(_DWORD *)(*((_QWORD *)v95 + 6) + 4LL) & 0xFFFFDFFF;
          }
          else
          {
            *(_DWORD *)(*((_QWORD *)v95 + 6) + 4LL) |= 1u;
            v100->Flags.Value |= 0x80000u;
          }
        }
        else if ( v125 == 1 )
        {
          if ( (v118 & 0x400) != 0 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 2531LL) )
              *(_DWORD *)(*((_QWORD *)v95 + 6) + 4LL) |= 0x2000u;
          }
          else
          {
            *(_DWORD *)(*((_QWORD *)v95 + 6) + 4LL) |= 1u;
          }
        }
        v127 = v115;
        v38 = 0x40000000LL;
        if ( *((_DWORD *)v13 + 108) == 1 )
          v127 = 0x80000000;
        v128 = v100->Flags.Value & 0x7FFFFFFF | v127;
        v129 = v115;
        v100->Flags.Value = v128;
        if ( !*((_DWORD *)v13 + 108) )
          v129 = 0x40000000;
        v124 = v128 & 0xBFFFFFFF | v129 | 0x20000000;
      }
      else
      {
        v121 = v115;
        v38 = 0x40000000LL;
        *(_DWORD *)(*((_QWORD *)v95 + 6) + 4LL) |= 1u;
        if ( *((_DWORD *)v13 + 108) == 1 )
          v121 = 0x80000000;
        v122 = v100->Flags.Value & 0x7FFFFFFF | v121;
        v123 = v115;
        v100->Flags.Value = v122;
        if ( !*((_DWORD *)v13 + 108) )
          v123 = 0x40000000;
        v124 = v122 & 0xBFFFFFFF | v123;
      }
      v100->Flags.Value = v124;
LABEL_181:
      if ( *((_QWORD *)v13 + 231) != *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) )
      {
        *(_DWORD *)(*((_QWORD *)v95 + 6) + 4LL) |= 4u;
        v38 = v100->Flags.Value & 0x3DFFFFFF;
        LODWORD(v38) = v38 | 0x2000000;
        v100->Flags.Value = v38;
        if ( (*(_DWORD *)(*((_QWORD *)v95 + 6) + 4LL) & 2) != 0 )
        {
          v38 = (unsigned int)v38 | 0x20400000;
          v100->Flags.Value = v38;
        }
      }
      *(_DWORD *)(*((_QWORD *)v95 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v95 + 6) + 4LL) ^ (v120 << 6)) & 0x3C0;
LABEL_196:
      v39 = a6;
      if ( a6 && (*((_DWORD *)a6 + 1) & 8) != 0 )
        v100->Flags.Value |= 0x88000u;
      v131 = v12->Flags;
      if ( (*(_WORD *)&v131 & 0x1800) != 0 )
      {
        v100->Flags.Value |= 0x20100000u;
        v131 = v12->Flags;
      }
      if ( (*(_WORD *)&v131 & 0x400) != 0 )
        v96[v97].Flags.Value |= 0x200000u;
      v95 = (struct DXGALLOCATION *)*((_QWORD *)v95 + 8);
      v94 = v114 + 1;
      if ( v94 >= v12->NumAllocations )
        goto LABEL_213;
    }
  }
  v39 = a6;
LABEL_213:
  if ( v39 )
  {
    v134 = v149;
    if ( (*(_DWORD *)&v12->Flags & 2) != 0 )
    {
      v135 = *((_QWORD *)v39 + 7);
      v136 = v135;
      v137 = *(_QWORD *)(v135 + 16);
      if ( v137 && v149 && v149 != v137 )
      {
        v138 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v135, v135);
        v138[5] = 0LL;
        v138[6] = 0LL;
        v138[7] = 0LL;
        v138[3] = 275LL;
        v138[4] = 7LL;
        WdLogEvent5_WdCriticalError(v138);
        v134 = v149;
        v136 = *((_QWORD *)a6 + 7);
      }
      *(_QWORD *)(v136 + 16) = v134;
    }
    else
    {
      v139 = *((_QWORD *)v39 + 7);
      if ( v139 && v149 && v139 != v149 )
      {
        v140 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v139, v38);
        v140[5] = 0LL;
        v140[6] = 0LL;
        v140[7] = 0LL;
        v140[3] = 275LL;
        v140[4] = 7LL;
        WdLogEvent5_WdCriticalError(v140);
        v134 = v149;
      }
      *((_QWORD *)a6 + 7) = v134;
    }
  }
LABEL_225:
  operator delete[](v145);
  return v142;
}
