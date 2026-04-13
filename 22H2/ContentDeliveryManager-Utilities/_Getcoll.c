/*
 * XREFs of _Getcoll @ 0x1800CED74
 * Callers:
 *     ?_Getcat@?$collate@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800BF334 (-_Getcat@-$collate@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Getcat@?$collate@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800BF450 (-_Getcat@-$collate@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800C28F8 (-_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800C3590 (-_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?_Getcat@?$collate@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800C9E50 (-_Getcat@-$collate@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800CBBF0 (-_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 * Callees:
 *     _GetLocaleName @ 0x1800BBC98 (_GetLocaleName.c)
 */

_Collvec *__cdecl Getcoll(_Collvec *__return_ptr retstr)
{
  retstr->_Page = *(_DWORD *)(___lc_handle_func() + 4);
  *(&retstr->_Page + 1) = ___lc_collate_cp_func();
  retstr->_LocaleName = GetLocaleName(1);
  return retstr;
}
