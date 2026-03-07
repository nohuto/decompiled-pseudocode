void __fastcall DXGDEVICE::TerminateAllocations(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        int a3,
        struct DXGALLOCATION *a4,
        struct COREDEVICEACCESS *a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  struct DXGALLOCATION *v7; // r15
  BOOL v8; // esi
  struct DXGRESOURCE *v10; // rax
  BOOL v12; // ebp
  __int64 v13; // r13
  struct DXGALLOCATION *v14; // rdi
  int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r15
  struct DXGRESOURCE *v19; // rcx
  __int64 v20; // rsi
  struct DXGTERMINATIONTRACKER *v21; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v23; // r15
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v26; // rbp
  struct DXGPROCESS *v27; // rax
  void *v28; // rcx
  __int64 v29; // rcx
  struct DXGALLOCATION *v30; // r9
  __int64 v31; // rdi
  __int64 v32; // rsi
  unsigned int v33; // edx
  unsigned int v34; // edx
  __int64 v35; // rax
  __int64 v36; // rax
  struct DXGPROCESS *v37; // rbp
  struct DXGPROCESS *v38; // r15
  __int64 v39; // rcx
  __int64 v40; // r8
  char v41; // bp
  __int64 v42; // rcx
  struct _KTHREAD **v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rbp
  __int64 v47; // rcx
  __int64 v48; // r8
  struct DXGPROCESS *v49; // rbp
  char *v50; // rsi
  __int64 v51; // rcx
  __int64 v52; // r8
  char v53; // bp
  __int64 v54; // rcx
  struct _KTHREAD **v55; // rcx
  int v56; // r9d
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *v58; // rdi
  KSPIN_LOCK *Global; // rax
  int v60; // r9d
  struct DXGTHREAD *v61; // rax
  struct _ETHREAD *v62; // rdi
  KSPIN_LOCK *v63; // rax
  int v64; // r9d
  struct DXGTERMINATIONTRACKER *v65; // [rsp+50h] [rbp-58h]
  __int64 v66; // [rsp+B0h] [rbp+8h]
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v69; // [rsp+D8h] [rbp+30h]
  char v70; // [rsp+D8h] [rbp+30h]

  v7 = a4;
  v66 = 0LL;
  v8 = (*(_BYTE *)&a6.0 & 2) == 0;
  v69.0 = 0;
  v10 = a2;
  v12 = *((_DWORD *)this + 116) == 2;
  v13 = 0LL;
  v14 = a4;
  if ( a4 )
  {
    while ( 1 )
    {
      v15 = *(_DWORD *)(*((_QWORD *)v14 + 6) + 4LL);
      if ( (v15 & 0x2B) != 0 )
        break;
      if ( (*((_DWORD *)v14 + 18) & 0x800) != 0 )
        break;
      if ( (v15 & 0x20000800) != 0 )
        break;
      v16 = *((_QWORD *)this + 2);
      if ( *(_BYTE *)(*(_QWORD *)(v16 + 16) + 209LL) )
        break;
      v17 = *((_QWORD *)v14 + 3);
      if ( !v17 )
        break;
      v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v16 + 760) + 8LL) + 624LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 1) + 16LL) + 768LL),
              v17,
              0LL);
      if ( !v18 )
      {
        WdLogSingleEntry1(1LL, 982LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IndividualAllocationSize > 0", 982LL, 0LL, 0LL, 0LL, 0LL);
      }
      v13 += v18;
      v66 = v13;
      *(_DWORD *)&v69.0 += (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                  + 760LL)
                                                                                      + 8LL)
                                                                          + 640LL))(
                             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 1) + 16LL) + 768LL),
                             *((_QWORD *)v14 + 3));
      if ( v12
        && (*(_BYTE *)&a6.0 & 1) == 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                         + 8LL)
                                                             + 600LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
             *((_QWORD *)v14 + 3)) )
      {
        v12 = 0;
      }
      v14 = (struct DXGALLOCATION *)*((_QWORD *)v14 + 8);
      if ( !v14 )
        goto LABEL_11;
    }
    v8 = 0;
