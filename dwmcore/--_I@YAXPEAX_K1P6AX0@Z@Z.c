/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800EE108
 * Callers:
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x18001009C (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ @ 0x180011308 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ.c)
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z @ 0x18002FAD0 (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z.c)
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x1800CF778 (-CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ.c)
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800EDCB4 (--1CD3DDevice@@MEAA@XZ.c)
 *     ??1CCpuClipAntialiasSink@@UEAA@XZ @ 0x1800EE0AC (--1CCpuClipAntialiasSink@@UEAA@XZ.c)
 *     ??1CSurfaceShaderComposer@@QEAA@XZ @ 0x1800EE2AC (--1CSurfaceShaderComposer@@QEAA@XZ.c)
 *     ??1CDrawListBatchManager@@IEAA@XZ @ 0x1800EE30C (--1CDrawListBatchManager@@IEAA@XZ.c)
 *     _dynamic_atexit_destructor_for__CCustomKernelEffect::s_rgspCache__ @ 0x180120570 (_dynamic_atexit_destructor_for__CCustomKernelEffect--s_rgspCache__.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801CE680 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1801F7758 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ??_GCProjectedShadowRenderingEffect@@EEAAPEAXI@Z @ 0x180205C50 (--_GCProjectedShadowRenderingEffect@@EEAAPEAXI@Z.c)
 *     ??1CManipulation@@UEAA@XZ @ 0x18020A498 (--1CManipulation@@UEAA@XZ.c)
 *     ??1CExpressionManager@@EEAA@XZ @ 0x18021368C (--1CExpressionManager@@EEAA@XZ.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x18022D238 (--1CInteractionTracker@@UEAA@XZ.c)
 *     ??1CTableTransferEffect@@UEAA@XZ @ 0x18025106C (--1CTableTransferEffect@@UEAA@XZ.c)
 *     ??1EffectStage@@QEAA@XZ @ 0x18025FF68 (--1EffectStage@@QEAA@XZ.c)
 *     ??1CDummyRemotingSwapChain@@MEAA@XZ @ 0x1802959D4 (--1CDummyRemotingSwapChain@@MEAA@XZ.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1802A7F3C (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall `vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx
  char *v7; // rdi

  if ( a3 )
  {
    v5 = a3;
    v7 = &a1[a3 * a2];
    do
    {
      v7 -= a2;
      a4(v7);
      --v5;
    }
    while ( v5 );
  }
}
