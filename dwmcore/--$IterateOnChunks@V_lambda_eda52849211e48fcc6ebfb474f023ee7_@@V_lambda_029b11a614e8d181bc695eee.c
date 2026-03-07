__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::IterateOnChunks<_lambda_eda52849211e48fcc6ebfb474f023ee7_,_lambda_029b11a614e8d181bc695eeec47f77e0_>(
        __int64 a1,
        __int128 **a2)
{
  char v2; // di
  __int64 result; // rax
  __int128 *v6; // r8
  __int64 v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  result = 0LL;
  while ( !v2 )
  {
    if ( !a1 || !*(_DWORD *)(a1 + 104) )
      return 2147483659LL;
    result = Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Force(a1);
    if ( (int)result < 0 )
      return result;
    v6 = a2[1];
    v7 = *(_QWORD *)(a1 + 80);
    v8 = **a2;
    result = Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::ChunkView::Lookup(
               v7,
               &v8,
               v6);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -2147483637 )
        return result;
      result = 0LL;
    }
    else
    {
      v2 = 1;
    }
    a1 = *(_QWORD *)(a1 + 88);
  }
  return result;
}
