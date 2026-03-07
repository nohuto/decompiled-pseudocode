__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleKeyValuePair<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::get_Key(
        __int64 a1,
        _OWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_OWORD *)(a1 + 64);
  return result;
}
