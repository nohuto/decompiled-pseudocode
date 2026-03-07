__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::IterateOnChunks<_lambda_c06bd913fe980784c932ce8bf93bd220_,_lambda_d28283a6c310c846aef711a97467b492_>(
        __int64 a1,
        __int128 **a2)
{
  bool v2; // di
  __int64 result; // rax
  __int128 *v6; // rsi
  __int64 v7; // rcx
  _BYTE *v8; // r8
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  result = 0LL;
  while ( !v2 )
  {
    if ( !a1 || !*(_DWORD *)(a1 + 104) )
      return 0LL;
    result = Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Force(a1);
    if ( (int)result < 0 )
      return result;
    v6 = a2[1];
    v7 = *(_QWORD *)(a1 + 80);
    v8 = *(_BYTE **)v6;
    v9 = **a2;
    result = Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::ChunkView::HasKey(
               v7,
               &v9,
               v8);
    if ( (int)result < 0 )
      return result;
    v2 = **(_BYTE **)v6 != 0;
    a1 = *(_QWORD *)(a1 + 88);
  }
  return result;
}
