/*
 * XREFs of ?GetAt@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIViewWrapper@ViewManagerInterop@Shell@25@@Z @ 0x1801BA630
 * Callers:
 *     <none>
 * Callees:
 *     ??$Construct@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@detail@1@V231@@Z @ 0x1801B2AE8 (--$Construct@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Inte.c)
 *     ??$Destroy@UITreeNode@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUITreeNode@ComposableShell@Internal@Windows@@@Z @ 0x1801B2C4C (--$Destroy@UITreeNode@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAP.c)
 *     ?Localize@ReferencedGitCookie@?$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801BD938 (-Localize@ReferencedGitCookie@-$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1801BED84 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x1801BF43C (-Release@ReferencedGitCookie@-$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@deta.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,0,1,0>>::GetAt(
        __int64 a1,
        unsigned int a2,
        __int64 *a3)
{
  __int64 v4; // r15
  void *v6; // rdi
  char v7; // r14
  int v8; // ebx
  void *v10; // [rsp+20h] [rbp-48h] BYREF
  char v11; // [rsp+28h] [rbp-40h]
  __m128i v12[3]; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 v14; // [rsp+80h] [rbp+18h] BYREF

  v4 = a2;
  *a3 = 0LL;
  v6 = 0LL;
  v10 = 0LL;
  v7 = 0;
  v11 = 0;
  XWinRT::SerializingLockPolicy::Read(&v14, a1 + 104, &v13);
  v8 = v13;
  if ( v13 >= 0 )
  {
    if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 72) )
    {
      v8 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v8 >= 0 )
    {
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::ITreeNode>(a3);
      v12[0] = *(__m128i *)(*(_QWORD *)(a1 + 88) + 16 * v4);
      v8 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>(
             (__int64)&v10,
             v12);
      v7 = v11;
      v6 = v10;
    }
  }
  if ( v14 )
  {
    if ( *(_DWORD *)v14 == 1 )
      --*(_DWORD *)(v14 + 8);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v14 + 8));
  }
  if ( v8 >= 0 )
  {
    *a3 = 0LL;
    v8 = 0;
    if ( v7 )
    {
      v8 = XWinRT::detail::GitStorageType<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::ReferencedGitCookie::Localize(
             v6,
             a3);
      if ( v8 >= 0 )
        XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>::ReferencedGitCookie::Release(v6);
    }
    else
    {
      *a3 = (__int64)v6;
    }
  }
  return (unsigned int)v8;
}
