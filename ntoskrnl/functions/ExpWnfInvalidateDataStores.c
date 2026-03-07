signed __int32 __fastcall ExpWnfInvalidateDataStores(const void *a1, unsigned int a2)
{
  size_t v2; // rbp
  __int64 v4; // rbx
  unsigned __int64 *i; // rbx
  void *v6; // rsi
  volatile signed __int32 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rsi

  v2 = a2;
  v4 = KeAbPreAcquire((__int64)&ExpWnfPermenentDataStoresListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpWnfPermenentDataStoresListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&ExpWnfPermenentDataStoresListLock,
      0,
      v4,
      (__int64)&ExpWnfPermenentDataStoresListLock);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  for ( i = (unsigned __int64 *)ExpWnfPermenentDataStoresList;
        i != (unsigned __int64 *)&ExpWnfPermenentDataStoresList;
        i = (unsigned __int64 *)*i )
  {
    if ( *(i - 1) && *((_DWORD *)i + 5) == (_DWORD)v2 && !memcmp(a1, i + 3, v2) )
    {
      v7 = (volatile signed __int32 *)(i - 2);
      v8 = KeAbPreAcquire((__int64)(i - 2), 0LL);
      v9 = v8;
      if ( _interlockedbittestandset64(v7, 0LL) )
        ExfAcquirePushLockExclusiveEx(i - 2, v8, (__int64)(i - 2));
      if ( v9 )
        *(_BYTE *)(v9 + 18) = 1;
      v6 = (void *)*(i - 1);
      *(i - 1) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)i - 2);
      KeAbPostRelease((ULONG_PTR)(i - 2));
      if ( v6 )
        ZwClose(v6);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpWnfPermenentDataStoresListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpWnfPermenentDataStoresListLock);
  return KeAbPostRelease((ULONG_PTR)&ExpWnfPermenentDataStoresListLock);
}
