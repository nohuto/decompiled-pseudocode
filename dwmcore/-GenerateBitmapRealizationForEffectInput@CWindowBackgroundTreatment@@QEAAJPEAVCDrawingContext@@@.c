__int64 __fastcall CWindowBackgroundTreatment::GenerateBitmapRealizationForEffectInput(
        CWindowBackgroundTreatment *this,
        struct CDrawingContext *a2)
{
  int v2; // r13d
  float v4; // xmm0_4
  float v5; // xmm1_4
  int v7; // esi
  char v8; // bl
  __int64 v9; // rcx
  unsigned __int64 v10; // r14
  CVisual *v11; // r12
  const struct CVisualTreePath *v12; // rbx
  int v13; // eax
  unsigned int v14; // ecx
  CBackdropVisualImage *BackdropVisualImage; // rax
  CBackdropVisualImage *v16; // r12
  __int64 v17; // rcx
  __int64 EffectInput; // rax
  int v19; // ebx
  char v20; // r12
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // ecx
  _QWORD *v24; // rbx
  __int64 v25; // rcx
  int v26; // eax
  unsigned int v27; // ecx
  char *v28; // rcx
  __int64 v29; // xmm1_8
  int v30; // r14d
  __int64 v32; // xmm1_8
  const char **DebugString; // rax
  __int64 v34; // rbx
  __int64 v35; // rax
  const char **v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  char v43; // [rsp+30h] [rbp-D0h]
  void *lpMem; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD *v45; // [rsp+40h] [rbp-C0h] BYREF
  const struct CVisualTreePath *v46; // [rsp+48h] [rbp-B8h]
  _DWORD v47[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v48[8]; // [rsp+58h] [rbp-A8h] BYREF
  CVisual *v49; // [rsp+60h] [rbp-A0h]
  __int128 v50; // [rsp+68h] [rbp-98h] BYREF
  __int128 v51; // [rsp+80h] [rbp-80h] BYREF
  char v52; // [rsp+90h] [rbp-70h]
  __int128 v53; // [rsp+B0h] [rbp-50h]
  char v54[8]; // [rsp+F0h] [rbp-10h] BYREF
  char v55[104]; // [rsp+F8h] [rbp-8h] BYREF
  char v56[8]; // [rsp+160h] [rbp+60h] BYREF
  char v57[104]; // [rsp+168h] [rbp+68h] BYREF

  v2 = 0;
  v4 = *((float *)this + 24) - *((float *)this + 22);
  v5 = *((float *)this + 25) - *((float *)this + 23);
  v45 = 0LL;
  v7 = 0;
  v8 = 0;
  *(float *)v47 = v4;
  *(float *)&v47[1] = v5;
  CWindowBackgroundTreatment::InvalidateBitmapRealization(this);
  v52 = 0;
  v51 = 0LL;
  v53 = 0LL;
  EffectInput::Reset((struct EffectInput *)&v51);
  v9 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 39) = &v51;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 56LL))(v9, 22LL) )
  {
    v32 = *((_QWORD *)this + 13);
    *(_OWORD *)((char *)this + 136) = *(_OWORD *)((char *)this + 88);
    *((_QWORD *)this + 19) = v32;
    goto LABEL_27;
  }
  v10 = (unsigned __int64)a2 + 24;
  v8 = *((_BYTE *)this + 303);
  v43 = v8;
  if ( *((_QWORD *)this + 38) )
  {
    v11 = (CVisual *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v10 + 32LL))((char *)a2 + 24);
    v12 = (const struct CVisualTreePath *)*((_QWORD *)a2 + 1010);
    v49 = v11;
    v46 = v12;
    if ( dword_1803E0760 )
    {
      DebugString = (const char **)CVisualTreePath::GetDebugString(v12, &lpMem);
      v34 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v48, "bviPath=[%s]", *DebugString);
      v35 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v50, "WindowBackgroundTreatment-ValidateBVI");
      DwmDbg::Backdrops::LogBrushEtwEvent(v35, v11, v34);
      if ( lpMem )
        operator delete(lpMem);
      v12 = v46;
    }
    v50 = *(_OWORD *)((char *)this + 88);
    v13 = CDrawingContext::ValidateBVIEffectInputForRender(a2, &v50, 0LL);
    v7 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xBBu, 0LL);
