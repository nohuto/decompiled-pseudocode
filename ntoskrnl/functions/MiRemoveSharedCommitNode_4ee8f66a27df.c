void __fastcall MiRemoveSharedCommitNode(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // r15
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 *v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned __int64 *v14; // rdi
  bool v15; // zf
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 **v18; // rcx
  unsigned __int64 *v19; // [rsp+20h] [rbp-48h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]
  __int64 v21; // [rsp+88h] [rbp+20h]

  if ( (a2 & 1) != 0 )
  {
    v20 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
    v6 = 0LL;
  }
  else
  {
    v6 = a2;
    if ( !(unsigned int)MiIncludeSharedCommit(a1)
      || (*(_DWORD *)(a1 + 56) & 0x20) != 0
      || (*(_DWORD *)(a2 + 2172) & 0x10) != 0 )
    {
      return;
    }
    v20 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v8 = *(_QWORD *)a1;
  v21 = v8;
  v19 = (unsigned __int64 *)(v8 + 72);
  if ( (a3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v9 = KeAbPreAcquire(v6 + 2352, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 2352), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 2352), v9, v6 + 2352);
    v8 = v21;
    if ( v10 )
      *(_BYTE *)(v10 + 18) = 1;
  }
  if ( (a3 & 2) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v11 = (unsigned __int64 *)(v8 + 40);
    v12 = KeAbPreAcquire(v8 + 40, 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v12, (__int64)v11);
    if ( v13 )
      *(_BYTE *)(v13 + 18) = 1;
  }
  v14 = (unsigned __int64 *)*v19;
  if ( *v19 )
  {
    do
    {
      if ( a2 > v14[3] )
      {
        v14 = (unsigned __int64 *)v14[1];
      }
      else
      {
        if ( a2 >= v14[3] )
          break;
        v14 = (unsigned __int64 *)*v14;
      }
    }
    while ( v14 );
  }
  v15 = v14[4]-- == 1;
  if ( v15 )
  {
    RtlAvlRemoveNode(v19, v14);
    v16 = -MiGetCommittedPages((_QWORD *)a1);
    if ( v6 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 2344), v16);
      v17 = v14[5];
      if ( *(unsigned __int64 **)(v17 + 8) != v14 + 5 || (v18 = (unsigned __int64 **)v14[6], *v18 != v14 + 5) )
        __fastfail(3u);
      *v18 = (unsigned __int64 *)v17;
      *(_QWORD *)(v17 + 8) = v18;
      if ( (a3 & 4) == 0 && (*(_DWORD *)(v6 + 2172) & 8) != 0 )
        MiRemoveSharedCommitNode(a1, *(_QWORD *)(v6 + 1296) | 1LL, 3LL);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 1552), v16);
    }
  }
  else
  {
    v14 = 0LL;
  }
  if ( (a3 & 2) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v21 + 40));
    KeAbPostRelease(v21 + 40);
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( (a3 & 1) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 2352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 2352));
    KeAbPostRelease(v6 + 2352);
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
}
