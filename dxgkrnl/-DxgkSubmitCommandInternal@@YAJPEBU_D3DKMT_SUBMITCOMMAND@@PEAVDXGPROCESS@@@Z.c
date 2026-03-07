__int64 __fastcall DxgkSubmitCommandInternal(const struct _D3DKMT_SUBMITCOMMAND *a1, struct DXGPROCESS *a2, __int64 a3)
{
  const struct _D3DKMT_SUBMITCOMMAND *v4; // rbx
  _D3DKMT_SUBMITCOMMAND *v5; // rsi
  _D3DKMT_SUBMITCOMMAND *v6; // rax
  __int64 v7; // rcx
  D3DKMT_SUBMITCOMMANDFLAGS Flags; // ecx
  struct DXGCONTEXT *v9; // rbx
  int v10; // eax
  __int64 BroadcastContextCount; // rdi
  __int64 v12; // rcx
  PVOID Pool2; // rcx
  unsigned int v14; // r8d
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  struct DXGCONTEXT *v17; // r13
  __int64 v18; // rbx
  __int64 v19; // rcx
  int v20; // edi
  struct _KEVENT *v21; // r14
  unsigned int v22; // r14d
  int v23; // eax
  struct DXGPROCESS *v24; // r8
  __int64 v25; // r9
  __int64 v26; // r14
  struct DXGADAPTER *v27; // rbx
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DXGCONTEXT *v31; // rbx
  struct _VIDMM_MULTI_ALLOC **v32; // rdi
  int v33; // r14d
  __int64 v34; // rdx
  unsigned __int64 PresentHistoryToken; // rcx
  char *v36; // rcx
  DXGGLOBAL **v37; // rcx
  __int64 v38; // rcx
  DXGCONTEXT **v39; // rbx
  __int64 v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v44; // rcx
  __int64 v45; // r8
  unsigned int v46; // ebx
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // r8
  struct _KEVENT *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // r8
  unsigned int v53; // eax
  __int64 v54; // rdi
  int v55; // ecx
  __int64 v56; // rdi
  int v57; // ecx
  signed __int64 v58; // rax
  signed __int64 v59; // rtt
  const wchar_t *v60; // r9
  struct DXGCONTEXT *v61; // rbx
  __int64 v62; // rcx
  __int64 v63; // r8
  struct DXGPROCESS *v64; // rbx
  __int64 v65; // r12
  __int64 v66; // rax
  UINT v67; // r12d
  unsigned int *v68; // rdx
  unsigned int v69; // r8d
  unsigned int v70; // r13d
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // r8
  struct DXGCONTEXT *v75; // rbx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rcx
  __int64 v79; // r8
  unsigned int v80; // r9d
  unsigned int *v81; // r10
  unsigned int i; // ebx
  struct DXGCONTEXT *v83; // rbx
  unsigned __int8 v84; // [rsp+50h] [rbp-4A8h]
  int v85; // [rsp+58h] [rbp-4A0h] BYREF
  __int64 v86; // [rsp+60h] [rbp-498h]
  char v87; // [rsp+68h] [rbp-490h]
  PVOID P; // [rsp+70h] [rbp-488h]
  _BYTE v89[32]; // [rsp+78h] [rbp-480h] BYREF
  unsigned int v90; // [rsp+98h] [rbp-460h]
  DXGCONTEXT *v91; // [rsp+A0h] [rbp-458h] BYREF
  char v92; // [rsp+A8h] [rbp-450h]
  struct DXGCONTEXT *v93; // [rsp+B0h] [rbp-448h] BYREF
  __int64 v94; // [rsp+B8h] [rbp-440h] BYREF
  int v95; // [rsp+C0h] [rbp-438h]
  DXGCONTEXT **v96; // [rsp+C8h] [rbp-430h] BYREF
  unsigned int v97; // [rsp+D0h] [rbp-428h]
  __int64 v98; // [rsp+D8h] [rbp-420h] BYREF
  struct DXGADAPTER *v99; // [rsp+E0h] [rbp-418h]
  char v100; // [rsp+E8h] [rbp-410h]
  unsigned int v101; // [rsp+F0h] [rbp-408h]
  struct DXGPROCESS *v102; // [rsp+F8h] [rbp-400h]
  UINT v103; // [rsp+100h] [rbp-3F8h]
  __int64 *v104; // [rsp+108h] [rbp-3F0h]
  __int64 v105; // [rsp+110h] [rbp-3E8h]
  struct DXGPROCESS *v106; // [rsp+118h] [rbp-3E0h]
  __int64 v107; // [rsp+120h] [rbp-3D8h]
  char v108[8]; // [rsp+128h] [rbp-3D0h] BYREF
  _QWORD v109[6]; // [rsp+130h] [rbp-3C8h] BYREF
  char v110; // [rsp+160h] [rbp-398h]
  _BYTE v111[24]; // [rsp+168h] [rbp-390h] BYREF
  char v112[8]; // [rsp+180h] [rbp-378h] BYREF
  _BYTE v113[16]; // [rsp+188h] [rbp-370h] BYREF
  DXGADAPTER *v114; // [rsp+198h] [rbp-360h]
  char v115; // [rsp+1A0h] [rbp-358h]
  __int64 v116; // [rsp+1A8h] [rbp-350h]
  _BYTE v117[16]; // [rsp+1C8h] [rbp-330h] BYREF
  __int64 v118; // [rsp+1D8h] [rbp-320h]
  __int64 v119; // [rsp+208h] [rbp-2F0h]
  char v120; // [rsp+210h] [rbp-2E8h]
  DXGALLOCATIONREFERENCE *v121; // [rsp+220h] [rbp-2D8h] BYREF
  char v122; // [rsp+228h] [rbp-2D0h] BYREF
  unsigned int v123; // [rsp+2A8h] [rbp-250h]
  void *v124; // [rsp+2B0h] [rbp-248h] BYREF
  char v125; // [rsp+2B8h] [rbp-240h] BYREF
  int v126; // [rsp+338h] [rbp-1C0h]
  _D3DKMT_SUBMITCOMMAND v127; // [rsp+340h] [rbp-1B8h] BYREF

  v102 = a2;
  v4 = a1;
  v106 = a2;
  v85 = -1;
  v86 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v87 = 1;
    v85 = 2102;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2102);
  }
  else
  {
    v87 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v85, 2102);
  v84 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  memset(&v127, 0, sizeof(v127));
  v5 = &v127;
  if ( v84 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_SUBMITCOMMAND *)MmUserProbeAddress;
    v6 = &v127;
    v7 = 3LL;
    do
    {
      *(_OWORD *)&v6->Commands = *(_OWORD *)&v4->Commands;
      *(_OWORD *)&v6->PresentHistoryToken = *(_OWORD *)&v4->PresentHistoryToken;
      *(_OWORD *)&v6->BroadcastContext[1] = *(_OWORD *)&v4->BroadcastContext[1];
      *(_OWORD *)&v6->BroadcastContext[5] = *(_OWORD *)&v4->BroadcastContext[5];
      *(_OWORD *)&v6->BroadcastContext[9] = *(_OWORD *)&v4->BroadcastContext[9];
      *(_OWORD *)&v6->BroadcastContext[13] = *(_OWORD *)&v4->BroadcastContext[13];
      *(_OWORD *)&v6->BroadcastContext[17] = *(_OWORD *)&v4->BroadcastContext[17];
      v6 = (_D3DKMT_SUBMITCOMMAND *)((char *)v6 + 128);
      *(_OWORD *)&v6[-1].NumHistoryBuffers = *(_OWORD *)&v4->BroadcastContext[21];
      v4 = (const struct _D3DKMT_SUBMITCOMMAND *)((char *)v4 + 128);
      --v7;
    }
    while ( v7 );
  }
  else
  {
    v5 = (_D3DKMT_SUBMITCOMMAND *)v4;
  }
  Flags = v5->Flags;
  if ( (*(_BYTE *)&Flags & 4) != 0 && !g_OSTestSigningEnabled )
  {
    WdLogSingleEntry1(2LL, 1649LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"NoKmdAccess can be used only with testsigning",
      1649LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_80;
  }
  if ( (*((_DWORD *)a2 + 106) & 0x100) != 0 && (*(_BYTE *)&Flags & 2) != 0 )
  {
    WdLogSingleEntry1(2LL, 1657LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PresentRedirected is invalid from virtual machine",
      1657LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_80;
  }
  v93 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v91, v5->BroadcastContext[0], a2, &v93, 0, 1);
  v9 = v93;
  if ( !v93 )
  {
    WdLogSingleEntry3(2LL, a2, v5->BroadcastContext[0], -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hContext 0x%I64x returning 0x%I64x",
      (__int64)a2,
      v5->BroadcastContext[0],
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_79;
  }
  v10 = *((_DWORD *)v93 + 101);
  if ( (v10 & 0x10) != 0 )
  {
    WdLogSingleEntry1(2LL, v93);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGCONTEXT 0x%p is hardware scheduled and should not be passed to SubmitCommandCb.",
      (__int64)v9,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_79;
  }
  if ( (v10 & 8) != 0 )
  {
    WdLogSingleEntry1(3LL, 1681LL);
    goto LABEL_79;
  }
  BroadcastContextCount = v5->BroadcastContextCount;
  if ( (unsigned int)(BroadcastContextCount - 1) > 0x3F )
  {
    WdLogSingleEntry4(2LL, v93, v5->BroadcastContextCount, 64LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x fails as specified BroadcastContextCount 0x%I64x exceeds limit 0x%I64x or is zero. returning 0x%I64x",
      (__int64)v9,
      v5->BroadcastContextCount,
      64LL,
      -1073741811LL,
      0LL);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v91);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v85);
    if ( !v87 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_238;
  }
  if ( v5->NumPrimaries > 0x10 )
  {
    WdLogSingleEntry4(2LL, v93, v5->NumPrimaries, 16LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x fails as specified NumWrittenPrimaries 0x%I64x exceeds limit 0x%I64x returning 0x%I64x",
      (__int64)v9,
      v5->NumPrimaries,
      16LL,
      -1073741811LL,
      0LL);
    goto LABEL_79;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v93 + 2) + 16LL) + 16LL);
  if ( *(_BYTE *)(v12 + 209) )
  {
    v46 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommand((DXG_GUEST_VIRTUALGPU_VMBUS *)(v12 + 4472), a2, v5);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v91);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v85);
    if ( v87 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v47, v85);
    return v46;
  }
  Pool2 = 0LL;
  P = 0LL;
  v90 = 0;
  if ( (unsigned int)BroadcastContextCount <= 4 )
  {
    P = v89;
    memset(v89, 0, 8 * BroadcastContextCount);
    Pool2 = P;
LABEL_18:
    v90 = BroadcastContextCount;
    v14 = BroadcastContextCount;
    goto LABEL_19;
  }
  v14 = 0;
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)BroadcastContextCount >= 8 )
  {
    Pool2 = (PVOID)ExAllocatePool2(256LL, 8 * BroadcastContextCount, 1265072196LL);
    P = Pool2;
    goto LABEL_18;
  }
