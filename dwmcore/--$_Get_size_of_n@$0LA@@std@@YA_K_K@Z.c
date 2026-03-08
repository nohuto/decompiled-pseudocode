/*
 * XREFs of ??$_Get_size_of_n@$0LA@@std@@YA_K_K@Z @ 0x18000744C
 * Callers:
 *     ??$_Emplace_reallocate@VCVisualDepthGeometry@@@?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@std@@QEAAPEAVCVisualDepthGeometry@@QEAV2@$$QEAV2@@Z @ 0x18025663C (--$_Emplace_reallocate@VCVisualDepthGeometry@@@-$vector@VCVisualDepthGeometry@@V-$allocator@VCVi.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1801A3990 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<176>(unsigned __int64 a1)
{
  if ( a1 > 0x1745D1745D1745DLL )
    std::_Throw_bad_array_new_length();
  return 176 * a1;
}
