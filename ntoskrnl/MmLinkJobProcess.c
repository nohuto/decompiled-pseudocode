char __fastcall MmLinkJobProcess(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // r14
  __int64 v4; // r12
  int inserted; // r15d
  struct _KTHREAD *CurrentThread; // r13
  __int64 v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rbx
  _QWORD *v10; // rsi
  __int64 v11; // r12
  _QWORD *Pool; // rax
  __int64 ***v13; // rax
  _QWORD *v14; // rcx
  _QWORD *i; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  __int64 *v18; // rax
  __int64 *v19; // rcx
  __int64 *v20; // rsi
  __int64 v21; // r12
  bool v22; // zf
  $C71981A45BEB2B45F82C232A7085991E *v23; // rax
  __int64 *v24; // rcx
  __int64 *v25; // rax
  __int64 j; // rsi
  __int64 *v28; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v29; // [rsp+28h] [rbp-8h]

  v2 = (unsigned __int64 *)(a2 + 2352);
  v4 = a1;
  v29 = &v28;
  inserted = 0;
  v28 = (__int64 *)&v28;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = KeAbPreAcquire(a2 + 2352, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v7, (__int64)v2);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  if ( (*(_DWORD *)(a2 + 2172) & 0x10) == 0 )
  {
    v9 = (_QWORD *)(a2 + 2360);
    v10 = *(_QWORD **)(a2 + 2360);
    if ( v10 != (_QWORD *)(a2 + 2360) )
    {
      while ( 1 )
      {
        v11 = v10[2];
        Pool = MiAllocatePool(256, 0x40uLL, 0x6E53694Du);
        if ( !Pool )
          break;
        Pool[7] = v11;
        Pool[4] = *(v10 - 1);
        v13 = (__int64 ***)(Pool + 5);
        v14 = v29;
        if ( *v29 != (__int64 *)&v28 )
          goto LABEL_43;
        v13[1] = v29;
        *v13 = &v28;
        *v14 = v13;
        v29 = (__int64 **)v13;
        v10 = (_QWORD *)*v10;
        if ( v10 == v9 )
          goto LABEL_10;
      }
      inserted = -1073741670;
LABEL_10:
      v4 = a1;
    }
    for ( i = (_QWORD *)*v9; (_QWORD *)*v9 != v9; i = (_QWORD *)*v9 )
      MiRemoveSharedCommitNode(i[2], a2, 1LL);
    if ( inserted < 0 )
    {
      while ( 1 )
      {
        v24 = v28;
        if ( v28 == (__int64 *)&v28 )
          break;
        if ( (__int64 **)v28[1] != &v28 )
          goto LABEL_43;
        v25 = (__int64 *)*v28;
        if ( *(__int64 **)(*v28 + 8) != v28 )
          goto LABEL_43;
        v28 = (__int64 *)*v28;
        v25[1] = (__int64)&v28;
        ExFreePoolWithTag(v24 - 5, 0);
      }
    }
    else if ( (*(_DWORD *)(a2 + 2172) & 8) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a2 + 2172), 8u);
    }
  }
  v16 = *(_QWORD **)(v4 + 48);
  v17 = (_QWORD *)(a2 + 1480);
  if ( *v16 != v4 + 40 )
LABEL_43:
    __fastfail(3u);
  *v17 = v4 + 40;
  *(_QWORD *)(a2 + 1488) = v16;
  *v16 = v17;
  *(_QWORD *)(v4 + 48) = v17;
  *(_QWORD *)(a2 + 1296) = v4;
  while ( 1 )
  {
    v18 = v28;
    if ( v28 == (__int64 *)&v28 )
      break;
    if ( (__int64 **)v28[1] != &v28 )
      goto LABEL_43;
    v19 = (__int64 *)*v28;
    if ( *(__int64 **)(*v28 + 8) != v28 )
      goto LABEL_43;
    v28 = (__int64 *)*v28;
    v19[1] = (__int64)&v28;
    v20 = v18 - 5;
    if ( inserted >= 0 )
    {
      v21 = v20[7];
      if ( v20[4] )
      {
        do
        {
          inserted = MiInsertSharedCommitNode(v21, a2, 1LL);
          if ( inserted < 0 )
            break;
          v22 = v20[4]-- == 1;
        }
        while ( !v22 );
        v2 = (unsigned __int64 *)(a2 + 2352);
      }
    }
    ExFreePoolWithTag(v20, 0);
  }
  if ( inserted < 0 )
  {
    for ( j = a2 + 2360; *(_QWORD *)j != j; MiRemoveSharedCommitNode(*(_QWORD *)(*(_QWORD *)j + 16LL), a2, 1LL) )
      ;
    _InterlockedAnd((volatile signed __int32 *)(a2 + 2172), 0xFFFFFFF7);
    _InterlockedOr((volatile signed __int32 *)(a2 + 2172), 0x10u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  LOBYTE(v23) = KeAbPostRelease((ULONG_PTR)v2);
  v22 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v22 )
  {
    v23 = &CurrentThread->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v23->ApcState.ApcListHead[0].Flink != v23 )
      LOBYTE(v23) = KiCheckForKernelApcDelivery();
  }
  return (char)v23;
}