LABEL_19:
  if ( !Pool2 )
  {
    WdLogSingleEntry1(6LL, 1718LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory - failed to allocate the broadcast context array",
      1718LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v89 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v90 = 0;
    goto LABEL_99;
  }
  v96 = (DXGCONTEXT **)Pool2;
  v97 = v14;
  _m_prefetchw((char *)v9 + 32);
  v15 = *((_QWORD *)v9 + 4);
  if ( !v15 )
  {
LABEL_232:
    v83 = v93;
    WdLogSingleEntry1(2LL, v93);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGCONTEXT 0x%p failed to acquire reference.",
      (__int64)v83,
      0LL,
      0LL,
      0LL,
      0LL);
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v96);
    if ( P != v89 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v90 = 0;
    goto LABEL_79;
  }
  while ( 1 )
  {
    v16 = v15;
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 4, v15 + 1, v15);
    if ( v16 == v15 )
      break;
    if ( !v15 )
      goto LABEL_232;
  }
  v17 = v93;
  *(_QWORD *)P = v93;
  v18 = *((_QWORD *)v17 + 2);
  v94 = v18;
  v19 = *(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL);
  if ( *(int *)(v19 + 2552) >= 0x2000 || *(_BYTE *)(v19 + 2852) )
  {
    v20 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 340);
    v95 = v20;
  }
  else
  {
    v20 = 0;
    v95 = 0;
  }
  v21 = *(struct _KEVENT **)(v18 + 16);
  if ( *(_DWORD *)(v18 + 464) == 2 )
  {
    if ( KeReadStateEvent(v21 + 5) )
      goto LABEL_28;
    v50 = v21 + 5;
LABEL_107:
    KeWaitForSingleObject(v50, Executive, 0, 0, 0LL);
    goto LABEL_28;
  }
  if ( !KeReadStateEvent(v21 + 4) )
  {
    v50 = v21 + 4;
    goto LABEL_107;
  }
