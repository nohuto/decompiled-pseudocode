__int64 __fastcall AlpcpInsertCompletionListEntry(__int64 a1, int a2)
{
  __int64 v2; // r13
  unsigned int v3; // r12d
  int v4; // edi
  __int64 v6; // rbp
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  signed __int64 v10; // rax
  volatile signed __int64 *v11; // rsi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  signed __int64 v15; // rax
  __int64 v17; // rdi

  v2 = *(_QWORD *)(a1 + 360);
  v3 = 0;
  v4 = a2;
  v6 = *(_QWORD *)(v2 + 80);
  v7 = *(_QWORD *)(v2 + 96) >> 2;
  if ( v7 )
  {
    do
    {
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 360) + 24LL, 0LL);
      v8 = *(_QWORD *)(v6 + 64);
      if ( (v8 & (v8 >> 24) & 0xFFFFFF) == 0xFFFFFF )
      {
        **(_DWORD **)(v2 + 88) = v4;
        v9 = v8 & 0xFFFF000000000000uLL;
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 64), v8 & 0xFFFF000000000000uLL, v8);
        v11 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 360) + 24LL);
        if ( v10 == v8 )
        {
          if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v11);
          KeAbPostRelease((ULONG_PTR)v11);
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 128));
          return v9 < 0x1000000000000LL ? 3 : 1;
        }
        if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v11);
        v4 = a2;
      }
      else
      {
        if ( (v8 & 0xFFFFFF) >= v7
          || (v12 = (v8 >> 24) & 0xFFFFFF, v12 >= v7)
          || (v13 = v8 ^ (v8 ^ (((v12 + 1) % v7) << 24)) & 0xFFFFFF000000LL,
              v14 = (v13 >> 24) & 0xFFFFFF,
              v14 == (v13 & 0xFFFFFF)) )
        {
          v17 = *(_QWORD *)(a1 + 360);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v17 + 24));
          KeAbPostRelease(v17 + 24);
          return 0LL;
        }
        *(_DWORD *)(*(_QWORD *)(v2 + 88) + 4 * v14) = v4;
        v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 64), v13, v8);
        v11 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 360) + 24LL);
        if ( v15 == v8 )
        {
          if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v11);
          KeAbPostRelease((ULONG_PTR)v11);
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 128));
          return 1LL;
        }
        if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v11);
      }
      KeAbPostRelease((ULONG_PTR)v11);
      ++v3;
    }
    while ( v3 < v7 );
  }
  return 0LL;
}
