/*
 * XREFs of ?Lookup@ChunkView@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@PEAPEAUIInspectable@@@Z @ 0x180293B30
 * Callers:
 *     ??$IterateOnChunks@V_lambda_eda52849211e48fcc6ebfb474f023ee7_@@V_lambda_029b11a614e8d181bc695eeec47f77e0_@@@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJV_lambda_eda52849211e48fcc6ebfb474f023ee7_@@V_lambda_029b11a614e8d181bc695eeec47f77e0_@@@Z @ 0x18028D9E4 (--$IterateOnChunks@V_lambda_eda52849211e48fcc6ebfb474f023ee7_@@V_lambda_029b11a614e8d181bc695eee.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::ChunkView::Lookup(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // r14
  __int64 result; // rax
  __int64 v10; // rax
  __int128 v11; // [rsp+28h] [rbp-40h] BYREF

  v6 = 0LL;
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 12LL);
  while ( 1 )
  {
    if ( (unsigned int)v6 >= v7 )
    {
      result = 2147483659LL;
      goto LABEL_11;
    }
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v6 + 16);
    v11 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v8 + 48LL))(v8, &v11);
    if ( (int)result < 0 )
      goto LABEL_11;
    v10 = *a2 - v11;
    if ( *a2 == (_QWORD)v11 )
      v10 = a2[1] - *((_QWORD *)&v11 + 1);
    if ( !v10 )
      break;
    v6 = (unsigned int)(v6 + 1);
  }
  result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v8 + 56LL))(v8, a3);
  if ( (int)result >= 0 )
    return result;
LABEL_11:
  *a3 = 0LL;
  return result;
}