LABEL_28:
  KeEnterCriticalRegion();
  if ( v20 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v18 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 160));
      v22 = 1;
      v23 = 1;
    }
    else
    {
      KeLeaveCriticalRegion();
      v23 = 0;
      v22 = 1;
    }
    if ( !v23 )
    {
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v18 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v18 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v18 + 16) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v18 + 136), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v18 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v51, (const EVENT_DESCRIPTOR *)"g", v52, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v18 + 136), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v18 + 16) + 16LL));
    }
    v22 = 1;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v111, a2);
  v24 = v102;
  while ( v22 < v5->BroadcastContextCount )
  {
    v53 = (v5->BroadcastContext[v22] >> 6) & 0xFFFFFF;
    if ( v53 < *((_DWORD *)v24 + 74) )
    {
      v54 = *((_QWORD *)v24 + 35) + 16LL * v53;
      if ( ((v5->BroadcastContext[v22] >> 25) & 0x60) == (*(_BYTE *)(v54 + 8) & 0x60)
        && (*(_DWORD *)(v54 + 8) & 0x2000) == 0 )
      {
        v55 = *(_DWORD *)(v54 + 8) & 0x1F;
        if ( v55 )
        {
          if ( v55 == 7 )
          {
            v56 = *(_QWORD *)v54;
            goto LABEL_121;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          v24 = v102;
        }
      }
    }
    v56 = 0LL;
LABEL_121:
    if ( !v56 || (v57 = *(_DWORD *)(v56 + 404), (v57 & 8) != 0) || *(_QWORD *)(v56 + 16) != *((_QWORD *)v17 + 2) )
    {
      v61 = v93;
      WdLogSingleEntry4(2LL, v93, v56, v22, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)v61,
        v56,
        v22,
        -1073741811LL,
        0LL);
LABEL_134:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v111);
LABEL_136:
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v94);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v96);
      if ( P != v89 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v90 = 0;
LABEL_79:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v91);
LABEL_80:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v85);
      if ( !v87 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
LABEL_238:
      McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v85);
      return 3221225485LL;
    }
    if ( (v57 & 0x10) != 0 )
    {
      WdLogSingleEntry1(2LL, v56);
      v60 = L"DXGCONTEXT 0x%p is hardware scheduled and should not be passed to SubmitCommandCb.";
      goto LABEL_132;
    }
    _m_prefetchw((const void *)(v56 + 32));
    v58 = *(_QWORD *)(v56 + 32);
    if ( !v58 )
    {
LABEL_128:
      WdLogSingleEntry1(2LL, v56);
      v60 = L"DXGCONTEXT 0x%p failed to acquire reference.";
LABEL_132:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v60, v56, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_134;
    }
    while ( 1 )
    {
      v59 = v58;
      v58 = _InterlockedCompareExchange64((volatile signed __int64 *)(v56 + 32), v58 + 1, v58);
      if ( v59 == v58 )
        break;
      if ( !v58 )
        goto LABEL_128;
    }
    *((_QWORD *)P + v22++) = v56;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v111);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v109,
    P,
    v90,
    v25,
    1);
  if ( v110 )
  {
    if ( v109[0] )
    {
      WdLogSingleEntry1(3LL, 1806LL);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v109);
      goto LABEL_136;
    }
    WdLogSingleEntry1(3LL, 1801LL);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v109);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v94);
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v96);
    if ( P != v89 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v90 = 0;
LABEL_99:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v91);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v85);
    if ( v87 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      goto LABEL_213;
    return 3221225495LL;
  }
  v26 = *((_QWORD *)v93 + 2);
  v99 = *(struct DXGADAPTER **)(*(_QWORD *)(v26 + 16) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v99 + 3);
  v98 = -1LL;
  v27 = v99;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v27 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)v27 + 38);
  v100 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v112, v26, 0, v28, 0);
  if ( v120 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v117, 0LL);
    if ( *(_DWORD *)(v118 + 200) != 1 )
    {
LABEL_151:
      COREACCESS::Release((COREACCESS *)v117);
      goto LABEL_152;
    }
  }
  if ( v115 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v113, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v114 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v114 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v29, (const EVENT_DESCRIPTOR *)"g", v30, 72);
      KeWaitForSingleObject((char *)v114 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v114, 0LL);
  }
  v116 = 0LL;
  v115 = 1;
  if ( *(_DWORD *)(v119 + 608) == 1 )
  {
    v31 = v93;
    if ( !*((_BYTE *)v93 + 438) )
    {
      v64 = v102;
      WdLogSingleEntry4(2LL, v102, v5->BroadcastContext[0], -1073741811LL, 1828LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x The context does not support virtual addressing. hContext 0x%I64x returning 0x%I64x",
        (__int64)v64,
        v5->BroadcastContext[0],
        -1073741811LL,
        1828LL,
        0LL);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
      if ( v100 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v98);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v109);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v94);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v96);
      if ( P != v89 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v90 = 0;
      goto LABEL_79;
    }
    v121 = 0LL;
    v123 = 0;
    v124 = 0LL;
    v126 = 0;
    v32 = 0LL;
    if ( !v5->NumHistoryBuffers )
    {
LABEL_45:
      if ( v5->CommandLength )
      {
        v33 = DXGCONTEXT::SubmitCommand(
                (PLOOKASIDE_LIST_EX *)v31,
                v5,
                (struct COREDEVICEACCESS *)v112,
                (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v98,
                (struct DXGCONTEXT **)P,
                v32,
                v5->NumHistoryBuffers,
                v84);
        if ( v33 >= 0 )
          goto LABEL_47;
      }
      else
      {
        v33 = 0;
LABEL_47:
        v34 = *(_QWORD *)(*((_QWORD *)v31 + 2) + 1944LL);
        PresentHistoryToken = 0LL;
        if ( ((*(_DWORD *)&v5->Flags >> 1) & 1) != 0 )
        {
          PresentHistoryToken = v5->PresentHistoryToken;
        }
        else if ( v34 && *(_QWORD *)v34 && *(_DWORD *)(v34 + 12) != *((_DWORD *)v31 + 6) )
        {
          PresentHistoryToken = *(_QWORD *)v34;
        }
        if ( PresentHistoryToken )
        {
          v80 = v5->BroadcastContextCount;
          v81 = &v5->BroadcastContext[1];
          if ( v80 <= 1 )
            v81 = 0LL;
          v33 = DXGCONTEXT::HandleVistaBltStub(
                  v31,
                  PresentHistoryToken,
                  (*(_DWORD *)&v5->Flags >> 1) & 1,
                  (struct COREDEVICEACCESS *)v112,
                  (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v98,
                  v80 - 1,
                  v81,
                  (struct DXGCONTEXT **)P);
        }
      }
      if ( v124 != &v125 )
        operator delete(v124);
      if ( v121 == (DXGALLOCATIONREFERENCE *)&v122 )
      {
        for ( i = 0; i < v123; ++i )
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)((char *)v121 + 8 * i));
      }
      else if ( v121 )
      {
        DXGALLOCATIONREFERENCE::`vector deleting destructor'(v121);
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
      if ( v100 )
      {
        v100 = 0;
        v36 = (char *)v99 + 136;
        _InterlockedDecrement((volatile signed __int32 *)v99 + 38);
        ExReleasePushLockSharedEx(v36, 0LL);
        KeLeaveCriticalRegion();
        v37 = (DXGGLOBAL **)v99;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v99 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(v37[2], (struct DXGADAPTER *)v37);
      }
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v109);
      if ( v95 )
      {
        v38 = v94 + 144;
        _InterlockedDecrement((volatile signed __int32 *)(v94 + 160));
        ExReleasePushLockSharedEx(v38, 0LL);
      }
      else
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v94 + 136));
      }
      KeLeaveCriticalRegion();
      v39 = v96;
      if ( v96 && v97 )
      {
        v40 = v97;
        do
        {
          if ( *v39 )
            DXGCONTEXT::ReleaseReference(*v39);
          ++v39;
          --v40;
        }
        while ( v40 );
      }
      if ( P != v89 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v90 = 0;
      if ( v91 && !v92 )
        DXGCONTEXT::ReleaseReference(v91);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v85);
      if ( v87 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      {
        McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v85);
        return (unsigned int)v33;
      }
      return (unsigned int)v33;
    }
    v65 = PagedPoolArray<DXGALLOCATIONREFERENCE,16>::AllocateElements(&v121);
    v105 = v65;
    v66 = PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::AllocateElements(&v124, v5->NumHistoryBuffers);
    v32 = (struct _VIDMM_MULTI_ALLOC **)v66;
    if ( v65 && v66 )
    {
      v67 = 0;
      v103 = 0;
      while ( v67 < v5->NumHistoryBuffers )
      {
        v101 = 0;
        v107 = v67;
        v68 = &v5->HistoryBufferArray[v67];
        if ( v84 )
        {
          if ( (unsigned __int64)v68 >= MmUserProbeAddress )
            v68 = (unsigned int *)MmUserProbeAddress;
          v69 = *v68;
        }
        else
        {
          v69 = *v68;
        }
        v101 = v69;
        v70 = v69;
        v104 = (__int64 *)(v105 + 8LL * v67);
        AllocationSafe = DXGPROCESS::GetAllocationSafe((__int64)v102, (DXGALLOCATIONREFERENCE *)v108, v69);
        DXGALLOCATIONREFERENCE::MoveAssign(v104, AllocationSafe);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v108);
        v72 = *v104;
        if ( !*v104 )
        {
          WdLogSingleEntry1(2LL, v70);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid history buffer handle provided to SubmitCommand. D3DKMT_HANDLE=0x%8x",
            v70,
            0LL,
            0LL,
            0LL,
            0LL);
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v124);
          PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>((__int64)&v121);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
          if ( v100 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v98);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v109);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v94);
          ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v96);
          if ( P != v89 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v90 = 0;
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v91);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v85);
          if ( v87 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v73, &EventProfilerExit, v74, v85);
          return 3221225485LL;
        }
        if ( *(_QWORD *)(v72 + 8) != *((_QWORD *)v31 + 2) )
        {
          _mm_lfence();
          v75 = v93;
          WdLogSingleEntry3(
            2LL,
            *(_QWORD *)(v105 + 8 * v107),
            *(_QWORD *)(*(_QWORD *)(v105 + 8 * v107) + 8LL),
            *((_QWORD *)v93 + 2));
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"History buffer 0x%p device 0x%p does not match context device 0x%p.",
            *v104,
            *(_QWORD *)(*v104 + 8),
            *((_QWORD *)v75 + 2),
            0LL,
            0LL);
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v124);
          PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>((__int64)&v121);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
          if ( v100 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v98);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v109);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v94);
          ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v96);
          if ( P != v89 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v90 = 0;
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v91);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v85);
          if ( v87 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v76, &EventProfilerExit, v77, v85);
          return 3221225485LL;
        }
        v32[v67++] = *(struct _VIDMM_MULTI_ALLOC **)(v72 + 24);
        v103 = v67;
      }
      v33 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_MULTI_ALLOC **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 760LL)
                                                                                        + 8LL)
                                                                            + 1064LL))(
              *(_QWORD *)(*(_QWORD *)(v26 + 16) + 768LL),
              v32);
      if ( v33 >= 0 )
        goto LABEL_45;
      WdLogSingleEntry1(2LL, 1935LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid history buffer passed to SubmitCommand.",
        1935LL,
        0LL,
        0LL,
        0LL,
        0LL);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v124);
      PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>((__int64)&v121);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
      if ( v100 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v98);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v109);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v94);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v96);
      if ( P != v89 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v90 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v91);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v85);
      if ( v87 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v78, &EventProfilerExit, v79, v85);
      return (unsigned int)v33;
    }
    WdLogSingleEntry1(6LL, 1863LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to created paged pool array for history buffer array",
      1863LL,
      0LL,
      0LL,
      0LL,
      0LL);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v124);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>((__int64)&v121);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
    if ( v100 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v98);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v109);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v94);
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v96);
    if ( P != v89 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v90 = 0;
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v91);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v85);
    if ( v87 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
LABEL_213:
      McTemplateK0q_EtwWriteTransfer(v48, &EventProfilerExit, v49, v85);
    return 3221225495LL;
  }
  COREACCESS::Release((COREACCESS *)v113);
  if ( v120 )
    goto LABEL_151;
LABEL_152:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
  if ( v100 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v98);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v109);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v94);
  ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v96);
  if ( P != v89 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v90 = 0;
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v91);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v85);
  if ( v87 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v62, &EventProfilerExit, v63, v85);
  return 3221226166LL;
}
