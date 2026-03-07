__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::ChunkElementIterator::MoveNext(
        __int64 a1,
        bool *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  unsigned int v4; // eax
  unsigned int v5; // eax

  v2 = 0;
  *a2 = 0;
  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_DWORD *)(a1 + 72);
  if ( v4 >= *(_DWORD *)(v3 + 12) )
  {
    v2 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  else
  {
    v5 = v4 + 1;
    *(_DWORD *)(a1 + 72) = v5;
    *a2 = v5 < *(_DWORD *)(v3 + 12);
  }
  return v2;
}
