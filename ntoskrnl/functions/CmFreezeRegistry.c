__int64 __fastcall CmFreezeRegistry(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 *i; // rax
  volatile signed __int64 *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rbp
  struct _EX_RUNDOWN_REF *v16; // rdi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *j; // rcx
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v25; // rdi

  v3 = a1;
  v4 = 0;
  if ( (unsigned __int8)CmpAcquireShutdownRundown(a1, a2, a3) )
  {
    CmpLockRegistryExclusive();
    if ( CmpFreezeThawState )
    {
      v4 = -1073741431;
      CmpUnlockRegistry(v6, v5, v7, v8);
    }
    else
    {
      for ( i = CmpGetNextActiveHive(0LL); ; i = CmpGetNextActiveHive(v16) )
      {
        v16 = (struct _EX_RUNDOWN_REF *)i;
        if ( !i )
          break;
        if ( (i[20] & 3) == 0 )
        {
          *(_OWORD *)(i[8] + 4056) = *(_OWORD *)(i[8] + 112);
          *(_OWORD *)(i[8] + 4040) = *(_OWORD *)(i[8] + 148);
          *(_OWORD *)(i[8] + 4072) = *(_OWORD *)(i[8] + 128);
          *(_OWORD *)(i[8] + 112) = 0LL;
          *(_OWORD *)(i[8] + 148) = 0LL;
          *(_OWORD *)(i[8] + 128) = 0LL;
          *(_DWORD *)(i[8] + 164) = 0;
          if ( (i[514] & 0x300) != 0x100 && !*((_DWORD *)i + 26) )
          {
            v13 = i + 10;
            v14 = KeAbPreAcquire((__int64)(i + 10), 0LL);
            v15 = v14;
            if ( _interlockedbittestandset64((volatile signed __int32 *)&v16[10], 0LL) )
              ExfAcquirePushLockExclusiveEx(&v16[10].Count, v14, (__int64)&v16[10]);
            if ( v15 )
              *(_BYTE *)(v15 + 18) = 1;
            HvMarkBaseBlockDirty((__int64)v16);
            if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&v16[10]);
            KeAbPostRelease((ULONG_PTR)&v16[10]);
          }
        }
      }
      v17 = CmFreezeThawTimeoutInSeconds;
      CmpFreezeThawState = 1;
      if ( v3 )
        v17 = v3;
      KiSetTimerEx((__int64)&CmpFreezeThawTimer, -10000000LL * v17, 0, 0, (__int64)&CmpFreezeThawDpc);
      CmpDisableLazyFlush(2u);
      CmpUnlockRegistry(v19, v18, v20, v21);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      for ( j = 0LL; ; j = v25 )
      {
        NextActiveHive = CmpGetNextActiveHive(j);
        v25 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
        if ( !NextActiveHive )
          break;
        if ( (NextActiveHive[20] & 3) == 0 )
        {
          v4 = CmpFlushHive((ULONG_PTR)NextActiveHive, 0xDu);
          if ( v4 < 0 )
          {
            ExReleaseRundownProtection_0(v25 + 205);
            CmThawRegistry();
            v4 = -1073741491;
            break;
          }
        }
      }
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    CmpReleaseShutdownRundown(v10, v9, v11);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return (unsigned int)v4;
}
