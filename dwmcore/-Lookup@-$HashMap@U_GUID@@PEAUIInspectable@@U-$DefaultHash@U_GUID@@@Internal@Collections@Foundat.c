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
