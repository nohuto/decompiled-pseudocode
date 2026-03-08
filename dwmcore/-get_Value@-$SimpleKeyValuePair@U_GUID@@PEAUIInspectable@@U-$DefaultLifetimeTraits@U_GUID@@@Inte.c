/*
 * XREFs of ?get_Value@?$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1802957F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Localize@ReferencedGitCookie@?$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAJPEAPEAUIInspectable@@@Z @ 0x1802938EC (-Localize@ReferencedGitCookie@-$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAJPEAPEAUIInspe.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleKeyValuePair<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::get_Value(
        __m128i *a1,
        _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __m128i v5; // [rsp+20h] [rbp-18h]

  v2 = 0;
  v5 = a1[5];
  v3 = a1[5].m128i_i64[0];
  if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v5, 8)) )
  {
    return (unsigned int)XWinRT::detail::GitStorageType<IInspectable>::ReferencedGitCookie::Localize(v3, a2);
  }
  else
  {
    *a2 = v5.m128i_i64[0];
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return v2;
}
