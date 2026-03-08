/*
 * XREFs of ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x180019878
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180031CF4 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ?SetWorldTransform@CDesktopTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1800C2260 (-SetWorldTransform@CDesktopTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z.c)
 * Callees:
 *     ?GetInputLuid@CInteraction@@QEBA?AU_LUID@@XZ @ 0x1800198B0 (-GetInputLuid@CInteraction@@QEBA-AU_LUID@@XZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18009A504 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 */

struct _LUID __fastcall CVisual::GetInputLuid(CVisual *this, _QWORD *a2)
{
  CInteraction *InteractionInternal; // rax
  _QWORD *v3; // r10
  _QWORD *InputLuid; // rax

  *a2 = 0LL;
  InteractionInternal = CVisual::GetInteractionInternal(this);
  if ( InteractionInternal )
  {
    InputLuid = (_QWORD *)CInteraction::GetInputLuid(InteractionInternal);
    *v3 = *InputLuid;
  }
  return (struct _LUID)v3;
}
