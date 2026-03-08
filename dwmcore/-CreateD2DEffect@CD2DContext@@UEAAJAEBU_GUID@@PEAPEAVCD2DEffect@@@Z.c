/*
 * XREFs of ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x1800168B0
 * Callers:
 *     ?CreateResource@CFilterEffect@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x180218DA0 (-CreateResource@CFilterEffect@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z.c)
 *     ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x180219764 (-GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagR.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180275E0C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 * Callees:
 *     ?Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z @ 0x180016988 (-Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180074DD0 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::CreateD2DEffect(CD2DContext *this, const struct _GUID *a2, struct CD2DEffect **a3)
{
  __int64 v3; // rax
  bool v5; // zf
  unsigned int v6; // ecx
  unsigned int v8; // ebx
  int v9; // eax
  int v11; // r9d
  unsigned int v12; // [rsp+20h] [rbp-18h]
  struct ID2D1Effect *v13; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v3 = (__int64)this + 1072;
  v13 = 0LL;
  v5 = this == 0LL;
  v6 = 1088;
  if ( v5 )
    v3 = 1088LL;
  v8 = *(_DWORD *)v3;
  if ( *(int *)v3 < 0 )
  {
    v11 = *(_DWORD *)v3;
    v12 = 1557;
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, struct ID2D1Effect **))(**((_QWORD **)this + 25)
                                                                                        + 504LL))(
           *((_QWORD *)this + 25),
           a2,
           &v13);
    v8 = v9;
    if ( v9 < 0 )
    {
      v12 = 1559;
    }
    else
    {
      v9 = CD2DEffect::Create(*((struct CD2DResourceManager **)this + 21), v13, a3);
      v8 = v9;
      if ( v9 >= 0 )
        goto LABEL_6;
      v12 = 1560;
    }
    v11 = v9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v11, v12, 0LL);
  *a3 = 0LL;
LABEL_6:
  if ( v13 )
    (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v13 + 16LL))(v13);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext(((unsigned __int64)this - 16) & -(__int64)(this != 0LL), v8, 0LL);
}
