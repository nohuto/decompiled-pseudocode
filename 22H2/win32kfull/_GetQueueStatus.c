/*
 * XREFs of _GetQueueStatus @ 0x1C01B3518
 * Callers:
 *     NtUserGetThreadState @ 0x1C009C8B0 (NtUserGetThreadState.c)
 * Callees:
 *     xxxDrainQueueCompletions @ 0x1C008AFF0 (xxxDrainQueueCompletions.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C01B2CAC (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@VDLT_THREADINFO@@@@QEAA@AEAUt.c)
 */

__int64 __fastcall GetQueueStatus(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // bx
  __int64 v5; // rdx
  struct tagTHREADINFO *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int64 v10; // rcx
  int v11; // edx
  unsigned int v12; // edi
  tagDomLock *v14; // [rsp+20h] [rbp-48h] BYREF
  char v15; // [rsp+28h] [rbp-40h]
  tagObjLock *v16; // [rsp+40h] [rbp-28h]
  char v17; // [rsp+50h] [rbp-18h]

  v4 = a1;
  v6 = PtiCurrentShared(a1, a2, a3, a4);
  if ( *((_QWORD *)v6 + 188) && (v4 & 8) != 0 )
    xxxDrainQueueCompletions(1LL, v5, v7, v8);
  v9 = v4 & 0x5DFF;
  DomainShared<DLT_THREADINFO>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
    (__int64)&v14,
    (struct tagTHREADINFO *)((char *)v6 + 392));
  v10 = *((_QWORD *)v6 + 56);
  v11 = *(_DWORD *)(v10 + 4);
  _InterlockedAnd((volatile signed __int32 *)(v10 + 4), ~v9);
  v12 = (unsigned __int16)(v9 & v11) | ((unsigned __int16)(v9 & (*(_WORD *)(*((_QWORD *)v6 + 56) + 8LL) | *(_WORD *)(*((_QWORD *)v6 + 56) + 12LL))) << 16);
  if ( v17 )
  {
    if ( v16 )
      tagObjLock::UnLockExclusive(v16);
    if ( v14 )
    {
      if ( v15 )
        tagDomLock::UnLockExclusive(v14);
      else
        tagDomLock::UnLockShared(v14);
    }
  }
  return v12;
}
