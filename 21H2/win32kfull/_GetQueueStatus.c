/*
 * XREFs of _GetQueueStatus @ 0x1C014B0C4
 * Callers:
 *     NtUserGetThreadState @ 0x1C00EB1F0 (NtUserGetThreadState.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxDrainQueueCompletions @ 0x1C00A5010 (xxxDrainQueueCompletions.c)
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C014B1A4 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@VDLT_THREADINFO@@@@QEAA@AEAUt.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall GetQueueStatus(__int16 a1)
{
  __int64 ThreadWin32Thread; // rdi
  int v3; // ebx
  __int64 v4; // rcx
  int v5; // edx
  unsigned int v6; // edi
  tagDomLock *v8; // [rsp+20h] [rbp-48h] BYREF
  char v9; // [rsp+28h] [rbp-40h]
  tagObjLock *v10; // [rsp+40h] [rbp-28h]
  char v11; // [rsp+50h] [rbp-18h]

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( *(_QWORD *)(ThreadWin32Thread + 1464) && (a1 & 8) != 0 )
    xxxDrainQueueCompletions(1u);
  v3 = a1 & 0x5DFF;
  DomainShared<DLT_THREADINFO>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
    &v8,
    ThreadWin32Thread + 392);
  v4 = *(_QWORD *)(ThreadWin32Thread + 448);
  v5 = *(_DWORD *)(v4 + 4);
  _InterlockedAnd((volatile signed __int32 *)(v4 + 4), ~v3);
  v6 = (unsigned __int16)(v3 & v5) | ((unsigned __int16)(v3 & (*(_WORD *)(*(_QWORD *)(ThreadWin32Thread + 448) + 8LL) | *(_WORD *)(*(_QWORD *)(ThreadWin32Thread + 448) + 12LL))) << 16);
  if ( v11 )
  {
    if ( v10 )
      tagObjLock::UnLockExclusive(v10);
    if ( v8 )
    {
      if ( v9 )
        tagDomLock::UnLockExclusive(v8);
      else
        tagDomLock::UnLockShared(v8);
    }
  }
  return v6;
}
