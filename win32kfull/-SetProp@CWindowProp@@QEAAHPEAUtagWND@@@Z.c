/*
 * XREFs of ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00469D0
 * Callers:
 *     ?_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z @ 0x1C0014674 (-_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z.c)
 *     CreateVisRgnTracker @ 0x1C00287F0 (CreateVisRgnTracker.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C0029A64 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z @ 0x1C007DAFC (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z.c)
 *     ?EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z @ 0x1C00FC8E0 (-EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z.c)
 *     ?GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z @ 0x1C010141C (-GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z.c)
 *     UserSetWindowedSwapChain @ 0x1C021EFC8 (UserSetWindowedSwapChain.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0222DF4 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004A174 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     UserGetGlobalAtomTableOfWindow @ 0x1C01011B8 (UserGetGlobalAtomTableOfWindow.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C0101318 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowProp::SetProp(CWindowProp *this, unsigned __int64 a2)
{
  unsigned __int16 v4; // ax
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rcx
  CWindowProp *v8; // rdi
  unsigned __int16 v9; // ax
  __int128 *v10; // rdi
  __int64 v11; // r15
  __int64 v12; // xmm1_8
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 result; // rax
  __int64 GlobalAtomTableOfWindow; // rax
  int v17; // esi
  tagObjLock **v18; // rdi
  int v19; // esi
  tagObjLock **v20; // rdi
  __int128 v21; // [rsp+20h] [rbp-50h]
  __int128 v22; // [rsp+48h] [rbp-28h] BYREF
  char v23; // [rsp+58h] [rbp-18h]
  char v24; // [rsp+60h] [rbp-10h]

  v4 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  v5 = *(_QWORD *)(a2 + 144);
  v22 = 0LL;
  v23 = 0;
  v6 = v4;
  v24 = 0;
  if ( !IS_USERCRIT_OWNED_EXCLUSIVE() && IS_USERCRIT_OWNED_AT_ALL(v7) )
  {
    v24 = 1;
    if ( v5 == gObjDummyLock )
      v5 = 0LL;
    *(_QWORD *)&v22 = v5;
    v17 = 0;
    v18 = (tagObjLock **)&v22;
    do
    {
      if ( *v18 )
        tagObjLock::LockExclusive(*v18);
      ++v17;
      ++v18;
    }
    while ( !v17 );
    v23 = 1;
  }
  if ( (_WORD)v6 == word_1C0361338 )
  {
    LockRefactorStagingAssertOwned(*(const struct tagObjLock **)(a2 + 144));
    *(_QWORD *)(*(_QWORD *)(a2 + 40) + 312LL) = 0LL;
  }
  v8 = (CWindowProp *)RealInternalRemoveProp(*(_QWORD *)(a2 + 144), v6, 1LL);
  if ( v24 && v23 )
  {
    if ( (_QWORD)v22 )
      tagObjLock::UnLockExclusive((tagObjLock *)v22);
    v23 = 0;
  }
  if ( v8 && v8 != this )
    (**(void (__fastcall ***)(CWindowProp *))v8)(v8);
  v9 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  v10 = *(__int128 **)(a2 + 144);
  v22 = 0LL;
  v23 = 0;
  v11 = v9;
  v12 = *((_QWORD *)v10 + 2);
  v21 = *v10;
  v24 = 0;
  if ( !IS_USERCRIT_OWNED_EXCLUSIVE() && IS_USERCRIT_OWNED_AT_ALL(v13) )
  {
    v24 = 1;
    if ( v10 == (__int128 *)gObjDummyLock )
      v10 = 0LL;
    *(_QWORD *)&v22 = v10;
    if ( !v23 )
    {
      v19 = 0;
      v20 = (tagObjLock **)&v22;
      do
      {
        if ( *v20 )
          tagObjLock::LockExclusive(*v20);
        ++v19;
        ++v20;
      }
      while ( !v19 );
      v23 = 1;
    }
  }
  if ( !word_1C0361338 )
  {
    GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow(a2);
    if ( GlobalAtomTableOfWindow )
      word_1C0361338 = UserFindAtomFromAtomTable(GlobalAtomTableOfWindow, L"Microsoft.Windows.WindowFactory.ViewId");
  }
  v14 = RealInternalSetProp(
          *(_QWORD *)(a2 + 144),
          v11,
          this,
          32769LL,
          v21,
          *((_QWORD *)&v21 + 1),
          v12,
          gDomainDummyLock,
          0);
  if ( v24 && v23 && (_QWORD)v22 )
    tagObjLock::UnLockExclusive((tagObjLock *)v22);
  result = v14;
  *((_QWORD *)this + 2) = a2 & -(__int64)(v14 != 0);
  return result;
}
