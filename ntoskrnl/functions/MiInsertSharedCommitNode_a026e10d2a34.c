__int64 __fastcall MiInsertSharedCommitNode(_QWORD *a1, unsigned __int64 a2, int a3)
{
  __int64 *v6; // rcx
  int inserted; // r12d
  unsigned __int64 v9; // r13
  __int64 v10; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int64 *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rbx
  bool v17; // r14
  _QWORD *v18; // rbx
  _QWORD *v19; // rax
  bool v20; // zf
  _QWORD *Pool; // rax
  unsigned __int64 CommittedPages; // r8
  unsigned __int64 v23; // r9
  _QWORD *v24; // rcx
  _QWORD *v25; // rdx
  unsigned __int64 *v26; // [rsp+28h] [rbp-50h]
  __int64 v27; // [rsp+30h] [rbp-48h]
  SIZE_T v28; // [rsp+38h] [rbp-40h]
  unsigned __int64 v29; // [rsp+40h] [rbp-38h]

  if ( !(unsigned int)MiIncludeSharedCommit((__int64)a1) || (v6[7] & 0x20) != 0 )
    return 0LL;
  inserted = 0;
  if ( (a2 & 1) != 0 )
  {
    v28 = 40LL;
    v9 = 0LL;
    v29 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  else
  {
    v9 = a2;
    if ( (*(_DWORD *)(a2 + 2172) & 0x10) != 0 )
      return 0LL;
    v29 = 0LL;
    v28 = 64LL;
  }
  v10 = *v6;
  CurrentThread = KeGetCurrentThread();
  v26 = (unsigned __int64 *)(v10 + 72);
  v27 = v10;
  if ( (a3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v12 = KeAbPreAcquire(v9 + 2352, 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 2352), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v9 + 2352), v12, v9 + 2352);
    v10 = v27;
    if ( v13 )
      *(_BYTE *)(v13 + 18) = 1;
  }
  if ( (a3 & 2) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v14 = (unsigned __int64 *)(v10 + 40);
    v15 = KeAbPreAcquire(v10 + 40, 0LL);
    v16 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
      ExfAcquirePushLockExclusiveEx(v14, v15, (__int64)v14);
    if ( v16 )
      *(_BYTE *)(v16 + 18) = 1;
  }
  v17 = 0;
  v18 = (_QWORD *)*v26;
  if ( !*v26 )
    goto LABEL_39;
  while ( a2 <= v18[3] )
  {
    if ( a2 >= v18[3] )
    {
      ++v18[4];
      goto LABEL_25;
    }
    v19 = (_QWORD *)*v18;
    if ( !*v18 )
      goto LABEL_39;
LABEL_20:
    v18 = v19;
  }
  v19 = (_QWORD *)v18[1];
  if ( v19 )
    goto LABEL_20;
  v17 = 1;
LABEL_39:
  Pool = MiAllocatePool(256, v28, 0x6E53694Du);
  if ( Pool )
  {
    Pool[4] = 1LL;
    Pool[3] = a2;
    CommittedPages = MiGetCommittedPages(a1);
    if ( v9 )
    {
      *(_QWORD *)(v23 + 56) = a1;
      v24 = *(_QWORD **)(v9 + 2368);
      v25 = (_QWORD *)(v23 + 40);
      if ( *v24 != v9 + 2360 )
        __fastfail(3u);
      *v25 = v9 + 2360;
      *(_QWORD *)(v23 + 48) = v24;
      *v24 = v25;
      *(_QWORD *)(v9 + 2368) = v25;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 2344), CommittedPages);
      RtlAvlInsertNodeEx(v26, (unsigned __int64)v18, v17, v23);
      if ( (*(_DWORD *)(v9 + 2172) & 8) != 0 )
      {
        inserted = MiInsertSharedCommitNode(a1, *(_QWORD *)(v9 + 1296) | 1LL, 3LL);
        if ( inserted < 0 )
          MiRemoveSharedCommitNode(a1, v9, a3 | 7u);
      }
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 1552), CommittedPages);
      RtlAvlInsertNodeEx(v26, (unsigned __int64)v18, v17, v23);
    }
  }
  else
  {
    inserted = -1073741670;
  }
LABEL_25:
  if ( (a3 & 2) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v27 + 40));
    KeAbPostRelease(v27 + 40);
    v20 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v20 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( (a3 & 1) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 2352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v9 + 2352));
    KeAbPostRelease(v9 + 2352);
    v20 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v20 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  return (unsigned int)inserted;
}
