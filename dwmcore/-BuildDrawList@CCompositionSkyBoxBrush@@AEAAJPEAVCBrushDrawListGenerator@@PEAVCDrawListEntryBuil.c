__int64 __fastcall CCompositionSkyBoxBrush::BuildDrawList(
        CCompositionSkyBoxBrush *this,
        struct CBrushDrawListGenerator *a2,
        __int64 **a3)
{
  _DWORD *v4; // r13
  char v7; // r12
  CCompositionCubeMap *v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int SkyBoxPrimitive; // ebx
  __int64 v12; // r8
  struct IBitmapResource *v13; // rsi
  LPVOID v14; // rbx
  CDrawListBitmap *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  struct CRenderingEffect *v18; // rbx
  BOOL v19; // eax
  __int64 v20; // r9
  CCompositionSkyBoxBrush *v21; // rcx
  int DummyRect; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  struct CDrawListPrimitive *v26; // rcx
  __int64 (__fastcall ***v27)(_QWORD, __int64); // rdx
  __int64 v28; // rcx
  __int64 v30; // rcx
  struct CDrawListPrimitive *v31[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v32; // [rsp+40h] [rbp-C0h]
  struct ID3D11ShaderResourceView *v33; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v34[80]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v35[48]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v36[64]; // [rsp+E0h] [rbp-20h] BYREF
  int v37; // [rsp+120h] [rbp+20h]
  __int64 (__fastcall ***v38)(_QWORD, __int64); // [rsp+170h] [rbp+70h] BYREF
  __int64 (__fastcall ***v39)(_QWORD, __int64); // [rsp+178h] [rbp+78h] BYREF
  struct CRenderingEffect *v40; // [rsp+188h] [rbp+88h] BYREF

  LODWORD(v38) = 0;
  v4 = *(_DWORD **)a2;
  v33 = 0LL;
  v40 = 0LL;
  v7 = 0;
  CBrushDrawListGenerator::Reset(a2);
  *(_OWORD *)((char *)a2 + 20) = 0LL;
  v8 = (CCompositionCubeMap *)*((_QWORD *)this + 11);
  if ( !v8 )
  {
LABEL_22:
    SkyBoxPrimitive = 0;
    goto LABEL_23;
  }
  v9 = CCompositionCubeMap::GetOrCreateD3DCubeMap(
         v8,
         (struct ID2DContextOwner *)((unsigned __int64)(v4 + 6) & -(__int64)(v4 != 0LL)),
         &v33);
  SkyBoxPrimitive = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x9Fu, 0LL);
    goto LABEL_30;
  }
  CCompositionCubeMap::FlushToD3DCubeMap(
    *((CCompositionCubeMap **)this + 11),
    (struct ID2DContextOwner *)((unsigned __int64)(v4 + 6) & -(__int64)(v4 != 0LL)));
  v12 = *(_QWORD *)(32LL * *(unsigned int *)(*((_QWORD *)this + 11) + 120LL)
                  + *(_QWORD *)(*((_QWORD *)this + 11) + 88LL)
                  + 8);
  v13 = (struct IBitmapResource *)((v12 + 72) & -(__int64)(v12 != 0));
  if ( v13 )
  {
    v14 = DefaultHeap::Alloc(0x38uLL);
    if ( v14 )
    {
      v15 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v31, v13);
      LOWORD(v38) = 513;
      BYTE2(v38) = 2;
      v16 = CCubeMapRenderingEffect::CCubeMapRenderingEffect(v14, v15, &v38, v33);
      v7 = 1;
    }
    else
    {
      v16 = 0LL;
    }
    Microsoft::WRL::ComPtr<CCubeMapRenderingEffect>::operator=((__int64 *)&v40, v16);
    if ( (v7 & 1) != 0 )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v31[1]);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v31);
    }
    v18 = v40;
    if ( !v40 )
    {
      SkyBoxPrimitive = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024882, 0xB2u, 0LL);
LABEL_30:
      CBrushDrawListGenerator::Reset(a2);
      goto LABEL_23;
    }
    CCpuClip::CCpuClip((CCpuClip *)v34);
    CDrawingContext::GetCpuClip((CDrawingContext *)v4, (struct CCpuClip *)v34);
    v37 = 0;
    CMatrixStack::Top((CMatrixStack *)(v4 + 100), (struct CMILMatrix *)v36);
    v19 = v4[84] != 0;
    *(_OWORD *)v31 = 0LL;
    HIDWORD(v31[1]) = v19;
    v32 = (unsigned __int64)v34;
    LODWORD(v31[0]) = 2;
    BYTE12(v32) = 0;
    CMILMatrix::Get2DScaleDimensionsWithPerspective((CMILMatrix *)v36, (float *)v31 + 1, (float *)&v31[1], 0LL);
    CDrawListEntryBuilder::Begin(
      (CDrawListEntryBuilder *)a3,
      (const struct DrawListEntryBuilderSetupParams *)v31,
      v18,
      v20);
    DummyRect = CCompositionSkyBoxBrush::CreateDummyRect(v21, (struct CDrawListEntryBuilder *)a3);
    SkyBoxPrimitive = DummyRect;
    if ( DummyRect < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, DummyRect, 0xC2u, 0LL);
    }
    else
    {
      v24 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)a3);
      SkyBoxPrimitive = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xC3u, 0LL);
      }
      else
      {
        v39 = 0LL;
        v31[0] = (struct CDrawListPrimitive *)&v39;
        v31[1] = 0LL;
        LOBYTE(v32) = 1;
        SkyBoxPrimitive = CCompositionSkyBoxBrush::CreateSkyBoxPrimitive(this, a2, &v31[1]);
        if ( (_BYTE)v32 )
        {
          v26 = v31[0];
          v27 = *(__int64 (__fastcall ****)(_QWORD, __int64))v31[0];
          *(_QWORD *)v31[0] = v31[1];
          if ( v27 )
            std::default_delete<CDrawListPrimitive>::operator()((__int64)v26, v27);
        }
        if ( SkyBoxPrimitive >= 0 )
        {
          CHWDrawListEntry::ReplacePrimitive(*a3[11], (__int64 *)&v38, (__int64 *)&v39);
          if ( v38 )
            std::default_delete<CDrawListPrimitive>::operator()(v28, v38);
          if ( v39 )
            std::default_delete<CDrawListPrimitive>::operator()(v28, v39);
          CShapePtr::Release((CShapePtr *)v35);
          goto LABEL_22;
        }
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v26, 0LL, 0, SkyBoxPrimitive, 0xC8u, 0LL);
        if ( v39 )
          std::default_delete<CDrawListPrimitive>::operator()(v30, v39);
      }
    }
    CShapePtr::Release((CShapePtr *)v35);
    goto LABEL_30;
  }
LABEL_23:
  Microsoft::WRL::ComPtr<CCubeMapRenderingEffect>::InternalRelease(&v40);
  return (unsigned int)SkyBoxPrimitive;
}
