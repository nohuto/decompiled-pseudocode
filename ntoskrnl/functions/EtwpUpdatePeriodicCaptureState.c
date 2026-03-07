__int64 __fastcall EtwpUpdatePeriodicCaptureState(__int64 a1, unsigned int a2, unsigned __int16 a3, _QWORD *a4)
{
  __int64 v4; // r15
  int v5; // esi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned int v8; // edx
  unsigned int *v9; // rax
  __int64 v10; // rbp
  int v11; // ebx
  __int64 v12; // rdi
  __int64 Pool2; // rax
  ULONG_PTR v14; // rcx
  void *v15; // rax
  __int64 Timer; // rax
  ULONG_PTR v17; // rcx
  signed __int64 v18; // rdx
  __int128 v21; // [rsp+28h] [rbp-50h] BYREF

  v4 = a3;
  v21 = 0LL;
  v5 = 0;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v9 = EtwpAcquireLoggerContextByLoggerId((__int64)CurrentServerSiloGlobals[54].Flink, v8, 0);
  v10 = (__int64)v9;
  if ( v9 )
  {
    if ( (v9[204] & 0x40) != 0 )
    {
      v5 = -1073741162;
LABEL_27:
      EtwpReleaseLoggerContext((unsigned int *)v10, 0);
      return (unsigned int)v5;
    }
    v11 = 0;
    if ( (_DWORD)v4 )
    {
      while ( 1 )
      {
        v5 = EtwpCheckNotificationAccess(&a4[2 * v11], v10 + 276);
        if ( v5 < 0 )
          break;
        if ( ++v11 >= (int)v4 )
          goto LABEL_8;
      }
      v5 = -1073741790;
      goto LABEL_27;
    }
LABEL_8:
    ExAcquirePushLockExclusiveEx(v10 + 688, 0LL);
    v12 = *(_QWORD *)(v10 + 1080);
    if ( v12 )
      goto LABEL_31;
    if ( !(_WORD)v4 )
    {
LABEL_24:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 688));
      KeAbPostRelease(v10 + 688);
      goto LABEL_27;
    }
    Pool2 = ExAllocatePool2(64LL, 72LL, 1433891909LL);
    *(_QWORD *)(v10 + 1080) = Pool2;
    v12 = Pool2;
    if ( Pool2 )
    {
LABEL_31:
      if ( *(_QWORD *)(v12 + 24) )
      {
        v14 = *(_QWORD *)(v12 + 8);
        if ( v14 )
        {
          ExCancelTimer(v14, 0LL);
          *(_DWORD *)(v12 + 64) = 0;
        }
        ExFreePoolWithTag(*(PVOID *)(v12 + 24), 0);
        *(_QWORD *)(v12 + 24) = 0LL;
        *(_WORD *)(v12 + 16) = 0;
      }
      if ( !(_WORD)v4 )
        goto LABEL_24;
      v15 = (void *)ExAllocatePool2(256LL, 16 * v4, 1433891909LL);
      *(_QWORD *)(v12 + 24) = v15;
      if ( v15 )
      {
        *(_WORD *)(v12 + 16) = v4;
        memmove(v15, a4, 16 * v4);
        if ( !*(_QWORD *)(v12 + 8) )
        {
          Timer = ExAllocateTimer((__int64)PeriodicCaptureStateTimerCallback, v10, 8u);
          *(_QWORD *)(v12 + 8) = Timer;
          if ( !Timer )
          {
            ExFreePoolWithTag(*(PVOID *)(v12 + 24), 0);
            *(_QWORD *)(v12 + 24) = 0LL;
            *(_WORD *)(v12 + 16) = 0;
            goto LABEL_11;
          }
          *(_QWORD *)(v12 + 56) = v10;
          *(_QWORD *)(v12 + 48) = SendCaptureStateNotificationsWorker;
          *(_QWORD *)(v12 + 32) = 0LL;
        }
        *((_QWORD *)&v21 + 1) = -1LL;
        v17 = *(_QWORD *)(v12 + 8);
        v18 = -10000000LL * a2;
        *(_QWORD *)v12 = v18;
        ExSetTimer(v17, v18, 0LL, (__int64)&v21);
        *(_DWORD *)(v12 + 64) = 1;
        goto LABEL_24;
      }
    }
LABEL_11:
    v5 = -1073741801;
    goto LABEL_24;
  }
  return (unsigned int)-1073741811;
}
