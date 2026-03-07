__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Iterator::MoveNext(
        __int64 a1,
        bool *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  RTL_SRWLOCK *v9; // rcx
  int v11; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v12; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0;
  *a2 = 0;
  XWinRT::SerializingLockPolicy::Read(&v12, *(_QWORD *)(a1 + 64) + 160LL, &v11);
  v4 = v11;
  if ( v11 >= 0 )
  {
    v11 = Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Iterator::EnsureVersionMatches(a1);
    v4 = v11;
    if ( v11 >= 0 )
    {
      v5 = *(_QWORD *)(a1 + 72);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 32);
        v7 = *(_QWORD *)(a1 + 64);
        if ( !v6 )
        {
          LODWORD(v8) = *(_DWORD *)(v5 + 40) % *(_DWORD *)(v7 + 96);
          do
          {
            v8 = (unsigned int)(v8 + 1);
            v6 = 0LL;
            if ( (unsigned int)v8 >= *(_DWORD *)(v7 + 96) )
              break;
            v6 = *(_QWORD *)(*(_QWORD *)(v7 + 80) + 8 * v8);
          }
          while ( !v6 );
        }
        v4 = v11;
        *(_QWORD *)(a1 + 72) = v6;
        *a2 = v6 != 0;
      }
      else
      {
        v4 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
    }
  }
  if ( v12 )
  {
    v9 = v12 + 1;
    if ( LODWORD(v12->Ptr) == 1 )
      --LODWORD(v9->Ptr);
    else
      ReleaseSRWLockShared(v9);
  }
  return v4;
}
