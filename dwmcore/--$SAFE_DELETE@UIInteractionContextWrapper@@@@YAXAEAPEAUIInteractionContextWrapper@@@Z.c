/*
 * XREFs of ??$SAFE_DELETE@UIInteractionContextWrapper@@@@YAXAEAPEAUIInteractionContextWrapper@@@Z @ 0x18020844C
 * Callers:
 *     ?Initialize@CInteraction@@MEAAJXZ @ 0x1800399A0 (-Initialize@CInteraction@@MEAAJXZ.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x180208E24 (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall SAFE_DELETE<IInteractionContextWrapper>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    operator delete(v2);
    *a1 = 0LL;
  }
}
