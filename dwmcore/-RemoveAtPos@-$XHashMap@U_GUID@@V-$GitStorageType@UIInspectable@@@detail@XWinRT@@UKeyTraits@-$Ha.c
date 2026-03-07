__int64 __fastcall XWinRT::XHashMap<_GUID,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::RemoveAtPos(
        __int64 a1,
        __int64 a2)
{
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 i; // rcx
  __int64 v9; // rcx

  if ( !a2 )
    return 2147549183LL;
  v5 = (unsigned int)(*(_DWORD *)(a2 + 40) % *(_DWORD *)(a1 + 24));
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(v6 + 8 * v5);
  if ( a2 == v7 )
  {
    v7 = 0LL;
  }
  else
  {
    for ( i = *(_QWORD *)(v7 + 32); i != a2; i = *(_QWORD *)(i + 32) )
      v7 = i;
  }
  v9 = *(_QWORD *)(a2 + 32);
  if ( v7 )
    *(_QWORD *)(v7 + 32) = v9;
  else
    *(_QWORD *)(v6 + 8 * v5) = v9;
  XWinRT::XHashMap<_GUID,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::FreeNode(
    a1,
    a2);
  return 0LL;
}
