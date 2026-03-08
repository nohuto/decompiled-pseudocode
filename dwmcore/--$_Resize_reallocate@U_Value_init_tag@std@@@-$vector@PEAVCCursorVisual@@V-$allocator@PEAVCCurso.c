/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@PEAVCCursorVisual@@V?$allocator@PEAVCCursorVisual@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801EF368
 * Callers:
 *     ?UnregisterCursorVisual@CGlobalComposition@@UEAAXPEAVCCursorVisual@@@Z @ 0x1801EF970 (-UnregisterCursorVisual@CGlobalComposition@@UEAAXPEAVCCursorVisual@@@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEBA_K_K@Z @ 0x18001E160 (-_Calculate_growth@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@std@@@std@@AEBA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B9880 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

__int64 __fastcall std::vector<CCursorVisual *>::_Resize_reallocate<std::_Value_init_tag>(
        const void **a1,
        unsigned __int64 a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  SIZE_T size_of; // rax
  char *v7; // rdi

  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v4 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  v5 = std::vector<CMilPoint2F>::_Calculate_growth(a1, a2);
  size_of = std::_Get_size_of_n<8>(v5);
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  memset_0(&v7[8 * v4], 0, 8 * (a2 - v4));
  memmove_0(v7, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
  return std::vector<CCursorVisual *>::_Change_array(a1, v7, a2, v5);
}
