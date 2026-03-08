/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800B9278
 * Callers:
 *     ?GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x18002E120 (-GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEBA_K_K@Z @ 0x18001E160 (-_Calculate_growth@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@std@@@std@@AEBA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B9880 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1801AF7D8 (-_Xlength@-$vector@V-$unique_ptr@UICheckMPOCache@@U-$default_delete@UICheckMPOCache@@@std@@@std@.c)
 */

__int64 __fastcall std::vector<CMilPoint2F>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 **a1,
        unsigned __int64 a2)
{
  __int64 v4; // rsi
  SIZE_T size_of; // rax
  __int64 v6; // rax
  __int64 *v7; // r8
  _QWORD *v8; // rdx
  __int64 *i; // rcx
  __int64 v11; // xmm0_8

  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::vector<std::unique_ptr<ICheckMPOCache>>::_Xlength();
  v4 = std::vector<CMilPoint2F>::_Calculate_growth(a1, a2);
  size_of = std::_Get_size_of_n<8>(v4);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v7 = a1[1];
  v8 = (_QWORD *)v6;
  for ( i = *a1; i != v7; ++i )
  {
    v11 = *i;
    *v8++ = v11;
  }
  return std::vector<CMilPoint2F>::_Change_array(a1, v6, a2, v4);
}
