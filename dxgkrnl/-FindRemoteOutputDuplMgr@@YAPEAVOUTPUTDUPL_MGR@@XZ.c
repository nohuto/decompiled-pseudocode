struct OUTPUTDUPL_MGR *FindRemoteOutputDuplMgr(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdi
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 CurrentProcessSessionId; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v12; // rax
  int v14; // r9d
  __int64 v15; // [rsp+50h] [rbp-18h] BYREF
  char v16; // [rsp+58h] [rbp-10h]

  v2 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v2 )
    goto LABEL_34;
  v16 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v1, v0, v3, v4);
  v15 = v2 + 88;
  if ( v2 == -88 )
  {
    WdLogSingleEntry1(1LL, 592LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(struct _KTHREAD **)(v15 + 24) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 599LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = v15;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v6 + 24) == KeGetCurrentThread() )
  {
    if ( *(int *)(v6 + 32) <= 0 )
    {
      WdLogSingleEntry1(1LL, 491LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 491LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*(_DWORD *)(v6 + 32);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v6 + 8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v14 = *(_DWORD *)(v6 + 36);
        if ( v14 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v7, (const EVENT_DESCRIPTOR *)"g", v8, v14);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v6 + 16));
      ExAcquirePushLockExclusiveEx(v6 + 8, 0LL);
    }
    if ( *(_QWORD *)(v6 + 24) )
    {
      WdLogSingleEntry1(1LL, 515LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 515LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(_DWORD *)(v6 + 32) )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 516LL, 0LL, 0LL, 0LL, 0LL);
    }
    *(_QWORD *)(v6 + 24) = KeGetCurrentThread();
    *(_DWORD *)(v6 + 32) = 1;
  }
  v16 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v2 + 80) )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v15);
    v10 = 0LL;
  }
  else
  {
    _mm_lfence();
    v9 = v15;
    v10 = *(_QWORD *)(*(_QWORD *)(v2 + 48) + 8 * CurrentProcessSessionId);
    v16 = 0;
    if ( *(struct _KTHREAD **)(v15 + 24) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v15, 0LL, 0LL);
    if ( *(int *)(v9 + 32) <= 0 )
    {
      WdLogSingleEntry1(1LL, 535LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 535LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*(_DWORD *)(v9 + 32))-- == 1 )
    {
      *(_QWORD *)(v9 + 24) = 0LL;
      ExReleasePushLockExclusiveEx(v9 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  if ( v10 )
  {
    v12 = *(_QWORD *)(v10 + 8);
    if ( v12 )
      return *(struct OUTPUTDUPL_MGR **)(v12 + 120);
    WdLogSingleEntry1(2LL, 3909LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"OUTPUTDUPL_SESSION_MGR is NULL", 3909LL, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
LABEL_34:
    WdLogSingleEntry1(2LL, 3902LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"DXGSESSIONDATA is NULL", 3902LL, 0LL, 0LL, 0LL, 0LL);
  }
  return 0LL;
}
