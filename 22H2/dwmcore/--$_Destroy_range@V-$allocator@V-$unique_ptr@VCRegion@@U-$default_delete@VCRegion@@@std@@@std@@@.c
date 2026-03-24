/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@0@0AEAV?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@0@@Z @ 0x180238E34
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@PEAV12@V?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@0@@Z @ 0x180238F98 (--$_Uninitialized_move@PEAV-$unique_ptr@VCRegion@@U-$default_delete@VCRegion@@@std@@@std@@PEAV12.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@V?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@2@_K1@Z @ 0x18023ADE0 (-_Change_array@-$vector@V-$unique_ptr@VCRegion@@U-$default_delete@VCRegion@@@std@@@std@@V-$alloc.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x1802423FC (--1CDDisplaySwapChain@@MEAA@XZ.c)
 * Callees:
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x18002B3F4 (--_GCRegion@@QEAAPEAXI@Z.c)
 */

CRegion *__fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CRegion>>>(CRegion **a1, CRegion **a2)
{
  CRegion **v3; // rbx
  CRegion *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *v3 )
        result = CRegion::`scalar deleting destructor'(*v3, 1);
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
