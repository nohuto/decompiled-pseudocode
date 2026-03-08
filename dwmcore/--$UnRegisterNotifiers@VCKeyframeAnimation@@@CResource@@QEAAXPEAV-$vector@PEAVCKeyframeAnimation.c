/*
 * XREFs of ??$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV?$vector@PEAVCKeyframeAnimation@@V?$allocator@PEAVCKeyframeAnimation@@@std@@@std@@@Z @ 0x180023460
 * Callers:
 *     ??1?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@MEAA@XZ @ 0x180022E3C (--1-$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@MEAA@XZ.c)
 *     ?SetOrAppendKeyframeAnimations@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@AEAAJAEBV?$span@PEAVCKeyframeAnimation@@$0?0@gsl@@_N@Z @ 0x180022EA0 (-SetOrAppendKeyframeAnimations@-$CAnimationControllerGeneratedT@VCAnimationController@@VCPropert.c)
 *     ??1?$CGeometry2DGroupGeneratedT@VCGeometry2DGroup@@VCGeometry2D@@@@MEAA@XZ @ 0x1801BE75C (--1-$CGeometry2DGroupGeneratedT@VCGeometry2DGroup@@VCGeometry2D@@@@MEAA@XZ.c)
 *     ??1?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@MEAA@XZ @ 0x1801BEA98 (--1-$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@MEAA@XZ.c)
 *     ?SetOrAppendAttractors@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCParticleAttractor@@$0?0@gsl@@_N@Z @ 0x1801C4B64 (-SetOrAppendAttractors@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@A.c)
 *     ?SetOrAppendChildren@?$CGeometry2DGroupGeneratedT@VCGeometry2DGroup@@VCGeometry2D@@@@AEAAJAEBV?$span@PEAVCGeometry2D@@$0?0@gsl@@_N@Z @ 0x1801C4C94 (-SetOrAppendChildren@-$CGeometry2DGroupGeneratedT@VCGeometry2DGroup@@VCGeometry2D@@@@AEAAJAEBV-$.c)
 *     ?SetOrAppendChildren@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@_N@Z @ 0x1801C4D54 (-SetOrAppendChildren@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAVCS.c)
 *     ?SetOrAppendChildren@?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@AEAAJAEBV?$span@PEAVCTransform3D@@$0?0@gsl@@_N@Z @ 0x1801C4DFC (-SetOrAppendChildren@-$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@AEAAJAEB.c)
 *     ?SetOrAppendComponents@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@_N@Z @ 0x1801C4EC4 (-SetOrAppendComponents@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAV.c)
 *     ?SetOrAppendGlyphRuns@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCCompositionGlyphRun@@$0?0@gsl@@_N@Z @ 0x1801C4F6C (-SetOrAppendGlyphRuns@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV-$span@PEAVCCom.c)
 *     ?SetOrAppendStrikethroughs@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@_N@Z @ 0x1801C5090 (-SetOrAppendStrikethroughs@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV-$span@PEA.c)
 *     ?SetOrAppendUnderlines@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@_N@Z @ 0x1801C5208 (-SetOrAppendUnderlines@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV-$span@PEAVCCo.c)
 *     ??1?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@MEAA@XZ @ 0x1802402F0 (--1-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@MEAA@XZ.c)
 *     ??1?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@MEAA@XZ @ 0x18024D554 (--1-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@MEAA@XZ.c)
 *     ??1?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@MEAA@XZ @ 0x180251764 (--1-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

struct CResource **__fastcall CResource::UnRegisterNotifiers<CKeyframeAnimation>(
        CResource *this,
        struct CResource ***a2)
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
