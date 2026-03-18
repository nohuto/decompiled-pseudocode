/*
 * XREFs of ?RestoreStateToLastMark@CDrawingContext@@QEAAXXZ @ 0x1800924F4
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800910EC (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1802B7FF4 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDrawingContext::RestoreStateToLastMark(CDrawingContext *this)
{
  int v2; // eax
  unsigned int v3; // edx
  int v4; // eax
  unsigned int v5; // ecx

  while ( 1 )
  {
    v2 = *((_DWORD *)this + 92);
    v3 = v2 - 1;
    if ( !v2 )
      break;
    if ( *(_DWORD *)(*((_QWORD *)this + 48) + 16LL * v3) == 12 )
    {
      *((_DWORD *)this + 92) = v3;
      return;
    }
    v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 96LL))((char *)this + 16);
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x1055u, 0LL);
  }
}
