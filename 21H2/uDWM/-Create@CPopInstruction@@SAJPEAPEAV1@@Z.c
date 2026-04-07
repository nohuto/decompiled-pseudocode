/*
 * XREFs of ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x18003CC50
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180011E14 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x1800171C4 (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180019D54 (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180020AE0 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A8594 (-_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPopInstruction::Create(struct CPopInstruction **a1)
{
  unsigned int v2; // ebx
  struct CPopInstruction *v3; // rax

  v2 = 0;
  v3 = (struct CPopInstruction *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 16LL))(
                                   WPF::g_pProcessHeap,
                                   16LL);
  if ( v3 )
  {
    *((_DWORD *)v3 + 2) = 1;
    *(_QWORD *)v3 = &CPopInstruction::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    *a1 = v3;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1Cu);
  }
  return v2;
}