LABEL_26:
      v8 = v43;
      goto LABEL_27;
    }
    BackdropVisualImage = CVisual::GetBackdropVisualImage(v11, v12);
    v16 = BackdropVisualImage;
    if ( BackdropVisualImage && CBackdropVisualImage::CanUseAsEffectInput(BackdropVisualImage) )
    {
      EffectInput = CBackdropVisualImage::GenerateEffectInput(v17, v56);
      v19 = 0;
      v2 = 1;
    }
    else
    {
      *(float *)&lpMem = *((float *)&v50 + 2) - *(float *)&v50;
      *((float *)&lpMem + 1) = *((float *)&v50 + 3) - *((float *)&v50 + 1);
      EffectInput = CDrawingContext::GetTransparentBlackEffectInput(a2, v54, &lpMem);
      v19 = 2;
    }
    EffectInput::operator=(&v51, EffectInput);
    if ( v19 )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v55);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v54);
    }
    if ( v2 )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v57);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v56);
    }
    if ( dword_1803E0760 )
    {
      if ( v16 )
      {
        if ( !CBackdropVisualImage::CanUseAsEffectInput(v16) )
        {
          v39 = DwmDbg::DbgString::DbgString(
                  (DwmDbg::DbgString *)&v50,
                  "CWindowBackgroundTreatment::GenerateBitmapRealizationForEffectInput");
          v40 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v48, "BVI-FallbackToTransparentBlack");
          CBackdropVisualImage::LogEtwEvent(v16, v40, v39);
        }
      }
      else
      {
        v36 = (const char **)CVisualTreePath::GetDebugString(v46, &lpMem);
        v37 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v50, "bviPath=[%s]", *v36);
        v38 = DwmDbg::DbgString::DbgString(
                (DwmDbg::DbgString *)v48,
                "WindowBackgroundTreatment-FallbackToTransparentBlack-NoBVI");
        DwmDbg::Backdrops::LogBrushEtwEvent(v38, v49, v37);
        if ( lpMem )
          operator delete(lpMem);
      }
    }
    v8 = v43;
    v20 = 1;
  }
  else
  {
    v20 = 0;
  }
  Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease(&v45);
  v21 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v10 + 40LL))((char *)a2 + 24);
  DWORD2(v50) = 31;
  *(_QWORD *)&v50 = "DWM Window Background Treatment";
  if ( (int)CDrawingContext::PushOffScreenRenderingLayer(a2, &v50, v47, *(unsigned int *)(v21 + 8), 4, &v45) >= 0 )
  {
    v22 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
    v24 = v45;
    v7 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xEBu, 0LL);
    }
    else
    {
      v25 = *((_QWORD *)this + 9) + 64LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 9) + 64LL) + 8LL);
      v26 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, _DWORD *, _QWORD))(*(_QWORD *)v25 + 16LL))(
              v25,
              a2,
              v47,
              0LL);
      v7 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xF0u, 0LL);
      }
      else
      {
        if ( g_LockAndReadWindowBackdropTexture )
        {
          v41 = (*(__int64 (__fastcall **)(_QWORD *))(*v24 + 64LL))(v24);
          v42 = *(int *)(*(_QWORD *)(v41 + 8) + 16LL) + v41 + 8;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v42 + 24LL))(v42, v10 & -(__int64)(a2 != 0LL));
        }
        v28 = (char *)v24 + *(int *)(v24[1] + 8LL) + 8;
        (*(void (__fastcall **)(char *, unsigned __int64))(*(_QWORD *)v28 + 40LL))(
          v28,
          -(__int64)(this != 0LL) & ((unsigned __int64)this + 64));
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=((char *)this + 80, v24);
        v29 = *((_QWORD *)this + 13);
        *(_OWORD *)((char *)this + 136) = *(_OWORD *)((char *)this + 88);
        *((_QWORD *)this + 19) = v29;
        if ( v20
          && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1007) + 184LL))(*((_QWORD *)a2 + 1007)) )
        {
          *((_BYTE *)this + 301) = 1;
        }
      }
      CDrawingContext::PopTransformInternal(a2, 1);
    }
    v30 = CDrawingContext::PopLayer(a2);
    if ( v7 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v24 + 24LL))(v24, DisplayId::None);
      if ( v30 < 0 )
        v7 = v30;
    }
    goto LABEL_26;
  }
LABEL_27:
  if ( CWindowBackgroundTreatment::HasValidSource(this) && v8 )
    *((_QWORD *)this + 40) = *(_QWORD *)(*((_QWORD *)this + 2) + 608LL);
  *((_QWORD *)this + 39) = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((char *)&v51 + 8);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v51);
  Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease(&v45);
  return (unsigned int)v7;
}
