__int64 __fastcall CProjectedShadowReceiver::GetReceiverMaskInputBrush(
        CProjectedShadowReceiver *this,
        struct CDrawingContext *a2,
        struct CDrawListBrush **a3)
{
  int v4; // ebx
  CBrush *EffectiveMaskBrush; // r15
  __int64 v8; // rdx
  char *v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  void (__fastcall ***v15)(_QWORD, __int128 *); // rcx
  struct IBitmapRealization *v16; // rdx
  CSurfaceDrawListBrush *v17; // rcx
  __int16 v19; // [rsp+40h] [rbp-C0h] BYREF
  char v20; // [rsp+42h] [rbp-BEh]
  CSurfaceDrawListBrush *v21; // [rsp+50h] [rbp-B0h] BYREF
  const char *v22; // [rsp+58h] [rbp-A8h] BYREF
  int v23; // [rsp+60h] [rbp-A0h]
  float v24; // [rsp+64h] [rbp-9Ch]
  CSurfaceDrawListBrush **v25; // [rsp+68h] [rbp-98h]
  CSurfaceDrawListBrush *v26; // [rsp+70h] [rbp-90h] BYREF
  char v27; // [rsp+78h] [rbp-88h]
  _BYTE v28[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v29[16]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v30; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v31[40]; // [rsp+B0h] [rbp-50h] BYREF
  struct CDrawListBrush *v32; // [rsp+D8h] [rbp-28h]
  __int64 v33; // [rsp+E0h] [rbp-20h]

  v4 = 0;
  *a3 = 0LL;
  EffectiveMaskBrush = CProjectedShadowReceiver::GetEffectiveMaskBrush(this);
  if ( !CBrush::GetBrushGraph(EffectiveMaskBrush, v8) )
  {
    v9 = (char *)this + 112;
    if ( !*((_QWORD *)this + 14) )
    {
      CBrushDrawListGenerator::CBrushDrawListGenerator(
        (CBrushDrawListGenerator *)v31,
        a2,
        (const struct D2D_SIZE_F *)(*((_QWORD *)this + 8) + 140LL));
      v10 = (*(__int64 (__fastcall **)(CBrush *, _BYTE *))(*(_QWORD *)EffectiveMaskBrush + 312LL))(
              EffectiveMaskBrush,
              v31);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xC2u, 0LL);
        goto LABEL_13;
      }
      if ( v33 )
      {
        Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease((__int64 *)this + 14);
        v12 = *((_QWORD *)this + 8);
        v22 = "DWM ProjectedShadow Mask";
        v23 = 24;
        v30 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v13 = ShadowHelpers::GenerateMaskIntermediate(
                &v22,
                a2,
                v12 + 140,
                EffectiveMaskBrush,
                0LL,
                0,
                &v30,
                (char *)this + 112);
        v4 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xD1u, 0LL);
LABEL_13:
          CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v31);
          return (unsigned int)v4;
        }
      }
      else
      {
        *a3 = v32;
        v32 = 0LL;
      }
      CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v31);
    }
    if ( *(_QWORD *)v9 )
    {
      v15 = (void (__fastcall ***)(_QWORD, __int128 *))(*(_QWORD *)v9
                                                      + 8LL
                                                      + *(int *)(*(_QWORD *)(*(_QWORD *)v9 + 8LL) + 16LL));
      (**v15)(v15, &v30);
      if ( *(_QWORD *)v9 )
        v16 = (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(*(_QWORD *)v9 + 8LL) + 16LL) + *(_QWORD *)v9 + 8LL);
      else
        v16 = 0LL;
      CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v28, v16);
      v22 = 0LL;
      v21 = 0LL;
      v26 = 0LL;
      v27 = 1;
      v25 = &v21;
      v19 = SamplerMode::k_ClampClampLinear;
      *(float *)&v23 = (float)(int)v30;
      v24 = (float)SDWORD1(v30);
      v20 = 1;
      v4 = CSurfaceDrawListBrush::CreateWithContentRect((CDrawListBitmap *)v28, &v19, (float *)&v22, (__int64 *)&v26);
      if ( v27 )
      {
        v17 = *v25;
        *v25 = v26;
        if ( v17 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v17, 1);
      }
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v17, 0LL, 0, v4, 0xE8u, 0LL);
        if ( v21 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v21, 1);
      }
      else
      {
        *a3 = v21;
        v21 = 0LL;
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v29);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v28);
    }
  }
  return (unsigned int)v4;
}
