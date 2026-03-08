/*
 * XREFs of ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C019C230
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0196360 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0001560 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0007690 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007980 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008740 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0008C68 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00163C0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0016460 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C01B50A0 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1C033F668 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
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
  __int64 v12; // r10
  struct DXGRESOURCE *v13; // rdi
  DXGDEVICE *v14; // r13
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 NumAllocations; // rcx
  unsigned int v19; // ebx
  struct _DXGK_ALLOCATIONINFO *v20; // r13
  struct _D3DDDI_ALLOCATIONINFO2 *v21; // rcx
  UINT PrivateDriverDataSize; // r9d
  __int64 v23; // r8
  void *v24; // rcx
  unsigned __int64 v25; // rax
  struct _DXGK_ALLOCATIONINFO *v26; // rdi
  const struct _D3DKM_CREATESTANDARDALLOCATION *v27; // r9
  __int64 v28; // r14
  __int64 v29; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v32; // r15
  struct DXGPROCESS *v33; // rdi
  char *v34; // rbx
  int v35; // r13d
  __int64 v36; // rcx
  __int64 v37; // r8
  KIRQL CurrentIrql; // al
  __int64 v39; // r12
  struct DXGTHREAD *v40; // rdi
  __int64 v41; // r15
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  _QWORD *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  struct DXGALLOCATION *v49; // r10
  __int64 v50; // r14
  __int64 v51; // rbx
  struct DXGRESOURCE *v52; // r12
  struct _D3DDDI_ALLOCATIONINFO2 *v53; // r8
  struct _DXGK_ALLOCATIONINFO *v54; // rdi
  int Value; // r8d
  int v56; // edx
  __int64 v57; // rcx
  int v58; // r8d
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // eax
  __int64 v60; // rcx
  __int64 (__fastcall **v61)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  int v62; // r11d
  D3DKMT_CREATEALLOCATIONFLAGS v63; // eax
  UINT v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS v67; // edx
  UINT v68; // ecx
  unsigned int v69; // r12d
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rcx
  UINT v75; // eax
  UINT v76; // eax
  __int64 v77; // rcx
  SIZE_T v78; // rax
  DXGADAPTER *v79; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS v80; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  int v82; // ecx
  int v83; // ecx
  int v84; // eax
  int v85; // ecx
  unsigned int v86; // eax
  void *v87; // rax
  int v88; // r9d
  UINT v90; // edx
  __int64 v91; // rax
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  KIRQL v95; // al
  struct _DXGK_ALLOCATIONINFO *v96; // rdx
  _DWORD *pPrivateDriverData; // rcx
  SIZE_T v98; // rdx
  SIZE_T v99; // r8
  const wchar_t *v100; // r9
  __int64 (__fastcall **v101)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  int v102; // ecx
  int v103; // ecx
  int v104; // eax
  int v105; // r8d
  __int64 v106; // rcx
  unsigned int v107; // eax
  int v108; // r8d
  struct _D3DDDI_ALLOCATIONINFO2 *v109; // [rsp+50h] [rbp-B0h]
  int v110; // [rsp+58h] [rbp-A8h]
  unsigned int v111; // [rsp+60h] [rbp-A0h]
  void *v112; // [rsp+68h] [rbp-98h] BYREF
  unsigned int Size; // [rsp+70h] [rbp-90h]
  int Size_4; // [rsp+74h] [rbp-8Ch]
  struct _DXGK_ALLOCATIONINFO *v115; // [rsp+78h] [rbp-88h]
  __int64 v116; // [rsp+80h] [rbp-80h]
  int v117; // [rsp+88h] [rbp-78h]
  int v118; // [rsp+8Ch] [rbp-74h]
  struct DXGALLOCATION *v119; // [rsp+90h] [rbp-70h]
  struct _DXGK_ALLOCATIONINFO *v120; // [rsp+98h] [rbp-68h]
  struct DXGTHREAD *DxgThread; // [rsp+A0h] [rbp-60h] BYREF
  struct DXGRESOURCE *v122; // [rsp+A8h] [rbp-58h]
  DXGDEVICE *v123; // [rsp+B0h] [rbp-50h]
  struct _D3DKMT_CREATESTANDARDALLOCATION *v124; // [rsp+B8h] [rbp-48h]
  int v125; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v126; // [rsp+C8h] [rbp-38h]
  char v127; // [rsp+D0h] [rbp-30h]
  char v128[8]; // [rsp+D8h] [rbp-28h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-20h] BYREF

  v12 = 0LL;
  v13 = a6;
  v14 = this;
  v119 = a5;
  v118 = 0;
  v124 = a12;
  v16 = *((_QWORD *)this + 2);
  v123 = this;
  v120 = a4;
  v109 = a3;
  v17 = *(_QWORD *)(v16 + 16);
  v122 = a6;
  v111 = 0;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 168)) )
    {
      WdLogSingleEntry1(1LL, 3053LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
        3053LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    a3 = v109;
    v12 = 0LL;
  }
  NumAllocations = a2->NumAllocations;
  v19 = 0;
  v112 = 0LL;
  if ( (_DWORD)NumAllocations )
  {
    v20 = v120;
    do
    {
      v21 = &a3[v19];
      if ( v21->pPrivateDriverData )
      {
        PrivateDriverDataSize = v21->PrivateDriverDataSize;
        v23 = v19;
        v20[v23].PrivateDriverDataSize = PrivateDriverDataSize;
        if ( !a11 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
        {
          v20[v23].pPrivateDriverData = v21->pPrivateDriverData;
        }
        else
        {
          v24 = a7[v19];
          v20[v23].pPrivateDriverData = v24;
          memmove(v24, a8[v19], PrivateDriverDataSize);
        }
        a3 = v109;
      }
      NumAllocations = a2->NumAllocations;
      ++v19;
    }
    while ( v19 < (unsigned int)NumAllocations );
    v14 = v123;
    v12 = 0LL;
    v13 = v122;
  }
  v117 = 0;
  if ( v13 )
  {
    v71 = *((_DWORD *)v13 + 1);
    v72 = *((_QWORD *)v13 + 7);
    v117 = 1;
    if ( (v71 & 1) != 0 )
      v116 = *(_QWORD *)(v72 + 16);
    else
      v116 = v72;
  }
  else
  {
    v116 = 0LL;
  }
  v25 = a2->PrivateDriverDataSize;
  v26 = v120;
  Size_4 = NumAllocations;
  v115 = v120;
  if ( (_DWORD)v25 && a2->pStandardAllocation )
  {
    Size = v25;
    v87 = (void *)operator new[](v25, 0x4B677844u, 258LL);
    v112 = v87;
    if ( !v87 )
    {
      v69 = -1073741801;
      WdLogSingleEntry3(3LL, v14, Size, -1073741801LL);
      goto LABEL_82;
    }
    if ( a11 )
      memmove(v87, Src, Size);
    else
      memmove(v87, a2->pStandardAllocation, Size);
    v12 = 0LL;
  }
  else
  {
    Size = 0;
  }
  v27 = a10;
  if ( a10 )
  {
    if ( (*(_DWORD *)a10 & 0x3000) != 0 )
    {
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v14 + 2) + 16LL)) )
      {
        v90 = v12;
        if ( a2->NumAllocations )
        {
          do
          {
            v91 = v90++;
            NumAllocations = 88 * v91;
            v115[v91].Flags.Value |= 0x400u;
          }
          while ( v90 < a2->NumAllocations );
        }
      }
    }
  }
  if ( (*(_DWORD *)&a2->Flags & 0x100000) != 0 )
    goto LABEL_48;
  v28 = *((_QWORD *)v14 + 2);
  v125 = -1;
  v126 = v12;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v127 = 1;
    v125 = 5002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(NumAllocations, &EventProfilerEnter, (__int64)a3, 5002);
  }
  else
  {
    v127 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v125, 5002);
  CurrentProcess = PsGetCurrentProcess(v29);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v32 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v33 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( !v33 )
        goto LABEL_24;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v33 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( !v33 )
      {
        WdLogSingleEntry1(2LL, 2923LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_24;
      }
    }
LABEL_25:
    v34 = (char *)v33 + 152;
    v35 = 0;
    if ( v33 != (struct DXGPROCESS *)-152LL && *((struct _KTHREAD **)v33 + 20) == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 1453LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1453LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v33 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v33 + 152, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v88 = *((_DWORD *)v33 + 44);
          if ( v88 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v36, (const EVENT_DESCRIPTOR *)"g", v37, v88);
        }
        ExAcquirePushLockExclusiveEx((char *)v33 + 152, 0LL);
      }
      v35 = 2;
      *((_QWORD *)v33 + 20) = KeGetCurrentThread();
    }
    goto LABEL_31;
  }
LABEL_24:
  v33 = v32;
  if ( v32 )
    goto LABEL_25;
  v34 = 0LL;
  v35 = 0;
LABEL_31:
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v28 + 16), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v28 + 16) + 4612LL));
  CurrentIrql = KeGetCurrentIrql();
  v39 = CurrentIrql;
  v40 = 0LL;
  if ( CurrentIrql < 2u
    && (DxgThread = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0)
    && ((v40 = DxgThread) != 0LL || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v40 = DxgThread) != 0LL)) )
  {
    v110 = *((_DWORD *)v40 + 12);
  }
  else
  {
    v110 = 0;
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v128,
    *(struct DXGADAPTER **)(v28 + 16));
  v41 = (*(int (__fastcall **)(_QWORD, void **))(*(_QWORD *)(v28 + 16) + 464LL))(
          *(_QWORD *)(*(_QWORD *)(v28 + 16) + 280LL),
          &v112);
  if ( v128[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v39 != KeGetCurrentIrql() )
  {
    v95 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, v28, v39, v95);
  }
  if ( v40 )
  {
    v43 = *((int *)v40 + 12);
    if ( (_DWORD)v43 != v110 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v40 + 12), v110, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v28 + 16) + 4612LL));
  v46 = (_QWORD *)WdLogNewEntry5_WdTrace(v43, v42, v44, v45);
  v46[3] = v41;
  v46[4] = v116;
  v46[5] = v115->hAllocation;
  v46[6] = v115->Flags.Value;
  v46[7] = v115->PreferredSegment.Value;
  if ( (_DWORD)v41 && (_DWORD)v41 != -1073741811 && (_DWORD)v41 != -1073741801 )
  {
    WdLogSingleEntry1(2LL, v41);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v41,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v28 + 16));
  if ( v35 == 2 )
  {
    *((_QWORD *)v34 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v34, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v125);
  if ( v127 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v47, &EventProfilerExit, v48, v125);
  v111 = v41;
  if ( (int)v41 < 0 )
    goto LABEL_81;
  v14 = v123;
  v27 = a10;
  v26 = v120;
LABEL_48:
  v49 = v119;
  v50 = 0LL;
  v51 = (__int64)v119;
  v52 = v122;
  if ( !a2->NumAllocations )
  {
LABEL_80:
    if ( v52 )
    {
      v73 = *((_QWORD *)v52 + 7);
      if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
      {
        v74 = *(_QWORD *)(v73 + 16);
        if ( v74 && v116 && v116 != v74 )
          WdLogSingleEntry5(0LL, 275LL, 7LL, 0LL, 0LL, 0LL);
        *(_QWORD *)(*((_QWORD *)v52 + 7) + 16LL) = v116;
      }
      else
      {
        if ( v73 && v116 && v73 != v116 )
          WdLogSingleEntry5(0LL, 275LL, 7LL, 0LL, 0LL, 0LL);
        *((_QWORD *)v52 + 7) = v116;
      }
    }
LABEL_81:
    v69 = v111;
    goto LABEL_82;
  }
  v53 = v109;
  while ( 1 )
  {
    if ( (*(_DWORD *)&a2->Flags & 0x100000) != 0 )
    {
      v96 = &v26[(unsigned int)v50];
      if ( v96->PrivateDriverDataSize < 0x40 )
      {
        WdLogSingleEntry1(2LL, 3181LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid private driver data size for NoKmdAccess",
          3181LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_222;
      }
      if ( (v53[v50].Flags.Value & 1) != 0 )
      {
        WdLogSingleEntry1(2LL, 3187LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Primary cannot be used with NoKmdAccess",
          3187LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_222;
      }
      *(_DWORD *)(v51 + 72) |= 0x200000u;
      *(_DWORD *)(*(_QWORD *)(v51 + 48) + 4LL) |= 0x10000000u;
      pPrivateDriverData = v96->pPrivateDriverData;
      v96->Alignment = *(_DWORD *)v96->pPrivateDriverData;
      v96->Size = *((_QWORD *)pPrivateDriverData + 1);
      v96->PitchAlignedSize = *((_QWORD *)pPrivateDriverData + 2);
      v96->HintedBank.Value = pPrivateDriverData[6];
      v96->PreferredSegment.Value = pPrivateDriverData[7];
      v96->SupportedReadSegmentSet = pPrivateDriverData[8];
      v96->SupportedWriteSegmentSet = pPrivateDriverData[9];
      v96->EvictionSegmentSet = pPrivateDriverData[10];
      v96->MaximumRenamingListLength = pPrivateDriverData[11];
      v96->Flags.Value = pPrivateDriverData[12];
      v96->AllocationPriority = pPrivateDriverData[13];
      *(&v96->AllocationPriority + 1) = pPrivateDriverData[14];
    }
    v54 = &v26[(unsigned int)v50];
    *(_QWORD *)(*(_QWORD *)(v51 + 48) + 16LL) = v54->hAllocation;
    *(_QWORD *)(*(_QWORD *)(v51 + 48) + 24LL) = v54->pAllocationUsageHint;
    *(_DWORD *)(*(_QWORD *)(v51 + 48) + 4LL) = *(_DWORD *)(*(_QWORD *)(v51 + 48) + 4LL) & 0xFFFFF7FF | ((v54->Flags.Value & 0x30) != 0 ? 0x800 : 0);
    *(_DWORD *)(*(_QWORD *)(v51 + 48) + 4LL) ^= (*(_DWORD *)(*(_QWORD *)(v51 + 48) + 4LL) ^ (v54->Flags.Value << 17)) & 0x80000;
    v54->Flags.Value &= 0x807FFFFu;
    Value = v54->Flags.Value;
    if ( *(int *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 2552LL) >= 12288 )
      break;
    if ( (*(_DWORD *)&a2->Flags & 0x100000) == 0 )
      *(&v54->AllocationPriority + 1) = 0;
LABEL_53:
    v56 = Value;
    v57 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL);
    if ( (*(_DWORD *)(v57 + 2284) & 0x40) != 0 && *(_BYTE *)(v57 + 2854) )
    {
      v56 = Value | 0x8000;
      v54->Flags.Value = Value | 0x8000;
    }
    v58 = v56;
    if ( (v56 & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 2855LL) )
    {
      v58 = v56 | 0x10000;
      v54->Flags.Value = v56 | 0x10000;
    }
    if ( v27 )
    {
      if ( (*(_DWORD *)v27 & 0x1000) != 0 )
        v54->Flags.Value = v58 | 0x20000;
      v75 = *((_DWORD *)v27 + 96);
      if ( v75 )
      {
        v54->SupportedWriteSegmentSet = v75;
        v54->PreferredSegment.Value = *((_DWORD *)v27 + 97);
      }
      v76 = *((_DWORD *)v27 + 98);
      if ( v76 )
        v54->Alignment = v76;
      v77 = 96 * v50;
      if ( (*(_DWORD *)v27 & 0x2000) != 0 )
        *(_DWORD *)(*(_QWORD *)((char *)v49 + v77 + 48) + 4LL) |= 0x8000u;
      v78 = *((_QWORD *)v27 + 50);
      if ( v78 )
        v54->Size = v78;
      if ( (*(_DWORD *)v27 & 0x8000) != 0 )
        v54->Flags.Value |= 0x8000u;
      if ( *((_DWORD *)v27 + 4) == 5 )
      {
        *(_DWORD *)(*(_QWORD *)((char *)v49 + v77 + 48) + 4LL) |= 0x10000u;
        v54->Flags.Value |= 0x8000u;
      }
    }
    Flags = a2->Flags;
    if ( (*(_DWORD *)&Flags & 0x10000) != 0 )
    {
      v98 = v54->Size;
      v99 = v124->ExistingHeapData.Size;
      if ( v98 != v99 )
      {
        WdLogSingleEntry3(2LL, v98, v99, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Mismatch between Driver returned allocation size:0x%I64x and ExistingSysMem                     buffe"
                    "r size:0xI64x, returning 0x%I64x",
          v54->Size,
          v124->ExistingHeapData.Size,
          -1073741811LL,
          0LL,
          0LL);
        goto LABEL_222;
      }
      if ( (*(_DWORD *)&Flags & 0x20020) != 0 )
        goto LABEL_174;
    }
    if ( v27 && (*((_QWORD *)v27 + 42) || *((_QWORD *)v27 + 41)) )
LABEL_174:
      v54->Flags.Value |= 1u;
    if ( *((_DWORD *)v14 + 116) == 2
      && (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)v14 + 2) + 16LL)) > 1
      && !DXGADAPTER::ReplicateGdiContent(v79)
      && (v109[v50].Flags.Value & 1) == 0 )
    {
      v54->MaximumRenamingListLength = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 2948LL);
    }
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v14 + 2) + 16LL)) )
    {
      v60 = *(_QWORD *)(v51 + 48);
      *(_DWORD *)(v51 + 72) ^= (*(_DWORD *)(v51 + 72) ^ (v54->MaximumRenamingListLength << 12)) & 0x3F000;
      *(_DWORD *)(v60 + 4) ^= (*(_DWORD *)(v60 + 4) ^ (v54->MaximumRenamingListLength << 21)) & 0x7E00000;
    }
    else
    {
      *(_DWORD *)(v51 + 72) &= 0xFFFC0FFF;
    }
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v14 + 2) + 16LL)) )
    {
      v63 = a2->Flags;
      if ( (*(_DWORD *)&v63 & 0x80000) != 0 && (*(_WORD *)&v63 & 0x800) == 0 )
      {
        WdLogSingleEntry3(2LL, v14, v61, -1073741637LL);
        v100 = L"Device 0x%I64x: Driver tried to create non-cross adapter physically contiguous buffer, adapter 0x%I64x, r"
                "eturning 0x%I64x";
LABEL_189:
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)v100,
          (__int64)v14,
          *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL),
          -1073741637LL,
          0LL,
          0LL);
        v69 = -1073741637;
        goto LABEL_82;
      }
    }
    v64 = v54->Flags.Value;
    if ( (v64 & 0x200) != 0 && v61[85] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
    {
      WdLogSingleEntry3(2LL, v14, v61, -1073741637LL);
      v100 = L"Device 0x%I64x: Driver tried to create capture buffer but didn't supply StopCapture, adapter 0x%I64x, returning 0x%I64x";
      goto LABEL_189;
    }
    if ( (v64 & 0x100) != 0
      && (!DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)v61)
       || v101[87] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
       || v101[95] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
       || v101[94] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
       || v101[93] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange) )
    {
      WdLogSingleEntry3(2LL, v14, v101, -1073741637LL);
      v100 = L"Device 0x%I64x: Driver tried to create overlay but didn't supply Overlay DDI, adapter 0x%I64x, returning 0x%I64x";
      goto LABEL_189;
    }
    v65 = *(_QWORD *)(v51 + 48);
    if ( !*(_QWORD *)(v65 + 16) && (*(_DWORD *)&a2->Flags & 0x100000) == 0 )
    {
      WdLogSingleEntry3(2LL, v14, v51, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: Driver did not return an allocation handle for 0x%I64x, returning 0x%I64x",
        (__int64)v14,
        v51,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_222;
    }
    v66 = v50;
    if ( (v53[v50].Flags.Value & 2) != 0 )
      *(_DWORD *)(v65 + 4) |= 0x1000u;
    if ( (v53[v66].Flags.Value & 1) != 0 && (v54->Flags.Value & 0x100) == 0 )
    {
      v80 = a2->Flags;
      VidPnSourceId = v53[v66].VidPnSourceId;
      if ( (*(_BYTE *)&v80 & 2) != 0 )
      {
        v82 = *((_DWORD *)v14 + 116);
        if ( v82 != 2 )
        {
          if ( (*(_WORD *)&v80 & 0x800) != 0 )
          {
            if ( (*(_WORD *)&v80 & 0x400) != 0 )
            {
              if ( v82 == 1 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 2755LL) )
                v105 = 0x2000;
              else
                v105 = 0;
              v106 = *(_QWORD *)(v51 + 48);
              v107 = v105 | *(_DWORD *)(v106 + 4) & 0xFFFFDFFF;
              v53 = v109;
              *(_DWORD *)(v106 + 4) = v107;
            }
            else
            {
              *(_DWORD *)(*(_QWORD *)(v51 + 48) + 4LL) |= 1u;
              v54->Flags.Value |= 0x80000u;
            }
          }
          else if ( v82 == 1 )
          {
            if ( (*(_WORD *)&v80 & 0x400) != 0 )
            {
              if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 2755LL) )
                *(_DWORD *)(*(_QWORD *)(v51 + 48) + 4LL) |= 0x2000u;
            }
            else
            {
              *(_DWORD *)(*(_QWORD *)(v51 + 48) + 4LL) |= 1u;
            }
          }
          if ( *((_DWORD *)v14 + 116) == 1 )
            v83 = v62;
          else
            v83 = 0;
          v84 = v83 | v54->Flags.Value & 0x7FFFFFFF;
          v54->Flags.Value = v84;
          if ( *((_DWORD *)v14 + 116) )
            v85 = 0;
          else
            v85 = 0x40000000;
          v86 = v85 | v84 & 0xBFFFFFFF | 0x20000000;
          goto LABEL_131;
        }
        *(_DWORD *)(*(_QWORD *)(v51 + 48) + 4LL) |= 2u;
        v54->Flags.Value |= 0x40000000u;
      }
      else
      {
        v102 = 0;
        *(_DWORD *)(*(_QWORD *)(v51 + 48) + 4LL) |= 1u;
        if ( *((_DWORD *)v14 + 116) == 1 )
          v102 = v62;
        v103 = v54->Flags.Value & 0x7FFFFFFF | v102;
        v104 = 0;
        v54->Flags.Value = v103;
        if ( !*((_DWORD *)v14 + 116) )
          v104 = 0x40000000;
        v86 = v103 & 0xBFFFFFFF | v104;
LABEL_131:
        v54->Flags.Value = v86;
      }
      if ( (*(_DWORD *)(*((_QWORD *)v14 + 5) + 424LL) & 0x100) == 0
        && *((_QWORD *)v14 + 235) != *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) )
      {
        *(_DWORD *)(*(_QWORD *)(v51 + 48) + 4LL) |= 4u;
        v108 = v54->Flags.Value & 0x3DFFFFFF | 0x2000000;
        v54->Flags.Value = v108;
        if ( (*(_DWORD *)(*(_QWORD *)(v51 + 48) + 4LL) & 2) != 0 )
          v54->Flags.Value = v108 | 0x20400000;
        v53 = v109;
      }
      *(_DWORD *)(*(_QWORD *)(v51 + 48) + 4LL) ^= (*(_DWORD *)(*(_QWORD *)(v51 + 48) + 4LL) ^ (VidPnSourceId << 6)) & 0x3C0;
      goto LABEL_74;
    }
    v67 = a2->Flags;
    if ( (*(_BYTE *)&v67 & 2) != 0 )
    {
      v54->Flags.Value |= 0x20000000u;
      v67 = a2->Flags;
    }
    if ( *((_DWORD *)v14 + 116) == 2
      && *((_QWORD *)v14 + 235) != *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL)
      && (*(_DWORD *)(*((_QWORD *)v14 + 5) + 424LL) & 0x100) == 0
      && v27
      && *((_QWORD *)v27 + 4)
      && *((_QWORD *)v27 + 5)
      && *((_DWORD *)v27 + 4) == 2
      && (*(_BYTE *)&v67 & 0x22) == 2 )
    {
      *(_DWORD *)(*(_QWORD *)(v51 + 48) + 4LL) |= 2u;
      *(_DWORD *)(*(_QWORD *)(v51 + 48) + 4LL) |= 4u;
      v54->Flags.Value = v54->Flags.Value & 0x3DBFFFFF | 0x2400000;
    }
LABEL_74:
    if ( v52 && (*((_DWORD *)v52 + 1) & 8) != 0 )
      v54->Flags.Value |= 0x88000u;
    v68 = v54->Flags.Value;
    if ( (*(_DWORD *)&a2->Flags & 0x1800) != 0 )
    {
      v68 |= 0x20100000u;
      v54->Flags.Value = v68;
    }
    if ( (*(_DWORD *)&a2->Flags & 0x400) != 0 )
      v54->Flags.Value = v68 | 0x200000;
    v51 = *(_QWORD *)(v51 + 64);
    v50 = (unsigned int)(v50 + 1);
    if ( (unsigned int)v50 >= a2->NumAllocations )
      goto LABEL_80;
    v26 = v120;
  }
  if ( *(&v54->AllocationPriority + 1) < 2 )
    goto LABEL_53;
  WdLogSingleEntry1(2LL, 3242LL);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Flags2.Reserved is not zero", 3242LL, 0LL, 0LL, 0LL, 0LL);
LABEL_222:
  v69 = -1073741811;
LABEL_82:
  operator delete(v112);
  return v69;
}
