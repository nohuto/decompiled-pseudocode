__int64 __fastcall XWinRT::XHashMap<_GUID,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::GetNode(
        __int64 a1,
        __int128 *a2,
        _DWORD *a3,
        unsigned int *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  unsigned int v7; // r11d
  unsigned __int64 v8; // r10
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  __int128 v16; // [rsp+0h] [rbp-18h]

  v7 = -2128831035;
  v8 = 0LL;
  v16 = *a2;
  do
  {
    v9 = *((unsigned __int8 *)&v16 + v8++);
    v7 = 16777619 * (v7 ^ v9);
  }
  while ( v8 < 0x10 );
  HIDWORD(v10) = 0;
  *a4 = v7;
  LODWORD(v10) = v7 % *(_DWORD *)(a1 + 24);
  v11 = *(_QWORD *)(a1 + 8);
  *a3 = v10;
  if ( v11 )
  {
    v12 = 0LL;
    v13 = *(_QWORD *)(v11 + 8 * v10);
    *a5 = 0LL;
    while ( v13 )
    {
      if ( *(_DWORD *)(v13 + 40) == v7 )
      {
        v14 = *(_QWORD *)v13 - *(_QWORD *)a2;
        if ( *(_QWORD *)v13 == *(_QWORD *)a2 )
          v14 = *(_QWORD *)(v13 + 8) - *((_QWORD *)a2 + 1);
        if ( !v14 )
        {
          *a5 = v12;
          *a6 = v13;
          return 0LL;
        }
      }
      v12 = v13;
      v13 = *(_QWORD *)(v13 + 32);
    }
  }
  *a6 = 0LL;
  return 0LL;
}
