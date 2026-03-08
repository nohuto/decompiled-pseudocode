/*
 * XREFs of MiInsertPageFileInList @ 0x140835F30
 * Callers:
 *     MmStoreRegister @ 0x140834CA4 (MmStoreRegister.c)
 *     MiCreatePagingFile @ 0x140834F7C (MiCreatePagingFile.c)
 *     MiCreateSpecialPurposeMemoryPageFile @ 0x140A444FC (MiCreateSpecialPurposeMemoryPageFile.c)
 * Callees:
 *     MiUpdateReserveClusterInfo @ 0x14020B44C (MiUpdateReserveClusterInfo.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiMakePartitionActive @ 0x1402A6140 (MiMakePartitionActive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     MiNumberWsSwapPagefiles @ 0x140361990 (MiNumberWsSwapPagefiles.c)
 *     MiUpdatePageFileList @ 0x140392600 (MiUpdatePageFileList.c)
 *     MiIncreaseCommitLimits @ 0x140392864 (MiIncreaseCommitLimits.c)
 *     PsCreateSystemThreadEx @ 0x1407DE330 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall MiInsertPageFileInList(__int64 a1)
{
  unsigned __int64 v1; // r15
  __int64 v2; // r8
  __int64 v4; // r12
  _QWORD *v5; // rdx
  __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  volatile signed __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r14
  int v12; // r8d
  __int16 v13; // dx
  unsigned int v14; // eax
  __int64 *v15; // r9
  __int64 v16; // r10
  __int64 v17; // rax
  unsigned __int8 v18; // cf
  int v19; // eax
  __int16 v20; // ax
  char v21; // al
  bool v22; // zf
  KPRIORITY v23; // edx
  BOOLEAN v24; // r8
  int SystemThread; // r14d
  _QWORD v27[4]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+8h] BYREF

  v28 = 0LL;
  v1 = *(_QWORD *)a1;
  *(_BYTE *)(a1 + 206) |= 1u;
  v2 = 0LL;
  v4 = *(_QWORD *)(a1 + 8);
  memset(v27, 0, sizeof(v27));
  if ( *(_DWORD *)(a1 + 72) )
  {
    do
    {
      v5 = *(_QWORD **)(*(_QWORD *)(a1 + 64) + 8 * v2);
      v2 = (unsigned int)(v2 + 1);
      *v5 = 2575857425LL;
    }
    while ( (unsigned int)v2 < *(_DWORD *)(a1 + 72) );
  }
  v6 = *(_QWORD *)(a1 + 248);
  CurrentThread = KeGetCurrentThread();
  v8 = (volatile signed __int64 *)(v6 + 1080);
  --CurrentThread->SpecialApcDisable;
  v9 = KeAbPreAcquire(v6 + 1080, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 1080), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 1080), v9, v6 + 1080);
  if ( v10 )
    *(_BYTE *)(v10 + 18) = 1;
  if ( dword_140C67AC4 )
  {
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1080));
    KeAbPostRelease(v6 + 1080);
    v22 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v22 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return 3221225738LL;
  }
  if ( !*(_QWORD *)(v6 + 184) )
  {
    if ( !(unsigned int)MiMakePartitionActive(v6) )
    {
      if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1080));
      KeAbPostRelease(v6 + 1080);
      v22 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v22
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      return 3221225773LL;
    }
    v27[0] = v6;
    memset(&v27[1], 0, 24);
    KeInitializeEvent((PRKEVENT)&v27[1], NotificationEvent, 0);
    SystemThread = PsCreateSystemThreadEx(
                     (__int64)&v28,
                     0x1FFFFF,
                     0LL,
                     *(void **)(*(_QWORD *)(v6 + 200) + 120LL),
                     0LL,
                     (__int64)MiModifiedPageWriter,
                     (__int64)v27,
                     0LL,
                     0LL);
    if ( SystemThread < 0 )
    {
      if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1080));
      KeAbPostRelease(v6 + 1080);
      v22 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v22
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      return (unsigned int)SystemThread;
    }
    KeWaitForSingleObject(&v27[1], WrKernel, 0, 0, 0LL);
    *(_QWORD *)(v6 + 184) = v28;
  }
  v11 = *(unsigned int *)(v6 + 17048);
  if ( (unsigned int)v11 >= 0x10 )
  {
LABEL_65:
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1080));
    KeAbPostRelease(v6 + 1080);
    v22 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v22 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return 3221225623LL;
  }
  v12 = 0;
  v13 = *(_WORD *)(a1 + 204) ^ (*(_WORD *)(a1 + 204) ^ v11) & 0xF;
  *(_WORD *)(a1 + 204) = v13;
  v14 = *(_DWORD *)(v6 + 17048);
  if ( v14 )
  {
    v15 = (__int64 *)(v6 + 17056);
    v16 = v14;
    do
    {
      v17 = *v15++;
      v18 = _bittest16((const signed __int16 *)(v17 + 204), 0xBu);
      v19 = v12 + 1;
      if ( !v18 )
        v19 = v12;
      v12 = v19;
      --v16;
    }
    while ( v16 );
    if ( v19 )
    {
      if ( (v13 & 0x810) != 0 )
      {
        if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1080));
        KeAbPostRelease(v6 + 1080);
        v22 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v22
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        return 3221225659LL;
      }
      *(_WORD *)(a1 + 204) = v13 | 0x20;
    }
  }
  v20 = *(_WORD *)(a1 + 204);
  if ( (v20 & 0x50) != 0 )
  {
    if ( (v20 & 0x10) == 0 || !(unsigned int)MiNumberWsSwapPagefiles(v6) )
    {
      MiUpdatePageFileList(a1, 1);
      *(_QWORD *)(v6 + 8 * v11 + 17056) = a1;
      *(_DWORD *)(v6 + 17048) = v11 + 1;
LABEL_23:
      v21 = _InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v21 & 2) != 0 && (v21 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1080));
      KeAbPostRelease(v6 + 1080);
      v22 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v22
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      MiUpdateReserveClusterInfo(v6, 0LL, 0);
      KeSetEvent((PRKEVENT)(v6 + 920), v23, v24);
      return 0LL;
    }
    goto LABEL_65;
  }
  if ( (unsigned int)MiIncreaseCommitLimits(v6, v1, v4, 0, a1) )
  {
    if ( (*(_BYTE *)(a1 + 204) & 0x20) == 0 && !*(_DWORD *)(v6 + 1076) )
      *(_DWORD *)(v6 + 1076) = 1;
    goto LABEL_23;
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1080));
  KeAbPostRelease(v6 + 1080);
  v22 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v22 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return 3221225713LL;
}
