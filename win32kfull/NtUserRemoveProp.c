/*
 * XREFs of NtUserRemoveProp @ 0x1C00C6A70
 * Callers:
 *     <none>
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C0101318 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserRemoveProp(HWND a1, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbp
  struct tagWND *v9; // rax
  struct tagWND *v10; // r14
  __int128 *v11; // rdi
  __int64 v12; // xmm1_8
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // esi
  tagObjLock **v17; // rdi
  __int64 v18; // rcx
  _BYTE v20[16]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v21; // [rsp+40h] [rbp-68h]
  __int64 v22; // [rsp+50h] [rbp-58h]
  __int64 v23; // [rsp+58h] [rbp-50h]
  char v24; // [rsp+60h] [rbp-48h]
  __int128 v25; // [rsp+68h] [rbp-40h] BYREF
  char v26; // [rsp+78h] [rbp-30h]
  char v27; // [rsp+80h] [rbp-28h]

  v3 = a2;
  v4 = 0LL;
  if ( (unsigned __int8)ShouldRunShared(0LL) )
    EnterSharedCrit(v6, v5, v7);
  else
    EnterCrit(0LL, 0LL);
  CHMRefHwndByHandle::CHMRefHwndByHandle((CHMRefHwndByHandle *)v20, a1, 1, 1, 1, 1);
  if ( CHMRefHwndByHandle::bValid((CHMRefHwndByHandle *)v20) )
  {
    v8 = v3;
    v9 = CHMRefHwndByHandle::rpwnd((CHMRefHwndByHandle *)v20);
    v23 = gDomainDummyLock;
    v10 = v9;
    v24 = 0;
    v11 = (__int128 *)*((_QWORD *)v9 + 18);
    v25 = 0LL;
    v26 = 0;
    v12 = *((_QWORD *)v11 + 2);
    v21 = *v11;
    v27 = 0;
    v22 = v12;
    v13 = SGDGetUserSessionState(gDomainDummyLock);
    if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v13 + 8)) != 1 )
    {
      v15 = SGDGetUserSessionState(v14);
      if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v15 + 8)) )
      {
        v27 = 1;
        if ( v11 == (__int128 *)gObjDummyLock )
          v11 = 0LL;
        *(_QWORD *)&v25 = v11;
        if ( !v26 )
        {
          v16 = 0;
          v17 = (tagObjLock **)&v25;
          do
          {
            if ( *v17 )
              tagObjLock::LockExclusive(*v17);
            ++v16;
            ++v17;
          }
          while ( !v16 );
          v26 = 1;
        }
      }
    }
    if ( (_WORD)v8 == word_1C0361338 )
    {
      LockRefactorStagingAssertOwned(*((const struct tagObjLock **)v10 + 18));
      *(_QWORD *)(*((_QWORD *)v10 + 5) + 312LL) = 0LL;
    }
    v4 = RealInternalRemoveProp(*((_QWORD *)v10 + 18), v8, 0LL);
    if ( v27 && v26 && (_QWORD)v25 )
      tagObjLock::UnLockExclusive((tagObjLock *)v25);
  }
  CHMRefHwndByHandle::~CHMRefHwndByHandle((CHMRefHwndByHandle *)v20);
  UserSessionSwitchLeaveCrit(v18);
  return v4;
}
