/*
 * XREFs of ??0ClippingScopeState@CScopedClipStack@@QEAA@$$QEAU01@@Z @ 0x1801D786C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067850 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?reserve_region@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUClippingScopeState@CScopedClipStack@@_K0@Z @ 0x18008DA5C (-reserve_region@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippingSc.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@0@0V12@@Z @ 0x1801D76DC (--$uninitialized_move@V-$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@@V-$checked.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CScopedClipStack::ClippingScopeState::ClippingScopeState(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 100) = *(_OWORD *)(a2 + 100);
  *(_OWORD *)(a1 + 116) = *(_OWORD *)(a2 + 116);
  *(_OWORD *)(a1 + 132) = *(_OWORD *)(a2 + 132);
  *(_OWORD *)(a1 + 148) = *(_OWORD *)(a2 + 148);
  *(_DWORD *)(a1 + 164) = *(_DWORD *)(a2 + 164);
  v2 = *(_QWORD *)(a2 + 168);
  *(_QWORD *)(a2 + 168) = 0LL;
  *(_QWORD *)(a1 + 168) = v2;
  *(_BYTE *)(a1 + 176) = *(_BYTE *)(a2 + 176);
  return a1;
}
