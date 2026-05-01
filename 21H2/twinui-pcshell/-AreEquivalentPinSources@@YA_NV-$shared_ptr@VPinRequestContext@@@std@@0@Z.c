/*
 * XREFs of ?AreEquivalentPinSources@@YA_NV?$shared_ptr@VPinRequestContext@@@std@@0@Z @ 0x1801376D0
 * Callers:
 *     ?AreEquivalentPinOperations@@YA_NV?$shared_ptr@VPinOperationContext@@@std@@0@Z @ 0x180137620 (-AreEquivalentPinOperations@@YA_NV-$shared_ptr@VPinOperationContext@@@std@@0@Z.c)
 *     ?IsPinOperationBlocked@PinHistory@@QEBA_NV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x18013B730 (-IsPinOperationBlocked@PinHistory@@QEBA_NV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x180087854 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ?RequestorImagePath@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x18014001C (-RequestorImagePath@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@X.c)
 *     ?RequestorPackageAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180140068 (-RequestorPackageAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std.c)
 *     ?RequestorProcessAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1801400B4 (-RequestorProcessAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std.c)
 *     ?RequestorWindowAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180140100 (-RequestorWindowAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@.c)
 */

char __fastcall AreEquivalentPinSources(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // r11
  __m128i v4; // xmm6
  __m128i v5; // xmm1
  _QWORD *v6; // r11
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v8; // rcx
  _QWORD *v10; // r11
  _QWORD *v11; // r11
  __int64 v12; // r11
  std::_Ref_count_base *v13; // rcx
  std::_Ref_count_base *v14; // rcx
  _QWORD *v15; // r11
  __m128i v16; // xmm6
  __m128i *v17; // rax
  _QWORD *v18; // r11
  _QWORD *v19; // r11
  char v20; // al
  __int64 v21; // r11
  std::_Ref_count_base *v22; // rcx
  char v23; // di
  std::_Ref_count_base *v24; // rcx
  _BYTE v25[16]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v26[16]; // [rsp+30h] [rbp-20h] BYREF

  v4 = *(__m128i *)PinRequestContext::RequestorImagePath(*a2, v26);
  v5 = *(__m128i *)PinRequestContext::RequestorImagePath(*v3, v25);
  if ( std::_Traits_equal<std::char_traits<unsigned short>>(
         v5.m128i_i64[0],
         _mm_srli_si128(v5, 8).m128i_i64[0],
         (unsigned __int16 *)v4.m128i_i64[0],
         _mm_srli_si128(v4, 8).m128i_i64[0]) )
  {
    v7 = (std::_Ref_count_base *)v6[1];
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    v8 = (std::_Ref_count_base *)a2[1];
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    return 1;
  }
  if ( *(_QWORD *)(PinRequestContext::RequestorPackageAppId(*v6, v25) + 8)
    || *(_QWORD *)(PinRequestContext::RequestorPackageAppId(*a2, v25) + 8) )
  {
    v16 = *(__m128i *)PinRequestContext::RequestorPackageAppId(*a2, v25);
    v17 = (__m128i *)PinRequestContext::RequestorPackageAppId(*v19, v26);
  }
  else if ( *(_QWORD *)(PinRequestContext::RequestorWindowAppId(*v10, v25) + 8)
         || *(_QWORD *)(PinRequestContext::RequestorWindowAppId(*a2, v25) + 8) )
  {
    v16 = *(__m128i *)PinRequestContext::RequestorWindowAppId(*a2, v25);
    v17 = (__m128i *)PinRequestContext::RequestorWindowAppId(*v18, v26);
  }
  else
  {
    if ( !*(_QWORD *)(PinRequestContext::RequestorProcessAppId(*v11, v25) + 8)
      && !*(_QWORD *)(PinRequestContext::RequestorProcessAppId(*a2, v25) + 8) )
    {
      v13 = *(std::_Ref_count_base **)(v12 + 8);
      if ( v13 )
        std::_Ref_count_base::_Decref(v13);
      v14 = (std::_Ref_count_base *)a2[1];
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
      return 0;
    }
    v16 = *(__m128i *)PinRequestContext::RequestorProcessAppId(*a2, v25);
    v17 = (__m128i *)PinRequestContext::RequestorProcessAppId(*v15, v26);
  }
  v20 = std::_Traits_equal<std::char_traits<unsigned short>>(
          v17->m128i_i64[0],
          _mm_srli_si128(*v17, 8).m128i_i64[0],
          (unsigned __int16 *)v16.m128i_i64[0],
          _mm_srli_si128(v16, 8).m128i_i64[0]);
  v22 = *(std::_Ref_count_base **)(v21 + 8);
  v23 = v20;
  if ( v22 )
    std::_Ref_count_base::_Decref(v22);
  v24 = (std::_Ref_count_base *)a2[1];
  if ( v24 )
    std::_Ref_count_base::_Decref(v24);
  return v23;
}
