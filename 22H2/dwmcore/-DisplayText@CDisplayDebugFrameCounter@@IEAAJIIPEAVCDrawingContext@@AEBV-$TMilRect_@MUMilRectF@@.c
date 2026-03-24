/*
 * XREFs of ?DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV3@@Z @ 0x180161F48
 * Callers:
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x180161C3C (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingContext@@@Z @ 0x180161EB4 (-DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingCon.c)
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180176DD8 (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUMilRectF@@$0-0@gsl@@AEBU_D3D.c)
 */

__int64 __fastcall CDisplayDebugFrameCounter::DisplayText(
        CDisplayDebugFrameCounter *this,
        unsigned int a2,
        unsigned int a3,
        struct CDrawingContext *a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  struct _D3DCOLORVALUE v10; // xmm10
  float v12; // xmm3_4
  struct D2D_RECT_F v13; // xmm1
  bool v14; // zf
  int Factory; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  _QWORD *v18; // r15
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  struct D2D_RECT_F v26; // [rsp+68h] [rbp-A0h]
  struct _D3DCOLORVALUE v27; // [rsp+78h] [rbp-90h] BYREF
  struct D2D_RECT_F v28; // [rsp+88h] [rbp-80h] BYREF
  struct D2D_RECT_F v29; // [rsp+98h] [rbp-70h] BYREF

  *(struct _D3DCOLORVALUE *)&v10.r = (struct _D3DCOLORVALUE)_xmm;
  if ( a6 == 1 )
    v12 = (float)((float)(*(float *)(a5 + 12) * 0.25) * 3.0) - (float)(120.0 * 0.5);
  else
    v12 = *(float *)(a5 + 8) - 120.0;
  v26.top = 0.0;
  v26.bottom = 24.0;
  v26.left = v12 + 20.0;
  v26.right = (float)(v12 + 20.0) + 40.0;
  v13 = v26;
  v26.top = 0.0;
  v14 = *((_BYTE *)this + 16) == 0;
  v26.left = (float)(v12 + 40.0) + 40.0;
  v26.bottom = 24.0;
  v28 = v13;
  v26.right = v26.left + 40.0;
  v29 = v26;
  if ( v14 )
  {
    Factory = DWriteCreateFactory(0LL, &GUID_b859ee5a_d838_4b5b_a2e8_1adc7d93db48, (char *)this + 24);
    v17 = Factory;
    if ( Factory < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, Factory, 0x9Au, 0LL);
      return v17;
    }
    v18 = (_QWORD *)((char *)this + 32);
    v19 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, __int64, _DWORD, int, _DWORD, wchar_t *, char *))(**((_QWORD **)this + 3) + 120LL))(
            *((_QWORD *)this + 3),
            L"Lucida Console",
            0LL,
            400LL,
            0,
            5,
            LODWORD(FLOAT_20_0),
            word_1802CE8C0,
            (char *)this + 32);
    v17 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xA9u, 0LL);
      return v17;
    }
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v18 + 24LL))(*v18, 2LL);
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v18 + 32LL))(*v18, 2LL);
    *((_BYTE *)this + 16) = 1;
  }
  *(struct _D3DCOLORVALUE *)&v27.r = (struct _D3DCOLORVALUE)_xmm;
  CDrawingContext::FillRectanglesWithSolidColor(a4);
  if ( a2 <= 0x1E )
    *(struct _D3DCOLORVALUE *)&v10.r = (struct _D3DCOLORVALUE)_xmm;
  *(struct _D3DCOLORVALUE *)&v27.r = *(struct _D3DCOLORVALUE *)&v10.r;
  v21 = CDisplayDebugFrameCounter::DisplayNumber((struct IDWriteTextFormat **)this, a2, &v27, &v28, a4);
  v17 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xC2u, 0LL);
  }
  else
  {
    *(struct _D3DCOLORVALUE *)&v27.r = (struct _D3DCOLORVALUE)_xmm;
    v23 = CDisplayDebugFrameCounter::DisplayNumber((struct IDWriteTextFormat **)this, a3, &v27, &v29, a4);
    v17 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0xC5u, 0LL);
    }
    else
    {
      *(float *)a7 = v12 + 0.0;
      *(_DWORD *)(a7 + 4) = DWORD1(_xmm);
      *(float *)(a7 + 8) = v12 + 120.0;
      *(_DWORD *)(a7 + 12) = HIDWORD(_xmm);
    }
  }
  return v17;
}
