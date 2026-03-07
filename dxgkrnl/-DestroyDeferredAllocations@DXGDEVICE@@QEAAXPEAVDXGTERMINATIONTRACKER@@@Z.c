void __fastcall DXGDEVICE::DestroyDeferredAllocations(DXGDEVICE *this, struct DXGALLOCATION **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGALLOCATION *v8; // rax
  void **v9; // rsi
  struct DXGALLOCATION *i; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v18; // r15
  struct DXGPROCESS *v19; // rsi
  char *v20; // rbx
  int v21; // r15d
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGTHREAD *v24; // rsi
  __int64 v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  struct DXGALLOCATION *v33; // rcx
  void *v34; // rdx
  char v35; // r15
  const HANDLE *v36; // r12
  struct DXGALLOCATION *v37; // rbx
  struct DXGALLOCATION *v38; // r13
  __int64 v39; // rsi
  void *v40; // rcx
  void *v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned int v48; // r8d
  __int64 j; // rax
  volatile signed __int32 *v50; // rcx
  int v52; // r9d
  int v53; // r9d
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  KIRQL v57; // al
  int v58; // [rsp+48h] [rbp-140h]
  int v59; // [rsp+50h] [rbp-138h]
  int v60; // [rsp+58h] [rbp-130h]
  int v61; // [rsp+68h] [rbp-120h]
  int v62; // [rsp+70h] [rbp-118h]
  int v63; // [rsp+78h] [rbp-110h]
  int v64; // [rsp+80h] [rbp-108h]
  int v65; // [rsp+90h] [rbp-F8h]
  int v66; // [rsp+E8h] [rbp-A0h]
  int v67; // [rsp+F0h] [rbp-98h]
  KIRQL CurrentIrql; // [rsp+108h] [rbp-80h]
  int v69; // [rsp+10Ch] [rbp-7Ch]
  void **v70; // [rsp+110h] [rbp-78h]
  __int64 v71; // [rsp+118h] [rbp-70h]
  void *v72; // [rsp+118h] [rbp-70h]
  __int128 v73; // [rsp+120h] [rbp-68h] BYREF
  struct DXGTHREAD *DxgThread; // [rsp+130h] [rbp-58h] BYREF
  int v75; // [rsp+138h] [rbp-50h] BYREF
  __int64 v76; // [rsp+140h] [rbp-48h]
  char v77; // [rsp+148h] [rbp-40h]
  struct _DXGKARG_DESTROYALLOCATION v78; // [rsp+150h] [rbp-38h] BYREF
  _BYTE v79[16]; // [rsp+170h] [rbp-18h] BYREF
  char v80[8]; // [rsp+180h] [rbp-8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+188h] [rbp+0h] BYREF
  _BYTE v82[128]; // [rsp+1B8h] [rbp+30h] BYREF

  memset(v82, 0, sizeof(v82));
  v8 = *a2;
  if ( !*a2 || (v9 = (void **)*((_QWORD *)v8 + 8), (v70 = v9) == 0LL) )
  {
    v9 = (void **)v82;
    v70 = (void **)v82;
  }
  v73 = 0LL;
  if ( v8 )
  {
    v45 = WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
    *(_QWORD *)(v45 + 24) = *a2;
    v4 = *((_QWORD *)*a2 + 1);
    v5 = *(_QWORD *)(v4 + 40);
    *(_QWORD *)(v45 + 32) = v5;
  }
  for ( i = a2[1]; i; i = (struct DXGALLOCATION *)*((_QWORD *)i + 8) )
  {
    v11 = WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
    *(_QWORD *)(v11 + 24) = i;
    *(_QWORD *)(v11 + 32) = *(_QWORD *)(*((_QWORD *)i + 1) + 40LL);
    v12 = *((_QWORD *)i + 3);
    if ( v12 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                          + 8LL)
                                                              + 152LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
        v12,
        0LL,
        *((unsigned int *)a2 + 12));
      *((_QWORD *)i + 3) = 0LL;
    }
    else
    {
      DXGDEVICE::TraceCloseParavirtualizedAllocation(this, i);
    }
    v5 = *((_QWORD *)i + 4);
    if ( v5 )
    {
      v9[(unsigned int)v73] = (void *)v5;
      LODWORD(v73) = v73 + 1;
      *((_QWORD *)i + 4) = 0LL;
    }
  }
  if ( (_DWORD)v73 )
  {
    v13 = *((_QWORD *)this + 77);
    v14 = *((_QWORD *)this + 2);
    v71 = v13;
    *((_QWORD *)&v73 + 1) = v9;
    v75 = -1;
    v76 = 0LL;
    if ( (qword_1C013A870 & 2) != 0 )
    {
      v77 = 1;
      v75 = 5029;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 5029);
    }
    else
    {
      v77 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v75, 5029);
    CurrentProcess = PsGetCurrentProcess(v15);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v18 = (struct DXGPROCESS *)ProcessDxgProcess;
    if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0 )
    {
      Current = DXGTHREAD::GetCurrent();
      if ( Current )
      {
        v19 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
        if ( v19 )
          goto LABEL_17;
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
        v19 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
        if ( v19 )
          goto LABEL_17;
        WdLogSingleEntry1(2LL, 2923LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v19 = v18;
    if ( !v18 )
    {
      v20 = 0LL;
      v21 = 0;
LABEL_23:
      DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v14 + 16), 1);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 16) + 4612LL));
      v24 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql < 2u
        && (DxgThread = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0)
        && ((v24 = DxgThread) != 0LL || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v24 = DxgThread) != 0LL)) )
      {
        v69 = *((_DWORD *)v24 + 12);
      }
      else
      {
        v69 = 0;
      }
      DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
        (DXGVALIDATIONPROCESSATTACH *)v80,
        *(struct DXGADAPTER **)(v14 + 16));
      v25 = (*(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(v14 + 16) + 720LL))(v13, &v73);
      if ( v80[0] )
        KeUnstackDetachProcess(&ApcState);
      if ( CurrentIrql != KeGetCurrentIrql() )
      {
        v57 = KeGetCurrentIrql();
        WdLogSingleEntry5(0LL, 275LL, 16LL, v14, CurrentIrql, v57);
      }
      if ( v24 )
      {
        v27 = *((int *)v24 + 12);
        if ( (_DWORD)v27 != v69 )
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v24 + 12), v69, 0LL);
      }
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 16) + 4612LL));
      v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
      v30[3] = v25;
      v30[4] = v71;
      v30[5] = (unsigned int)v73;
      v30[6] = **((_QWORD **)&v73 + 1);
      if ( (_DWORD)v25 )
      {
        WdLogSingleEntry1(2LL, v25);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
          v25,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v14 + 16));
      if ( v21 == 2 )
      {
        *((_QWORD *)v20 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v20, 0LL);
        KeLeaveCriticalRegion();
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v75);
      if ( v77 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v75);
      goto LABEL_39;
    }
