/*
 * XREFs of ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18008D240
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18003AD00 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18008C738 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18008D1DC (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801EA030 (-Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     wil::details::lambda_call__lambda_34259e71d2ff4394552eb19e2662e2a9___::_lambda_call__lambda_34259e71d2ff4394552eb19e2662e2a9___ @ 0x18022CD28 (wil--details--lambda_call__lambda_34259e71d2ff4394552eb19e2662e2a9___--_lambda_call__lambda_3425.c)
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18022D2B8 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x18008F224 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PopLayerInternal(__int64 a1)
{
  __int64 v2; // r8
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v9; // eax
  unsigned int v10; // ecx

  v2 = (unsigned int)(*(_DWORD *)(a1 + 520) - 1);
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 496) + 8 * v2);
  *(_DWORD *)(a1 + 520) = v2;
  if ( CScopedClipStack::HasCpuClipsInScope((CScopedClipStack *)(a1 + 896)) )
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 1872) - 16LL);
  else
    v6 = 0LL;
  if ( v4 == v6 )
  {
    v7 = *(_QWORD *)(a1 + 2768);
    if ( *(_QWORD *)(v7 - 16) )
      --*(_QWORD *)(*(_QWORD *)(a1 + 904) - 160LL);
    *(_QWORD *)(v7 - 16) = 0LL;
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, a1);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1086u, 0LL);
    }
    else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4) == 1 )
    {
      *(_BYTE *)(a1 + 8169) = 1;
    }
  }
  if ( v4 )
    (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1LL);
  return v3;
}
