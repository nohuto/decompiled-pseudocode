/*
 * XREFs of NtUserSetProp @ 0x1C00791E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C006B9B0 (--1-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C007944C (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     UserGetGlobalAtomTableOfWindow @ 0x1C007B23C (UserGetGlobalAtomTableOfWindow.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     SetSharedPropForFilteredProcesses @ 0x1C0235C20 (SetSharedPropForFilteredProcesses.c)
 */

__int64 __fastcall NtUserSetProp(HWND a1, int a2, __int64 a3)
{
  int v6; // edi
  __int64 v7; // r12
  unsigned int v8; // r13d
  struct tagWND *v9; // rax
  struct tagWND *v10; // rsi
  LIST_ENTRY *v11; // rbx
  struct _LIST_ENTRY *Flink; // xmm1_8
  int v13; // r14d
  tagObjLock **v14; // rbx
  int v15; // ebx
  __int64 v16; // rcx
  __int64 GlobalAtomTableOfWindow; // rax
  __int64 v19; // rax
  int v20; // ebx
  _BYTE v21[16]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v22; // [rsp+40h] [rbp-49h] BYREF
  char v23; // [rsp+48h] [rbp-41h]
  __int128 v24; // [rsp+50h] [rbp-39h] BYREF
  char v25; // [rsp+60h] [rbp-29h]
  char v26; // [rsp+68h] [rbp-21h]
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-19h] BYREF

  v6 = 0;
  if ( (unsigned __int8)ShouldRunShared(0LL) )
    EnterSharedCrit();
  else
    EnterCrit(0LL, 0LL);
  CHMRefHwndByHandle::CHMRefHwndByHandle((CHMRefHwndByHandle *)v21, a1, 1, 1, 1, 1);
  if ( CHMRefHwndByHandle::bValid((CHMRefHwndByHandle *)v21) )
  {
    v7 = (unsigned __int16)a2;
    v8 = HIWORD(a2) != 0 ? 2 : 0;
    v9 = CHMRefHwndByHandle::rpwnd((CHMRefHwndByHandle *)v21);
    v22 = gDomainDummyLock;
    v10 = v9;
    v11 = (LIST_ENTRY *)*((_QWORD *)v9 + 18);
    v23 = 0;
    v24 = 0LL;
    v25 = 0;
    Flink = v11[1].Flink;
    ApcState.ApcListHead[0] = *v11;
    v26 = 0;
    ApcState.ApcListHead[1].Flink = Flink;
    if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser) )
    {
      v26 = 1;
      if ( v11 == (LIST_ENTRY *)gObjDummyLock )
        v11 = 0LL;
      *(_QWORD *)&v24 = v11;
      if ( !v25 )
      {
        v13 = 0;
        v14 = (tagObjLock **)&v24;
        do
        {
          if ( *v14 )
            tagObjLock::LockExclusive(*v14);
          ++v13;
          ++v14;
        }
        while ( !v13 );
        v25 = 1;
      }
    }
    if ( !word_1C0336250 )
    {
      GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow(v10);
      if ( GlobalAtomTableOfWindow )
        word_1C0336250 = UserFindAtomFromAtomTable(GlobalAtomTableOfWindow, L"Microsoft.Windows.WindowFactory.ViewId");
    }
    LockRefactorStagingAssertOwned(*((const struct tagObjLock **)v10 + 18));
    if ( (_WORD)v7 == word_1C0336250 )
    {
      *(_QWORD *)(*((_QWORD *)v10 + 5) + 312LL) = a3;
    }
    else if ( (*((_DWORD *)v10 + 81) & 1) != 0 )
    {
      v19 = *((_QWORD *)v10 + 2);
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(**(PRKPROCESS **)(v19 + 424), &ApcState);
      v20 = SetSharedPropForFilteredProcesses(v10, v7, a3);
      KeUnstackDetachProcess(&ApcState);
      if ( v20 == 1 )
      {
        SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>((__int64)&v22);
        v6 = 1;
        goto LABEL_22;
      }
    }
    v15 = RealInternalSetProp(*((_QWORD *)v10 + 18), v7, a3, v8);
    if ( v26 && v25 && (_QWORD)v24 )
      tagObjLock::UnLockExclusive((tagObjLock *)v24);
    v6 = v15;
  }
LABEL_22:
  CHMRefHwndByHandle::~CHMRefHwndByHandle((CHMRefHwndByHandle *)v21);
  UserSessionSwitchLeaveCrit(v16);
  return v6;
}
