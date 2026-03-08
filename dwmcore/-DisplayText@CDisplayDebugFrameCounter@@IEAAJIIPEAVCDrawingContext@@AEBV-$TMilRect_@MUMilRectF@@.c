/*
 * XREFs of ?DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV3@@Z @ 0x1801EEF14
 * Callers:
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1801EEC3C (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18012ACEC (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUMilRectF@@$0-0@gsl@@AEBU_D3D.c)
 *     ?DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingContext@@@Z @ 0x1801EEE74 (-DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingCon.c)
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
  struct _D3DCOLORVALUE v8; // xmm10
  float v12; // xmm3_4
  float v13; // xmm7_4
  struct D2D_RECT_F v14; // xmm1
  bool v15; // zf
  int Factory; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  _QWORD *v19; // r15
  int v20; // eax
  __int64 v21; // rcx
  int v22; // xmm8_4
  int v23; // xmm9_4
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  struct _D3DCOLORVALUE v29; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v30; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v31; // [rsp+78h] [rbp-90h] BYREF
  struct D2D_RECT_F v32; // [rsp+88h] [rbp-80h] BYREF
  struct D2D_RECT_F v33; // [rsp+98h] [rbp-70h] BYREF

  *(struct _D3DCOLORVALUE *)&v8.r = (struct _D3DCOLORVALUE)_xmm;
  v31 = 0LL;
  v30 = _xmm;
  if ( a6 == 1 )
    v12 = (float)((float)(*(float *)(a5 + 12) * 0.25) * 3.0) - (float)(120.0 * 0.5);
  else
    v12 = *(float *)(a5 + 8) - 120.0;
  v29.g = 0.0;
  v13 = *(float *)&v30 + v12;
  v29.a = 24.0;
  v29.r = v12 + 20.0;
  v29.b = (float)(v12 + 20.0) + 40.0;
  v14 = *(struct D2D_RECT_F *)&v29.r;
  v29.g = 0.0;
  v15 = *(_BYTE *)this == 0;
  v29.r = (float)(v12 + 40.0) + 40.0;
  v29.a = 24.0;
  v32 = v14;
  v29.b = v29.r + 40.0;
  v33 = *(struct D2D_RECT_F *)&v29.r;
  if ( v15 )
  {
    Factory = DWriteCreateFactory(0LL, &GUID_b859ee5a_d838_4b5b_a2e8_1adc7d93db48, (char *)this + 8);
    v18 = Factory;
    if ( Factory < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, Factory, 0x97u, 0LL);
      return v18;
    }
    v19 = (_QWORD *)((char *)this + 16);
    v20 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, __int64, _DWORD, int, _DWORD, wchar_t *, char *))(**((_QWORD **)this + 1) + 120LL))(
            *((_QWORD *)this + 1),
            L"Lucida Console",
            0LL,
            400LL,
            0,
            5,
            LODWORD(FLOAT_20_0),
            word_1803392B0,
            (char *)this + 16);
    v18 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xA6u, 0LL);
      return v18;
    }
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v19 + 24LL))(*v19, 2LL);
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v19 + 32LL))(*v19, 2LL);
    *(_BYTE *)this = 1;
  }
  v22 = DWORD1(v30);
  v23 = HIDWORD(v30);
  DWORD1(v31) = DWORD1(v30);
  HIDWORD(v31) = HIDWORD(v30);
  v30 = _xmm;
  *(_QWORD *)&v29.b = &v31;
  *(float *)&v31 = v13;
  *((float *)&v31 + 2) = v12 + 120.0;
  *(_QWORD *)&v29.r = 1LL;
  CDrawingContext::FillRectanglesWithSolidColor(a4, &v29, (__int64)&v30);
  if ( a2 <= 0x1E )
    *(struct _D3DCOLORVALUE *)&v8.r = *(struct _D3DCOLORVALUE *)&_xmm;
  *(struct _D3DCOLORVALUE *)&v29.r = *(struct _D3DCOLORVALUE *)&v8.r;
  v24 = CDisplayDebugFrameCounter::DisplayNumber((struct IDWriteTextFormat **)this, a2, &v29, &v32, a4);
  v18 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xBFu, 0LL);
  }
  else
  {
    *(struct _D3DCOLORVALUE *)&v29.r = (struct _D3DCOLORVALUE)_xmm;
    v26 = CDisplayDebugFrameCounter::DisplayNumber((struct IDWriteTextFormat **)this, a3, &v29, &v33, a4);
    v18 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xC2u, 0LL);
    }
    else
    {
      *(float *)a7 = v13;
      *(_DWORD *)(a7 + 4) = v22;
      *(float *)(a7 + 8) = v12 + 120.0;
      *(_DWORD *)(a7 + 12) = v23;
    }
  }
  return v18;
}
