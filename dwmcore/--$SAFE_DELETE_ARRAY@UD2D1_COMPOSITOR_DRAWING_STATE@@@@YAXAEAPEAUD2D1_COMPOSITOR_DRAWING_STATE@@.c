/*
 * XREFs of ??$SAFE_DELETE_ARRAY@UD2D1_COMPOSITOR_DRAWING_STATE@@@@YAXAEAPEAUD2D1_COMPOSITOR_DRAWING_STATE@@@Z @ 0x180117590
 * Callers:
 *     ?Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180011424 (-Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 */

void __fastcall SAFE_DELETE_ARRAY<D2D1_COMPOSITOR_DRAWING_STATE>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    operator delete(v2);
    *a1 = 0LL;
  }
}