LABEL_17:
    v20 = (char *)v19 + 152;
    v21 = 0;
    if ( v19 != (struct DXGPROCESS *)-152LL && *((struct _KTHREAD **)v19 + 20) == KeGetCurrentThread() )
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
    if ( v19 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v19 + 152, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v52 = *((_DWORD *)v19 + 44);
          if ( v52 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v22, (const EVENT_DESCRIPTOR *)"g", v23, v52);
        }
        ExAcquirePushLockExclusiveEx((char *)v19 + 152, 0LL);
      }
      v21 = 2;
      *((_QWORD *)v19 + 20) = KeGetCurrentThread();
    }
    goto LABEL_23;
  }
LABEL_39:
  v33 = *a2;
  v34 = 0LL;
  v72 = 0LL;
  v35 = 1;
  if ( !*a2 )
  {
LABEL_40:
    v36 = v70;
    goto LABEL_41;
  }
  if ( (*((_DWORD *)v33 + 1) & 1) == 0 )
  {
    v34 = (void *)*((_QWORD *)v33 + 7);
    v72 = v34;
    goto LABEL_40;
  }
  v46 = *((_QWORD *)v33 + 7);
  if ( v46 )
  {
    v47 = *(_QWORD *)(v46 + 152);
    if ( v47 )
    {
      if ( *(DXGDEVICE **)(v47 + 80) == this && (*(_DWORD *)(v47 + 72))-- == 1 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX(
          (DXGAUTOMUTEX *)v79,
          (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)*a2 + 7) + 152LL) + 8LL),
          0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v79);
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*a2 + 7) + 152LL) + 80LL) = 0LL;
        if ( v79[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v79);
      }
    }
    v48 = 0;
    for ( j = *((_QWORD *)*a2 + 3); j; ++v48 )
      j = *(_QWORD *)(j + 64);
    v50 = (volatile signed __int32 *)*((_QWORD *)*a2 + 7);
    v36 = v70;
    if ( _InterlockedExchangeAdd(v50 + 17, 0xFFFFFFFF) == 1 )
      DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v50, v70, v48);
    v34 = 0LL;
    *((_QWORD *)*a2 + 7) = 0LL;
  }
  else
  {
    v36 = v70;
  }
  v35 = 0;
