/*
 * XREFs of ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x1C01350A0
 * Callers:
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C010DD90 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0134134 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C0134E48 (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C02281C0 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0004BC8 (W32GetThreadWin32Thread.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0004C60 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0004D20 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0004DC0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4MOCKDRIVERSTATE_VALIDATE_TYPE@@PEAX@Z @ 0x1C000A0E0 (-ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4MOCKDRIVERSTATE_VALIDATE_TYPE@@PEAX@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C015C100 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyAllocation(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_DESTROYALLOCATION *a2,
        __int64 a3)
{
  char v3; // r14
  int v6; // r13d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  MOCKDRIVERSTATE *v23; // rcx
  const HANDLE *pAllocationList; // rax
  unsigned __int8 CurrentIrql; // r12
  struct DXGTHREAD *ThreadProperty; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  int CurrentProcessSessionId; // r14d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // rdx
  __int64 v36; // r14
  __int64 v37; // rcx
  _QWORD *v38; // rax
  const HANDLE *v39; // rcx
  HANDLE v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  void *v45; // rax
  __int64 ThreadWin32Thread; // rax
  int v47; // r9d
  struct DXGTHREAD *Current; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  unsigned __int8 v52; // cl
  _QWORD *v53; // rax
  __int64 v54; // rax
  int v55; // [rsp+28h] [rbp-69h]
  int v56; // [rsp+30h] [rbp-61h] BYREF
  __int64 v57; // [rsp+38h] [rbp-59h]
  char v58; // [rsp+40h] [rbp-51h]
  _DWORD v59[2]; // [rsp+48h] [rbp-49h] BYREF
  const HANDLE *v60; // [rsp+50h] [rbp-41h]
  char v61; // [rsp+58h] [rbp-39h]
  int v62; // [rsp+59h] [rbp-38h]
  __int16 v63; // [rsp+5Dh] [rbp-34h]
  char v64; // [rsp+5Fh] [rbp-32h]
  __int64 v65; // [rsp+60h] [rbp-31h]
  __int128 v66; // [rsp+68h] [rbp-29h]
  char v67[8]; // [rsp+78h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-11h] BYREF

  v3 = a3;
  if ( *(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
    return 0LL;
  v6 = 0;
  v56 = -1;
  v57 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v58 = 1;
    v56 = 5005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5005);
  }
  else
  {
    v58 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v56, 5005LL);
  CurrentProcess = PsGetCurrentProcess(v8, v7, v9, v10);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v15 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v14, v13)) == 0LL
    || (v16 = *((_QWORD *)Current + 1)) == 0 )
  {
    v16 = v15;
  }
  v55 = 0;
  v17 = v16 + 112;
  if ( !v16 )
    v17 = 0LL;
  if ( v17 && *(struct _KTHREAD **)(v17 + 8) == KeGetCurrentThread() )
  {
    v49 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v49 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v49);
  }
  if ( v16 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v17, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v47 = *(_DWORD *)(v17 + 24);
        if ( v47 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v18, &EventBlockThread, v19, v47);
      }
      ExAcquirePushLockExclusiveEx(v17, 0LL);
    }
    *(_QWORD *)(v17 + 8) = KeGetCurrentThread();
    v55 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  if ( !v3 )
  {
    v22 = *((_QWORD *)this + 2);
    v65 = 0LL;
    v59[1] = 0;
    v62 = 0;
    v23 = *(MOCKDRIVERSTATE **)(v22 + 4488);
    v63 = 0;
    v64 = 0;
    v59[0] = a2->NumAllocations;
    pAllocationList = a2->pAllocationList;
    v66 = 0LL;
    v60 = pAllocationList;
    v61 = 0;
    DWORD2(v66) = 1;
    MOCKDRIVERSTATE::ValidateMockDriverState(v23, 0, (struct _MOCKDRIVERSTATE_VALIDATE_PLANE *)v59);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  ThreadProperty = 0LL;
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v50 = WdLogNewEntry5_WdAssertion(v21, v20);
      *(_QWORD *)(v50 + 24) = 507LL;
      WdLogEvent5_WdAssertion(v50);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v21, v20);
    v33 = PsGetCurrentProcess(v30, v29, v31, v32);
    v34 = PsGetProcessDxgProcess(v33);
    if ( CurrentProcessSessionId )
    {
      if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
      {
        if ( v34 )
        {
          v45 = *(void **)(v34 + 88);
          if ( v45 )
          {
            if ( v45 != &gDxgkWin32kEngInterface )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread);
              if ( ThreadWin32Thread )
              {
                ThreadProperty = *(struct DXGTHREAD **)(ThreadWin32Thread + 80);
LABEL_24:
                if ( ThreadProperty )
                  v6 = *((_DWORD *)ThreadProperty + 8);
                else
                  v6 = 0;
                goto LABEL_26;
              }
            }
          }
        }
      }
    }
    ThreadProperty = (struct DXGTHREAD *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
    if ( ThreadProperty || (ThreadProperty = DxgkThreadObjectCreateDxgThread()) != 0LL )
    {
      ObfDereferenceObject(ThreadProperty);
      goto LABEL_24;
    }
    v6 = 0;
    ThreadProperty = 0LL;
  }
LABEL_26:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v67,
    *((struct DXGADAPTER **)this + 2));
  v36 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_DESTROYALLOCATION *))(*((_QWORD *)this + 2) + 384LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 272LL),
          a2);
  if ( v67[0] )
    KeUnstackDetachProcess(&ApcState);
  v37 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v37 )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v35);
    v51[3] = 275LL;
    v51[4] = 16LL;
    v51[5] = this;
    v51[6] = CurrentIrql;
    v52 = KeGetCurrentIrql();
    v51[7] = v52;
    WdLogEvent5_WdCriticalError(v51);
  }
  if ( ThreadProperty && *((_DWORD *)ThreadProperty + 8) != v6 )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v35);
    v53[3] = 275LL;
    v53[4] = 38LL;
    v53[5] = *((int *)ThreadProperty + 8);
    v53[6] = v6;
    v53[7] = 0LL;
    WdLogEvent5_WdCriticalError(v53);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  v38 = (_QWORD *)WdLogNewEntry5_WdTrace(v37, v35);
  v38[3] = v36;
  v38[4] = a2->Flags.Value;
  v38[5] = a2->hResource;
  v38[6] = a2->NumAllocations;
  v39 = a2->pAllocationList;
  if ( v39 )
    v40 = *v39;
  else
    v40 = 0LL;
  v38[7] = v40;
  if ( (_DWORD)v36 )
  {
    v54 = WdLogNewEntry5_WdError(v39, v40);
    *(_QWORD *)(v54 + 24) = v36;
    WdLogEvent5_WdError(v54);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v55 == 2 )
  {
    *(_QWORD *)(v17 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v17, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56, v41);
  if ( v58 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v42, &EventProfilerExit, v43, v56);
  }
  return (unsigned int)v36;
}
