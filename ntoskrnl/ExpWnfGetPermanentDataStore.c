__int64 __fastcall ExpWnfGetPermanentDataStore(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  _BOOL8 v7; // rsi
  __int64 v8; // rax
  __int64 Pool2; // rax
  void *v11; // rdi
  __int64 v12; // r14
  int PermanentDataStoreHandleByScopeId; // ebp
  __int64 v14; // rax
  signed __int8 v15; // cf
  __int64 v16; // rbp
  __int64 *v17; // rax

  v7 = a2 - 2 <= 1;
  v8 = *(_QWORD *)(a1 + 8 * v7 + 64);
  if ( v8 )
  {
    *a4 = v8;
    return 0LL;
  }
  Pool2 = ExAllocatePool2(256LL, (unsigned int)(*(_DWORD *)(a1 + 20) + 48), 543583831LL);
  v11 = (void *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)(Pool2 + 4) = 0;
  v12 = Pool2 + 24;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  *(_QWORD *)(Pool2 + 40) = 0LL;
  *(_DWORD *)Pool2 = 3148042;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_QWORD *)(Pool2 + 32) = Pool2 + 24;
  *(_QWORD *)(Pool2 + 24) = Pool2 + 24;
  *(_DWORD *)(Pool2 + 40) = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(Pool2 + 44) = *(_DWORD *)(a1 + 20);
  memmove((void *)(Pool2 + 48), *(const void **)(a1 + 24), *(unsigned int *)(a1 + 20));
  PermanentDataStoreHandleByScopeId = ExpWnfGetPermanentDataStoreHandleByScopeId(
                                        *(unsigned int *)(a1 + 16),
                                        a2,
                                        *(_QWORD *)(a1 + 24));
  if ( PermanentDataStoreHandleByScopeId >= 0 )
  {
    v14 = KeAbPreAcquire((__int64)&ExpWnfPermenentDataStoresListLock, 0LL);
    v15 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWnfPermenentDataStoresListLock, 0LL);
    v16 = v14;
    if ( v15 )
      ExfAcquirePushLockExclusiveEx(
        &ExpWnfPermenentDataStoresListLock,
        v14,
        (__int64)&ExpWnfPermenentDataStoresListLock);
    if ( v16 )
      *(_BYTE *)(v16 + 18) = 1;
    v17 = (__int64 *)off_140D53308;
    if ( *off_140D53308 != (_UNKNOWN *)&ExpWnfPermenentDataStoresList )
      __fastfail(3u);
    *(_QWORD *)(v12 + 8) = off_140D53308;
    *(_QWORD *)v12 = &ExpWnfPermenentDataStoresList;
    *v17 = v12;
    off_140D53308 = (_UNKNOWN **)v12;
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&ExpWnfPermenentDataStoresListLock,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpWnfPermenentDataStoresListLock);
    KeAbPostRelease((ULONG_PTR)&ExpWnfPermenentDataStoresListLock);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v7 + 64), (signed __int64)v11, 0LL) )
      ExpWnfDestroyPermanentDataStore(v11);
    *a4 = *(_QWORD *)(a1 + 8 * v7 + 64);
    return 0LL;
  }
  ExFreePoolWithTag(v11, 0x20666E57u);
  return (unsigned int)PermanentDataStoreHandleByScopeId;
}
