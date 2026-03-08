/*
 * XREFs of ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@std@@$0A@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V21@1@Z @ 0x18021D880
 * Callers:
 *     ?GetTextureMemoryLayoutData@CClipBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x18021DEF0 (-GetTextureMemoryLayoutData@CClipBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CContent@@.c)
 *     ?GetTextureMemoryLayoutData@CEffectBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x180228130 (-GetTextureMemoryLayoutData@CEffectBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CContent.c)
 *     ?GetTextureMemoryLayoutData@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x180237D20 (-GetTextureMemoryLayoutData@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CContent@@.c)
 * Callees:
 *     ??$_Insert_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@PEAULayoutData@CContent@@1Uforward_iterator_tag@1@@Z @ 0x18021D658 (--$_Insert_range@PEAULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutDa.c)
 */

_QWORD *__fastcall std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,0>(
        _QWORD *a1,
        _QWORD *a2,
        _BYTE *a3,
        const void *a4,
        __int64 a5)
{
  unsigned __int64 v6; // rbx
  _QWORD *result; // rax

  v6 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)&a3[-*a1] >> 3);
  std::vector<CContent::LayoutData>::_Insert_range<CContent::LayoutData *>((__int64)a1, a3, a4, a5);
  result = a2;
  *a2 = *a1 + 40 * v6;
  return result;
}
