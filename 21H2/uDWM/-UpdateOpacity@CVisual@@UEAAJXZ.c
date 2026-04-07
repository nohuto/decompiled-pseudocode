/*
 * XREFs of ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x18003CFA0
 * Callers:
 *     ?UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180006FD8 (-UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x180009120 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x180084094 (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::UpdateOpacity(CVisual *this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 184LL))(this);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x347u);
  return v2;
}
