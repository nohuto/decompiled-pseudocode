__int64 __fastcall InternalSetProp(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  LIST_ENTRY *v4; // rbx
  struct _LIST_ENTRY *Flink; // xmm1_8
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 GlobalAtomTableOfWindow; // rax
  int v14; // esi
  tagObjLock **v15; // rbx
  __int64 v16; // rax
  int v17; // ebx
  __int64 v18; // [rsp+20h] [rbp-59h] BYREF
  __int64 v19; // [rsp+28h] [rbp-51h]
  __int128 v20; // [rsp+30h] [rbp-49h] BYREF
  int v21; // [rsp+40h] [rbp-39h]
  char v22; // [rsp+48h] [rbp-31h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-29h] BYREF

  v4 = *(LIST_ENTRY **)(a1 + 144);
  v18 = gDomainDummyLock;
  LOBYTE(v19) = 0;
  v20 = 0LL;
  LOBYTE(v21) = 0;
  Flink = v4[1].Flink;
  ApcState.ApcListHead[0] = *v4;
  v22 = 0;
  ApcState.ApcListHead[1].Flink = Flink;
  if ( !IS_USERCRIT_OWNED_EXCLUSIVE(a1) && IS_USERCRIT_OWNED_AT_ALL(v10) )
  {
    v22 = 1;
    if ( v4 == (LIST_ENTRY *)gObjDummyLock )
      v4 = 0LL;
    *(_QWORD *)&v20 = v4;
    v14 = 0;
    v15 = (tagObjLock **)&v20;
    do
    {
      if ( *v15 )
        tagObjLock::LockExclusive(*v15);
      ++v14;
      ++v15;
    }
    while ( !v14 );
    LOBYTE(v21) = 1;
  }
  if ( !word_1C0361338 )
  {
    GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow(a1);
    if ( GlobalAtomTableOfWindow )
      word_1C0361338 = UserFindAtomFromAtomTable(GlobalAtomTableOfWindow, L"Microsoft.Windows.WindowFactory.ViewId");
  }
  if ( (a4 & 1) == 0 )
  {
    LockRefactorStagingAssertOwned(*(const struct tagObjLock **)(a1 + 144));
    if ( (_WORD)a2 == word_1C0361338 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = a3;
    }
    else if ( (*(_DWORD *)(a1 + 324) & 1) != 0 )
    {
      v16 = *(_QWORD *)(a1 + 16);
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(**(PRKPROCESS **)(v16 + 424), &ApcState);
      v17 = SetSharedPropForFilteredProcesses(a1, a2, a3);
      KeUnstackDetachProcess(&ApcState);
      if ( v17 == 1 )
      {
        SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(&v18);
        return 1LL;
      }
    }
  }
  v11 = RealInternalSetProp(*(_QWORD *)(a1 + 144), a2, a3, a4, v18, v19, v20, *((_QWORD *)&v20 + 1), v21);
  if ( v22 && (_BYTE)v21 )
  {
    if ( (_QWORD)v20 )
      tagObjLock::UnLockExclusive((tagObjLock *)v20);
  }
  return v11;
}
