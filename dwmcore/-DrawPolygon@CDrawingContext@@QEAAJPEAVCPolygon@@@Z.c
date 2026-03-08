/*
 * XREFs of ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801D1120
 * Callers:
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x1801D05E8 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Pop@?$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z @ 0x1800117C0 (-Pop@-$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18001ABD0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180048300 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800620E0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x180078A28 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18007E934 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18008D00C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800C3320 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800DB304 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800DBA68 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800E2990 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?GetOpacity@CDrawingContext@@QEBAMXZ @ 0x180111620 (-GetOpacity@CDrawingContext@@QEBAMXZ.c)
 *     ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x1801D0340 (-D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PE.c)
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x1801D3D14 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ?Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z @ 0x180210270 (-Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z @ 0x18021034C (-GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawPolygon(CDrawingContext *this, struct CPolygon *a2)
{
  unsigned int v4; // ebx
  char v5; // r13
  char v6; // r12
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  char v11; // r14
  const struct CMILMatrix *v12; // r10
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r14
  struct CGeometry *v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  const struct CMILMatrix *TopByReference; // rax
  const struct CShape *v20; // r10
  int v21; // eax
  __int64 v22; // rcx
  const struct CMILMatrix *v23; // rax
  int v24; // xmm1_4
  unsigned int v25; // xmm0_4
  unsigned int v26; // xmm0_4
  unsigned int v27; // xmm1_4
  __int64 *v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  char v34; // [rsp+40h] [rbp-29h]
  bool v35; // [rsp+41h] [rbp-28h] BYREF
  char v36; // [rsp+42h] [rbp-27h]
  struct ID2D1Geometry *v37; // [rsp+48h] [rbp-21h] BYREF
  __int64 v38; // [rsp+50h] [rbp-19h] BYREF
  char v39; // [rsp+58h] [rbp-11h]
  __int64 v40[2]; // [rsp+60h] [rbp-9h] BYREF
  unsigned __int64 v41; // [rsp+70h] [rbp+7h]

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v36 = 0;
  v34 = 0;
  if ( *((_QWORD *)a2 + 31) )
  {
    CPolygon::GetRenderOptions(a2, (struct MilRenderOptions *)v40);
    if ( LODWORD(v40[0]) )
    {
      v7 = CDrawingContext::PushRenderOptionsInternal((__int64)this, 0LL, (const struct MilRenderOptions *)v40, 1);
      v4 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x56Cu, 0LL);
        v11 = 0;
        goto LABEL_30;
      }
      v36 = 1;
    }
    *(float *)&v37 = CDrawingContext::GetOpacity(this) * *((float *)a2 + 56);
    v9 = CWatermarkStack<float,64,2,10>::Push((unsigned int *)this + 812, &v37);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x571u, 0LL);
    }
    else
    {
      v11 = 1;
      v34 = 1;
      if ( !CMILMatrix::IsIdentity<0>((__int64)a2 + 144) )
      {
        v13 = CDrawingContext::PushTransformInternal(this, 0LL, v12, 1, 1);
        v4 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x577u, 0LL);
          goto LABEL_30;
        }
        v5 = 1;
      }
      v15 = *((_QWORD *)a2 + 27);
      v16 = *(struct CGeometry **)(v15 + 248);
      if ( !v16 )
        goto LABEL_21;
      v38 = 0LL;
      v39 = 0;
      v17 = CDrawingContext::ShapeDataFromGeometry(
              (const struct D2D_SIZE_F *)(v15 + 140),
              v16,
              (struct CShapePtr *)&v38);
      v4 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x582u, 0LL);
      }
      else
      {
        if ( !v38 )
        {
LABEL_20:
          CShapePtr::Release((CShapePtr *)&v38);
LABEL_21:
          *((_QWORD *)this + 428) = a2;
          v31 = CPolygon::Draw(a2, this);
          v4 = v31;
          if ( v31 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x59Fu, 0LL);
          goto LABEL_29;
        }
        v37 = 0LL;
        v35 = 1;
        v41 = 0LL;
        *(_OWORD *)v40 = 0LL;
        TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 400));
        v21 = CDrawingContext::D2DGeometryFromShape((CDrawingContext *)&v35, v20, (__int64)TopByReference, &v37, &v35);
        v4 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x58Du, 0LL);
        }
        else
        {
          if ( v35 )
          {
            v28 = 0LL;
          }
          else
          {
            v23 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 400));
            v24 = *((_DWORD *)v23 + 1);
            LODWORD(v40[0]) = *(_DWORD *)v23;
            v25 = *((_DWORD *)v23 + 4);
            HIDWORD(v40[0]) = v24;
            v40[1] = __PAIR64__(*((_DWORD *)v23 + 5), v25);
            v26 = *((_DWORD *)v23 + 12);
            v27 = *((_DWORD *)v23 + 13);
            v28 = v40;
            v41 = __PAIR64__(v27, v26);
          }
          v29 = CDrawingContext::PushD2DLayer(
                  this,
                  (const struct CVisual *)v15,
                  0LL,
                  (__int64)v37,
                  (__int64)v28,
                  1.0,
                  0,
                  0);
          v4 = v29;
          if ( v29 >= 0 )
          {
            v6 = 1;
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v37);
            goto LABEL_20;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x597u, 0LL);
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v37);
      }
      CShapePtr::Release((CShapePtr *)&v38);
    }
  }
LABEL_29:
  v11 = v34;
LABEL_30:
  *((_QWORD *)this + 428) = 0LL;
  if ( v6 )
    CDrawingContext::PopLayer(this);
  if ( v5 )
    CDrawingContext::PopTransformInternal(this, 1);
  if ( v11 )
    CWatermarkStack<float,64,2,10>::Pop((_DWORD *)this + 812);
  if ( v36 )
    CDrawingContext::PopRenderOptionsInternal(this, 1);
  return v4;
}
