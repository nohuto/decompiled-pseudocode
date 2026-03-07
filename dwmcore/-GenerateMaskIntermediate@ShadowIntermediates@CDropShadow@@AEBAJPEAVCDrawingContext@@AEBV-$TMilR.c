__int64 __fastcall CDropShadow::ShadowIntermediates::GenerateMaskIntermediate(
        __int64 a1,
        CDrawingContext *a2,
        _DWORD *a3,
        __int64 a4,
        __int64 *a5)
{
  unsigned int v9; // eax
  __m128i v10; // xmm0
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  int v15; // eax
  float v16; // xmm0_4
  int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v26; // [rsp+28h] [rbp-41h]
  float v27[2]; // [rsp+38h] [rbp-31h] BYREF
  const char *v28; // [rsp+40h] [rbp-29h] BYREF
  int v29; // [rsp+48h] [rbp-21h]
  _OWORD v30[3]; // [rsp+58h] [rbp-11h] BYREF
  float v31; // [rsp+88h] [rbp+1Fh]
  float v32; // [rsp+8Ch] [rbp+23h]
  int v33; // [rsp+90h] [rbp+27h]
  int v34; // [rsp+94h] [rbp+2Bh]
  char v35; // [rsp+98h] [rbp+2Fh]
  char v36; // [rsp+99h] [rbp+30h]
  __int64 v37; // [rsp+D8h] [rbp+6Fh] BYREF

  v37 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v37);
  v9 = a3[2] - *a3;
  v29 = 19;
  v10 = _mm_cvtsi32_si128(v9);
  v11 = a3[3] - a3[1];
  LODWORD(v27[0]) = _mm_cvtepi32_ps(v10).m128_u32[0];
  v28 = "DWM DropShadow Mask";
  LODWORD(v26) = 3;
  v27[1] = (float)v11;
  v12 = CDrawingContext::PushOffScreenRenderingLayer(a2, (__int64)&v28, v27, DisplayId::None, v26, (__int64)&v37);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x367u, 0LL);
  }
  else
  {
    CMILMatrix::SetToIdentity((CMILMatrix *)v30);
    v15 = -*a3;
    v30[0] = _xmm;
    v30[2] = _xmm;
    v30[1] = _xmm;
    v16 = (float)v15;
    v17 = -a3[1];
    v35 = 84;
    v33 = 0;
    v31 = v16;
    v36 = v36 & 0xC0 | 0x17;
    v32 = (float)v17;
    v34 = (int)FLOAT_1_0;
    v18 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v30, 0, 1);
    v14 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x373u, 0LL);
    }
    else
    {
      v20 = *(_QWORD *)(a1 + 48);
      if ( !v20 )
        v20 = *((_QWORD *)g_pComposition + 40);
      v21 = v20 + 64 + *(int *)(*(_QWORD *)(v20 + 64) + 8LL);
      v22 = (*(__int64 (__fastcall **)(__int64, CDrawingContext *, __int64, _QWORD))(*(_QWORD *)v21 + 16LL))(
              v21,
              a2,
              a4,
              0LL);
      v14 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x37Bu, 0LL);
      }
      else
      {
        v24 = v37;
        v37 = 0LL;
        *a5 = v24;
      }
      CDrawingContext::PopTransformInternal(a2, 1);
    }
    CDrawingContext::PopLayer(a2);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v37);
  return v14;
}
