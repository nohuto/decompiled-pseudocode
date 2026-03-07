__int64 __fastcall NtUserGetProp(HWND a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v5; // rbx
  struct tagWND *v6; // rax
  struct tagWND *v7; // r14
  LIST_ENTRY *v8; // rdi
  struct _LIST_ENTRY *Flink; // xmm1_8
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  tagObjLock **v13; // rdi
  int v14; // esi
  __int64 Prop; // rdi
  __int64 v16; // rcx
  __int64 v18; // rax
  _BYTE v19[16]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v20; // [rsp+40h] [rbp-39h] BYREF
  char v21; // [rsp+48h] [rbp-31h]
  __int128 v22; // [rsp+50h] [rbp-29h] BYREF
  char v23; // [rsp+60h] [rbp-19h]
  char v24; // [rsp+68h] [rbp-11h]
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-9h] BYREF

  v3 = (unsigned __int16)a2;
  v5 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  CHMRefHwndByHandle::CHMRefHwndByHandle((CHMRefHwndByHandle *)v19, a1, 1, 0, 0, 0);
  if ( CHMRefHwndByHandle::bValid((CHMRefHwndByHandle *)v19) )
  {
    v6 = CHMRefHwndByHandle::rpwnd((CHMRefHwndByHandle *)v19);
    v20 = gDomainDummyLock;
    v7 = v6;
    v21 = 0;
    v8 = (LIST_ENTRY *)*((_QWORD *)v6 + 18);
    v22 = 0LL;
    v23 = 0;
    Flink = v8[1].Flink;
    ApcState.ApcListHead[0] = *v8;
    v24 = 0;
    ApcState.ApcListHead[1].Flink = Flink;
    v10 = SGDGetUserSessionState(gDomainDummyLock);
    if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v10 + 8)) != 1 )
    {
      v12 = SGDGetUserSessionState(v11);
      if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v12 + 8)) )
      {
        v24 = 1;
        if ( v8 == (LIST_ENTRY *)gObjDummyLock )
          v8 = 0LL;
        *(_QWORD *)&v22 = v8;
        if ( !v23 )
        {
          v13 = (tagObjLock **)&v22;
          v14 = 0;
          do
          {
            if ( *v13 )
              tagObjLock::LockExclusive(*v13);
            ++v14;
            ++v13;
          }
          while ( !v14 );
          v23 = 1;
        }
      }
    }
    Prop = RealGetProp(*((_QWORD *)v7 + 18), v3, 0LL);
    if ( !Prop && (*((_DWORD *)v7 + 81) & 1) != 0 )
    {
      if ( (_WORD)v3 == 0xA914 )
      {
        SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(&v20);
        goto LABEL_18;
      }
      LockRefactorStagingAssertOwned(*((const struct tagObjLock **)v7 + 18));
      v18 = *((_QWORD *)v7 + 2);
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(**(PRKPROCESS **)(v18 + 424), &ApcState);
      Prop = GetSharedPropForFilteredProcesses(v7, v3);
      KeUnstackDetachProcess(&ApcState);
    }
    if ( v24 && v23 && (_QWORD)v22 )
      tagObjLock::UnLockExclusive((tagObjLock *)v22);
    v5 = Prop;
  }
LABEL_18:
  CHMRefHwndByHandle::~CHMRefHwndByHandle((CHMRefHwndByHandle *)v19);
  UserSessionSwitchLeaveCrit(v16);
  return v5;
}
