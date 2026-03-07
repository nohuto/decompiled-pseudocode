__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Insert(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        _BYTE *a4)
{
  char v4; // r12
  __int128 v9; // xmm0
  int v10; // eax
  int v11; // ebx
  void *v12; // rdi
  char v13; // si
  void *v14; // r14
  __int64 v15; // rax
  RTL_SRWLOCK *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r9
  _BYTE v20[16]; // [rsp+30h] [rbp-49h] BYREF
  __int128 v21; // [rsp+40h] [rbp-39h] BYREF
  __int128 v22; // [rsp+50h] [rbp-29h] BYREF
  RTL_SRWLOCK *v23; // [rsp+60h] [rbp-19h] BYREF
  __int128 *v24; // [rsp+68h] [rbp-11h]
  __int128 v25; // [rsp+70h] [rbp-9h] BYREF

  v4 = 0;
  v24 = a2;
  *a4 = 0;
  Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::EnsureInitialized(a1);
  v9 = *a2;
  *(_QWORD *)&v22 = 0LL;
  BYTE8(v22) = 0;
  v25 = v9;
  v10 = XWinRT::detail::GitStorageType<IInspectable>::Initialize((__int64)&v22, a3);
  LODWORD(v21) = v10;
  v11 = v10;
  if ( v10 >= 0 )
  {
    v13 = BYTE8(v22);
    v12 = (void *)v22;
  }
  else
  {
    v12 = 0LL;
    *(_QWORD *)&v22 = 0LL;
    v13 = 0;
    BYTE8(v22) = 0;
  }
  v14 = 0LL;
  if ( v10 < 0 )
    goto LABEL_18;
  XWinRT::SerializingLockPolicy::Write(&v23, a1 + 160, &v21);
  v11 = v21;
  if ( (int)v21 >= 0 )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v20);
    XWinRT::SecureVersionTag::TagManager::ChangeVersion((XWinRT::SecureVersionTag::Tag **)(a1 + 176));
    v11 = XWinRT::XHashMap<_GUID,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::Lookup(
            a1 + 72,
            &v25,
            &v21);
    if ( v11 >= 0 )
    {
      v15 = v21;
      if ( (_QWORD)v21 )
      {
        v21 = *(_OWORD *)(v21 + 16);
        v4 = BYTE8(v21);
        v14 = (void *)v21;
        *(_OWORD *)(v15 + 16) = v22;
        *a4 = 1;
      }
      else
      {
        if ( *(_QWORD *)(a1 + 88) == 0x7FFFFFFFLL )
          v11 = -2147024882;
        if ( v11 < 0 )
          goto LABEL_14;
        v11 = XWinRT::XHashMap<_GUID,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::SetAt(
                a1 + 72,
                &v25,
                &v22,
                &v21);
        if ( v11 < 0 )
          goto LABEL_14;
      }
      v12 = 0LL;
      v13 = 0;
    }
  }
LABEL_14:
  if ( v23 )
  {
    v16 = v23 + 1;
    if ( LODWORD(v23->Ptr) == 1 )
      LODWORD(v16->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v16);
  }
LABEL_18:
  if ( v4 )
  {
    XWinRT::detail::GitStorageType<IInspectable>::ReferencedGitCookie::Release(v14);
  }
  else if ( v14 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( v13 )
  {
    XWinRT::detail::GitStorageType<IInspectable>::ReferencedGitCookie::Release(v12);
  }
  else if ( v12 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v11 >= 0 )
  {
    v17 = *(unsigned __int8 *)(a1 + 185);
    v18 = *a4 != 0 ? 3 : 1;
    v25 = *v24;
    return (unsigned int)Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>::RaiseEvent(
                           v20[0],
                           v17,
                           a1,
                           v18,
                           &v25);
  }
  return (unsigned int)v11;
}
