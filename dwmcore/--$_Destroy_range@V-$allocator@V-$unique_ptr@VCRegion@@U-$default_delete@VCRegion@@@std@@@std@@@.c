/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@0@@Z @ 0x180284AF4
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@V?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@0@@Z @ 0x180284F20 (--$_Uninitialized_move@PEAV-$unique_ptr@VCRegion@@U-$default_delete@VCRegion@@@std@@@std@@V-$all.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x180285070 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@V?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@2@_K1@Z @ 0x180288864 (-_Change_array@-$vector@V-$unique_ptr@VCRegion@@U-$default_delete@VCRegion@@@std@@@std@@V-$alloc.c)
 * Callees:
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x1801C06D0 (--_GCRegion@@QEAAPEAXI@Z.c)
 */

void **__fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CRegion>>>(void ***a1, void ***a2)
{
  void ***v3; // rbx
  void **result; // rax

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
