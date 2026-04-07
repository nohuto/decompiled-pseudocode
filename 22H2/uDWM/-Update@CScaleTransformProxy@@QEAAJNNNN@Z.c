/*
 * XREFs of ?Update@CScaleTransformProxy@@QEAAJNNNN@Z @ 0x18003FB84
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180001C80 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x1800115D4 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180019514 (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A8324 (-_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CScaleTransformProxy::Update(CScaleTransformProxy *this, double a2, double a3, double a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 976LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL));
}
