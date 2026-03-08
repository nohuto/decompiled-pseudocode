/*
 * XREFs of ??$UnRegisterNotifiers@VCTransform@@@CResource@@QEAAXPEAV?$vector@PEAVCTransform@@V?$allocator@PEAVCTransform@@@std@@@std@@@Z @ 0x180023234
 * Callers:
 *     ??1?$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@MEAA@XZ @ 0x18000C234 (--1-$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@MEAA@XZ.c)
 *     ?SetOrAppendChildren@?$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@AEAAJAEBV?$span@PEAVCTransform@@$0?0@gsl@@_N@Z @ 0x18000C298 (-SetOrAppendChildren@-$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@AEAAJAEBV-$spa.c)
 *     ??1?$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@MEAA@XZ @ 0x180023124 (--1-$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@MEAA@XZ.c)
 *     ?SetOrAppendChildren@?$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@AEAAJAEBV?$span@PEAVCAtlasedRectsMesh@@$0?0@gsl@@_N@Z @ 0x180023190 (-SetOrAppendChildren@-$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@AEAAJAEBV-.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

struct CResource **__fastcall CResource::UnRegisterNotifiers<CTransform>(CResource *this, struct CResource ***a2)
{
  struct CResource **v2; // rsi
  struct CResource **i; // rdi
  struct CResource **result; // rax

  v2 = a2[1];
  for ( i = *a2; i != v2; ++i )
    CResource::UnRegisterNotifierInternal(this, *i);
  result = *a2;
  a2[1] = *a2;
  return result;
}
