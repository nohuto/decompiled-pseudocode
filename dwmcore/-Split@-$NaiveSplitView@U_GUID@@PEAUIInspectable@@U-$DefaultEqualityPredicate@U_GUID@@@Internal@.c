__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Split(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  int Size; // edi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  *a3 = 0LL;
  Size = Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::EnsureInitialized(a1);
  if ( Size >= 0 )
  {
    Size = Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Force(a1);
    if ( Size >= 0 )
    {
      Size = 0;
      LODWORD(v12) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 72LL) + 12LL);
      if ( (_DWORD)v12 )
      {
        v7 = *(_QWORD *)(a1 + 88);
        if ( v7 )
        {
          Size = Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::get_Size(
                   v7,
                   &v12);
          if ( Size < 0 )
            return (unsigned int)Size;
          v8 = v12;
        }
        else
        {
          v8 = 0;
        }
        if ( v8 )
        {
          v12 = *(_QWORD *)(a1 + 80);
          v9 = v12;
          Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v12);
          *a2 = v9;
          v12 = *(_QWORD *)(a1 + 88);
          v10 = v12;
          Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v12);
          *a3 = v10;
        }
      }
    }
  }
  return (unsigned int)Size;
}
