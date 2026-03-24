/*
 * XREFs of ?Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@PEAPEAV1@@Z @ 0x1800068B8
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x1800C5A94 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ??_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z @ 0x180006990 (--_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z @ 0x180006A10 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x1800081D0 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18005A210 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CEmptyRegionDrawListBrush::Create(
        struct CDrawingContext *a1,
        struct D2D_RECT_F *a2,
        __int64 *a3,
        _QWORD *a4)
{
  struct CObjectCache *ObjectCache; // rax
  unsigned int v9; // ecx
  char *v10; // rbx
  int v11; // edx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // edi

  ObjectCache = CThreadContext::GetObjectCache(a1);
  v10 = 0LL;
  v11 = *((_DWORD *)ObjectCache + 1);
  if ( v11 )
  {
    v10 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v10;
    v9 = v11 - 1;
    *((_DWORD *)ObjectCache + 1) = v11 - 1;
  }
  if ( v10 || (v10 = (char *)DefaultHeap::Alloc(0xA0uLL)) != 0LL )
  {
    *(_OWORD *)(v10 + 8) = _xmm;
    *(_QWORD *)v10 = &CEmptyRegionDrawListBrush::`vftable';
    v10[52] = 0;
    v10[64] = 0;
    *((_QWORD *)v10 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v12 = *a3;
    *a3 = 0LL;
    *((_QWORD *)v10 + 9) = v12;
    *((_QWORD *)v10 + 10) = 0LL;
    *((_QWORD *)v10 + 11) = v10 + 96;
    *((_DWORD *)v10 + 24) = 0;
  }
  if ( v10 )
  {
    v13 = CEmptyRegionDrawListBrush::Initialize((CEmptyRegionDrawListBrush *)v10, a1, a2);
    v15 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1Du, 0LL);
      CEmptyRegionDrawListBrush::`scalar deleting destructor'((CEmptyRegionDrawListBrush *)v10, 1u);
    }
    else
    {
      *a4 = v10;
    }
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x1Bu, 0LL);
  }
  return v15;
}
