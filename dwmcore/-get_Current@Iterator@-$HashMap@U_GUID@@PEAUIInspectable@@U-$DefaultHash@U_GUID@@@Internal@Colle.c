/*
 * XREFs of ?get_Current@Iterator@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@456@@Z @ 0x180295430
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureVersionMatches@Iterator@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x18029166C (-EnsureVersionMatches@Iterator@-$HashMap@U_GUID@@PEAUIInspectable@@U-$DefaultHash@U_GUID@@@Inter.c)
 *     ?InternalRelease@?$ComPtr@V?$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180293874 (-InternalRelease@-$ComPtr@V-$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U-$DefaultLifetimeTrai.c)
 *     ?Make@?$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@SAJAEBU_GUID@@AEBV?$GitStorageType@UIInspectable@@@detail@XWinRT@@PEAPEAV12345@@Z @ 0x180293C74 (-Make@-$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U-$DefaultLifetimeTraits@U_GUID@@@Internal@.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180294370 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Iterator::get_Current(
        __int64 a1,
        __int64 *a2)
{
  int v4; // edi
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rbx
  RTL_SRWLOCK *v8; // rcx
  __int64 v10; // [rsp+40h] [rbp+20h] BYREF
  __int64 v11; // [rsp+48h] [rbp+28h] BYREF
  RTL_SRWLOCK *v12; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  LODWORD(v10) = 0;
  XWinRT::SerializingLockPolicy::Read(&v12, (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 64) + 160LL), &v10);
  v4 = v10;
  if ( (int)v10 >= 0 )
  {
    v5 = Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Iterator::EnsureVersionMatches(a1);
    v6 = *(_QWORD *)(a1 + 72);
    LODWORD(v10) = v5;
    v4 = v5;
    if ( v5 >= 0 )
    {
      if ( !v6 )
      {
        v4 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
      if ( v4 >= 0 )
      {
        v10 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>>::InternalRelease(&v10);
        v4 = Windows::Foundation::Collections::Internal::SimpleKeyValuePair<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::Make(
               (__int128 *)v6,
               (__m128i *)(v6 + 16),
               &v10);
        if ( v4 >= 0 )
        {
          v7 = v10;
          if ( v10 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
          v11 = 0LL;
          *a2 = v7;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>>::InternalRelease(&v10);
      }
    }
  }
  if ( v12 )
  {
    v8 = v12 + 1;
    if ( LODWORD(v12->Ptr) == 1 )
      --LODWORD(v8->Ptr);
    else
      ReleaseSRWLockShared(v8);
  }
  return (unsigned int)v4;
}
