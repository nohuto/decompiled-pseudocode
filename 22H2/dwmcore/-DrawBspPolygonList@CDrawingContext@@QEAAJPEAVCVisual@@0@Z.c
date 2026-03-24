/*
 * XREFs of ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180174CB4
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18007BE10 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18003EA80 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x18003F508 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180040870 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800625F4 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo.c)
 *     ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x18006C70C (-IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008D0E8 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x18009F93C (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180175944 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x1801AD654 (-GetBspPolygonListCount@CVisual@@IEBAIXZ.c)
 *     ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x1801F75AC (-D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawBspPolygonList(CDrawingContext *this, struct CVisual *a2, struct CVisual *a3)
{
  struct CVisual *v4; // r15
  unsigned int v5; // ebx
  int v6; // r12d
  struct CVisual *v7; // r11
  __int64 i; // r13
  _QWORD *BspPolygonList; // rax
  const struct CVisual *v10; // rdx
  __int64 v11; // rsi
  struct CVisual *v12; // r14
  int v13; // eax
  __int64 v14; // rcx
  _DWORD *v15; // r15
  const struct CMILMatrix *TopByReference; // rax
  __int64 v17; // rcx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  unsigned int v27; // [rsp+28h] [rbp-69h]
  struct ID2D1PathGeometry *v28[2]; // [rsp+48h] [rbp-49h] BYREF
  _OWORD v29[4]; // [rsp+58h] [rbp-39h] BYREF
  int v30; // [rsp+98h] [rbp+7h]
  unsigned int BspPolygonListCount; // [rsp+110h] [rbp+7Fh]

  v4 = a3;
  v5 = 0;
  v6 = 0;
  BspPolygonListCount = CVisual::GetBspPolygonListCount(a2);
  if ( !BspPolygonListCount )
    return v5;
  for ( i = 0LL; ; i += 8LL )
  {
    BspPolygonList = (_QWORD *)CVisual::GetBspPolygonList((__int64)v7);
    v10 = v4;
    v11 = *(_QWORD *)(*BspPolygonList + i);
    v12 = *(struct CVisual **)(v11 + 216);
    if ( v12 != v7 )
      v10 = (const struct CVisual *)*((_QWORD *)v12 + 10);
    if ( !*(_BYTE *)(v11 + 240) && *((_DWORD *)this + 72) )
      goto LABEL_18;
    if ( CVisual::IsSimple3DRootOrHasEffects(*(CVisual **)(v11 + 216), v10) )
      break;
    CDrawingContext::DrawPolygon(this, (struct CPolygon *)v11);
LABEL_17:
    v7 = a2;
LABEL_18:
    if ( ++v6 >= BspPolygonListCount )
      return v5;
  }
  v28[0] = 0LL;
  v13 = (*(__int64 (__fastcall **)(void *, struct ID2D1PathGeometry **))(*(_QWORD *)g_DeviceManager + 80LL))(
          g_DeviceManager,
          v28);
  v5 = v13;
  if ( v13 >= 0 )
  {
    v15 = (_DWORD *)((char *)this + 408);
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 408));
    v5 = CPolygon::D2DGeometryFromPolygon((CPolygon *)v11, v28[0], TopByReference);
    if ( (v5 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v5, 0x4ECu, 0LL);
      goto LABEL_28;
    }
    v13 = CDrawingContext::PushD2DLayer(this, v12, 0LL, v28[0], 0LL, 1.0, 0, 0);
    v5 = v13;
    if ( v13 < 0 )
    {
      v27 = 1262;
      goto LABEL_27;
    }
    v18 = *(_OWORD *)(v11 + 160);
    v19 = *(_OWORD *)(v11 + 144);
    v30 = *(_DWORD *)(v11 + 208);
    v29[1] = v18;
    v20 = *(_OWORD *)(v11 + 192);
    LOBYTE(v30) = v30 | 0xF;
    v29[0] = v19;
    v29[3] = v20;
    v29[2] = 0LL;
    v21 = CMatrixStack::Push((CDrawingContext *)((char *)this + 408), (const struct CMILMatrix *)v29, 1);
    v5 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x4FFu, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v28);
LABEL_23:
      CDrawingContext::PopLayer(this);
      return v5;
    }
    v23 = CDrawingContext::DrawVisual(this, v12, 0);
    v5 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x502u, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v28);
      v25 = *((_DWORD *)this + 102);
      if ( v25 )
        *((_DWORD *)this + 102) = v25 - 1;
      goto LABEL_23;
    }
    if ( *v15 )
      --*v15;
    CDrawingContext::PopLayer(this);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v28);
    v4 = a3;
    goto LABEL_17;
  }
  v27 = 1257;
LABEL_27:
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, v27, 0LL);
LABEL_28:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v28);
  return v5;
}
