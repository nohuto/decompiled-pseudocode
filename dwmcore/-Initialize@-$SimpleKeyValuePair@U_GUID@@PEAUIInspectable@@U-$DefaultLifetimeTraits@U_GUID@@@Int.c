__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleKeyValuePair<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::Initialize(
        __int64 a1,
        __int128 *a2,
        __m128i *a3)
{
  __m128i v3; // xmm0
  __int128 v5; // xmm6
  int v6; // edi
  void *v7; // rcx
  char v8; // dl
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  void *v12[2]; // [rsp+20h] [rbp-38h] BYREF
  __m128i v13; // [rsp+30h] [rbp-28h] BYREF

  v3 = *a3;
  v12[0] = 0LL;
  v5 = *a2;
  LOBYTE(v12[1]) = 0;
  v13 = v3;
  v6 = XWinRT::InterfaceLifetimeTraits::Construct<IInspectable>((__int64)v12, &v13);
  if ( v6 >= 0 )
  {
    v9 = *(_OWORD *)v12;
    *(_OWORD *)(a1 + 64) = v5;
    v10 = *(_OWORD *)(a1 + 80);
    *(_OWORD *)(a1 + 80) = v9;
    *(_OWORD *)v12 = v10;
    v8 = BYTE8(v10);
    v7 = (void *)v10;
  }
  else
  {
    v7 = 0LL;
    v8 = 0;
  }
  if ( v8 )
  {
    XWinRT::detail::GitStorageType<IInspectable>::ReferencedGitCookie::Release(v7);
  }
  else if ( v7 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v6;
}
