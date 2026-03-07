__int64 __fastcall ShadowHelpers::GenerateBlurIntermediate(
        ShadowHelpers *this,
        const struct CResourceTag *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        struct IBitmapRealization *a5,
        const struct D2D_POINT_2F *a6,
        __int64 *a7)
{
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  struct D2D_SIZE_F v14; // rax
  __int64 (__fastcall *v15)(const struct D2D_SIZE_F *, __int64, __int64 *, _QWORD); // rbx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  int CachedEffectNoRef; // eax
  __int64 v20; // rcx
  struct ID2D1Effect *v21; // rdi
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v32; // [rsp+20h] [rbp-30h]
  struct ID2D1Effect *v33; // [rsp+30h] [rbp-20h] BYREF
  __int64 v34; // [rsp+38h] [rbp-18h] BYREF
  __int64 v35[2]; // [rsp+40h] [rbp-10h] BYREF

  v35[0] = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v35);
  LODWORD(v32) = 4;
  v11 = CDrawingContext::PushOffScreenRenderingLayer(a2, (__int64)this, (float *)a3, DisplayId::None, v32, (__int64)v35);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x12Bu, 0LL);
  }
  else
  {
    v14 = *a4;
    v34 = 0LL;
    v15 = *(__int64 (__fastcall **)(const struct D2D_SIZE_F *, __int64, __int64 *, _QWORD))(*(_QWORD *)&v14 + 56LL);
    v16 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 40LL))((char *)a2 + 24);
    v17 = v15(a4, v16, &v34, 0LL);
    v13 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x133u, 0LL);
    }
    else
    {
      CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef(*((_QWORD *)a2 + 5) + 16LL, 6u, &v33);
      v13 = CachedEffectNoRef;
      if ( CachedEffectNoRef < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, CachedEffectNoRef, 0x138u, 0LL);
      }
      else
      {
        v21 = v33;
        (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v33 + 112LL))(
          v33,
          0LL,
          v34,
          1LL);
        *(float *)&v33 = *(float *)&a6 / 3.0;
        v22 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, struct ID2D1Effect **, int))(*(_QWORD *)v21 + 72LL))(
                v21,
                0LL,
                0LL,
                &v33,
                4);
        v13 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x143u, 0LL);
        }
        else
        {
          LODWORD(v33) = 1;
          v24 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, struct ID2D1Effect **, int))(*(_QWORD *)v21 + 72LL))(
                  v21,
                  1LL,
                  0LL,
                  &v33,
                  4);
          v13 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x146u, 0LL);
          }
          else
          {
            LODWORD(v33) = 0;
            v26 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, struct ID2D1Effect **, int))(*(_QWORD *)v21 + 72LL))(
                    v21,
                    2LL,
                    0LL,
                    &v33,
                    4);
            v13 = v26;
            if ( v26 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x149u, 0LL);
            }
            else
            {
              v28 = CDrawingContext::FillEffect(a2, v21, 0LL, (const struct D2D_POINT_2F *)a5, 1);
              v13 = v28;
              if ( v28 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x14Eu, 0LL);
              }
              else
              {
                v30 = v35[0];
                v35[0] = 0LL;
                *a7 = v30;
              }
            }
          }
        }
        (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v21 + 112LL))(
          v21,
          0LL,
          0LL,
          1LL);
      }
    }
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v34);
    CDrawingContext::PopLayer(a2);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v35);
  return v13;
}
