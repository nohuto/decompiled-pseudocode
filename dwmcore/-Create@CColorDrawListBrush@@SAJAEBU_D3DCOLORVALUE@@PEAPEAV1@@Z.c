/*
 * XREFs of ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x180018B14
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18002E744 (-GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18002FD34 (-UpdateDrawListCache@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCColorDrawListBrush@@@Z @ 0x180018C0C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCColorDrawListBrush@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CColorDrawListBrush::Create(struct _D3DCOLORVALUE *a1, struct CColorDrawListBrush **a2)
{
  unsigned int v4; // ebx
  struct CObjectCache *ObjectCache; // rax
  char *v6; // r8
  int v7; // r10d
  unsigned int v9; // ecx

  v4 = 0;
  ObjectCache = CThreadContext::GetObjectCache((struct CColorDrawListBrush *)a1);
  v6 = 0LL;
  v7 = *((_DWORD *)ObjectCache + 1);
  if ( v7 )
  {
    v6 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v6;
    *((_DWORD *)ObjectCache + 1) = v7 - 1;
  }
  if ( v6 || (v6 = (char *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
  {
    *(_OWORD *)(v6 + 8) = *(_OWORD *)&_xmm;
    v6[52] = 0;
    *(_QWORD *)v6 = &CColorDrawListBrush::`vftable';
    *((_QWORD *)v6 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *(struct _D3DCOLORVALUE *)(v6 + 56) = *(struct _D3DCOLORVALUE *)&a1->r;
    *a2 = (struct CColorDrawListBrush *)v6;
  }
  else
  {
    *a2 = 0LL;
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x29u, 0LL);
  }
  return v4;
}
