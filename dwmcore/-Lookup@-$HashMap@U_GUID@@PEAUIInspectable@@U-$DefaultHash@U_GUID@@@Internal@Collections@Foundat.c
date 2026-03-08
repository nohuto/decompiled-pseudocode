/*
 * XREFs of ?Lookup@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@PEAPEAUIInspectable@@@Z @ 0x180293930
 * Callers:
 *     <none>
 * Callees:
 *     ??$Construct@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIInspectable@@@detail@1@V231@@Z @ 0x18028D8EC (--$Construct@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV-$GitStorageType@UIInspectab.c)
 *     ?EnsureInitialized@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEBAJXZ @ 0x180291604 (-EnsureInitialized@-$HashMap@U_GUID@@PEAUIInspectable@@U-$DefaultHash@U_GUID@@@Internal@Collecti.c)
 *     ?Localize@ReferencedGitCookie@?$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAJPEAPEAUIInspectable@@@Z @ 0x1802938EC (-Localize@ReferencedGitCookie@-$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAJPEAPEAUIInspe.c)
 *     ?Lookup@?$XHashMap@U_GUID@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@QEAAJAEBU_GUID@@PEAPEAVCPair@12@@Z @ 0x180293AE4 (-Lookup@-$XHashMap@U_GUID@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@-$HashMap.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180294370 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAKXZ @ 0x1802948BC (-Release@ReferencedGitCookie@-$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Lookup(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  void *v6; // rsi
  char v7; // r15
  int v8; // ebx
  int v9; // eax
  RTL_SRWLOCK *v10; // rcx
  __m128i v12; // [rsp+20h] [rbp-30h] BYREF
  void *v13; // [rsp+30h] [rbp-20h] BYREF
  char v14; // [rsp+38h] [rbp-18h]
  RTL_SRWLOCK *v15; // [rsp+40h] [rbp-10h] BYREF

  v6 = 0LL;
  v12.m128i_i32[0] = Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::EnsureInitialized(a1);
  v7 = 0;
  v13 = 0LL;
  v14 = 0;
  v8 = v12.m128i_i32[0];
  if ( v12.m128i_i32[0] < 0 )
    goto LABEL_16;
  XWinRT::SerializingLockPolicy::Read(&v15, a1 + 160, &v12);
  v8 = v12.m128i_i32[0];
  if ( v12.m128i_i32[0] >= 0 )
  {
    v8 = XWinRT::XHashMap<_GUID,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::Lookup(
           a1 + 72,
           a2,
           &v12);
    if ( v8 >= 0 )
    {
      if ( v12.m128i_i64[0] )
      {
        v12 = *(__m128i *)(v12.m128i_i64[0] + 16);
        v9 = XWinRT::InterfaceLifetimeTraits::Construct<IInspectable>((__int64)&v13, &v12);
        v7 = v14;
        v8 = v9;
        v6 = v13;
      }
      else
      {
        v8 = -2147483637;
      }
    }
  }
  if ( v15 )
  {
    v10 = v15 + 1;
    if ( LODWORD(v15->Ptr) == 1 )
      --LODWORD(v10->Ptr);
    else
      ReleaseSRWLockShared(v10);
  }
  if ( v8 < 0 )
    goto LABEL_16;
  *a3 = 0LL;
  if ( !v7 )
  {
    *a3 = v6;
    return 0;
  }
  v8 = XWinRT::detail::GitStorageType<IInspectable>::ReferencedGitCookie::Localize((__int64)v6, a3);
  if ( v8 < 0 )
  {
LABEL_16:
    *a3 = 0LL;
    return (unsigned int)v8;
  }
  XWinRT::detail::GitStorageType<IInspectable>::ReferencedGitCookie::Release(v6);
  return (unsigned int)v8;
}
