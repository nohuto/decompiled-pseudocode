__int64 __fastcall XWinRT::XHashMap<_GUID,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::InitHashTable(
        __int64 a1,
        unsigned int a2,
        char a3,
        _BYTE *a4)
{
  unsigned __int64 v5; // rdi
  void *v6; // rcx
  void *v9; // rax

  v5 = a2;
  v6 = *(void **)(a1 + 8);
  if ( v6 )
  {
    operator delete(v6);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  if ( !a3 )
  {
LABEL_9:
    *(_DWORD *)(a1 + 24) = v5;
    XWinRT::XHashMap<_GUID,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::UpdateRehashThresholds(a1);
    *a4 = 1;
    return 0LL;
  }
  v9 = DefaultHeap::Alloc(saturated_mul(v5, 8uLL));
  *(_QWORD *)(a1 + 8) = v9;
  if ( v9 )
  {
    if ( (unsigned int)v5 > 0x1FFFFFFF )
      return 2147549183LL;
    memset_0(v9, 0, 8 * v5);
    goto LABEL_9;
  }
  *a4 = 0;
  return 0LL;
}
