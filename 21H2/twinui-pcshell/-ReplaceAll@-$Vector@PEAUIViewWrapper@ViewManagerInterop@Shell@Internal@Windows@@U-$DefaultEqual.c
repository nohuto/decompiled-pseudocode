/*
 * XREFs of ?ReplaceAll@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIViewWrapper@ViewManagerInterop@Shell@25@@Z @ 0x1801BFBD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18005B3D8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18005B3F4 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@?$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801BD1E8 (-Initialize@-$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@detail@XW.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x1801BF5EC (-Release@ReferencedGitCookie@-$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@deta.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1801C4734 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,0,1,0>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 *a3)
{
  volatile signed __int32 **v3; // rsi
  unsigned int v4; // r15d
  int v6; // r13d
  int v9; // ebx
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rdx
  int v13; // ecx
  unsigned int v14; // eax
  volatile signed __int32 **v15; // rax
  RTL_SRWLOCK *v16; // rcx
  volatile signed __int32 **v17; // rdi
  volatile signed __int32 *v18; // rcx
  __int64 v20; // [rsp+30h] [rbp-38h] BYREF
  int v21; // [rsp+88h] [rbp+20h] BYREF

  v21 = 0;
  v3 = 0LL;
  v4 = 0;
  v6 = 0;
  if ( a2 )
  {
    v3 = (volatile signed __int32 **)malloc(16LL * a2);
    if ( !v3 )
      return (unsigned int)-2147024882;
    v4 = a2;
  }
  v10 = 0LL;
  if ( v4 )
  {
    v11 = (__int64)v3;
    while ( 1 )
    {
      v12 = *a3;
      *(_QWORD *)v11 = 0LL;
      *(_BYTE *)(v11 + 8) = 0;
      v20 = v11;
      v21 = XWinRT::detail::GitStorageType<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::Initialize(
              v11,
              v12);
      v9 = v21;
      if ( v21 < 0 )
        break;
      v13 = v6 + 1;
      v10 = (unsigned int)(v10 + 1);
      ++a3;
      v11 += 16LL;
      if ( !*(_BYTE *)(v20 + 8) )
        v13 = v6;
      v6 = v13;
      if ( (unsigned int)v10 >= v4 )
      {
        if ( v21 < 0 )
          break;
        goto LABEL_12;
      }
    }
  }
  else
  {
LABEL_12:
    XWinRT::SerializingLockPolicy::Write(&v20, a1 + 104, &v21);
    v9 = v21;
    if ( v21 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v21);
      v14 = *(_DWORD *)(a1 + 72);
      v9 = 0;
      ++*(_DWORD *)(a1 + 120);
      *(_DWORD *)(a1 + 72) = v10;
      v10 = v14;
      v15 = *(volatile signed __int32 ***)(a1 + 88);
      *(_QWORD *)(a1 + 88) = v3;
      v3 = v15;
      *(_DWORD *)(a1 + 76) = v4;
      *(_DWORD *)(a1 + 80) = v6;
    }
    if ( v20 )
    {
      v16 = (RTL_SRWLOCK *)(v20 + 8);
      if ( *(_DWORD *)v20 == 1 )
        LODWORD(v16->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v16);
    }
  }
  if ( v3 )
  {
    if ( (_DWORD)v10 )
    {
      v17 = v3;
      do
      {
        v18 = *v17;
        if ( *((_BYTE *)v17 + 8) )
        {
          XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>::ReferencedGitCookie::Release(v18);
        }
        else if ( v18 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
        *v17 = 0LL;
        *((_BYTE *)v17 + 8) = 0;
        v17 += 2;
        --v10;
      }
      while ( v10 );
    }
    free(v3);
  }
  if ( v9 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v9;
}
