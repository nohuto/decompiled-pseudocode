void __fastcall Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::_Free(
        __int64 a1)
{
  __int64 i; // rbx
  __int64 v3; // rsi
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rcx

  if ( a1 )
  {
    for ( i = XWinRT::XHashMap<_GUID,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::GetStartPosition(a1);
          i;
          *(_BYTE *)(v3 + 24) = 0 )
    {
      v3 = i;
      if ( *(_QWORD *)(i + 32) )
      {
        i = *(_QWORD *)(i + 32);
      }
      else
      {
        LODWORD(v4) = *(_DWORD *)(i + 40) % *(_DWORD *)(a1 + 24);
        do
        {
          v4 = (unsigned int)(v4 + 1);
          i = 0LL;
          if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 24) )
            break;
          i = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v4);
        }
        while ( !i );
      }
      v5 = *(volatile signed __int32 **)(v3 + 16);
      if ( *(_BYTE *)(v3 + 24) )
      {
        XWinRT::detail::GitStorageType<IInspectable>::ReferencedGitCookie::Release(v5);
      }
      else if ( v5 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
      }
      *(_QWORD *)(v3 + 16) = 0LL;
    }
    XWinRT::XHashMap<_GUID,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::RemoveAll(a1);
  }
}
