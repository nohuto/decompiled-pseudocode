/*
 * XREFs of ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x180078C48
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18005A8DC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x180078B10 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x1800958E0 (-FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntr.c)
 * Callees:
 *     ?FromMilCompositingMode@BlendMode@@YA?AW4Enum@1@W42MilCompositingMode@@@Z @ 0x180079158 (-FromMilCompositingMode@BlendMode@@YA-AW4Enum@1@W42MilCompositingMode@@@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180079180 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ @ 0x1801D3E24 (-UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ.c)
 *     ?HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ @ 0x1801D6CF8 (-HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ.c)
 *     ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x1801D7334 (-UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ.c)
 */

__int64 __fastcall CDrawingContext::EmitDrawListCache(CDrawingContext *this, struct CDrawListCache *a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  unsigned int v6; // edi
  int v7; // xmm6_4
  int v8; // eax
  bool v9; // r14
  void *v10; // r15
  ClipPlaneIterator *v11; // rbp
  int v12; // eax
  unsigned int v13; // ecx
  int updated; // eax
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx

  v2 = 0;
  v4 = *((_DWORD *)this + 812);
  v6 = 0;
  if ( v4 )
    v7 = *(_DWORD *)(*((_QWORD *)this + 408) + 4LL * (unsigned int)(v4 - 1));
  else
    v7 = (int)FLOAT_1_0;
  if ( COERCE_FLOAT(v7 & _xmm) >= 0.0000011920929 )
  {
    v8 = *((_DWORD *)this + 100);
    v9 = 0;
    if ( v8 )
      v10 = (void *)(*((_QWORD *)this + 52) + 68LL * (unsigned int)(v8 - 1));
    else
      v10 = &CMILMatrix::Identity;
    if ( *((_QWORD *)this + 428) )
    {
      updated = CDrawingContext::UpdateBspCurrentPolygonClippingPlanes(this);
      v6 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, updated, 0x3ABu, 0LL);
        goto LABEL_11;
      }
      v11 = (CDrawingContext *)((char *)this + 3432);
      v9 = *((_BYTE *)this + 3432) == 0;
    }
    else
    {
      v11 = (CDrawingContext *)((char *)this + 3432);
    }
    if ( v9 )
      goto LABEL_21;
    do
    {
      BlendMode::FromMilCompositingMode(*((unsigned int *)this + 85));
      v12 = CDrawListCache::Render(a2, this, v10);
      v6 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x3BDu, 0LL);
        goto LABEL_11;
      }
      if ( !v9 || !ClipPlaneIterator::HasMoreClipPlanes(v11) )
        goto LABEL_11;
LABEL_21:
      v17 = ClipPlaneIterator::UpdateClippingPlanes(v11);
      v6 = v17;
    }
    while ( v17 >= 0 );
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x3B7u, 0LL);
  }
LABEL_11:
  if ( v6 != -2003304441 )
    return v6;
  return v2;
}