LABEL_11:
    v10 = a2;
    v7 = a4;
  }
  if ( a3 )
    DXGDEVICE::RemoveResourceFromDeviceList((struct _KTHREAD **)this, v10);
  v19 = a2;
  if ( !v8 || v12 || (!a3 || !*((_QWORD *)a2 + 3)) && a2 )
    goto LABEL_78;
  v20 = *((_QWORD *)this + 2);
  v65 = (struct DXGTERMINATIONTRACKER *)ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v20 + 1536));
  v21 = v65;
  if ( !v65 )
  {
    WdLogSingleEntry1(6LL, 4770LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for deferred allocation tracker, destroying allocation synchronously.",
      4770LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_124;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v20 + 1392, 0LL);
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(v20 + 1400) = CurrentThread;
  v23 = *(_QWORD *)(v20 + 1376) + v66;
  CurrentProcess = PsGetCurrentProcess(CurrentThread);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v26 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
    goto LABEL_21;
  Current = DXGTHREAD::GetCurrent();
  if ( !Current )
  {
    v58 = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v27 = DXGGLOBAL::SearchDxgThreadList(Global, v58);
    if ( v27 )
    {
      v21 = v65;
      goto LABEL_22;
    }
    WdLogSingleEntry1(2LL, 2923LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
    v21 = v65;
LABEL_21:
    v27 = v26;
    goto LABEL_22;
  }
  v27 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
  if ( !v27 )
    goto LABEL_21;
LABEL_22:
  if ( (*((_DWORD *)v27 + 106) & 4) == 0 && v23 > *((_QWORD *)DXGGLOBAL::GetGlobal() + 110)
    || v23 < *(_QWORD *)(v20 + 1376) )
  {
    *(_QWORD *)(v20 + 1400) = 0LL;
    ExReleasePushLockExclusiveEx(v20 + 1392, 0LL);
    KeLeaveCriticalRegion();
    WdLogSingleEntry1(4LL, 4761LL);
    ADAPTER_RENDER::DeleteTerminationTracker((ADAPTER_RENDER *)v20, v21);
    v7 = a4;
LABEL_124:
    v19 = a2;
LABEL_78:
    if ( a3 )
      DXGDEVICE::DestroyResource(this, v19, a5, a6);
    else
      DXGDEVICE::DestroyAllocations(this, v19, 0, v7, a5, a6);
    return;
  }
  *(_QWORD *)(v20 + 1376) = v23;
  *(_QWORD *)(v20 + 1400) = 0LL;
  ExReleasePushLockExclusiveEx(v20 + 1392, 0LL);
  KeLeaveCriticalRegion();
  *(_QWORD *)v21 = a2;
  *((_QWORD *)v21 + 1) = a4;
  v28 = *(void **)(*((_QWORD *)this + 5) + 56LL);
  *((_QWORD *)v21 + 5) = v66;
  *((struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)v21 + 8) = v69;
  *((_QWORD *)v21 + 2) = v28;
  *((_QWORD *)v21 + 3) = this;
  *((struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)v21 + 12) = a6;
  ObfReferenceObject(v28);
  v31 = *(_QWORD *)v21;
  v70 = 0;
  if ( !v31 )
    goto LABEL_26;
  v49 = DXGPROCESS::GetCurrent();
  v50 = (char *)v49 + 248;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v49 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v60 = *((_DWORD *)v49 + 68);
      if ( v60 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v51, (const EVENT_DESCRIPTOR *)"g", v52, v60);
    }
    ExAcquirePushLockExclusiveEx(v50, 0LL);
  }
  *((_QWORD *)v49 + 32) = KeGetCurrentThread();
  HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)v49 + 280), *(_DWORD *)(v31 + 16));
  DxgkUnreferenceDxgResource((struct _EX_RUNDOWN_REF *)v31);
  *((_QWORD *)v49 + 32) = 0LL;
  ExReleasePushLockExclusiveEx(v50, 0LL);
  KeLeaveCriticalRegion();
  v53 = 0;
  if ( !a5 )
    goto LABEL_74;
  v54 = *((_QWORD *)a5 + 3);
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v54 + 184) )
  {
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v31 + 72));
    goto LABEL_26;
  }
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v54 + 168)) )
    goto LABEL_74;
  v53 = 1;
  if ( !*((_BYTE *)a5 + 32) )
    WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a5 + 8, 0LL, 0LL);
  v55 = (struct _KTHREAD **)*((_QWORD *)a5 + 3);
  *((_BYTE *)a5 + 32) = 0;
  if ( KeGetCurrentThread() != v55[23] )
    DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v55, *((char **)a5 + 5));
  *((_QWORD *)a5 + 5) = 0LL;
  if ( *((_BYTE *)a5 + 144) )
  {
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a5 + 72));
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v31 + 72));
  }
  else
  {
LABEL_74:
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v31 + 72));
    if ( !v53 )
      goto LABEL_26;
  }
  if ( *((_BYTE *)a5 + 144) )
    COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a5 + 72), 0LL);
  COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a5 + 8), 0LL);
