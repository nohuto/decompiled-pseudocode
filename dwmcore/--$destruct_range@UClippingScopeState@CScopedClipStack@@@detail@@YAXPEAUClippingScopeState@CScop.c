/*
 * XREFs of ??$destruct_range@UClippingScopeState@CScopedClipStack@@@detail@@YAXPEAUClippingScopeState@CScopedClipStack@@0@Z @ 0x1801CF90C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067850 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?reserve_region@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUClippingScopeState@CScopedClipStack@@_K0@Z @ 0x18008DA5C (-reserve_region@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippingSc.c)
 * Callees:
 *     ??_GClippingScopeState@CScopedClipStack@@QEAAPEAXI@Z @ 0x1801D0014 (--_GClippingScopeState@CScopedClipStack@@QEAAPEAXI@Z.c)
 */

void *__fastcall detail::destruct_range<CScopedClipStack::ClippingScopeState>(
        CScopedClipStack::ClippingScopeState *this,
        CScopedClipStack::ClippingScopeState *a2)
{
  CScopedClipStack::ClippingScopeState *v3; // rbx
  void *result; // rax

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      result = CScopedClipStack::ClippingScopeState::`scalar deleting destructor'(v3, (unsigned int)a2);
      v3 = (CScopedClipStack::ClippingScopeState *)((char *)v3 + 184);
    }
    while ( v3 != a2 );
  }
  return result;
}
