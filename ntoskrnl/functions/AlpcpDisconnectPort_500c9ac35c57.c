__int64 __fastcall AlpcpDisconnectPort(__int64 a1, char a2)
{
  __int64 *v2; // r15
  volatile signed __int64 *v5; // rdi
  _DWORD *v6; // rsi
  __int64 v7; // r14
  void *v8; // rsi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  __int64 v12; // rdi
  ULONG_PTR v14; // rdi
  __int128 v15; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+80h] [rbp+40h]

  v2 = *(__int64 **)(a1 + 16);
  v15 = 0LL;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v2 - 2), 0LL);
  v5 = (volatile signed __int64 *)(a1 + 352);
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
  v6 = (_DWORD *)(a1 + 416);
  if ( (a2 & 1) != 0 )
    *v6 |= 0x80u;
  if ( (*v6 & 0x20) == 0 )
  {
    *v6 |= 0x20u;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
    KeAbPostRelease(a1 + 352);
    if ( (*v6 & 6) == 2 )
      AlpcpWalkConnectionList(a1);
    if ( ((*v6 >> 1) & 3) == 1 )
    {
      v7 = 0LL;
    }
    else
    {
      if ( ((*v6 >> 1) & 3) == 2 )
      {
        v7 = *v2;
        v8 = (void *)a1;
      }
      else
      {
        v7 = v2[2];
        v8 = (void *)*v2;
      }
      v16 = (__int64)v8;
      if ( v7 )
        v7 &= -(__int64)(ObReferenceObjectSafe(v7) != 0);
      if ( !v8 || ObReferenceObjectSafe((__int64)v8) )
        goto LABEL_15;
    }
    v16 = 0LL;
    v8 = 0LL;
LABEL_15:
    if ( (_InterlockedExchangeAdd64(v2 - 2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2 - 2);
    KeAbPostRelease((ULONG_PTR)(v2 - 2));
    if ( v7 )
    {
      *((_QWORD *)&v15 + 1) = &v15;
      *(_QWORD *)&v15 = &v15;
      do
      {
        v9 = AlpcpCancelMessagesByRequestor(a1, v7, (int)v7 + 144, 1, (__int64)&v15);
        v10 = AlpcpCancelMessagesByRequestor(a1, v7, (int)v7 + 160, 2, (__int64)&v15) | v9;
        v11 = AlpcpCancelMessagesByRequestor(a1, v7, (int)v7 + 184, 3, (__int64)&v15) | v10;
      }
      while ( v11 | (unsigned int)AlpcpCancelMessagesByRequestor(a1, v7, (int)v7 + 208, 4, (__int64)&v15) );
      ObfDereferenceObject((PVOID)v7);
      v8 = (void *)v16;
      while ( 1 )
      {
        v12 = v15;
        if ( (__int128 *)v15 == &v15 )
          break;
        *(_QWORD *)&v15 = *(_QWORD *)v15;
        v14 = v12 - 80;
        *(_QWORD *)(v15 + 8) = &v15;
        AlpcpLockForCachedReferenceBlob(v14);
        if ( v16 )
        {
          ExAcquirePushLockSharedEx(v16 + 352, 0LL);
          if ( (*(_DWORD *)(v16 + 416) & 0x40) != 0 )
          {
            --*(_WORD *)(v14 - 30);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 352), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v16 + 352));
            KeAbPostRelease(v16 + 352);
          }
          else
          {
            *(_DWORD *)(v14 + 72) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 400));
            *(_QWORD *)(v14 + 128) = *(_QWORD *)(a1 + 56);
            *(_QWORD *)(v14 + 56) = a1;
            *(_QWORD *)(v14 + 64) = v16;
            AlpcpInsertMessageCanceledQueue(v16, v14);
            AlpcpSignalPortAndUnlock(v16);
          }
        }
        else
        {
          --*(_WORD *)(v14 - 30);
        }
        AlpcpUnlockMessage(v14);
      }
    }
    if ( v8 )
      ObfDereferenceObject(v8);
    return 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
  if ( (_InterlockedExchangeAdd64(v2 - 2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2 - 2);
  KeAbPostRelease((ULONG_PTR)(v2 - 2));
  return 3221225527LL;
}
