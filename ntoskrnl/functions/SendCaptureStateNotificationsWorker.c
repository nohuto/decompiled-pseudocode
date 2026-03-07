void __fastcall SendCaptureStateNotificationsWorker(__int64 a1)
{
  __int64 v2; // rsi
  volatile signed __int64 *v3; // rdi
  __int64 v4; // r14
  _DWORD *Pool2; // rax
  _DWORD *v6; // r12
  __int64 v7; // rdi
  __int64 *GuidEntryByGuid; // rax
  __int64 *v9; // r13
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v11; // r14
  __int64 v12; // r10
  bool v13; // zf
  int v14; // eax
  __int64 v15; // rsi
  char v16; // [rsp+28h] [rbp-79h]
  int v17; // [rsp+2Ch] [rbp-75h] BYREF
  volatile signed __int32 *v18; // [rsp+30h] [rbp-71h] BYREF
  __int64 v19; // [rsp+40h] [rbp-61h]
  _DWORD v20[30]; // [rsp+48h] [rbp-59h] BYREF
  __int128 v21; // [rsp+C0h] [rbp+1Fh] BYREF

  v18 = 0LL;
  v21 = 0LL;
  memset(&v20[2], 0, 0x70uLL);
  v3 = (volatile signed __int64 *)(a1 + 688);
  v19 = *(_QWORD *)(a1 + 1080);
  v2 = v19;
  ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
  *(_DWORD *)(v19 + 64) = 0;
  if ( !*(_DWORD *)(a1 + 320)
    || (v4 = *(unsigned __int16 *)(v2 + 16), !(_WORD)v4)
    || (Pool2 = (_DWORD *)ExAllocatePool2(256LL, 16LL * *(unsigned __int16 *)(v2 + 16), 1953985605LL),
        (v6 = Pool2) == 0LL) )
  {
LABEL_22:
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    goto LABEL_25;
  }
  memmove(Pool2, *(const void **)(v2 + 24), 16LL * (unsigned int)v4);
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
  KeAbPostRelease(a1 + 688);
  v20[0] = 3;
  v20[1] = 120;
  v7 = v4;
  do
  {
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(*(_QWORD *)(a1 + 1096), v6, 0);
    v9 = GuidEntryByGuid;
    if ( GuidEntryByGuid )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
      v11 = v9[7];
      v12 = 0LL;
      v9[52] = (__int64)KeGetCurrentThread();
      *(_OWORD *)&v20[10] = *(_OWORD *)v6;
      if ( (__int64 *)v11 != v9 + 7 )
      {
        while ( 1 )
        {
          v13 = (*(_BYTE *)(v11 + 98) & 1) == 0;
          v17 = v12;
          if ( !v13 )
            goto LABEL_14;
          if ( !EtwpGetEnableInfoIndex((__int64)v9, *(_DWORD *)a1, &v17) )
            goto LABEL_14;
          v16 = *(_BYTE *)(v11 + 100);
          if ( ((unsigned __int8)(1 << v17) & (unsigned __int8)v16) == 0 )
            goto LABEL_14;
          EtwpComputeRegEntryEnableInfo(v11, (__int64)&v20[18]);
          HIWORD(v20[19]) = *(_WORD *)a1;
          v20[18] = 2;
          v14 = EtwpBuildNotificationPacket((__int64)v9, v20, v16, &v18);
          v12 = 0LL;
          if ( v14 >= 0 )
            break;
LABEL_15:
          if ( (__int64 *)v11 == v9 + 7 )
            goto LABEL_16;
        }
        EtwpSendDataBlock(v11, (__int64)v18);
        EtwpUnreferenceDataBlock(v18);
        v12 = 0LL;
LABEL_14:
        v11 = *(_QWORD *)v11;
        goto LABEL_15;
      }
LABEL_16:
      v9[52] = v12;
      ExReleasePushLockEx(v9 + 51, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      EtwpUnreferenceGuidEntry(v9);
    }
    v6 += 4;
    --v7;
  }
  while ( v7 );
  v15 = v19;
  v3 = (volatile signed __int64 *)(a1 + 688);
  if ( *(_DWORD *)(a1 + 320) )
  {
    *((_QWORD *)&v21 + 1) = -1LL;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
    if ( *(_WORD *)(v15 + 16) && !*(_DWORD *)(v15 + 64) )
    {
      ExSetTimer(*(_QWORD *)(v15 + 8), *(_QWORD *)v15, 0LL, (__int64)&v21);
      *(_DWORD *)(v15 + 64) = 1;
    }
    goto LABEL_22;
  }
LABEL_25:
  EtwpReleaseLoggerContext((unsigned int *)a1, 0);
}
