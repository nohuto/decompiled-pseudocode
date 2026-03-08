/*
 * XREFs of ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect@@@Z @ 0x180219440
 * Callers:
 *     ?RenderLayer@CFilterEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801F11C0 (-RenderLayer@CFilterEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect@@@Z @ 0x180219440 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect.c)
 * Callees:
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x18000FC10 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterface@UID2D1Effect@@@@YAXAEAPEAUID2D1Effect@@@Z @ 0x1800D0C2C (--$ReleaseInterface@UID2D1Effect@@@@YAXAEAPEAUID2D1Effect@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x180218EBC (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDe.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect@@@Z @ 0x180219440 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect.c)
 *     ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x180219764 (-GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagR.c)
 */

__int64 __fastcall CFilterEffect::GetD2DEffectNoRef(
        CFilterEffect *this,
        struct CD3DDevice **a2,
        struct ID2D1Bitmap1 *a3,
        struct ID2D1Effect **a4)
{
  int v4; // eax
  ID2D1Effect *v5; // rdi
  struct ID2D1Effect *v6; // r14
  int v9; // ebx
  int v10; // r9d
  int D2DEffectNoRef; // eax
  struct ID2D1Effect *v12; // rbx
  int v13; // eax
  struct ID2D1Effect **v14; // rax
  __int64 v15; // r15
  __int64 v16; // r13
  __int64 v17; // rcx
  unsigned int v18; // r12d
  char v19; // al
  CFilterEffect *v20; // rcx
  int InputEffectForAtlasedSurface; // eax
  __int64 v22; // rcx
  unsigned int v24; // [rsp+20h] [rbp-28h]
  struct ID2D1Effect *v25; // [rsp+30h] [rbp-18h] BYREF
  __int64 v26; // [rsp+38h] [rbp-10h]
  struct ID2D1Effect *v27; // [rsp+90h] [rbp+48h] BYREF
  struct CDrawingContext *v28; // [rsp+98h] [rbp+50h]
  struct ID2D1Bitmap1 *v29; // [rsp+A0h] [rbp+58h]
  struct ID2D1Effect **v30; // [rsp+A8h] [rbp+60h]

  v30 = a4;
  v29 = a3;
  v28 = (struct CDrawingContext *)a2;
  v4 = *((_DWORD *)this + 8);
  v5 = 0LL;
  *a4 = 0LL;
  v6 = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  *((_DWORD *)this + 8) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 + 2)) & 6;
  if ( (((unsigned __int8)v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 + 2)) & 6) & 6) != 2 )
  {
    v9 = -2147467259;
    v24 = 27;
    goto LABEL_3;
  }
  D2DEffectNoRef = CDeviceResourceTable<CD2DEffect,CFilterEffect>::FindOrCreateResourceNoRef(
                     (unsigned __int64)this + 80,
                     a2[5],
                     &v25);
  v9 = D2DEffectNoRef;
  if ( D2DEffectNoRef < 0 )
  {
    v24 = 31;
    goto LABEL_27;
  }
  v12 = v25;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v25 + 10) + 8LL))(*((_QWORD *)v25 + 10));
  v5 = (ID2D1Effect *)*((_QWORD *)v12 + 10);
  D2DEffectNoRef = (*(__int64 (__fastcall **)(CFilterEffect *, ID2D1Effect *))(*(_QWORD *)this + 208LL))(this, v5);
  v9 = D2DEffectNoRef;
  if ( D2DEffectNoRef < 0 )
  {
    v24 = 33;
LABEL_27:
    v10 = D2DEffectNoRef;
    goto LABEL_28;
  }
  v13 = *((_DWORD *)this + 38);
  if ( !v13 )
  {
    (*(void (__fastcall **)(ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v5 + 112LL))(
      v5,
      0LL,
      a3,
      1LL);
    goto LABEL_8;
  }
  if ( v13 <= 0 )
  {
LABEL_8:
    v14 = v30;
    *v30 = v5;
    if ( v9 < 0 )
      goto LABEL_30;
    goto LABEL_31;
  }
  v26 = *((int *)this + 38);
  v15 = 0LL;
  while ( 1 )
  {
    v16 = *(_QWORD *)(*((_QWORD *)this + 18) + 8 * v15);
    v17 = *(_QWORD *)(v16 + 24);
    v18 = *(_DWORD *)(*((_QWORD *)this + 17) + 4 * v15);
    if ( !v17 )
    {
      (*(void (__fastcall **)(ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v5 + 112LL))(
        v5,
        v18,
        v29,
        1LL);
      goto LABEL_20;
    }
    v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 56LL))(v17, 61LL);
    v20 = *(CFilterEffect **)(v16 + 24);
    if ( v19 )
    {
      v25 = 0LL;
      D2DEffectNoRef = CFilterEffect::GetD2DEffectNoRef(v20, v28, v29, &v25);
      v9 = D2DEffectNoRef;
      if ( D2DEffectNoRef < 0 )
      {
        v24 = 61;
        goto LABEL_27;
      }
      ID2D1Effect::SetInputEffect(v5, v18, v25);
      goto LABEL_20;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(CFilterEffect *, __int64))(*(_QWORD *)v20 + 56LL))(v20, 42LL) )
      break;
    InputEffectForAtlasedSurface = CFilterEffect::GetInputEffectForAtlasedSurface(
                                     (_DWORD)this,
                                     (_DWORD)v28,
                                     (int)v16 + 4,
                                     *(_QWORD *)(v16 + 24),
                                     (__int64)&v27);
    v9 = InputEffectForAtlasedSurface;
    if ( InputEffectForAtlasedSurface < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, InputEffectForAtlasedSurface, 0x49u, 0LL);
      v6 = v27;
      goto LABEL_29;
    }
    ID2D1Effect::SetInputEffect(v5, v18, v27);
    ReleaseInterface<ID2D1Effect>((__int64 *)&v27);
    v6 = v27;
LABEL_20:
    if ( ++v15 >= v26 )
      goto LABEL_8;
  }
  v9 = -2147467263;
  v24 = 82;
LABEL_3:
  v10 = v9;
LABEL_28:
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v10, v24, 0LL);
LABEL_29:
  v14 = v30;
LABEL_30:
  *v14 = 0LL;
LABEL_31:
  if ( v5 )
    (*(void (__fastcall **)(ID2D1Effect *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v6 )
    (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v6 + 16LL))(v6);
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return (unsigned int)v9;
}