LABEL_26:
  v32 = *((_QWORD *)v65 + 1);
  if ( v32 )
  {
    do
    {
      v33 = *(_DWORD *)(*(_QWORD *)(v32 + 48) + 4LL);
      if ( (v33 & 0x2000) != 0 && *(_QWORD *)(v32 + 24) )
        DXGDEVICE::RemoveDirectFlipAllocationFromList(this, (v33 >> 6) & 0xF, (struct DXGALLOCATION *)v32);
      v34 = *(_DWORD *)(*(_QWORD *)(v32 + 48) + 4LL);
      if ( (v34 & 0x200B) != 0 )
        DXGDEVICE::TestAndSetDisplayedPrimary(
          (struct _KTHREAD **)this,
          (v34 >> 6) & 0xF,
          (const struct DXGALLOCATION *)v32,
          v30);
      v35 = PsGetCurrentProcess(v29);
      v36 = PsGetProcessDxgProcess(v35);
      v37 = (struct DXGPROCESS *)v36;
      if ( v36 && (*(_DWORD *)(v36 + 424) & 0x80) == 0 )
        goto LABEL_32;
      v61 = DXGTHREAD::GetCurrent();
      if ( v61 )
      {
        v38 = (struct DXGPROCESS *)*((_QWORD *)v61 + 3);
        if ( !v38 )
          goto LABEL_32;
      }
      else
      {
        v62 = KeGetCurrentThread();
        v63 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
        v38 = DXGGLOBAL::SearchDxgThreadList(v63, v62);
        if ( !v38 )
        {
          WdLogSingleEntry1(2LL, 2923LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to find DXGPROCESS",
            2923LL,
            0LL,
            0LL,
            0LL,
            0LL);
LABEL_32:
          v38 = v37;
        }
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v38 + 248, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v64 = *((_DWORD *)v38 + 68);
          if ( v64 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v39, (const EVENT_DESCRIPTOR *)"g", v40, v64);
        }
        ExAcquirePushLockExclusiveEx((char *)v38 + 248, 0LL);
      }
      *((_QWORD *)v38 + 32) = KeGetCurrentThread();
      HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)v38 + 280), *(_DWORD *)(v32 + 16));
      DxgkUnreferenceDxgAllocation((struct DXGALLOCATION *)v32);
      *((_QWORD *)v38 + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v38 + 248, 0LL);
      KeLeaveCriticalRegion();
      v41 = 0;
      if ( a5 )
      {
        v42 = *((_QWORD *)a5 + 3);
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v42 + 184) )
        {
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v32 + 88));
          goto LABEL_51;
        }
        if ( !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v42 + 168)) )
        {
          v41 = 1;
          if ( !*((_BYTE *)a5 + 32) )
            WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a5 + 8, 0LL, 0LL);
          v43 = (struct _KTHREAD **)*((_QWORD *)a5 + 3);
          *((_BYTE *)a5 + 32) = 0;
          if ( KeGetCurrentThread() != v43[23] )
            DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v43, *((char **)a5 + 5));
          *((_QWORD *)a5 + 5) = 0LL;
          if ( *((_BYTE *)a5 + 144) )
          {
            COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a5 + 72));
            ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v32 + 88));
LABEL_43:
            if ( *((_BYTE *)a5 + 144) )
              COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a5 + 72), 0LL);
            if ( *((_BYTE *)a5 + 32) )
              WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a5 + 8, 0LL, 0LL);
            v29 = *((_QWORD *)a5 + 3);
            if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v29 + 184) )
            {
              if ( !KeReadStateEvent((PRKEVENT)(v29 + 48)) )
              {
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v44, (const EVENT_DESCRIPTOR *)"g", v45, 72);
                KeWaitForSingleObject((PVOID)(*((_QWORD *)a5 + 3) + 48LL), Executive, 0, 0, 0LL);
              }
              DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a5 + 3), 0LL);
            }
            *((_QWORD *)a5 + 5) = 0LL;
            *((_BYTE *)a5 + 32) = 1;
            goto LABEL_51;
          }
        }
      }
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v32 + 88));
      if ( v41 )
        goto LABEL_43;
LABEL_51:
      v46 = *(_QWORD *)(v32 + 64);
      if ( *(_QWORD *)(v32 + 24) )
      {
        if ( !v70 )
        {
          v70 = 1;
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
              v56 = *((_DWORD *)this + 50);
              if ( v56 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v47, (const EVENT_DESCRIPTOR *)"g", v48, v56);
            }
            ExAcquirePushLockExclusiveEx((char *)this + 176, 0LL);
          }
          *((_QWORD *)this + 23) = KeGetCurrentThread();
          if ( ++*((_DWORD *)this + 476) == 1 )
            KeClearEvent(*((PRKEVENT *)this + 239));
          *((_QWORD *)this + 23) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 176, 0LL);
          KeLeaveCriticalRegion();
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, struct DXGTERMINATIONTRACKER *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                                                               + 136LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
          *(_QWORD *)(v32 + 24),
          (*(_DWORD *)(*(_QWORD *)(v32 + 48) + 4LL) >> 6) & 0xF,
          a6.Value,
          v65);
      }
      v32 = v46;
    }
    while ( v46 );
  }
}
