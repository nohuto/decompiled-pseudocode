__int64 __fastcall ExpWnfCreateProcessContext(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // r14d
  void *Pool2; // rax
  signed __int64 v7; // rdi
  __int64 v8; // rax
  signed __int8 v9; // cf
  __int64 v10; // rbp
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rcx

  v4 = 0;
  v5 = 0;
  Pool2 = (void *)ExAllocatePool2(256LL, 136LL, 543583831LL);
  v7 = (signed __int64)Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0x88uLL);
    *(_DWORD *)v7 = 8915206;
    *(_QWORD *)(v7 + 72) = v7 + 64;
    *(_QWORD *)(v7 + 64) = v7 + 64;
    *(_QWORD *)(v7 + 128) = 0LL;
    *(_QWORD *)(v7 + 96) = v7 + 88;
    *(_QWORD *)(v7 + 88) = v7 + 88;
    *(_QWORD *)(v7 + 8) = a1;
    *(_QWORD *)(v7 + 120) = v7 + 112;
    *(_QWORD *)(v7 + 112) = v7 + 112;
    v8 = KeAbPreAcquire((__int64)&ExpWnfProcessesListLock, 0LL);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWnfProcessesListLock, 0LL);
    v10 = v8;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(&ExpWnfProcessesListLock, v8, (__int64)&ExpWnfProcessesListLock);
    if ( v10 )
      *(_BYTE *)(v10 + 18) = 1;
    v11 = off_140D53650;
    v12 = (_QWORD *)(v7 + 16);
    if ( *off_140D53650 != (_UNKNOWN *)&ExpWnfProcessesListHead )
      __fastfail(3u);
    *v12 = &ExpWnfProcessesListHead;
    *(_QWORD *)(v7 + 24) = v11;
    *v11 = v12;
    off_140D53650 = (_UNKNOWN **)(v7 + 16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWnfProcessesListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpWnfProcessesListLock);
    KeAbPostRelease((ULONG_PTR)&ExpWnfProcessesListLock);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2152), v7, 0LL) )
      ExpWnfDeleteProcessContext((unsigned __int64 *)v7, 1);
  }
  else
  {
    v5 = -1073741670;
  }
  v13 = *(_QWORD *)(a1 + 2152);
  *a2 = v13;
  if ( !v13 )
    return v5;
  return v4;
}
