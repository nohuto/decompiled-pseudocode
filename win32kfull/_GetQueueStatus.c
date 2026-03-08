/*
 * XREFs of _GetQueueStatus @ 0x1C01B46D8
 * Callers:
 *     NtUserGetThreadState @ 0x1C00D2960 (NtUserGetThreadState.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxDrainQueueCompletions @ 0x1C00B6940 (xxxDrainQueueCompletions.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C01B3E6C (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@VDLT_THREADINFO@@@@QEAA@AEAUt.c)
 */

__int64 __fastcall GetQueueStatus(__int64 a1)
{
  __int16 v1; // bx
  struct tagTHREADINFO *v2; // rdi
  int v3; // ebx
  __int64 v4; // rcx
  int v5; // edx
  unsigned int v6; // edi
  tagDomLock *v8; // [rsp+20h] [rbp-48h] BYREF
  char v9; // [rsp+28h] [rbp-40h]
  tagObjLock *v10; // [rsp+40h] [rbp-28h]
  char v11; // [rsp+50h] [rbp-18h]

  v1 = a1;
  v2 = PtiCurrentShared(a1);
  if ( *((_QWORD *)v2 + 188) && (v1 & 8) != 0 )
    xxxDrainQueueCompletions(1LL);
  v3 = v1 & 0x5DFF;
  DomainShared<DLT_THREADINFO>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
    (__int64)&v8,
    (struct tagTHREADINFO *)((char *)v2 + 392));
  v4 = *((_QWORD *)v2 + 56);
  v5 = *(_DWORD *)(v4 + 4);
  _InterlockedAnd((volatile signed __int32 *)(v4 + 4), ~v3);
  v6 = (unsigned __int16)(v3 & v5) | ((unsigned __int16)(v3 & (*(_WORD *)(*((_QWORD *)v2 + 56) + 8LL) | *(_WORD *)(*((_QWORD *)v2 + 56) + 12LL))) << 16);
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
