/*
 * XREFs of ??$destruct_range@VOverlayPlaneInfo@COverlayContext@@@detail@@YAXPEAVOverlayPlaneInfo@COverlayContext@@0@Z @ 0x1800CA688
 * Callers:
 *     ?clear_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800CA604 (-clear_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInf.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801DECD4 (-ensure_extra_capacity@-$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansi.c)
 *     ?reserve_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x1801DEE38 (-reserve_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneI.c)
 * Callees:
 *     ??_GOverlayPlaneInfo@COverlayContext@@QEAAPEAXI@Z @ 0x18012F776 (--_GOverlayPlaneInfo@COverlayContext@@QEAAPEAXI@Z.c)
 */

void *__fastcall detail::destruct_range<COverlayContext::OverlayPlaneInfo>(
        COverlayContext::OverlayPlaneInfo *this,
        COverlayContext::OverlayPlaneInfo *a2)
{
  COverlayContext::OverlayPlaneInfo *v3; // rbx
  void *result; // rax

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      result = COverlayContext::OverlayPlaneInfo::`scalar deleting destructor'(v3, (unsigned int)a2);
      v3 = (COverlayContext::OverlayPlaneInfo *)((char *)v3 + 224);
    }
    while ( v3 != a2 );
  }
  return result;
}
