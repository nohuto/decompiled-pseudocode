void DxgkReleaseSessionModeChangeLock()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 CurrentProcessSessionId; // rdi
  __int64 v6; // rax
  DXGFASTMUTEX *v7; // rbx
  __int64 v8; // rdi
  __int64 v10; // rcx
  DXGFASTMUTEX *v11; // [rsp+50h] [rbp-18h] BYREF
  char v12; // [rsp+58h] [rbp-10h]

  v2 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v2 )
    goto LABEL_20;
  v12 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v1, v0, v3, v4);
  v11 = (DXGFASTMUTEX *)(v2 + 88);
  if ( v2 == -88 )
  {
    WdLogSingleEntry1(1LL, 592LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)v11 + 3) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 599LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire(v11);
  v12 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v2 + 80) )
  {
    DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v11);
    v8 = 0LL;
  }
  else
  {
    _mm_lfence();
    v6 = *(_QWORD *)(v2 + 48);
    v7 = v11;
    v8 = *(_QWORD *)(v6 + 8 * CurrentProcessSessionId);
    v12 = 0;
    if ( *((struct _KTHREAD **)v11 + 3) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v11, 0LL, 0LL);
    if ( *((int *)v7 + 8) <= 0 )
    {
      WdLogSingleEntry1(1LL, 535LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 535LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*((_DWORD *)v7 + 8))-- == 1 )
    {
      *((_QWORD *)v7 + 3) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v7 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  if ( v8 )
  {
    v10 = v8 + 18544;
    if ( *(struct _KTHREAD **)(v8 + 18552) == KeGetCurrentThread() )
    {
      *(_QWORD *)(v8 + 18552) = 0LL;
      ExReleasePushLockExclusiveEx(v10, 0LL);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 18560));
      ExReleasePushLockSharedEx(v10, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  else
  {
LABEL_20:
    WdLogSingleEntry1(1LL, 363LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSessionData != NULL", 363LL, 0LL, 0LL, 0LL, 0LL);
  }
}
