void *__fastcall IopInitializeActiveConnectBlock(__int64 a1, _QWORD *a2)
{
  void *result; // rax
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx

  result = memset(a2, 0, 0x50uLL);
  if ( !*(_DWORD *)(a1 + 8) )
  {
    a2[1] = a2;
    *a2 = a2;
    KeInitializeEvent((PRKEVENT)(a2 + 5), SynchronizationEvent, 1u);
    *((_DWORD *)a2 + 16) = 1;
    LOBYTE(v5) = 1;
    v6 = *(_DWORD *)(a1 + 64);
    *((_DWORD *)a2 + 4) = v6;
    IopAcquireReleaseConnectLockInternal(0LL, v5, 2LL);
    v8 = ActiveConnectList;
    v9 = 0LL;
    while ( (__int64 *)v8 != &ActiveConnectList && *(_DWORD *)(v8 + 16) <= v6 )
    {
      if ( *(_DWORD *)(v8 + 16) == v6 )
      {
        v9 = v8;
        break;
      }
      v8 = *(_QWORD *)v8;
    }
    if ( v9 )
    {
      a2[3] = *(_QWORD *)(v9 + 24);
      a2[4] = *(_QWORD *)(v9 + 32);
      _InterlockedIncrement(*(volatile signed __int32 **)(v9 + 32));
    }
    else
    {
      a2[3] = a2 + 5;
      a2[4] = a2 + 8;
    }
    IopInsertActiveConnectListLocked(a2, v7, &ActiveConnectList);
    return (void *)IopAcquireReleaseConnectLockInternal(0LL, 0LL, 2LL);
  }
  return result;
}
