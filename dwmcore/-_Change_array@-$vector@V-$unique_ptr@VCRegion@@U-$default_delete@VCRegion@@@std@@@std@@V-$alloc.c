/*
 * XREFs of ?_Change_array@?$vector@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@V?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@2@_K1@Z @ 0x180288864
 * Callers:
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@?$vector@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@V?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180284C6C (--$_Emplace_reallocate@V-$unique_ptr@VCRegion@@U-$default_delete@VCRegion@@@std@@@std@@@-$vector.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@0@@Z @ 0x180284AF4 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCRegion@@U-$default_delete@VCRegion@@@std@@@std@@@.c)
 */

__int64 __fastcall std::vector<std::unique_ptr<CRegion>>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void ***v6; // rcx
  __int64 result; // rax

  v6 = *(void ****)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CRegion>>>(v6, *(void ****)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
