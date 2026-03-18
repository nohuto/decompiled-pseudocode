/*
 * XREFs of NtUserGetProp @ 0x1C008B300
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C00BE880 (--1-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C00C6854 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     GetSharedPropForFilteredProcesses @ 0x1C021C5FC (GetSharedPropForFilteredProcesses.c)
 */

__int64 __fastcall NtUserGetProp(HWND a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // rsi
  struct tagWND *v6; // rax
  struct tagWND *v7; // r14
  LIST_ENTRY *v8; // rbx
  struct _LIST_ENTRY *Flink; // xmm1_8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  PERESOURCE *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  PERESOURCE *v18; // rax
  tagObjLock **v19; // rbx
  int v20; // edi
  __int64 Prop; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _BYTE v28[16]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v29; // [rsp+40h] [rbp-39h] BYREF
  char v30; // [rsp+48h] [rbp-31h]
  __int128 v31; // [rsp+50h] [rbp-29h] BYREF
  char v32; // [rsp+60h] [rbp-19h]
  char v33; // [rsp+68h] [rbp-11h]
  _KAPC_STATE ApcState; // [rsp+70h] [rbp-9h] BYREF

  v3 = (unsigned __int16)a2;
  v5 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  CHMRefHwndByHandle::CHMRefHwndByHandle((CHMRefHwndByHandle *)v28, a1, 1, 0, 0, 0);
  if ( CHMRefHwndByHandle::bValid((CHMRefHwndByHandle *)v28) )
  {
    v6 = CHMRefHwndByHandle::rpwnd((CHMRefHwndByHandle *)v28);
    v29 = gDomainDummyLock;
    v7 = v6;
    v30 = 0;
    v8 = (LIST_ENTRY *)*((_QWORD *)v6 + 18);
    v31 = 0LL;
    v32 = 0;
    Flink = v8[1].Flink;
    ApcState.ApcListHead[0] = *v8;
    v33 = 0;
    ApcState.ApcListHead[1].Flink = Flink;
    v13 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(gDomainDummyLock, v10, v11, v12);
    if ( ExIsResourceAcquiredExclusiveLite(*v13) != 1 )
    {
      v18 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v15, v14, v16, v17);
      if ( ExIsResourceAcquiredSharedLite(*v18) )
      {
        v33 = 1;
        if ( v8 == (LIST_ENTRY *)gObjDummyLock )
          v8 = 0LL;
        *(_QWORD *)&v31 = v8;
        if ( !v32 )
        {
          v19 = (tagObjLock **)&v31;
          v20 = 0;
          do
          {
            if ( *v19 )
              tagObjLock::LockExclusive(*v19);
            ++v20;
            ++v19;
          }
          while ( !v20 );
          v32 = 1;
        }
      }
    }
    Prop = RealGetProp(*((_QWORD *)v7 + 18), v3, 0LL);
    if ( !Prop && (*((_DWORD *)v7 + 81) & 1) != 0 )
    {
      if ( (_WORD)v3 == 0xA914 )
      {
        SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(&v29);
        goto LABEL_22;
      }
      LockRefactorStagingAssertOwned(*((const struct tagObjLock **)v7 + 18));
      v22 = *((_QWORD *)v7 + 2);
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(**(PRKPROCESS **)(v22 + 424), &ApcState);
      Prop = GetSharedPropForFilteredProcesses(v7, v3);
      KeUnstackDetachProcess(&ApcState);
    }
    if ( v33 && v32 && (_QWORD)v31 )
      tagObjLock::UnLockExclusive((tagObjLock *)v31);
    v5 = Prop;
  }
LABEL_22:
  CHMRefHwndByHandle::~CHMRefHwndByHandle((CHMRefHwndByHandle *)v28);
  UserSessionSwitchLeaveCrit(v24, v23, v25, v26);
  return v5;
}
