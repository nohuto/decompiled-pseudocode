__int64 __fastcall AlpcpReceiveDirectMessagePort(__int64 *a1, int a2, int a3, ULONG_PTR *a4, int a5)
{
  __int64 v6; // rbp
  __int64 result; // rax
  ULONG_PTR v8; // rdi
  int v9; // eax
  int v10; // ebx
  volatile signed __int64 *v11; // rsi
  int v12; // eax
  volatile signed __int64 *v13; // r14
  unsigned int v14; // r8d
  int v15; // edx
  ULONG_PTR v16; // rbx
  unsigned int v17; // ebx
  ULONG_PTR v18[5]; // [rsp+30h] [rbp-28h] BYREF

  v18[0] = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v6 = *a1;
  result = AlpcpLookupMessage(*a1, a2, a3, (_DWORD)a4, (__int64)v18);
  if ( (int)result >= 0 )
  {
    v8 = v18[0];
    if ( v6 != *(_QWORD *)(v18[0] + 16) )
    {
      v17 = -1073740030;
LABEL_32:
      AlpcpUnlockMessage(v18[0]);
      return v17;
    }
    v9 = *(_DWORD *)(v18[0] + 40);
    if ( (v9 & 0x20000) == 0 || (v10 = 1, v6 != *(_QWORD *)(v18[0] + 64)) )
      v10 = 0;
    if ( (v9 & 7) != 4 && !v10 )
    {
      v17 = -1073741811;
      goto LABEL_32;
    }
    v11 = (volatile signed __int64 *)(v6 + 352);
    ExAcquirePushLockSharedEx(v6 + 352, 0LL);
    v12 = *(_DWORD *)(v6 + 416);
    if ( (v12 & 0x40) != 0 )
    {
      AlpcpUnlockMessage(v8);
      if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
      KeAbPostRelease(v6 + 352);
      return 3221227264LL;
    }
    else
    {
      if ( (v12 & 0x10) == 0 )
      {
        if ( v10 )
        {
          v13 = (volatile signed __int64 *)(v6 + 136);
          ExAcquirePushLockExclusiveEx(v6 + 136, 0LL);
          *(_DWORD *)(v8 + 40) &= ~0x20000u;
          **(_QWORD **)(v8 + 88) = *(_QWORD *)(v8 + 80);
          *(_QWORD *)(*(_QWORD *)(v8 + 80) + 8LL) = *(_QWORD *)(v8 + 88);
          --*(_DWORD *)(v6 + 464);
        }
        else
        {
          v13 = (volatile signed __int64 *)(v6 + 200);
          ExAcquirePushLockExclusiveEx(v6 + 200, 0LL);
          --*(_DWORD *)(v6 + 460);
          *(_DWORD *)(v8 + 40) &= 0xFFFFFFF8;
          *(_QWORD *)(v8 + 16) = 0LL;
          **(_QWORD **)(v8 + 8) = *(_QWORD *)v8;
          *(_QWORD *)(*(_QWORD *)v8 + 8LL) = *(_QWORD *)(v8 + 8);
          v14 = (*(_QWORD *)(v8 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
          if ( !*(_QWORD *)(v8 + 144) )
            v14 = *(_QWORD *)(v8 + 136) != 0LL ? 0x80000000 : 0;
          v15 = v14 | 0x10000000;
          if ( !*(_QWORD *)(v8 + 152) )
            v15 = v14;
          if ( (v15 & a5) != 0 )
          {
            *(_WORD *)(v8 + 244) |= 0x2000u;
            AlpcpInsertMessagePendingQueue(v6, v8);
            goto LABEL_17;
          }
          *(_WORD *)(v8 + 244) &= ~0x2000u;
        }
        --*(_WORD *)(v8 - 30);
LABEL_17:
        if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v13);
        KeAbPostRelease((ULONG_PTR)v13);
        if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        KeAbPostRelease(v6 + 352);
        v16 = v18[0];
        if ( AlpcpLogEnabled )
          AlpcpLogReceiveMessage(v18[0]);
        *a4 = v16;
        return 0LL;
      }
      AlpcpUnlockMessage(v8);
      if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
      KeAbPostRelease(v6 + 352);
      return 3221225537LL;
    }
  }
  return result;
}
