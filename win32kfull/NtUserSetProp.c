/*
 * XREFs of NtUserSetProp @ 0x1C0100EE0
 * Callers:
 *     <none>
 * Callees:
 *     UserGetGlobalAtomTableOfWindow @ 0x1C01011B8 (UserGetGlobalAtomTableOfWindow.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C012F0E4 (--1-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     SetSharedPropForFilteredProcesses @ 0x1C021F288 (SetSharedPropForFilteredProcesses.c)
 */

__int64 __fastcall NtUserSetProp(HWND a1, int a2, __int64 a3)
{
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r12
  unsigned int v11; // r13d
  struct tagWND *v12; // rax
  struct tagWND *v13; // rsi
  LIST_ENTRY *v14; // rbx
  struct _LIST_ENTRY *Flink; // xmm1_8
  __int64 v16; // rax
  tagObjLock *v17; // rcx
  __int64 v18; // rax
  int v19; // r14d
  tagObjLock **v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // ebx
  __int64 v26; // rcx
  __int64 GlobalAtomTableOfWindow; // rax
  __int64 v29; // rax
  int v30; // ebx
  __int64 v31; // [rsp+20h] [rbp-69h]
  __int64 v32; // [rsp+28h] [rbp-61h]
  _QWORD v33[2]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v34; // [rsp+40h] [rbp-49h] BYREF
  char v35; // [rsp+48h] [rbp-41h]
  __int128 v36; // [rsp+50h] [rbp-39h] BYREF
  char v37; // [rsp+60h] [rbp-29h]
  char v38; // [rsp+68h] [rbp-21h]
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-19h] BYREF

  v6 = 0;
  if ( (unsigned __int8)ShouldRunShared(0LL) )
    EnterSharedCrit(v8, v7, v9);
  else
    EnterCrit(0LL, 0LL);
  CHMRefHwndByHandle::CHMRefHwndByHandle((CHMRefHwndByHandle *)v33, a1, 1, 1, 1, 1);
  if ( CHMRefHwndByHandle::bValid((CHMRefHwndByHandle *)v33) )
  {
    v10 = (unsigned __int16)a2;
    v11 = HIWORD(a2) != 0 ? 2 : 0;
    v12 = CHMRefHwndByHandle::rpwnd((CHMRefHwndByHandle *)v33);
    v34 = gDomainDummyLock;
    v13 = v12;
    v35 = 0;
    v14 = (LIST_ENTRY *)*((_QWORD *)v12 + 18);
    v36 = 0LL;
    v37 = 0;
    Flink = v14[1].Flink;
    ApcState.ApcListHead[0] = *v14;
    v38 = 0;
    ApcState.ApcListHead[1].Flink = Flink;
    v16 = SGDGetUserSessionState(gDomainDummyLock);
    if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v16 + 8)) != 1 )
    {
      v18 = SGDGetUserSessionState(v17);
      if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v18 + 8)) )
      {
        v38 = 1;
        if ( v14 == (LIST_ENTRY *)gObjDummyLock )
          v14 = 0LL;
        *(_QWORD *)&v36 = v14;
        if ( !v37 )
        {
          v19 = 0;
          v20 = (tagObjLock **)&v36;
          do
          {
            v17 = *v20;
            if ( *v20 )
              tagObjLock::LockExclusive(v17);
            ++v19;
            ++v20;
          }
          while ( !v19 );
          v37 = 1;
        }
      }
    }
    if ( !word_1C0361338 )
    {
      GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow(v13);
      if ( GlobalAtomTableOfWindow )
        word_1C0361338 = UserFindAtomFromAtomTable(GlobalAtomTableOfWindow, L"Microsoft.Windows.WindowFactory.ViewId");
    }
    v21 = *((_QWORD *)v13 + 18);
    if ( !gbInDestroyHandleTableObjects )
    {
      v22 = SGDGetUserSessionState(v17);
      if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v22 + 8)) != 1 )
      {
        v24 = SGDGetUserSessionState(v23);
        if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v24 + 8))
          || KeGetCurrentThread() != *(struct _KTHREAD **)(v21 + 8) )
        {
          __int2c();
        }
      }
    }
    if ( (_WORD)v10 == word_1C0361338 )
    {
      *(_QWORD *)(*((_QWORD *)v13 + 5) + 312LL) = a3;
    }
    else if ( (*((_DWORD *)v13 + 81) & 1) != 0 )
    {
      v29 = *((_QWORD *)v13 + 2);
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(**(PRKPROCESS **)(v29 + 424), &ApcState);
      v30 = SetSharedPropForFilteredProcesses(v13, v10, a3);
      KeUnstackDetachProcess(&ApcState);
      if ( v30 == 1 )
      {
        SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(&v34);
        v6 = 1;
        goto LABEL_26;
      }
    }
    v25 = RealInternalSetProp(*((_QWORD *)v13 + 18), v10, a3, v11, v31, v32, v33[0], v33[1], v34);
    if ( v38 && v37 && (_QWORD)v36 )
      tagObjLock::UnLockExclusive((tagObjLock *)v36);
    v6 = v25;
  }
LABEL_26:
  CHMRefHwndByHandle::~CHMRefHwndByHandle((CHMRefHwndByHandle *)v33);
  UserSessionSwitchLeaveCrit(v26);
  return v6;
}
