/*
 * XREFs of ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x1800321D0
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180031CF4 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x18019F884 (-s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 * Callees:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18004B254 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVisibility@@@Z @ 0x1800EF7C8 (-Push@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVis.c)
 */

__int64 __fastcall CHitTestContext::HitTestTreeWalk(__int64 a1, __int64 a2, float a3, float a4, int a5)
{
  __int64 v7; // r8
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx

  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 240) = a5;
  *(_QWORD *)(a1 + 144) = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(float *)(a1 + 88) = a3;
  *(float *)(a1 + 92) = a4;
  *(_BYTE *)(a1 + 128) = 0;
  CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Push(a1 + 176, &CRenderState::sc_DefaultBackfaceVisibility);
  v7 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 72) = a2;
  v8 = CVisualTreeIterator::WalkSubtree<CHitTestContext>(a1 + 8, *(_QWORD *)(a2 + 64), v7, a1);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x22Fu, 0LL);
  return v10;
}
