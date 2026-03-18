/*
 * XREFs of NtUserGetProp @ 0x1C00DA0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C006B9B0 (--1-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C007944C (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     GetSharedPropForFilteredProcesses @ 0x1C0235B4C (GetSharedPropForFilteredProcesses.c)
 */

__int64 __fastcall NtUserGetProp(HWND a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v5; // rbx
  struct tagWND *v6; // rax
  struct tagWND *v7; // r14
  LIST_ENTRY *v8; // rdi
  struct _LIST_ENTRY *Flink; // xmm1_8
  tagObjLock **v10; // rdi
  int v11; // esi
  __int64 Prop; // rdi
  __int64 v13; // rcx
  __int64 v15; // rax
  _BYTE v16[16]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v17; // [rsp+40h] [rbp-39h] BYREF
  char v18; // [rsp+48h] [rbp-31h]
  __int128 v19; // [rsp+50h] [rbp-29h] BYREF
  char v20; // [rsp+60h] [rbp-19h]
  char v21; // [rsp+68h] [rbp-11h]
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-9h] BYREF

  v3 = (unsigned __int16)a2;
  v5 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  CHMRefHwndByHandle::CHMRefHwndByHandle((CHMRefHwndByHandle *)v16, a1, 1, 0, 0, 0);
  if ( CHMRefHwndByHandle::bValid((CHMRefHwndByHandle *)v16) )
  {
    v6 = CHMRefHwndByHandle::rpwnd((CHMRefHwndByHandle *)v16);
    v17 = gDomainDummyLock;
    v7 = v6;
    v8 = (LIST_ENTRY *)*((_QWORD *)v6 + 18);
    v18 = 0;
    v19 = 0LL;
    v20 = 0;
    Flink = v8[1].Flink;
    ApcState.ApcListHead[0] = *v8;
    v21 = 0;
    ApcState.ApcListHead[1].Flink = Flink;
    if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser) )
    {
      v21 = 1;
      if ( v8 == (LIST_ENTRY *)gObjDummyLock )
        v8 = 0LL;
      *(_QWORD *)&v19 = v8;
      if ( !v20 )
      {
        v10 = (tagObjLock **)&v19;
        v11 = 0;
        do
        {
          if ( *v10 )
            tagObjLock::LockExclusive(*v10);
          ++v11;
          ++v10;
        }
        while ( !v11 );
        v20 = 1;
      }
    }
    Prop = RealGetProp(*((_QWORD *)v7 + 18), v3, 0LL);
    if ( !Prop && (*((_DWORD *)v7 + 81) & 1) != 0 )
    {
      if ( (_WORD)v3 == 0xA914 )
      {
        SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>((__int64)&v17);
        goto LABEL_18;
      }
      LockRefactorStagingAssertOwned(*((struct _KTHREAD ***)v7 + 18));
      v15 = *((_QWORD *)v7 + 2);
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(**(PRKPROCESS **)(v15 + 424), &ApcState);
      Prop = GetSharedPropForFilteredProcesses(v7, v3);
      KeUnstackDetachProcess(&ApcState);
    }
    if ( v21 && v20 && (_QWORD)v19 )
      tagObjLock::UnLockExclusive((tagObjLock *)v19);
    v5 = Prop;
  }
LABEL_18:
  CHMRefHwndByHandle::~CHMRefHwndByHandle((CHMRefHwndByHandle *)v16);
  UserSessionSwitchLeaveCrit(v13);
  return v5;
}
