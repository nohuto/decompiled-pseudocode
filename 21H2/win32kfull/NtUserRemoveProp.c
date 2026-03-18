/*
 * XREFs of NtUserRemoveProp @ 0x1C00E0D20
 * Callers:
 *     <none>
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C007944C (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserRemoveProp(HWND a1, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r15
  struct tagWND *v9; // rax
  struct tagWND *v10; // r14
  __int128 *v11; // rdi
  __int64 v12; // xmm1_8
  int v13; // esi
  tagObjLock **v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rcx
  _BYTE v18[16]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v19; // [rsp+40h] [rbp-19h]
  __int64 v20; // [rsp+50h] [rbp-9h]
  __int64 v21; // [rsp+58h] [rbp-1h]
  char v22; // [rsp+60h] [rbp+7h]
  __int128 v23; // [rsp+68h] [rbp+Fh] BYREF
  char v24; // [rsp+78h] [rbp+1Fh]
  char v25; // [rsp+80h] [rbp+27h]

  v3 = a2;
  v4 = 0LL;
  if ( (unsigned __int8)ShouldRunShared(0LL) )
    EnterSharedCrit(v6, v5, v7);
  else
    EnterCrit(0LL, 0LL);
  CHMRefHwndByHandle::CHMRefHwndByHandle((CHMRefHwndByHandle *)v18, a1, 1, 1, 1, 1);
  if ( CHMRefHwndByHandle::bValid((CHMRefHwndByHandle *)v18) )
  {
    v8 = v3;
    v9 = CHMRefHwndByHandle::rpwnd((CHMRefHwndByHandle *)v18);
    v21 = gDomainDummyLock;
    v10 = v9;
    v11 = (__int128 *)*((_QWORD *)v9 + 18);
    v22 = 0;
    v23 = 0LL;
    v24 = 0;
    v12 = *((_QWORD *)v11 + 2);
    v19 = *v11;
    v25 = 0;
    v20 = v12;
    if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser) )
    {
      v25 = 1;
      if ( v11 == (__int128 *)gObjDummyLock )
        v11 = 0LL;
      *(_QWORD *)&v23 = v11;
      if ( !v24 )
      {
        v13 = 0;
        v14 = (tagObjLock **)&v23;
        do
        {
          if ( *v14 )
            tagObjLock::LockExclusive(*v14);
          ++v13;
          ++v14;
        }
        while ( !v13 );
        v24 = 1;
      }
    }
    if ( (_WORD)v8 == word_1C0336250 )
    {
      LockRefactorStagingAssertOwned(*((struct _KTHREAD ***)v10 + 18));
      *(_QWORD *)(*((_QWORD *)v10 + 5) + 312LL) = 0LL;
    }
    v15 = RealInternalRemoveProp(*((_QWORD *)v10 + 18), v8, 0LL);
    if ( v25 && v24 && (_QWORD)v23 )
      tagObjLock::UnLockExclusive((tagObjLock *)v23);
    v4 = v15;
  }
  CHMRefHwndByHandle::~CHMRefHwndByHandle((CHMRefHwndByHandle *)v18);
  UserSessionSwitchLeaveCrit(v16);
  return v4;
}
