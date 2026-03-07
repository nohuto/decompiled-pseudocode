__int64 __fastcall CTreeEffectLayer::RenderShadow(
        CTreeEffectLayer *this,
        const struct D2D_POINT_2F *a2,
        const struct D2D_SIZE_F *a3,
        float a4,
        float a5,
        struct CDrawingContext *a6,
        struct CDropShadow *a7,
        struct IRenderTargetBitmap *a8)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm0_4
  float v16; // xmm3_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // esi
  int v25; // eax
  unsigned int v26; // ecx
  __int64 v27; // r15
  float Radius; // xmm10_4
  int v29; // eax
  unsigned int v30; // ecx
  __int64 v31; // rdi
  CTreeEffectLayer *v32; // rcx
  struct ID2D1Effect *v33; // rdi
  float v34; // xmm6_4
  float v35; // xmm7_4
  float v36; // xmm9_4
  float v37; // xmm9_4
  int v38; // eax
  unsigned int v39; // ecx
  __int64 (__fastcall *v40)(__int64, GUID *, __int64 *); // rbx
  int v41; // eax
  unsigned int v42; // ecx
  __int64 v43; // rbx
  ID2D1Effect *v44; // rbx
  __int128 v45; // xmm0
  int v46; // eax
  unsigned int v47; // ecx
  int v48; // eax
  unsigned int v49; // ecx
  int v50; // eax
  unsigned int v51; // ecx
  __int64 v52; // xmm0_8
  __int64 v53; // rax
  struct D2D_VECTOR_3F *v54; // rax
  __int64 v55; // xmm0_8
  float y; // xmm10_4
  float x; // xmm11_4
  float v58; // xmm14_4
  float v59; // xmm13_4
  int v60; // r9d
  __int64 v61; // r9
  __int64 v62; // rcx
  __int64 TopByReference; // rax
  int v64; // eax
  unsigned int v65; // ecx
  float v66; // xmm1_4
  __int64 v67; // rax
  int v68; // eax
  CTreeEffectLayer *v69; // rcx
  int v70; // eax
  unsigned int v71; // ecx
  int v72; // r9d
  struct ID2D1Effect *v73; // r8
  __int64 (__fastcall *v74)(__int64, GUID *, __int64 *); // rdi
  int v75; // eax
  unsigned int v76; // ecx
  __int64 v77; // rdi
  struct ID2D1Effect *v78; // rdi
  CTreeEffectLayer *v79; // rcx
  int v80; // eax
  unsigned int v81; // ecx
  int v82; // r9d
  int v83; // eax
  unsigned int v84; // ecx
  bool v85[8]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v86; // [rsp+40h] [rbp-C8h] BYREF
  struct ID2D1Effect *v87[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v88; // [rsp+58h] [rbp-B0h] BYREF
  struct ID2D1Effect *v89; // [rsp+60h] [rbp-A8h] BYREF
  struct ID2D1Effect *v90; // [rsp+68h] [rbp-A0h] BYREF
  ID2D1Effect *v91; // [rsp+70h] [rbp-98h] BYREF
  float v92[5]; // [rsp+78h] [rbp-90h] BYREF
  float v93; // [rsp+8Ch] [rbp-7Ch]
  _BYTE v94[80]; // [rsp+C8h] [rbp-40h] BYREF
  struct D2D_MATRIX_3X2_F v95; // [rsp+118h] [rbp+10h] BYREF
  struct D2D_VECTOR_3F v96; // [rsp+130h] [rbp+28h] BYREF
  float v97; // [rsp+13Ch] [rbp+34h]
  float v98; // [rsp+140h] [rbp+38h] BYREF
  float v99; // [rsp+144h] [rbp+3Ch]
  float v100; // [rsp+148h] [rbp+40h]
  float v101; // [rsp+14Ch] [rbp+44h]
  struct D2D_MATRIX_3X2_F v102; // [rsp+150h] [rbp+48h] BYREF
  __int128 v103; // [rsp+168h] [rbp+60h] BYREF

  if ( !a8 )
    return 0LL;
  if ( g_LockAndReadLayer )
  {
    v10 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *, const struct D2D_POINT_2F *, const struct D2D_SIZE_F *))(*(_QWORD *)a8 + 64LL))(
            a8,
            a2,
            a3);
    v11 = *(int *)(*(_QWORD *)(v10 + 8) + 16LL) + v10 + 8;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 24LL))(
      v11,
      ((unsigned __int64)a6 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a6 >> 64));
  }
  *(_QWORD *)&v95.m[2][0] = 0LL;
  *(_OWORD *)&v95.m11 = *(_OWORD *)&_xmm;
  v86 = 0LL;
  v91 = 0LL;
  v90 = 0LL;
  v89 = 0LL;
  CMILMatrix::SetToIdentity((CMILMatrix *)v92);
  CMILMatrix::SetToIdentity((CMILMatrix *)v94);
  v12 = *((float *)this + 57);
  v13 = *((float *)this + 70);
  v14 = *((float *)this + 58);
  v103 = 0LL;
  v85[0] = 0;
  v15 = (float)*((int *)this + 5);
  v88 = 0LL;
  v16 = v14 - v15;
  v17 = (float)*((int *)this + 4);
  v99 = v16;
  v18 = v12 - v17;
  v19 = (float)*((int *)this + 6);
  v98 = v18;
  v20 = (float)(v19 / v13) + v18;
  v21 = (float)*((int *)this + 7);
  v100 = v20;
  v101 = (float)(v21 / v13) + v16;
  v22 = CDrawingContext::PushGpuClipRectInternal(a6, 0LL, (char *)this + 264, 1LL, 0);
  v24 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x381u, 0LL);
    goto LABEL_50;
  }
  v25 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *, __int64 *, _QWORD))(*(_QWORD *)a8 + 72LL))(
          a8,
          &v88,
          0LL);
  v24 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x384u, 0LL);
  }
  else
  {
    v27 = (*((_QWORD *)a6 + 5) + 16LL) & -(__int64)(*((_QWORD *)a6 + 5) != 0LL);
    Radius = CDropShadow::GetRadius(a7);
    if ( !*(_BYTE *)(*((_QWORD *)this + 32) + 729LL) )
      CMILMatrix::Decompose2DAffineMatrixIntoScaleAndRest(
        (CTreeEffectLayer *)((char *)this + 128),
        (struct CMILMatrix *)v92,
        (struct CMILMatrix *)v94,
        v85);
    v29 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v27 + 216LL))(
            v27,
            &CLSID_D2D12DAffineTransform,
            &v86);
    v24 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x39Eu, 0LL);
    }
    else
    {
      v31 = v86;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v86 + 80) + 8LL))(*(_QWORD *)(v86 + 80));
      v33 = *(struct ID2D1Effect **)(v31 + 80);
      *(_QWORD *)&v95.m[0][1] = 0LL;
      v34 = v92[0];
      v35 = v93;
      v90 = v33;
      if ( v92[0] <= v93 )
      {
        v95.dx = 0.0;
        v95.m11 = 1.0;
        v36 = v92[0];
        v95.m22 = v92[0] / v93;
        v95.dy = 0.0 - (float)((float)(v92[0] / v93) * 0.0);
      }
      else
      {
        v95.m22 = 1.0;
        v36 = v93;
        v95.m11 = v93 / v92[0];
        *(_QWORD *)&v95.m[2][0] = COERCE_UNSIGNED_INT(0.0 - (float)((float)(v93 / v92[0]) * 0.0));
      }
      v37 = v36 * Radius;
      v38 = CTreeEffectLayer::InitializeShadowEffect(v32, v33, &v95);
      v24 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x3ADu, 0LL);
      }
      else
      {
        (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v33 + 112LL))(
          v33,
          0LL,
          v88,
          1LL);
        v40 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v27 + 216LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v86);
        v41 = v40(v27, &CLSID_D2D1Shadow, &v86);
        v24 = v41;
        if ( v41 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0x3B1u, 0LL);
        }
        else
        {
          v43 = v86;
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v86 + 80) + 8LL))(*(_QWORD *)(v86 + 80));
          v44 = *(ID2D1Effect **)(v43 + 80);
          v91 = v44;
          v45 = *(_OWORD *)((char *)a7 + 72);
          *(float *)v87 = v37 / 3.0;
          v103 = v45;
          v46 = (*(__int64 (__fastcall **)(ID2D1Effect *, _QWORD, _QWORD, struct ID2D1Effect **, int))(*(_QWORD *)v44 + 72LL))(
                  v44,
                  0LL,
                  0LL,
                  v87,
                  4);
          v24 = v46;
          if ( v46 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0x3B7u, 0LL);
          }
          else
          {
            v48 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)v44 + 72LL))(
                    v44,
                    1LL,
                    0LL,
                    &v103,
                    16);
            v24 = v48;
            if ( v48 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0x3BAu, 0LL);
            }
            else
            {
              LODWORD(v87[0]) = 0;
              v50 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, struct ID2D1Effect **, int))(*(_QWORD *)v44 + 72LL))(
                      v44,
                      2LL,
                      0LL,
                      v87,
                      4);
              v24 = v50;
              if ( v50 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0x3BDu, 0LL);
              }
              else
              {
                v52 = *((_QWORD *)a7 + 12);
                v96.z = *((FLOAT *)a7 + 26);
                v53 = *((_QWORD *)this + 32);
                *(_QWORD *)&v96.x = v52;
                if ( !*(_BYTE *)(v53 + 729) )
                {
                  v54 = CMILMatrix::Transform3DVector(
                          (CTreeEffectLayer *)((char *)this + 128),
                          (struct D2D_VECTOR_3F *)v87,
                          &v96);
                  v55 = *(_QWORD *)&v54->x;
                  *(FLOAT *)&v54 = v54->z;
                  *(_QWORD *)&v96.x = v55;
                  LODWORD(v96.z) = (_DWORD)v54;
                }
                y = v96.y;
                x = v96.x;
                v58 = (float)*((int *)this + 5);
                v59 = (float)*((int *)this + 4);
                v96.y = (float)((float)(v96.y + v99) - v37) + v58;
                v96.x = (float)((float)(v96.x + v98) - v37) + v59;
                TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(&v98);
                v60 = (_DWORD)g_pComposition + 1112;
                if ( *((_DWORD *)g_pComposition + 278) )
                {
                  if ( CComposition::IsOverdrawHeatMapEnabled(g_pComposition)
                    && (*(_BYTE *)(CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v61) + 20) & 9) != 0 )
                  {
                    v96.y = (float)(y + v99) + v58;
                    v96.x = (float)(x + v98) + v59;
                    v97 = (float)(v101 - v99) + v96.y;
                    v96.z = (float)(v100 - v98) + v96.x;
                    TopByReference = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v62);
                    v87[0] = (struct ID2D1Effect *)1;
                    v87[1] = (struct ID2D1Effect *)&v96;
                    v64 = CDrawingContext::FillRectanglesWithSolidColor(a6, v87, TopByReference + 4);
                    v24 = v64;
                    if ( v64 < 0 )
                      MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0, v64, 0x3E2u, 0LL);
                  }
                  goto LABEL_48;
                }
                v66 = *((float *)this + 70);
                if ( v66 >= 0.99999881 )
                {
                  v73 = v33;
LABEL_32:
                  ID2D1Effect::SetInputEffect(v44, 0, v73, v60);
                  *(_QWORD *)&v95.m[0][1] = 0LL;
                  if ( v34 <= v35 )
                  {
                    v95.dx = 0.0;
                    v95.m11 = 1.0;
                    v95.m22 = v35 / v34;
                    v95.dy = 0.0 - (float)((float)(v35 / v34) * 0.0);
                  }
                  else
                  {
                    v95.m22 = 1.0;
                    v95.m11 = v34 / v35;
                    *(_QWORD *)&v95.m[2][0] = COERCE_UNSIGNED_INT(0.0 - (float)((float)(v34 / v35) * 0.0));
                  }
                  v74 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v27 + 216LL);
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v86);
                  v75 = v74(v27, &CLSID_D2D12DAffineTransform, &v86);
                  v24 = v75;
                  if ( v75 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v76, 0LL, 0, v75, 0x40Bu, 0LL);
                  }
                  else
                  {
                    v77 = v86;
                    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v86 + 80) + 8LL))(*(_QWORD *)(v86 + 80));
                    v78 = *(struct ID2D1Effect **)(v77 + 80);
                    v89 = v78;
                    v80 = CTreeEffectLayer::InitializeShadowEffect(v79, v78, &v95);
                    v24 = v80;
                    if ( v80 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v81, 0LL, 0, v80, 0x40Eu, 0LL);
                    }
                    else
                    {
                      ID2D1Effect::SetInputEffect(v78, 0, v44, v82);
                      v83 = CDrawingContext::FillEffect(a6, 0);
                      v24 = v83;
                      if ( v83 < 0 )
                        MilInstrumentationCheckHR_MaybeFailFast(v84, 0LL, 0, v83, 0x417u, 0LL);
                    }
                  }
                  goto LABEL_48;
                }
                *(_QWORD *)&v102.m[0][1] = 0LL;
                *(_QWORD *)&v102.m[2][0] = 0LL;
                v67 = *(_QWORD *)v27;
                v87[0] = 0LL;
                v102.m11 = 1.0 / v66;
                v102.m22 = 1.0 / v66;
                v68 = (*(__int64 (__fastcall **)(__int64, __int64, struct ID2D1Effect **))(v67 + 200))(v27, 7LL, v87);
                v24 = v68;
                if ( v68 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v69, 0LL, 0, v68, 0x3F3u, 0LL);
                }
                else
                {
                  v70 = CTreeEffectLayer::InitializeShadowEffect(v69, v87[0], &v102);
                  v24 = v70;
                  if ( v70 >= 0 )
                  {
                    ID2D1Effect::SetInputEffect(v87[0], 0, v33, v72);
                    v73 = v87[0];
                    goto LABEL_32;
                  }
                  MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0, v70, 0x3F5u, 0LL);
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_48:
  CDrawingContext::PopGpuClipRectInternal(a6, 0);
LABEL_50:
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::~ComPtr<ID2D1Bitmap1>(&v88);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::~ComPtr<ID2D1Bitmap1>(&v89);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::~ComPtr<ID2D1Bitmap1>(&v90);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::~ComPtr<ID2D1Bitmap1>(&v91);
  Microsoft::WRL::ComPtr<CD2DEffect>::~ComPtr<CD2DEffect>(&v86);
  return v24;
}
