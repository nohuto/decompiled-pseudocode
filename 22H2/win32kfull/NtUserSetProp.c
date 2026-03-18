/*
 * XREFs of NtUserSetProp @ 0x1C00C63E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C00BE880 (--1-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     UserGetGlobalAtomTableOfWindow @ 0x1C00C66F4 (UserGetGlobalAtomTableOfWindow.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     SetSharedPropForFilteredProcesses @ 0x1C021C6C8 (SetSharedPropForFilteredProcesses.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  PERESOURCE *v19; // rax
  __int64 v20; // rdx
  tagObjLock *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  PERESOURCE *v24; // rax
  int v25; // r14d
  tagObjLock **v26; // rbx
  __int64 GlobalAtomTableOfWindow; // rax
  __int64 v28; // rbx
  PERESOURCE *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  PERESOURCE *v34; // rax
  int v35; // ebx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v41; // rax
  int v42; // ebx
  _BYTE v43[16]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v44; // [rsp+40h] [rbp-49h] BYREF
  char v45; // [rsp+48h] [rbp-41h]
  __int128 v46; // [rsp+50h] [rbp-39h] BYREF
  char v47; // [rsp+60h] [rbp-29h]
  char v48; // [rsp+68h] [rbp-21h]
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-19h] BYREF

  v6 = 0;
  if ( (unsigned __int8)ShouldRunShared(0LL) )
    EnterSharedCrit(v8, v7, v9);
  else
    EnterCrit(0LL, 0LL);
  CHMRefHwndByHandle::CHMRefHwndByHandle((CHMRefHwndByHandle *)v43, a1, 1, 1, 1, 1);
  if ( CHMRefHwndByHandle::bValid((CHMRefHwndByHandle *)v43) )
  {
    v10 = (unsigned __int16)a2;
    v11 = HIWORD(a2) != 0 ? 2 : 0;
    v12 = CHMRefHwndByHandle::rpwnd((CHMRefHwndByHandle *)v43);
    v44 = gDomainDummyLock;
    v13 = v12;
    v45 = 0;
    v14 = (LIST_ENTRY *)*((_QWORD *)v12 + 18);
    v46 = 0LL;
    v47 = 0;
    Flink = v14[1].Flink;
    ApcState.ApcListHead[0] = *v14;
    v48 = 0;
    ApcState.ApcListHead[1].Flink = Flink;
    v19 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(gDomainDummyLock, v16, v17, v18);
    if ( ExIsResourceAcquiredExclusiveLite(*v19) != 1 )
    {
      v24 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v21, v20, v22, v23);
      if ( ExIsResourceAcquiredSharedLite(*v24) )
      {
        v48 = 1;
        if ( v14 == (LIST_ENTRY *)gObjDummyLock )
          v14 = 0LL;
        *(_QWORD *)&v46 = v14;
        if ( !v47 )
        {
          v25 = 0;
          v26 = (tagObjLock **)&v46;
          do
          {
            v21 = *v26;
            if ( *v26 )
              tagObjLock::LockExclusive(v21);
            ++v25;
            ++v26;
          }
          while ( !v25 );
          v47 = 1;
        }
      }
    }
    if ( !word_1C035E350 )
    {
      GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow(v13);
      if ( GlobalAtomTableOfWindow )
        word_1C035E350 = UserFindAtomFromAtomTable(GlobalAtomTableOfWindow, L"Microsoft.Windows.WindowFactory.ViewId");
    }
    v28 = *((_QWORD *)v13 + 18);
    if ( !gbInDestroyHandleTableObjects )
    {
      v29 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v21, v20, v22, v23);
      if ( ExIsResourceAcquiredExclusiveLite(*v29) != 1 )
      {
        v34 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v31, v30, v32, v33);
        if ( !ExIsResourceAcquiredSharedLite(*v34) || KeGetCurrentThread() != *(struct _KTHREAD **)(v28 + 8) )
          __int2c();
      }
    }
    if ( (_WORD)v10 == word_1C035E350 )
    {
      *(_QWORD *)(*((_QWORD *)v13 + 5) + 312LL) = a3;
    }
    else if ( (*((_DWORD *)v13 + 81) & 1) != 0 )
    {
      v41 = *((_QWORD *)v13 + 2);
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(**(PRKPROCESS **)(v41 + 424), &ApcState);
      v42 = SetSharedPropForFilteredProcesses(v13, v10, a3);
      KeUnstackDetachProcess(&ApcState);
      if ( v42 == 1 )
      {
        SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>((__int64)&v44);
        v6 = 1;
        goto LABEL_30;
      }
    }
    v35 = RealInternalSetProp(*((_QWORD *)v13 + 18), v10, a3, v11);
    if ( v48 && v47 && (_QWORD)v46 )
      tagObjLock::UnLockExclusive((tagObjLock *)v46);
    v6 = v35;
  }
LABEL_30:
  CHMRefHwndByHandle::~CHMRefHwndByHandle((CHMRefHwndByHandle *)v43);
  UserSessionSwitchLeaveCrit(v37, v36, v38, v39);
  return v6;
}
