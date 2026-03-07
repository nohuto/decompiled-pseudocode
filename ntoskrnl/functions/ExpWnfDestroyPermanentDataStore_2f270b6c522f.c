void __fastcall ExpWnfDestroyPermanentDataStore(_QWORD *P)
{
  __int64 v2; // rax
  signed __int8 v3; // cf
  __int64 v4; // rbx
  _QWORD **v5; // rdx
  PVOID *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbp
  void *v9; // rcx

  v2 = KeAbPreAcquire((__int64)&ExpWnfPermenentDataStoresListLock, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWnfPermenentDataStoresListLock, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&ExpWnfPermenentDataStoresListLock, v2, (__int64)&ExpWnfPermenentDataStoresListLock);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  v5 = (_QWORD **)P[3];
  if ( v5[1] != P + 3 || (v6 = (PVOID *)P[4], *v6 != P + 3) )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = v6;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWnfPermenentDataStoresListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpWnfPermenentDataStoresListLock);
  KeAbPostRelease((ULONG_PTR)&ExpWnfPermenentDataStoresListLock);
  v7 = KeAbPreAcquire((__int64)(P + 1), 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)P + 2, 0LL) )
    ExfAcquirePushLockExclusiveEx(P + 1, v7, (__int64)(P + 1));
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  if ( (_InterlockedExchangeAdd64(P + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(P + 1);
  KeAbPostRelease((ULONG_PTR)(P + 1));
  v9 = (void *)P[2];
  if ( v9 )
    ZwClose(v9);
  ExFreePoolWithTag(P, 0x20666E57u);
}
