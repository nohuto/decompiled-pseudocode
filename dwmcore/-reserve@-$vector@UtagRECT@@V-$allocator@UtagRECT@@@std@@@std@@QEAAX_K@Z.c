/*
 * XREFs of ?reserve@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAX_K@Z @ 0x1800425E0
 * Callers:
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180042478 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?AddTransientDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z @ 0x1801D0050 (-AddTransientDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18004269C (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1801AF7D8 (-_Xlength@-$vector@V-$unique_ptr@UICheckMPOCache@@U-$default_delete@UICheckMPOCache@@@std@@@std@.c)
 */

unsigned __int64 __fastcall std::vector<tagRECT>::reserve(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v5; // rsi
  SIZE_T size_of; // rax
  char *v7; // rbp

  result = (__int64)(a1[2] - *a1) >> 4;
  if ( a2 > result )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<std::unique_ptr<ICheckMPOCache>>::_Xlength();
    v5 = a1[1] - *a1;
    size_of = std::_Get_size_of_n<16>(a2);
    v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    result = (unsigned __int64)memmove_0(v7, (const void *)*a1, a1[1] - *a1);
    if ( *a1 )
      result = std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *a1 = v7;
    a1[1] = &v7[v5 & 0xFFFFFFFFFFFFFFF0uLL];
    a1[2] = &v7[16 * a2];
  }
  return result;
}
