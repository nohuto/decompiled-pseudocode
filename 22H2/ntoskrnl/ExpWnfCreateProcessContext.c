/*
 * XREFs of ExpWnfCreateProcessContext @ 0x14068AD34
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x14060F914 (ExpWnfResolveScopeInstance.c)
 *     NtSetWnfProcessNotificationEvent @ 0x14068AC60 (NtSetWnfProcessNotificationEvent.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     memset @ 0x140413800 (memset.c)
 *     ExpWnfDeleteProcessContext @ 0x140613348 (ExpWnfDeleteProcessContext.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpWnfCreateProcessContext(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // r14d
  PVOID PoolWithTag; // rax
  signed __int64 v7; // rdi
  __int64 v8; // rax
  signed __int8 v9; // cf
  __int64 v10; // rsi
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rcx

  v2 = 0;
  v5 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x20666E57u);
  v7 = (signed __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x88uLL);
    *(_DWORD *)v7 = 8915206;
    *(_QWORD *)(v7 + 72) = v7 + 64;
    *(_QWORD *)(v7 + 64) = v7 + 64;
    *(_QWORD *)(v7 + 128) = 0LL;
    *(_QWORD *)(v7 + 96) = v7 + 88;
    *(_QWORD *)(v7 + 88) = v7 + 88;
    *(_QWORD *)(v7 + 8) = a1;
    *(_QWORD *)(v7 + 120) = v7 + 112;
    *(_QWORD *)(v7 + 112) = v7 + 112;
    v8 = KeAbPreAcquire((ULONG_PTR)&ExpWnfProcessesListLock, 0LL, 0);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWnfProcessesListLock, 0LL);
    v10 = v8;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(&ExpWnfProcessesListLock, v8, (ULONG_PTR)&ExpWnfProcessesListLock);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    v11 = off_140D2D628;
    v12 = (_QWORD *)(v7 + 16);
    if ( *off_140D2D628 != (_UNKNOWN *)&ExpWnfProcessesListHead )
      __fastfail(3u);
    *v12 = &ExpWnfProcessesListHead;
    *(_QWORD *)(v7 + 24) = v11;
    *v11 = v12;
    off_140D2D628 = (_UNKNOWN **)(v7 + 16);
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
  return v2;
}
