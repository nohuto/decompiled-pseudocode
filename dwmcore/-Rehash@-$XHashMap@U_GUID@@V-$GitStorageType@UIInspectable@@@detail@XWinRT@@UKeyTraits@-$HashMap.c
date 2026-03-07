__int64 __fastcall XWinRT::XHashMap<_GUID,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::Rehash(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v3; // esi
  int inited; // eax
  _QWORD *v7; // rax
  _QWORD *v8; // r14
  unsigned int i; // r9d
  __int64 v10; // r10
  __int64 v11; // r8
  __int64 v12; // rdx
  char v13; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v3 = a2;
  if ( !a2 )
    v3 = XWinRT::XHashMap<_GUID,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::PickSize(
           a1,
           *(_QWORD *)(a1 + 16));
  if ( v3 == *(_DWORD *)(a1 + 24) )
    return 0LL;
  if ( *(_QWORD *)(a1 + 8) )
  {
    v7 = DefaultHeap::Alloc(saturated_mul(v3, 8uLL));
    v8 = v7;
    if ( !v7 )
      return 2147942414LL;
    if ( v3 > 0x1FFFFFFF )
      return 2147549183LL;
    memset_0(v7, 0, 8LL * v3);
    for ( i = 0; i < *(_DWORD *)(a1 + 24); ++i )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * i);
      if ( v10 )
      {
        do
        {
          v11 = *(_QWORD *)(v10 + 32);
          v12 = *(_DWORD *)(v10 + 40) % v3;
          *(_QWORD *)(v10 + 32) = v8[v12];
          v8[(unsigned int)v12] = v10;
          v10 = v11;
        }
        while ( v11 );
      }
    }
    operator delete(*(void **)(a1 + 8));
    *(_QWORD *)(a1 + 8) = v8;
    *(_DWORD *)(a1 + 24) = v3;
    XWinRT::XHashMap<_GUID,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::UpdateRehashThresholds(a1);
    return 0LL;
  }
  inited = XWinRT::XHashMap<_GUID,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::InitHashTable(
             a1,
             v3,
             0,
             &v13);
  if ( inited < 0 )
    return (unsigned int)inited;
  return v2;
}
