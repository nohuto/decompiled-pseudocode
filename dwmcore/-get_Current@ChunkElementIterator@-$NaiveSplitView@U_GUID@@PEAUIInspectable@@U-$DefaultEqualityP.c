/*
 * XREFs of ?get_Current@ChunkElementIterator@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@456@@Z @ 0x1802953D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::ChunkElementIterator::get_Current(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rcx

  v2 = 0;
  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(unsigned int *)(a1 + 72);
  if ( (unsigned int)v4 >= *(_DWORD *)(v3 + 12) )
  {
    v2 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  else
  {
    v5 = *(_QWORD *)(v3 + 8 * v4 + 16);
    *a2 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return v2;
}
