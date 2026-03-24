/*
 * XREFs of DxgkReleaseHandleDataCB @ 0x1C0119B50
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0005848 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C015C100 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 */

void __fastcall DxgkReleaseHandleDataCB(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  struct DXGTHREAD *Current; // rax
  __int64 v13; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v15; // rax
  int CurrentProcessSessionId; // r14d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rbx
  void *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  int *ThreadProperty; // rbx
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // r9d
  __int64 v41; // rsi
  struct _EX_RUNDOWN_REF *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rax
  char v48[8]; // [rsp+20h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v48);
    CurrentProcess = PsGetCurrentProcess(v4, v3, v5, v6);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v11 = ProcessDxgProcess;
    if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
      || (Current = DXGTHREAD::GetCurrent(v10, v9)) == 0LL
      || (v13 = *((_QWORD *)Current + 1)) == 0 )
    {
      v13 = v11;
    }
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v15 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v15 + 24) = 507LL;
      WdLogEvent5_WdAssertion(v15);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10, v9);
    v21 = PsGetCurrentProcess(v18, v17, v19, v20);
    v22 = PsGetProcessDxgProcess(v21);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && v22
      && (v23 = *(void **)(v22 + 88)) != 0LL
      && v23 != &gDxgkWin32kEngInterface
      && (!(unsigned __int8)KeIsAttachedProcess()
       || (v28 = PsGetCurrentProcess(v25, v24, v26, v27),
           ProcessSessionId = PsGetProcessSessionIdEx(v28),
           CurrentThreadProcess = PsGetCurrentThreadProcess(),
           ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      ThreadProperty = *(int **)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      ThreadProperty = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
      if ( ThreadProperty || (ThreadProperty = (int *)DxgkThreadObjectCreateDxgThread()) != 0LL )
        ObfDereferenceObject(ThreadProperty);
      else
        ThreadProperty = 0LL;
    }
    v35 = v13 + 208;
    if ( v13 != -208 && *(struct _KTHREAD **)(v13 + 216) == KeGetCurrentThread() )
    {
      v36 = WdLogNewEntry5_WdAssertion(v33, v32);
      *(_QWORD *)(v36 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v36);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v13 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v40 = *(_DWORD *)(v13 + 232);
        if ( v40 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v38, &EventBlockThread, v39, v40);
      }
      ExAcquirePushLockSharedEx(v13 + 208, 0LL);
    }
    v41 = *((int *)a1 + 2);
    if ( (_DWORD)v41 == 1 )
    {
      v42 = (struct _EX_RUNDOWN_REF *)(v1 + 88);
    }
    else
    {
      if ( (_DWORD)v41 != 2 )
      {
        v47 = WdLogNewEntry5_WdError(v38, v37);
        *(_QWORD *)(v47 + 24) = v41;
        WdLogEvent5_WdError(v47);
LABEL_40:
        ExReleasePushLockSharedEx(v35, 0LL);
        KeLeaveCriticalRegion();
        if ( v48[0] )
          KeUnstackDetachProcess(&ApcState);
        return;
      }
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v1 + 80), v37);
      v42 = (struct _EX_RUNDOWN_REF *)(v1 + 72);
    }
    ExReleaseRundownProtection(v42);
    if ( ThreadProperty )
    {
      if ( --ThreadProperty[8] < 0 )
      {
        v46 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v44, v43);
        v46[3] = 275LL;
        v46[4] = 38LL;
        v46[5] = ThreadProperty[8];
        v46[6] = 0LL;
        v46[7] = 0LL;
        WdLogEvent5_WdCriticalError(v46);
      }
    }
    goto LABEL_40;
  }
}