LABEL_41:
  v37 = a2[1];
  memset(&v78, 0, sizeof(v78));
  if ( !v37 )
    goto LABEL_58;
  do
  {
    v38 = (struct DXGALLOCATION *)*((_QWORD *)v37 + 8);
    if ( (*((_DWORD *)v37 + 18) & 0x800) != 0 )
    {
      WdLogSingleEntry1(1LL, 1967LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCurrentAlloc->m_Pinned == FALSE",
        1967LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*((_DWORD *)v37 + 18) & 0x7FE) != 0 )
    {
      WdLogSingleEntry1(1LL, 1968LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCurrentAlloc->m_DirectFlipIndex == 0",
        1968LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v39 = *((_QWORD *)v37 + 6);
    if ( v39 )
    {
      if ( v35 )
      {
        if ( (*((_BYTE *)this + 1901) & 1) != 0 )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
            McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
              *(_QWORD *)(*((_QWORD *)this + 5) + 64LL),
              &EventDestroyAdapterAllocation,
              *(_QWORD *)(v39 + 112),
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 64LL) + 80LL),
              (char)this,
              *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
              0,
              *(_QWORD *)(v39 + 112),
              v58,
              v59,
              v60,
              0,
              v61,
              v62,
              v63,
              v64,
              v39,
              v65,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              v66,
              v67,
              (*(_DWORD *)(v39 + 4) >> 21) & 0x3F,
              0);
        }
        else if ( *(_QWORD *)(v39 + 8) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 120LL))(
            *((_QWORD *)this + 99),
            0LL);
          *(_QWORD *)(v39 + 8) = 0LL;
        }
        v40 = *(void **)(*((_QWORD *)v37 + 6) + 16LL);
        if ( v40 )
        {
          v36[v78.NumAllocations++] = v40;
          *(_QWORD *)(*((_QWORD *)v37 + 6) + 16LL) = 0LL;
        }
        goto LABEL_53;
      }
    }
    else if ( v35 )
    {
      goto LABEL_53;
    }
    if ( !*a2 )
    {
      WdLogSingleEntry1(1LL, 1990LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pTracker->m_pResource", 1990LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*((_DWORD *)*a2 + 1) & 1) == 0 )
    {
      WdLogSingleEntry1(1LL, 1991LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pTracker->m_pResource->m_SharedResource",
        1991LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
LABEL_53:
    if ( !*a2 || (*((_DWORD *)*a2 + 1) & 1) == 0 )
    {
      v41 = (void *)*((_QWORD *)v37 + 6);
      if ( v41 )
      {
        DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(*((DXGADAPTERALLOCATION **)v37 + 6));
        operator delete(v41);
      }
    }
    DXGALLOCATION::~DXGALLOCATION(v37);
    ExFreePoolWithTag(v37, 0);
    v37 = v38;
  }
  while ( v38 );
  v34 = v72;
LABEL_58:
  if ( v35 )
  {
    v78.Flags.Value = *a2 != 0LL;
    v78.hResource = v34;
    if ( v78.NumAllocations )
    {
      v78.pAllocationList = v36;
      goto LABEL_61;
    }
    v78.pAllocationList = 0LL;
    if ( v34 )
LABEL_61:
      ADAPTER_RENDER::DdiDestroyAllocation(*((ADAPTER_RENDER **)this + 2), &v78, 0);
  }
  if ( this != (DXGDEVICE *)-176LL && *((struct _KTHREAD **)this + 23) == KeGetCurrentThread() )
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
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 176, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v53 = *((_DWORD *)this + 50);
      if ( v53 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v42, (const EVENT_DESCRIPTOR *)"g", v43, v53);
    }
    ExAcquirePushLockExclusiveEx((char *)this + 176, 0LL);
  }
  *((_QWORD *)this + 23) = KeGetCurrentThread();
  if ( --*((_DWORD *)this + 476) < 0 )
  {
    WdLogSingleEntry1(1LL, 1262LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_OutstandingDeferredDestroys >= 0",
      1262LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_DWORD *)this + 476) )
    KeSetEvent(*((PRKEVENT *)this + 239), 0, 0);
  *((_QWORD *)this + 23) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 176, 0LL);
  KeLeaveCriticalRegion();
}
