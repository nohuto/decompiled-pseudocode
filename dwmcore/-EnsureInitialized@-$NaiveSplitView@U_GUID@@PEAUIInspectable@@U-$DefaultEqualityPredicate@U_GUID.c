__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::EnsureInitialized(
        __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*(_BYTE *)(a1 + 109) )
  {
    v1 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
  }
  return v1;
}
