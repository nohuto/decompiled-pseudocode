/*
 * XREFs of ??$_Get_size_of_n@$0M@@std@@YA_K_K@Z @ 0x1800D16CC
 * Callers:
 *     ?_Reallocate_exactly@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAX_K@Z @ 0x1800D1650 (-_Reallocate_exactly@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Insert_range@PEBUMilPoint3F@@@?$vector@UMilPoint3F@@V?$allocator@UMilPoint3F@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMilPoint3F@@@std@@@std@@@1@PEBUMilPoint3F@@1Uforward_iterator_tag@1@@Z @ 0x1801BC584 (--$_Insert_range@PEBUMilPoint3F@@@-$vector@UMilPoint3F@@V-$allocator@UMilPoint3F@@@std@@@std@@AE.c)
 *     ?_Reallocate_exactly@?$vector@Ufloat3@Numerics@Foundation@Windows@@V?$allocator@Ufloat3@Numerics@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1801C7CB4 (-_Reallocate_exactly@-$vector@Ufloat3@Numerics@Foundation@Windows@@V-$allocator@Ufloat3@Numerics.c)
 *     ??$_Emplace_reallocate@AEBUfloat3@Numerics@Foundation@Windows@@@?$vector@Ufloat3@Numerics@Foundation@Windows@@V?$allocator@Ufloat3@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat3@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x18023E788 (--$_Emplace_reallocate@AEBUfloat3@Numerics@Foundation@Windows@@@-$vector@Ufloat3@Numerics@Founda.c)
 *     ??$_Emplace_reallocate@AEAMMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAAPEAUKernelTap@@QEAU2@AEAM$$QEAM1@Z @ 0x18027F2AC (--$_Emplace_reallocate@AEAMMAEAM@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@QEAAP.c)
 *     ??$_Emplace_reallocate@MAEAMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAAPEAUKernelTap@@QEAU2@$$QEAMAEAM2@Z @ 0x18027F41C (--$_Emplace_reallocate@MAEAMAEAM@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@QEAAP.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1801A3990 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<12>(unsigned __int64 a1)
{
  if ( a1 > 0x1555555555555555LL )
    std::_Throw_bad_array_new_length();
  return 12 * a1;
}
