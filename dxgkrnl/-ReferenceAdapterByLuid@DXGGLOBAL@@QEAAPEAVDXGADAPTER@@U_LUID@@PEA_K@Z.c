struct DXGADAPTER *__fastcall DXGGLOBAL::ReferenceAdapterByLuid(DXGGLOBAL *this, struct _LUID a2, unsigned __int64 *a3)
{
  DWORD LowPart; // ebx
  char *v6; // r8
  char *v7; // rdx
  _QWORD *v8; // rdi
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  DXGFASTMUTEX *v13; // [rsp+50h] [rbp-28h]
  LONG HighPart; // [rsp+8Ch] [rbp+14h]

  HighPart = a2.HighPart;
  LowPart = a2.LowPart;
  if ( a2 )
  {
    v13 = (DXGGLOBAL *)((char *)this + 720);
    if ( this == (DXGGLOBAL *)-720LL )
    {
      WdLogSingleEntry1(1LL, 592LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((struct _KTHREAD **)v13 + 3) == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 599LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGFASTMUTEX::Acquire(v13);
    v6 = (char *)this + 768;
    v7 = (char *)*((_QWORD *)this + 96);
    while ( v7 != v6 && v7 )
    {
      v8 = v7;
      v7 = *(char **)v7;
      if ( *(_QWORD *)((char *)v8 + 404) == __PAIR64__(HighPart, LowPart) )
      {
        _m_prefetchw(v8 + 3);
        v9 = v8[3];
        while ( v9 )
        {
          v10 = v9;
          v9 = _InterlockedCompareExchange64(v8 + 3, v9 + 1, v9);
          if ( v10 == v9 )
          {
            *a3 = -1LL;
            goto LABEL_14;
          }
        }
      }
    }
    v8 = 0LL;
LABEL_14:
    if ( *((struct _KTHREAD **)v13 + 3) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v13, 0LL, 0LL);
    if ( *((int *)v13 + 8) <= 0 )
    {
      WdLogSingleEntry1(1LL, 535LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 535LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*((_DWORD *)v13 + 8))-- == 1 )
    {
      *((_QWORD *)v13 + 3) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v13 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
    return (struct DXGADAPTER *)v8;
  }
  else
  {
    WdLogSingleEntry1((unsigned int)(a2.HighPart + 3), 3072LL);
    return 0LL;
  }
}
