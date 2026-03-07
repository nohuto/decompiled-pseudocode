__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Iterator::GetMany(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int *a4)
{
  unsigned int v4; // ebx
  _QWORD *v5; // r12
  unsigned int v7; // r14d
  __int64 v8; // rdi
  unsigned int v9; // r13d
  int v10; // esi
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned int *v14; // rax
  __int64 v15; // rbx
  RTL_SRWLOCK *v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+28h] [rbp-18h] BYREF
  RTL_SRWLOCK *v20; // [rsp+30h] [rbp-10h] BYREF
  int v21; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v22; // [rsp+88h] [rbp+48h]
  unsigned int *v23; // [rsp+98h] [rbp+58h]

  v23 = a4;
  v22 = a2;
  v4 = a2;
  v21 = 0;
  v5 = a3;
  *a4 = 0;
  v7 = 0;
  if ( a2 )
    memset_0(a3, 0, 8LL * a2);
  XWinRT::SerializingLockPolicy::Read(&v20, *(_QWORD *)(a1 + 64) + 160LL, &v21);
  if ( v21 >= 0 )
    v21 = Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Iterator::EnsureVersionMatches(a1);
  v8 = *(_QWORD *)(a1 + 72);
  v9 = 0;
  v10 = v21;
  if ( v21 >= 0 )
  {
    while ( v9 < v4 )
    {
      if ( v10 >= 0 )
      {
        if ( !v8 )
          break;
        v18 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>>::InternalRelease(&v18);
        v21 = Windows::Foundation::Collections::Internal::SimpleKeyValuePair<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::Make(
                v8,
                v8 + 16,
                &v18);
        v10 = v21;
        if ( v21 >= 0 )
        {
          v11 = v18;
          if ( v18 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
          v19 = 0LL;
          v5[v9] = v11;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
          v12 = *(_QWORD *)(a1 + 64);
          if ( *(_QWORD *)(v8 + 32) )
          {
            v8 = *(_QWORD *)(v8 + 32);
          }
          else
          {
            LODWORD(v13) = *(_DWORD *)(v8 + 40) % *(_DWORD *)(v12 + 96);
            do
            {
              v13 = (unsigned int)(v13 + 1);
              v8 = 0LL;
              if ( (unsigned int)v13 >= *(_DWORD *)(v12 + 96) )
                break;
              v8 = *(_QWORD *)(*(_QWORD *)(v12 + 80) + 8 * v13);
            }
            while ( !v8 );
          }
          ++v7;
          if ( !v8 )
          {
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>>::InternalRelease(&v18);
            break;
          }
          v4 = v22;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>>::InternalRelease(&v18);
      }
      ++v9;
      if ( v10 < 0 )
        break;
    }
    if ( v10 < 0 )
    {
      if ( v7 )
      {
        v15 = v7;
        do
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
          *v5++ = 0LL;
          --v15;
        }
        while ( v15 );
      }
    }
    else
    {
      v14 = v23;
      *(_QWORD *)(a1 + 72) = v8;
      *v14 = v7;
    }
  }
  if ( v20 )
  {
    v16 = v20 + 1;
    if ( LODWORD(v20->Ptr) == 1 )
      --LODWORD(v16->Ptr);
    else
      ReleaseSRWLockShared(v16);
  }
  return (unsigned int)v10;
}
