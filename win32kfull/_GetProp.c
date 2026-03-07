__int64 __fastcall GetProp(__int64 a1, __int64 a2, unsigned int a3)
{
  LIST_ENTRY *v3; // rbx
  struct _LIST_ENTRY *Flink; // xmm1_8
  __int64 v8; // rax
  __int64 Prop; // rbx
  int v11; // esi
  tagObjLock **v12; // rbx
  __int64 v13; // rax
  __int64 v14; // [rsp+20h] [rbp-49h] BYREF
  char v15; // [rsp+28h] [rbp-41h]
  __int128 v16; // [rsp+30h] [rbp-39h] BYREF
  char v17; // [rsp+40h] [rbp-29h]
  char v18; // [rsp+48h] [rbp-21h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-19h] BYREF

  v3 = *(LIST_ENTRY **)(a1 + 144);
  v14 = gDomainDummyLock;
  v15 = 0;
  v16 = 0LL;
  v17 = 0;
  Flink = v3[1].Flink;
  ApcState.ApcListHead[0] = *v3;
  v18 = 0;
  ApcState.ApcListHead[1].Flink = Flink;
  v8 = SGDGetUserSessionState(a1);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v8 + 8)) != 1 && IS_USERCRIT_OWNED_AT_ALL() )
  {
    v18 = 1;
    if ( v3 == (LIST_ENTRY *)gObjDummyLock )
      v3 = 0LL;
    *(_QWORD *)&v16 = v3;
    v11 = 0;
    v12 = (tagObjLock **)&v16;
    do
    {
      if ( *v12 )
        tagObjLock::LockExclusive(*v12);
      ++v11;
      ++v12;
    }
    while ( !v11 );
    v17 = 1;
  }
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), a2, a3);
  if ( !Prop && !a3 && (*(_DWORD *)(a1 + 324) & 1) != 0 )
  {
    if ( (_WORD)a2 == 0xA914 )
    {
      SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(&v14);
      return 0LL;
    }
    LockRefactorStagingAssertOwned(*(const struct tagObjLock **)(a1 + 144));
    v13 = *(_QWORD *)(a1 + 16);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(**(PRKPROCESS **)(v13 + 424), &ApcState);
    Prop = GetSharedPropForFilteredProcesses(a1, a2);
    KeUnstackDetachProcess(&ApcState);
  }
  if ( v18 && v17 )
  {
    if ( (_QWORD)v16 )
      tagObjLock::UnLockExclusive((tagObjLock *)v16);
  }
  return Prop;
}
