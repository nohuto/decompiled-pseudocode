__int64 __fastcall PdcTaskClientRequest(__int64 a1, char a2)
{
  signed __int64 *v4; // rsi
  int v5; // edi
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  signed __int64 v9; // rax
  signed __int64 v10; // rdx
  signed __int64 v11; // rtt
  _DWORD v13[200]; // [rsp+20h] [rbp-328h] BYREF

  memset(v13, 0, sizeof(v13));
  if ( !a1 || *(_DWORD *)a1 != 1667458128 )
    return (unsigned int)-1073741585;
  v4 = (signed __int64 *)(a1 + 8);
  PdcAcquireRwLockExclusive(a1 + 8);
  if ( a2 || *(_DWORD *)(a1 + 48) )
  {
    v5 = 0;
    if ( a2 )
    {
      if ( *(_DWORD *)(a1 + 48) )
        goto LABEL_8;
    }
    else if ( *(_DWORD *)(a1 + 48) != 1 )
    {
LABEL_8:
      v7 = *(_DWORD *)(a1 + 48);
      if ( a2 )
        v8 = v7 + 1;
      else
        v8 = v7 - 1;
      *(_DWORD *)(a1 + 48) = v8;
      goto LABEL_11;
    }
    v6 = *(_QWORD *)(a1 + 40);
    v13[10] = 7;
    LOBYTE(v13[14]) = a2 != 0;
    PdcPortSendMessageSynchronously(v6, (__int64)v13);
    v5 = *(_DWORD *)(a1 + 52);
    if ( v5 >= 0 )
      goto LABEL_8;
  }
  else
  {
    v5 = -1073741823;
  }
LABEL_11:
  *(_QWORD *)(a1 + 16) = 0LL;
  _m_prefetchw(v4);
  v9 = *v4;
  v10 = *v4 - 16;
  if ( (*v4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v10 = 0LL;
  if ( (v9 & 2) != 0 || (v11 = *v4, v11 != _InterlockedCompareExchange64(v4, v10, v9)) )
    ExfReleasePushLock((_QWORD *)(a1 + 8));
  KeAbPostRelease(a1 + 8);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
