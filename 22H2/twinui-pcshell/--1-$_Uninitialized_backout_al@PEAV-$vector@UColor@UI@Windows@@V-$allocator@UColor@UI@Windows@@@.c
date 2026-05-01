/*
 * XREFs of ??1?$_Uninitialized_backout_al@PEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1804C0790
 * Callers:
 *     _std::vector_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color____std::allocator_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color_______::_Assign_range_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color_______::_1_::dtor$14 @ 0x1804C02D9 (_std--vector_std--vector_Windows--UI--Color_std--allocator_Windows--UI--Color____std--allocator_.c)
 *     _std::vector_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color____std::allocator_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color_______::_Range_construct_or_tidy_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color____const____::_1_::dtor$4 @ 0x1804C0513 (_std--vector_std--vector_Windows--UI--Color_std--allocator_Windows--UI--Color____st_ea_1804C0513.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Uninitialized_backout_al<std::vector<Windows::UI::Color> *,std::allocator<std::vector<Windows::UI::Color>>>::~_Uninitialized_backout_al<std::vector<Windows::UI::Color> *,std::allocator<std::vector<Windows::UI::Color>>>(
        __int64 *a1)
{
  std::_Destroy_range<std::allocator<std::vector<Windows::UI::Color>>>(*a1, a1[1]);
}
