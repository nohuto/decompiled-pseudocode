__int64 *__fastcall CmpGetNextHive(volatile signed __int32 *P)
{
  __int64 *v2; // rdi
  __int64 **v3; // r14
  __int64 v4; // rsi
  __int64 *v5; // r8
  __int64 **v6; // r8
  signed __int64 v7; // rdx
  ULONG_PTR v8; // rtt

  v2 = 0LL;
  v3 = (__int64 **)&CmpHiveListHead;
  if ( P )
    v3 = (__int64 **)(P + 402);
  v4 = KeAbPreAcquire((__int64)&CmpHiveListHeadLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&CmpHiveListHeadLock, 0, v4, (__int64)&CmpHiveListHeadLock);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  v5 = *v3;
  while ( v5 != &CmpHiveListHead )
  {
    v2 = v5 - 201;
    if ( (unsigned __int8)CmpReferenceHive(v5 - 201) )
      break;
    v5 = *v6;
    v2 = 0LL;
  }
  _m_prefetchw(&CmpHiveListHeadLock);
  v7 = CmpHiveListHeadLock - 16;
  if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v7 = 0LL;
  if ( (CmpHiveListHeadLock & 2) != 0
    || (v8 = CmpHiveListHeadLock,
        v8 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, v7, CmpHiveListHeadLock)) )
  {
    ExfReleasePushLock(&CmpHiveListHeadLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
  if ( P && _InterlockedExchangeAdd(P + 1058, 0xFFFFFFFF) == 1 )
    CmpDeleteHive((PVOID)P);
  return v2;
}
