/*
 * XREFs of ??_GCRegion@@QEAAPEAXI@Z @ 0x1801C06D0
 * Callers:
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x18001009C (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18004A01C (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1800C76E4 (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ?EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ @ 0x1800C9C4C (-EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?_Destroy@?$_Ref_count_obj2@VCRegion@@@std@@EEAAXXZ @ 0x1801DB8C0 (-_Destroy@-$_Ref_count_obj2@VCRegion@@@std@@EEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@0@@Z @ 0x180284AF4 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCRegion@@U-$default_delete@VCRegion@@@std@@@std@@@.c)
 *     ?Initialize@CDDisplaySwapChain@@IEAAJXZ @ 0x180287488 (-Initialize@CDDisplaySwapChain@@IEAAJXZ.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x1802B5EC8 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

void **__fastcall CRegion::`scalar deleting destructor'(void **this, char a2)
{
  FastRegion::CRegion::FreeMemory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
