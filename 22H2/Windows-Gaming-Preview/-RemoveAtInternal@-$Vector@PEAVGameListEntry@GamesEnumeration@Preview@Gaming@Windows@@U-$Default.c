/*
 * XREFs of ?RemoveAtInternal@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x18000DEBC
 * Callers:
 *     ?RemoveAt@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x18000C720 (-RemoveAt@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEquality.c)
 *     ?RemoveAtEnd@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18000C750 (-RemoveAtEnd@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqual.c)
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000D9D8 (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000DAAC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x18000ED08 (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 *     ?ResizeStorage@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18000F710 (-ResizeStorage@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqu.c)
 *     _invalid_parameter_noinfo @ 0x18004566E (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x180045FAF (memmove_0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  _DWORD *v6; // rbx
  RTL_SRWLOCK *v7; // r14
  unsigned int v8; // eax
  int v9; // esi
  __int64 v10; // rax
  __int128 v11; // xmm6
  int v12; // r8d
  __int64 v13; // rdx
  void *v14; // rcx
  unsigned int v15; // ecx
  unsigned int v16; // r8d
  unsigned int v17; // edx
  __int128 v19; // [rsp+30h] [rbp-48h] BYREF
  char v20; // [rsp+80h] [rbp+8h] BYREF
  __int64 v21; // [rsp+98h] [rbp+20h]

  *(_QWORD *)&v19 = 0LL;
  BYTE8(v19) = 0;
  v6 = (_DWORD *)(a1 + 104);
  v21 = a1 + 104;
  v7 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !LODWORD(v7->Ptr) )
      LODWORD(v7->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  v8 = *(_DWORD *)(a1 + 72);
  if ( a3 )
    a2 = v8 - 1;
  if ( a2 >= v8 )
  {
    v9 = -2147483637;
LABEL_16:
    RoOriginateError((unsigned int)v9, 0LL);
    goto LABEL_22;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v20);
  v9 = 0;
  v10 = *(_QWORD *)(a1 + 88);
  if ( *(_BYTE *)(v10 + 16LL * a2 + 8) )
    --*(_DWORD *)(a1 + 80);
  v11 = *(_OWORD *)(v10 + 16LL * a2);
  XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v19);
  v19 = v11;
  v12 = *(_DWORD *)(a1 + 72);
  if ( a2 < v12 - 1 )
  {
    v13 = *(_QWORD *)(a1 + 88);
    v14 = (void *)(v13 + 16LL * a2);
    if ( 16LL * (v12 - a2 - 1) )
    {
      if ( !v14 || !(v13 + 16LL * (a2 + 1)) )
      {
        *(_DWORD *)_o__errno(v14, v13) = 22;
        invalid_parameter_noinfo();
        v9 = -2147418113;
        goto LABEL_16;
      }
      memmove_0(v14, (const void *)(v13 + 16LL * (a2 + 1)), 16LL * (v12 - a2 - 1));
      v12 = *(_DWORD *)(a1 + 72);
    }
  }
  ++*(_DWORD *)(a1 + 120);
  v15 = v12 - 1;
  *(_DWORD *)(a1 + 72) = v12 - 1;
  v16 = *(_DWORD *)(a1 + 76);
  v17 = v16 / 3;
  if ( v15 < v16 / 3 )
  {
    if ( v16 - 1 < v16 - v17 )
      v17 = 1;
    v9 = Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::ResizeStorage(
           a1,
           v16 - v17);
  }
LABEL_22:
  if ( v6 )
  {
    if ( *v6 == 1 )
      LODWORD(v7->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v7);
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v19);
  if ( v9 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  return (unsigned int)v9;
}
