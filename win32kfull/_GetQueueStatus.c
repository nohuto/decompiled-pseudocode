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
