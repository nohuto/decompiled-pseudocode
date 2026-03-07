__int64 __fastcall NtUserGetQueueStatus(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // r14
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rbp
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rcx
  int v10; // r14d
  unsigned int DLT; // eax
  int v12; // esi
  char *v13; // rdi
  tagDomLock *v14; // rcx
  tagObjLock **v15; // rdi
  tagDomLock *v16; // rcx
  int v17; // edx
  unsigned int v18; // ebx
  tagDomLock *DomainLockRef; // [rsp+40h] [rbp-48h]
  char v21; // [rsp+48h] [rbp-40h] BYREF
  __int64 v22; // [rsp+50h] [rbp-38h]
  char v23; // [rsp+58h] [rbp-30h]
  __int128 v24; // [rsp+60h] [rbp-28h] BYREF
  char v25; // [rsp+70h] [rbp-18h]

  v3 = a1;
  EnterSharedCrit(a1, a2, a3);
  v5 = SGDGetUserSessionState(v4);
  v6 = 0;
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v5 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v7 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v7 = *ThreadWin32Thread;
  if ( *(_QWORD *)(v7 + 1504) && (v3 & 8) != 0 )
    xxxDrainQueueCompletions(1LL);
  v10 = v3 & 0x5DFF;
  DLT = DLT_THREADINFO::getDLT(v9);
  v24 = 0LL;
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v21 = 0;
  v22 = gDomainDummyLock;
  v23 = 0;
  v25 = 0;
  if ( v7 + 392 == gObjDummyLock )
    *(_QWORD *)&v24 = 0LL;
  else
    *(_QWORD *)&v24 = v7 + 392;
  v12 = 0;
  v13 = &v21;
  do
  {
    v14 = (tagDomLock *)*((_QWORD *)v13 - 1);
    if ( v14 )
    {
      if ( *v13 )
        tagDomLock::LockExclusive(v14);
      else
        tagDomLock::LockShared(v14);
    }
    ++v12;
    v13 += 16;
  }
  while ( !v12 );
  v15 = (tagObjLock **)&v24;
  do
  {
    if ( *v15 )
      tagObjLock::LockExclusive(*v15);
    ++v6;
    ++v15;
  }
  while ( !v6 );
  v16 = *(tagDomLock **)(v7 + 448);
  v25 = 1;
  v17 = *((_DWORD *)v16 + 1);
  _InterlockedAnd((volatile signed __int32 *)v16 + 1, ~v10);
  v18 = (unsigned __int16)(v10 & v17) | ((unsigned __int16)(v10 & (*(_WORD *)(*(_QWORD *)(v7 + 448) + 8LL) | *(_WORD *)(*(_QWORD *)(v7 + 448) + 12LL))) << 16);
  if ( v25 )
  {
    if ( (_QWORD)v24 )
      tagObjLock::UnLockExclusive((tagObjLock *)v24);
    v16 = DomainLockRef;
    if ( DomainLockRef )
    {
      if ( v21 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
  }
  UserSessionSwitchLeaveCrit(v16);
  return v18;
}
