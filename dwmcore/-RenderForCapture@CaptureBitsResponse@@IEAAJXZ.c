__int64 __fastcall CaptureBitsResponse::RenderForCapture(CaptureBitsResponse *this)
{
  unsigned int v2; // edi
  __int64 v3; // r14
  char v4; // r15
  __m128i v5; // xmm1
  _QWORD *v6; // rcx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int128 *, char *); // rbx
  __int64 v9; // r8
  struct IDeviceTarget *v10; // rax
  CDrawingContext *v11; // rbx
  int v12; // eax
  unsigned int v13; // ecx
  struct CVisualTree *v14; // rdx
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // ecx
  CComposition *v20; // rcx
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rcx
  struct CDrawingContext *v26; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v27[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v28; // [rsp+98h] [rbp-70h]
  _OWORD v29[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v30; // [rsp+E8h] [rbp-20h]
  __int128 v31; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v32; // [rsp+108h] [rbp+0h] BYREF
  __int128 *v33; // [rsp+110h] [rbp+8h]
  __int128 v34; // [rsp+118h] [rbp+10h] BYREF
  int v35; // [rsp+128h] [rbp+20h]
  int v36; // [rsp+12Ch] [rbp+24h]

  v26 = 0LL;
  v2 = 0;
  v3 = 0LL;
  v4 = 0;
  CMILMatrix::SetToIdentity((CMILMatrix *)v27);
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 410));
  v6 = (_QWORD *)*((_QWORD *)this + 6);
  v32 = 0LL;
  v31 = 0LL;
  *(float *)&v33 = (float)*((int *)this + 409);
  HIDWORD(v33) = _mm_cvtepi32_ps(v5).m128_u32[0];
  if ( v6[8] )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v6 + 184LL))(v6) )
      v3 = *((_QWORD *)this + 6);
    CComposition::ShowHideCursors(g_pComposition, 0);
    v4 = 1;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 406) - 1.0) & _xmm) >= 0.0000011920929 )
      CMILMatrix::Scale((CMILMatrix *)v27, *((float *)this + 406), *((float *)this + 406), 1.0);
    CMILMatrix::Translate(
      (CMILMatrix *)v27,
      COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((int *)this + 407)) ^ _xmm),
      COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((int *)this + 408)) ^ _xmm));
    v26 = 0LL;
    CDrawingContext::Create(&v26);
    *((_BYTE *)g_pComposition + 1274) = 1;
    v29[0] = v27[0];
    v29[1] = v27[1];
    v29[2] = v27[2];
    v29[3] = v27[3];
    v30 = v28;
    if ( CMILMatrix::Invert((CMILMatrix *)v29) )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v29, (struct MilRectF *)&v32);
      v7 = *((_QWORD *)this + 6);
      v32 = 1LL;
      v8 = *(__int64 (__fastcall **)(__int64, __int128 *, char *))(*(_QWORD *)v7 + 200LL);
      v33 = &v31;
      gsl::span<PrimitiveUVDesc const,-1>::span<PrimitiveUVDesc const,-1>(&v34, &v32, v9);
      v8(v7, &v34, (char *)this + 72);
    }
    else
    {
      v31 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    v10 = (struct IDeviceTarget *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 64LL))(*((_QWORD *)this + 8));
    v11 = v26;
    v12 = CDrawingContext::BeginFrame(v26, v10, (const struct CMILMatrix *)v27, &stru_180352650, 0LL);
    v2 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x19Eu, 0LL);
    }
    else
    {
      ++dword_1803E29F8;
      v14 = (struct CVisualTree *)*((_QWORD *)this + 6);
      v35 = 0;
      v36 = 0;
      v34 = v31;
      v15 = CDrawingContext::DrawVisualTree(v11, v14, 2, 0, 0LL);
      v2 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1A7u, 0LL);
        goto LABEL_23;
      }
      if ( v3 )
      {
        v17 = *(_QWORD *)(v3 + 4744);
        if ( v17 )
        {
          v22 = CComposeTop::FullRender(v17, v11, v27, &v31);
          v2 = v22;
          if ( v22 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x1B5u, 0LL);
LABEL_23:
            CDrawingContext::EndFrame(v11);
            goto LABEL_16;
          }
        }
      }
      v18 = CDrawingContext::EndFrame(v11);
      v2 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x1BAu, 0LL);
        goto LABEL_16;
      }
      if ( g_LockAndReadOffscreenTarget )
      {
        v24 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 64LL))(*((_QWORD *)this + 8));
        v25 = *(int *)(*(_QWORD *)(v24 + 8) + 16LL) + v24 + 8;
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v25 + 24LL))(
          v25,
          ((unsigned __int64)v11 + 24) & -(__int64)(v11 != 0LL));
      }
    }
  }
  if ( v4 )
  {
LABEL_16:
    v20 = g_pComposition;
    *((_BYTE *)g_pComposition + 1274) = 0;
    CComposition::RestoreCursors(v20);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
  return v2;
}
