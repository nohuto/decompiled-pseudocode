/*
 * XREFs of ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x1C018CED0
 * Callers:
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0189CB0 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C018C750 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C01CA2D4 (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C02D27C8 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0007690 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008740 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0008C68 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00163C0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEAX@Z @ 0x1C0052ED4 (-ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEAX@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1C033F668 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyAllocation(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_DESTROYALLOCATION *a2,
        __int64 a3)
{
  char v3; // r12
  int v6; // r13d
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v10; // rdi
  struct DXGPROCESS *v11; // r14
  char *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  KIRQL CurrentIrql; // al
  __int64 v17; // r12
  struct DXGTHREAD *v18; // rdi
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rax
  const HANDLE *v25; // rcx
  HANDLE v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  int v33; // r9d
  __int64 v34; // rcx
  MOCKDRIVERSTATE *v35; // rcx
  KIRQL v36; // al
  int v37; // [rsp+58h] [rbp-B0h]
  struct DXGTHREAD *DxgThread; // [rsp+60h] [rbp-A8h] BYREF
  PVOID BackTrace; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v40[2]; // [rsp+70h] [rbp-98h] BYREF
  char v41; // [rsp+80h] [rbp-88h]
  _DWORD v42[2]; // [rsp+88h] [rbp-80h] BYREF
  const HANDLE *pAllocationList; // [rsp+90h] [rbp-78h]
  char v44; // [rsp+98h] [rbp-70h]
  int v45; // [rsp+99h] [rbp-6Fh]
  __int16 v46; // [rsp+9Dh] [rbp-6Bh]
  char v47; // [rsp+9Fh] [rbp-69h]
  __int64 v48; // [rsp+A0h] [rbp-68h]
  __int128 v49; // [rsp+A8h] [rbp-60h]
  PVOID v50; // [rsp+B8h] [rbp-50h]
  char v51; // [rsp+C0h] [rbp-48h]
  int v52; // [rsp+C1h] [rbp-47h]
  __int16 v53; // [rsp+C5h] [rbp-43h]
  char v54; // [rsp+C7h] [rbp-41h]
  _BYTE v55[8]; // [rsp+C8h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D0h] [rbp-38h] BYREF

  v3 = a3;
  if ( *(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
    return 0LL;
  v6 = 0;
  LODWORD(v40[0]) = -1;
  v40[1] = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v41 = 1;
    LODWORD(v40[0]) = 5005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5005);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)v40, 5005);
  CurrentProcess = PsGetCurrentProcess(v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v11 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v11 )
        goto LABEL_7;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v11 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v11 )
        goto LABEL_7;
      WdLogSingleEntry1(2LL, 2923LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v11 = v10;
LABEL_7:
  v12 = (char *)v11 + 152;
  if ( !v11 )
    v12 = 0LL;
  if ( v12 && *((struct _KTHREAD **)v12 + 1) == KeGetCurrentThread() )
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
  if ( v11 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v12, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v33 = *((_DWORD *)v12 + 6);
        if ( v33 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v13, (const EVENT_DESCRIPTOR *)"g", v14, v33);
      }
      ExAcquirePushLockExclusiveEx(v12, 0LL);
    }
    v6 = 2;
    *((_QWORD *)v12 + 1) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  if ( !v3 )
  {
    v15 = *((_QWORD *)this + 2);
    if ( *(_BYTE *)(v15 + 4736) )
    {
      if ( *(_DWORD *)(v15 + 288) == 1 )
      {
        v42[1] = 0;
        v45 = 0;
        v46 = 0;
        v47 = 0;
        v48 = 0LL;
        v49 = 0LL;
        v52 = 0;
        v53 = 0;
        v54 = 0;
        BackTrace = 0LL;
        RtlCaptureStackBackTrace(2u, 1u, &BackTrace, 0LL);
        v34 = *((_QWORD *)this + 2);
        v42[0] = a2->NumAllocations;
        pAllocationList = a2->pAllocationList;
        v35 = *(MOCKDRIVERSTATE **)(v34 + 4728);
        v50 = BackTrace;
        v44 = 0;
        DWORD2(v49) = 1;
        v51 = 1;
        MOCKDRIVERSTATE::ValidateMockDriverState(v35, 0, (struct _MOCKDRIVERSTATE_VALIDATE_FBR *)v42);
      }
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  CurrentIrql = KeGetCurrentIrql();
  v17 = CurrentIrql;
  v18 = 0LL;
  if ( CurrentIrql < 2u
    && (DxgThread = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0)
    && ((v18 = DxgThread) != 0LL || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v18 = DxgThread) != 0LL)) )
  {
    v37 = *((_DWORD *)v18 + 12);
  }
  else
  {
    v37 = 0;
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v55,
    *((struct DXGADAPTER **)this + 2));
  v19 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_DESTROYALLOCATION *))(*((_QWORD *)this + 2) + 472LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
          a2);
  if ( v55[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v17 != KeGetCurrentIrql() )
  {
    v36 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v17, v36);
  }
  if ( v18 )
  {
    v21 = *((int *)v18 + 12);
    if ( (_DWORD)v21 != v37 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v18 + 12), v37, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
  v24[3] = v19;
  v24[4] = a2->Flags.Value;
  v24[5] = a2->hResource;
  v24[6] = a2->NumAllocations;
  v25 = a2->pAllocationList;
  if ( v25 )
    v26 = *v25;
  else
    v26 = 0LL;
  v24[7] = v26;
  if ( (_DWORD)v19 )
  {
    WdLogSingleEntry1(2LL, v19);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v19,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v6 == 2 )
  {
    *((_QWORD *)v12 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v12, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v40);
  if ( v41 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v40[0]);
  }
  return (unsigned int)v19;
}
