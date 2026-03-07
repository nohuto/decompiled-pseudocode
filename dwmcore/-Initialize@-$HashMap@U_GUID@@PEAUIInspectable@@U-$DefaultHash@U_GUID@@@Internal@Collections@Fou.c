__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Initialize(
        __int64 a1)
{
  _DWORD *v2; // rcx
  __int64 result; // rax

  v2 = DefaultHeap::Alloc(4uLL);
  result = 0LL;
  if ( v2 )
  {
    *v2 = 1;
    *(_QWORD *)(a1 + 176) = v2;
    *(_BYTE *)(a1 + 184) = 1;
  }
  else
  {
    *(_QWORD *)(a1 + 176) = 0LL;
    return 2147942414LL;
  }
  return result;
}
