__int64 __fastcall MONITOR_MGR::_GetMonitorInstance(
        MONITOR_MGR *this,
        unsigned int a2,
        char a3,
        struct DXGMONITOR **a4)
{
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  MONITOR_MGR *v11; // rcx
  MONITOR_MGR *v12; // rdx
  char *v13; // rax
  __int64 v14; // rax
  unsigned int v15; // edi
  int v18; // r9d

  v7 = a2;
  if ( !a4 )
    WdLogSingleEntry0(1LL);
  if ( (_DWORD)v7 == -1 )
    WdLogSingleEntry0(1LL);
  *a4 = 0LL;
  if ( this == (MONITOR_MGR *)-80LL )
    WdLogSingleEntry0(1LL);
  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)this + 13) == KeGetCurrentThread() )
  {
    if ( *((int *)this + 28) <= 0 )
    {
      WdLogSingleEntry1(1LL, 491LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 491LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*((_DWORD *)this + 28);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 88, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v18 = *((_DWORD *)this + 29);
        if ( v18 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v10, (const EVENT_DESCRIPTOR *)"g", v8, v18);
      }
      _InterlockedIncrement64((volatile signed __int64 *)this + 12);
      ExAcquirePushLockExclusiveEx((char *)this + 88, 0LL);
    }
    if ( *((_QWORD *)this + 13) )
    {
      WdLogSingleEntry1(1LL, 515LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 515LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((_DWORD *)this + 28) )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 516LL, 0LL, 0LL, 0LL, 0LL);
    }
    *((_QWORD *)this + 13) = KeGetCurrentThread();
    *((_DWORD *)this + 28) = 1;
  }
  v11 = (MONITOR_MGR *)*((_QWORD *)this + 5);
  v12 = (MONITOR_MGR *)((char *)this + 40);
  if ( v11 == (MONITOR_MGR *)((char *)this + 40) )
    goto LABEL_20;
  v13 = (char *)v11 - 152;
  if ( !v11 )
    v13 = 0LL;
  if ( !v13 )
    goto LABEL_20;
  while ( *((_DWORD *)v13 + 45) != (_DWORD)v7 )
  {
    v11 = (MONITOR_MGR *)*((_QWORD *)v13 + 19);
    if ( v11 != v12 )
    {
      v13 = (char *)v11 - 152;
      if ( !v11 )
        v13 = 0LL;
      if ( v13 )
        continue;
    }
    goto LABEL_20;
  }
  if ( a3 && *((_DWORD *)v13 + 78) != 1 )
    v13 = (char *)*((_QWORD *)v13 + 40);
  if ( v13 )
  {
    *a4 = (struct DXGMONITOR *)v13;
    v15 = 0;
  }
  else
  {
LABEL_20:
    v14 = WdLogNewEntry5_WdTrace(v11, v12, v8, v9);
    v15 = -1073741275;
    *(_QWORD *)(v14 + 24) = v7;
    *(_QWORD *)(v14 + 32) = this;
  }
  if ( *((struct _KTHREAD **)this + 13) != KeGetCurrentThread() )
    WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)this + 80, 0LL, 0LL);
  if ( *((int *)this + 28) <= 0 )
  {
    WdLogSingleEntry1(1LL, 535LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 535LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (*((_DWORD *)this + 28))-- == 1 )
  {
    *((_QWORD *)this + 13) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 88, 0LL);
  }
  KeLeaveCriticalRegion();
  return v15;
}
