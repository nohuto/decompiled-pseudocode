/*
 * XREFs of ?AddPair@Chunk@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@QEAAJPEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@456@@Z @ 0x18028FA48
 * Callers:
 *     ?Initialize@ChunkView@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@QEAAJPEAU?$IIterator@PEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@@456@@Z @ 0x180293480 (-Initialize@ChunkView@-$NaiveSplitView@U_GUID@@PEAUIInspectable@@U-$DefaultEqualityPredicate@U_G.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Chunk::AddPair(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *(_DWORD *)(a1 + 12) == 16 )
  {
    return (unsigned int)-2147024882;
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    *(_QWORD *)(a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 12))++ + 16) = a2;
  }
  return v2;
}
