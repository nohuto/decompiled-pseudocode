/*
 * XREFs of ?HasKey@ChunkView@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@PEAE@Z @ 0x180292F50
 * Callers:
 *     ??$IterateOnChunks@V_lambda_c06bd913fe980784c932ce8bf93bd220_@@V_lambda_d28283a6c310c846aef711a97467b492_@@@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJV_lambda_c06bd913fe980784c932ce8bf93bd220_@@V_lambda_d28283a6c310c846aef711a97467b492_@@@Z @ 0x18028D94C (--$IterateOnChunks@V_lambda_c06bd913fe980784c932ce8bf93bd220_@@V_lambda_d28283a6c310c846aef711a9.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::ChunkView::HasKey(
        __int64 a1,
        _QWORD *a2,
        _BYTE *a3)
{
  unsigned int v6; // ebp
  __int64 result; // rax
  __int64 i; // rbx
  __int64 v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF

  *a3 = 0;
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 12LL);
  result = 0LL;
  for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * i + 16);
    v10 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v9 + 48LL))(v9, &v10);
    if ( (int)result < 0 )
      break;
    result = *a2 - v10;
    if ( *a2 == (_QWORD)v10 )
      result = a2[1] - *((_QWORD *)&v10 + 1);
    if ( !result )
    {
      *a3 = 1;
      return result;
    }
    result = 0LL;
  }
  return result;
}
