void __fastcall DxgkReleaseHandleDataCB(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v6; // rdi
  struct DXGPROCESS *v7; // rbx
  struct DXGTHREAD *DxgThread; // rdi
  char *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  struct _EX_RUNDOWN_REF *v13; // rcx
  int v14; // eax
  int v15; // r9d
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  __int64 v19; // rdi
  struct DXGTHREAD *v20; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v21[8]; // [rsp+58h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-58h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v21);
    CurrentProcess = PsGetCurrentProcess(v3);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v6 = (struct DXGPROCESS *)ProcessDxgProcess;
    if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
      goto LABEL_4;
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v7 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v7 )
      {
LABEL_5:
        v20 = 0LL;
        if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v20) < 0 )
        {
          DxgThread = 0LL;
        }
        else
        {
          DxgThread = v20;
          if ( !v20 )
          {
            DxgThread = DxgkThreadObjectCreateDxgThread(1);
            v20 = DxgThread;
          }
        }
        v9 = (char *)v7 + 248;
        if ( v9 && *((struct _KTHREAD **)v9 + 1) == KeGetCurrentThread() )
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
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v9, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v15 = *((_DWORD *)v9 + 6);
            if ( v15 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v10, (const EVENT_DESCRIPTOR *)"g", v11, v15);
          }
          ExAcquirePushLockSharedEx(v9, 0LL);
        }
        _InterlockedIncrement((volatile signed __int32 *)v9 + 4);
        v12 = *((_DWORD *)a1 + 2);
        if ( v12 == 1 )
        {
          v13 = (struct _EX_RUNDOWN_REF *)(v1 + 88);
        }
        else
        {
          if ( v12 != 2 )
          {
            v19 = *((int *)a1 + 2);
            WdLogSingleEntry1(2LL, v19);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Driver supplied invalid handle type (0x%I64x), cannot release reference",
              v19,
              0LL,
              0LL,
              0LL,
              0LL);
LABEL_17:
            _InterlockedDecrement((volatile signed __int32 *)v9 + 4);
            ExReleasePushLockSharedEx(v9, 0LL);
            KeLeaveCriticalRegion();
            if ( v21[0] )
              KeUnstackDetachProcess(&ApcState);
            return;
          }
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v1 + 80));
          v13 = (struct _EX_RUNDOWN_REF *)(v1 + 72);
        }
        ExReleaseRundownProtection(v13);
        if ( DxgThread )
        {
          v14 = *((_DWORD *)DxgThread + 12) - 1;
          *((_DWORD *)DxgThread + 12) = v14;
          if ( v14 < 0 )
            WdLogSingleEntry5(0LL, 275LL, 38LL, v14, 0LL, 0LL);
        }
        goto LABEL_17;
      }
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v7 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v7 )
        goto LABEL_5;
      WdLogSingleEntry1(2LL, 2923LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
    }
LABEL_4:
    v7 = v6;
    goto LABEL_5;
  }
}
