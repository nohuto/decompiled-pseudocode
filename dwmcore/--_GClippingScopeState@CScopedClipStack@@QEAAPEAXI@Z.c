/*
 * XREFs of ??_GClippingScopeState@CScopedClipStack@@QEAAPEAXI@Z @ 0x1801D0014
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067850 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?reserve_region@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUClippingScopeState@CScopedClipStack@@_K0@Z @ 0x18008DA5C (-reserve_region@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippingSc.c)
 *     ??$destruct_range@UClippingScopeState@CScopedClipStack@@@detail@@YAXPEAUClippingScopeState@CScopedClipStack@@0@Z @ 0x1801CF90C (--$destruct_range@UClippingScopeState@CScopedClipStack@@@detail@@YAXPEAUClippingScopeState@CScop.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

CScopedClipStack::ClippingScopeState *__fastcall CScopedClipStack::ClippingScopeState::`scalar deleting destructor'(
        CScopedClipStack::ClippingScopeState *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 21);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return this;
}
