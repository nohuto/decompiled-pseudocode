/*
 * XREFs of ?GetInputLuid@CInteraction@@QEBA?AU_LUID@@XZ @ 0x1800198B0
 * Callers:
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x180019878 (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180031CF4 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CInteraction::GetInputLuid(CInteraction *this, _QWORD *a2)
{
  __int64 v2; // rax

  *a2 = 0LL;
  v2 = *((_QWORD *)this + 13);
  if ( v2 )
    *a2 = *(_QWORD *)(v2 + 96);
  return (struct _LUID)a2;
}
