__int64 __fastcall CDrawListEntryBuilder::InsertWARP(
        CDrawListEntryBuilder *this,
        const __m128i *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        char a4)
{
  __m128i v4; // xmm6
  bool v6; // zf
  FLOAT v10; // edi
  int BuiltHWPrimitiveEntry; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  CCpuClip *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  struct D2D_RECT_F *v20; // r9
  unsigned int v21; // eax
  FLOAT dy; // eax
  CCpuClip *v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int128 v28; // xmm0
  __int64 v29; // rax
  struct CShape *v30; // rdi
  int v31; // edx
  unsigned __int64 v32; // r15
  __int64 *v33; // r12
  __int64 *v34; // rdi
  char *v35; // rdx
  char v36; // bl
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rbx
  int v41; // xmm1_4
  int v42; // xmm0_4
  int v43; // xmm1_4
  int v44; // xmm0_4
  int v45; // xmm1_4
  const struct D2D1::Matrix3x2F *v46; // r8
  __int64 v47; // xmm1_8
  __int64 v48; // xmm1_8
  __int64 v49; // r8
  bool v50; // al
  _OWORD *v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  bool v55; // [rsp+38h] [rbp-D0h]
  struct CWARPDrawListEntry *v56; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v57; // [rsp+48h] [rbp-C0h]
  struct CShape *v58; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v59; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_RECT_F v60; // [rsp+60h] [rbp-A8h] BYREF
  struct D2D_RECT_F v61; // [rsp+70h] [rbp-98h] BYREF
  __int128 v62; // [rsp+80h] [rbp-88h] BYREF
  __int64 v63; // [rsp+90h] [rbp-78h]
  _BYTE v64[64]; // [rsp+98h] [rbp-70h] BYREF
  int v65; // [rsp+D8h] [rbp-30h]
  _BYTE v66[80]; // [rsp+E8h] [rbp-20h] BYREF
  int v67; // [rsp+138h] [rbp+30h] BYREF
  __int64 v68; // [rsp+140h] [rbp+38h]
  __int64 v69; // [rsp+148h] [rbp+40h]
  __int128 *v70; // [rsp+150h] [rbp+48h]
  __int64 v71; // [rsp+158h] [rbp+50h]
  struct D2D_MATRIX_3X2_F v72; // [rsp+160h] [rbp+58h] BYREF
  __int128 v73; // [rsp+178h] [rbp+70h] BYREF
  char v74[64]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v75[112]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int128 v76; // [rsp+238h] [rbp+130h] BYREF
  float v77[6]; // [rsp+248h] [rbp+140h] BYREF
  _DWORD v78[6]; // [rsp+260h] [rbp+158h] BYREF

  v4 = _mm_loadu_si128(a2);
  v6 = *((_DWORD *)this + 3) == 1;
  v60 = (struct D2D_RECT_F)v4;
  v10 = 0.0;
  if ( !v6 )
    v10 = *(float *)a2[1].m128i_i32;
  *(FLOAT *)&v56 = v10;
  BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(this, 0, 0LL, 0LL);
  v13 = BuiltHWPrimitiveEntry;
  if ( BuiltHWPrimitiveEntry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, BuiltHWPrimitiveEntry, 0x1E8u, 0LL);
    return v13;
  }
  v55 = 0;
  if ( a4 )
  {
    v14 = (CCpuClip *)*((_QWORD *)this + 2);
    v65 = 0;
    v15 = CCpuClip::ResolveClip(v14, &v58, (struct CMILMatrix *)v64);
    v13 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1F4u, 0LL);
      return v13;
    }
    if ( *((_BYTE *)this + 4473) )
    {
      CMILMatrix::CMILMatrix((CMILMatrix *)v66, (const struct D2D_MATRIX_3X2_F *)((char *)this + 32));
      CMILMatrix::Multiply((CMILMatrix *)v64, (const struct CMILMatrix *)v66);
    }
    v76 = 0LL;
    v17 = (*(__int64 (__fastcall **)(struct CShape *, __int128 *, _BYTE *))(*(_QWORD *)v58 + 48LL))(v58, &v76, v64);
    v13 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x1FDu, 0LL);
      return v13;
    }
    v19 = ClipRectAndEdgeFlags(
            (__int64)&v60,
            SLODWORD(v10),
            (__int64)&v76,
            *(_DWORD *)(*((_QWORD *)this + 2) + 96LL) != 1 ? 0x3030303 : 0,
            &v60,
            &v56);
    v4 = (__m128i)v60;
    v10 = *(float *)&v56;
    v55 = v19 != 0;
  }
  if ( !IsEmpty(&v60) )
  {
    WARPDrawListEntryParams::WARPDrawListEntryParams((WARPDrawListEntryParams *)&v67);
    memset_0(&v67, 0, 0xF8uLL);
    if ( *((_BYTE *)this + 4473) )
      D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
        (D2DMatrixHelper *)&v60,
        (const struct D2D_RECT_F *)((char *)this + 56),
        &v72,
        v20);
    else
      *(__m128i *)&v72.m11 = v4;
    v21 = *((_DWORD *)this + 6) & 0xFFFFFFFE;
    v72.dx = v10;
    v67 = v21 | 0x20;
    if ( v10 == 0.0 )
    {
      *(_QWORD *)&v72.m[2][0] = 0LL;
    }
    else if ( (a2[1].m128i_i8[8] & 6) == 6 )
    {
      LODWORD(v72.dy) = 1;
    }
    else if ( (a2[1].m128i_i8[8] & 2) != 0 )
    {
      LODWORD(v72.dy) = 2;
    }
    else
    {
      dy = v72.dy;
      if ( (a2[1].m128i_i8[8] & 4) != 0 )
        LODWORD(dy) = 3;
      v72.dy = dy;
    }
    v59 = 0LL;
    if ( *((_BYTE *)this + 4474) )
      goto LABEL_31;
    v23 = (CCpuClip *)*((_QWORD *)this + 2);
    if ( !*(_QWORD *)v23 && !*((_QWORD *)v23 + 10) )
      goto LABEL_31;
    v24 = CCpuClip::ResolveClip(v23, &v58, 0LL);
    v13 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x23Au, 0LL);
    }
    else
    {
      v26 = (*(__int64 (__fastcall **)(struct CShape *, _QWORD, __int64 *))(*(_QWORD *)v58 + 24LL))(v58, 0LL, &v59);
      v13 = v26;
      if ( v26 >= 0 )
      {
        v68 = v59;
LABEL_31:
        if ( a3 )
        {
          v28 = *(_OWORD *)a3;
          v29 = *((_QWORD *)a3 + 2);
          v30 = (struct CShape *)*((_QWORD *)this + 10);
          v58 = v30;
          v75[97] = 1;
          v73 = v28;
          if ( v29 )
          {
            v69 = v29;
            v70 = &v73;
          }
          v71 = *((_QWORD *)a3 + 4);
          LODWORD(v56) = (*(__int64 (__fastcall **)(struct CShape *))(*(_QWORD *)v30 + 24LL))(v30);
          v31 = (int)v56;
          if ( (_DWORD)v56 )
          {
            v32 = 0LL;
            if ( *((_QWORD *)a3 + 5) )
            {
              v33 = (__int64 *)v75;
              do
              {
                if ( ((1 << v32) & v31) != 0 )
                {
                  *(_QWORD *)&v61.left = gsl::span<PrimitiveUVDesc const,-1>::operator[](
                                           (const struct PrimitiveVertexAttributesDesc *)((char *)a3 + 40),
                                           v32);
                  if ( !memcmp_0(*(const void **)&v61.left, &unk_1803E2080, 0x24uLL) )
                  {
                    v31 = (int)v56;
                  }
                  else
                  {
                    v34 = (__int64 *)(*(__int64 (__fastcall **)(struct CShape *, _QWORD))(*(_QWORD *)v30 + 16LL))(
                                       v30,
                                       (unsigned int)v32);
                    v35 = (char *)v58 + 2 * (unsigned int)v32;
                    v36 = v35[(unsigned int)v32 + 66];
                    LOWORD(v57) = *(_WORD *)&v35[(unsigned int)v32 + 64];
                    CDrawListBitmap::operator=(v33 - 8, v34);
                    *(_DWORD *)v33 = ExtendMode::ToD2D1ExtendMode(SBYTE1(v57));
                    v37 = ExtendMode::ToD2D1ExtendMode(v36);
                    LOBYTE(v38) = v57;
                    *((_DWORD *)v33 + 1) = v37;
                    v39 = InterpolationMode::ToD2D1InterpolationMode(v38);
                    v40 = *(_QWORD *)&v61.left;
                    *((_DWORD *)v33 + 2) = v39;
                    v41 = *(_DWORD *)(v40 + 4);
                    v78[0] = *(_DWORD *)v40;
                    v42 = *(_DWORD *)(v40 + 12);
                    v78[1] = v41;
                    v43 = *(_DWORD *)(v40 + 16);
                    v78[2] = v42;
                    v44 = *(_DWORD *)(v40 + 24);
                    v78[3] = v43;
                    v45 = *(_DWORD *)(v40 + 28);
                    v78[4] = v44;
                    v78[5] = v45;
                    CDrawListBitmap::GetSize((CDrawListBitmap *)v34, &v60);
                    CDrawListBitmap::GetSize((CDrawListBitmap *)v34, &v76);
                    v77[1] = 0.0;
                    v77[2] = 0.0;
                    v77[0] = (float)(int)v76;
                    v77[3] = (float)SLODWORD(v60.top);
                    v77[4] = 0.0 - (float)((float)(int)v76 * 0.0);
                    v77[5] = 0.0 - (float)((float)SLODWORD(v60.top) * 0.0);
                    D2D1::Matrix3x2F::SetProduct(
                      (D2D1::Matrix3x2F *)&v62,
                      (const struct D2D1::Matrix3x2F *)v78,
                      (const struct D2D1::Matrix3x2F *)v77);
                    v6 = *((_BYTE *)this + 4473) == 0;
                    v46 = (const struct D2D1::Matrix3x2F *)(v33 - 5);
                    v47 = v63;
                    *(_OWORD *)v46 = v62;
                    *((_QWORD *)v46 + 2) = v47;
                    if ( !v6 )
                    {
                      D2D1::Matrix3x2F::SetProduct(
                        (D2D1::Matrix3x2F *)&v62,
                        (CDrawListEntryBuilder *)((char *)this + 32),
                        v46);
                      v48 = v63;
                      *(_OWORD *)v49 = v62;
                      *(_QWORD *)(v49 + 16) = v48;
                    }
                    v61 = (struct D2D_RECT_F)_xmm;
                    v50 = AreEqual((const struct D2D_RECT_F *)(v40 + 36), &v61);
                    v30 = v58;
                    v31 = (int)v56;
                    if ( !v50 )
                    {
                      *((_BYTE *)v33 + 12) = 1;
                      *((_OWORD *)v33 - 1) = *v51;
                    }
                  }
                }
                ++v32;
                v33 += 10;
              }
              while ( v32 < *((_QWORD *)a3 + 5) );
            }
          }
        }
        else
        {
          v73 = _xmm;
        }
        v56 = 0LL;
        Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease((volatile signed __int32 **)&v56);
        v52 = CWARPDrawListEntry::Create((const struct WARPDrawListEntryParams *)&v67, &v56);
        v13 = v52;
        if ( v52 >= 0 )
        {
          *(_QWORD *)&v60.left = v56;
          *(_QWORD *)&v76 = *((_QWORD *)this + 12);
          v56 = 0LL;
          detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::insert_unchecked<CDrawListEntry *>(
            (__int64)this + 88,
            &v61,
            &v76,
            &v60);
          Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease((volatile signed __int32 **)&v56);
          Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v59);
          `vector destructor iterator'(v74, 80LL, 2LL, (void (__fastcall *)(char *))EffectInput::~EffectInput);
          goto LABEL_52;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0x280u, 0LL);
        Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease((volatile signed __int32 **)&v56);
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v59);
LABEL_36:
        `vector destructor iterator'(v74, 80LL, 2LL, (void (__fastcall *)(char *))EffectInput::~EffectInput);
        return v13;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x23Cu, 0LL);
    }
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v59);
    goto LABEL_36;
  }
LABEL_52:
  if ( v55 && **((_QWORD **)this + 2) )
    *((_BYTE *)this + 4472) = 1;
  return v13;
}
