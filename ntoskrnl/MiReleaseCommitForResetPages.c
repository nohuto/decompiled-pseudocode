LONG __fastcall MiReleaseCommitForResetPages(ULONG_PTR a1)
{
  _QWORD *SharedVm; // rax
  __int64 v3; // r8
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v5; // r15
  __int64 v6; // r14
  _QWORD *v7; // rcx
  _QWORD *i; // rbx
  _QWORD **v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  unsigned __int64 v12; // rdi
  volatile LONG *v13; // rbx
  KIRQL v14; // al
  struct _KEVENT *v15; // rbx
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx

  KeForceAttachProcess(a1, 0LL);
  SharedVm = MiGetSharedVm(a1 + 1664);
  CurrentThread = KeGetCurrentThread();
  v5 = SharedVm;
  v6 = SharedVm[4];
  if ( (*(_DWORD *)(v6 + 48) & 1) != 0 )
  {
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
    v7 = *(_QWORD **)(a1 + 2008);
    i = 0LL;
    while ( v7 )
    {
      i = v7;
      v7 = (_QWORD *)*v7;
    }
    while ( i )
    {
      MiLockVad((__int64)CurrentThread, (__int64)i);
      if ( MiIsVadEligibleForCommitRelease((__int64)i) )
        MiWalkResetCommitPages(i);
      MiUnlockVad((__int64)CurrentThread, (__int64)i);
      v9 = (_QWORD **)i[1];
      v10 = i;
      if ( v9 )
      {
        v11 = *v9;
        for ( i = (_QWORD *)i[1]; v11; v11 = (_QWORD *)*v11 )
          i = v11;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v10 )
            break;
          v10 = i;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
  }
  v12 = _InterlockedExchange64((volatile __int64 *)(a1 + 1872), 0LL);
  if ( v12 )
    MiReturnCommit(*(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1 + 1838)), v12, v3);
  v13 = (volatile LONG *)MiGetSharedVm(a1 + 1664);
  v14 = ExAcquireSpinLockExclusive(v13);
  *((_DWORD *)v13 + 1) = 0;
  v15 = *(struct _KEVENT **)(v6 + 40);
  *(_QWORD *)(v6 + 40) = 0LL;
  v16 = *(_QWORD *)(v6 + 32);
  if ( v16 <= v12 )
    v17 = 0LL;
  else
    v17 = v16 - v12;
  *(_QWORD *)(v6 + 32) = v17;
  v5[1] += v12;
  MiUnlockWorkingSetExclusive(a1 + 1664, v14);
  MiLogResetPagesCommitRelease();
  KeForceDetachProcess(0LL, 0);
  return KeSetEvent(v15, 0, 0);
}
