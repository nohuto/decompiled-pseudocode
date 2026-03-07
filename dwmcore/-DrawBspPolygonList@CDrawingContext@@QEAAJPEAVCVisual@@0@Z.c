__int64 __fastcall CDrawingContext::DrawBspPolygonList(CDrawingContext *this, struct CVisual *a2, struct CVisual *a3)
{
  unsigned int v5; // ebx
  int v6; // r15d
  __int64 i; // r12
  _QWORD *BspPolygonList; // rax
  const struct CVisual *v9; // r11
  const struct CVisual *v10; // rdx
  __int64 v11; // rsi
  const struct CVisual *v12; // r14
  int v13; // eax
  __int64 v14; // rcx
  const struct CMILMatrix *TopByReference; // rax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  const struct CMILMatrix *v22; // rax
  __int128 *v23; // r8
  int v24; // eax
  __int64 v25; // rcx
  struct ID2D1PathGeometry *v27; // [rsp+48h] [rbp-99h] BYREF
  struct CVisualTree *v28; // [rsp+50h] [rbp-91h] BYREF
  _OWORD v29[4]; // [rsp+58h] [rbp-89h] BYREF
  int v30; // [rsp+98h] [rbp-49h]
  _BYTE v31[64]; // [rsp+A8h] [rbp-39h] BYREF
  int v32; // [rsp+E8h] [rbp+7h]
  unsigned int BspPolygonListCount; // [rsp+160h] [rbp+7Fh]

  v5 = 0;
  v6 = 0;
  BspPolygonListCount = CVisual::GetBspPolygonListCount(a2);
  if ( !BspPolygonListCount )
    return v5;
  for ( i = 0LL; ; i += 8LL )
  {
    BspPolygonList = (_QWORD *)CVisual::GetBspPolygonList((__int64)a2);
    v10 = v9;
    v11 = *(_QWORD *)(i + *BspPolygonList);
    v12 = *(const struct CVisual **)(v11 + 216);
    if ( v12 != a2 )
      v10 = (const struct CVisual *)*((_QWORD *)v12 + 11);
    if ( !*(_BYTE *)(v11 + 240) && *((_DWORD *)this + 87) )
      goto LABEL_16;
    if ( !CVisual::IsSimple3DRootOrHasEffects(*(CVisual **)(v11 + 216), v10) )
    {
      CDrawingContext::DrawPolygon(this, (struct CPolygon *)v11);
      goto LABEL_16;
    }
    v27 = 0LL;
    v13 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(*g_DeviceManager + 80LL))(
            g_DeviceManager,
            &v27);
    v5 = v13;
    if ( v13 < 0 )
      break;
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 400));
    v5 = CPolygon::D2DGeometryFromPolygon((CPolygon *)v11, v27, TopByReference);
    if ( (v5 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v5, 0x52Cu, 0LL);
      goto LABEL_22;
    }
    v17 = CDrawingContext::PushD2DLayer(this, v12, 0LL, (__int64)v27, 0LL, 1.0, 0, 0);
    v5 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x52Eu, 0LL);
      goto LABEL_22;
    }
    v19 = *(_OWORD *)(v11 + 160);
    v30 = *(_DWORD *)(v11 + 208);
    v20 = *(_OWORD *)(v11 + 144);
    v29[1] = v19;
    v21 = *(_OWORD *)(v11 + 192);
    LOBYTE(v30) = v30 & 0xF0 | 3;
    v29[0] = v20;
    v29[3] = v21;
    v29[2] = 0LL;
    v22 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 400));
    CMILMatrix::Multiply((CMILMatrix *)v29, v22);
    v32 = 0;
    CVisual::GetRootTransform(v12, (struct CMILMatrix *)v31, 0);
    CMILMatrix::Multiply((CMILMatrix *)v31, (const struct CMILMatrix *)v29);
    v28 = 0LL;
    wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset((__int64 *)&v28);
    CSubVisualTree::Create(v12, &v28);
    v23 = (__int128 *)((char *)v28 + 72);
    if ( !*((_QWORD *)v28 + 8) )
      v23 = &TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v24 = CDrawingContext::DrawSubVisualTree((__int64)this, (__int64)v28, (__int64)v23, (CMILMatrix *)v31);
    v5 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x545u, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v28);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v27);
      CDrawingContext::PopLayer(this);
      return v5;
    }
    CDrawingContext::PopLayer(this);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v28);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v27);
LABEL_16:
    if ( ++v6 >= BspPolygonListCount )
      return v5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x529u, 0LL);
LABEL_22:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v27);
  return v5;
}
