/*
 * XREFs of ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C4160
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180007454 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024CA8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapResource@@PEBVCDrawingContext@@_N@Z @ 0x180051CC0 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapResource@@PEBVCDrawingContext@@_N@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180054720 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180054E94 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180056430 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180056574 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x180056B28 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800577C0 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180057AA8 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180057C44 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180092A8C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180094ABC (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x180094C48 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180094C7C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800C8D60 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 */

__int64 __fastcall CHwndBitmap::GenerateDrawList(
        CHwndBitmap *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v7; // ecx
  int v8; // eax
  char v9; // r14
  int DrawList; // eax
  __int64 v11; // rcx
  int v12; // ebx
  CSurfaceDrawListBrush *v13; // rcx
  unsigned int v14; // r8d
  __int64 v15; // rcx
  unsigned int v16; // r8d
  unsigned int v18; // [rsp+20h] [rbp-E0h]
  char v19; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v20; // [rsp+31h] [rbp-CFh]
  CSurfaceDrawListBrush *v21; // [rsp+40h] [rbp-C0h] BYREF
  CSurfaceDrawListBrush *v22; // [rsp+48h] [rbp-B8h] BYREF
  CSurfaceDrawListBrush **v23; // [rsp+50h] [rbp-B0h]
  CSurfaceDrawListBrush *v24; // [rsp+58h] [rbp-A8h] BYREF
  char v25; // [rsp+60h] [rbp-A0h]
  __int64 v26; // [rsp+68h] [rbp-98h] BYREF
  float v27; // [rsp+70h] [rbp-90h]
  float v28; // [rsp+74h] [rbp-8Ch]
  __int128 v29; // [rsp+78h] [rbp-88h] BYREF
  __int64 v30; // [rsp+88h] [rbp-78h]
  int v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+94h] [rbp-6Ch]
  int v33; // [rsp+9Ch] [rbp-64h]
  char v34; // [rsp+A0h] [rbp-60h]
  __int128 v35; // [rsp+B0h] [rbp-50h] BYREF
  int v36; // [rsp+C0h] [rbp-40h]
  __int16 v37; // [rsp+10Ch] [rbp+Ch]
  char v38; // [rsp+10Eh] [rbp+Eh]
  _BYTE v39[16]; // [rsp+110h] [rbp+10h] BYREF
  int v40; // [rsp+120h] [rbp+20h]
  struct CDrawListEntry **v41[288]; // [rsp+160h] [rbp+60h] BYREF

  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v41);
  v7 = *((_DWORD *)a2 + 68);
  v22 = 0LL;
  v26 = 0LL;
  v8 = D2DInterpolationModeFromMilInterpolationMode(v7);
  v9 = InterpolationMode::FromD2D1InterpolationMode(v8);
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v39, a2);
  v36 = 0;
  v32 = 0LL;
  v33 = 0;
  v30 = 0LL;
  v35 = 0LL;
  v37 = 1;
  v38 = 0;
  v31 = 0;
  v34 = 0;
  v29 = 0LL;
  DrawList = CDrawListBitmap::Initialize(
               (CDrawListBitmap *)&v29,
               (struct IBitmapResource *)(((unsigned __int64)this + 64) & -(__int64)(this != 0LL)),
               a2);
  v12 = DrawList;
  if ( DrawList < 0 )
  {
    v18 = 245;
  }
  else
  {
    CDrawListBitmap::GetSize((CDrawListBitmap *)&v29, &v21);
    v27 = (float)(int)v21;
    CDrawListBitmap::GetSize((CDrawListBitmap *)&v29, &v21);
    v24 = 0LL;
    v25 = 1;
    v19 = v9;
    v20 = 257;
    v23 = &v22;
    v28 = (float)SHIDWORD(v21);
    v12 = CSurfaceDrawListBrush::CreateWithContentRect(
            (CDrawListBitmap *)&v29,
            (__int16 *)&v19,
            (float *)&v26,
            (__int64 *)&v24);
    if ( v25 )
    {
      v13 = *v23;
      *v23 = v24;
      if ( v13 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v13, 1, v14);
    }
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v13, 0LL, 0, v12, 0xFDu, 0LL);
      goto LABEL_14;
    }
    v21 = v22;
    v22 = 0LL;
    CBrushDrawListGenerator::AttachInput((__int64)v39, 0, &v21);
    if ( v21 )
      std::default_delete<CShape>::operator()(v15, (__int64 (__fastcall ***)(_QWORD, __int64))v21);
    v40 = 512;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v39,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v35,
                 (struct CDrawListEntryBuilder *)v41);
    v12 = DrawList;
    if ( DrawList >= 0 )
    {
      CDrawListCache::Update(a4, a2, v41);
      v12 = 0;
      goto LABEL_14;
    }
    v18 = 257;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, DrawList, v18, 0LL);
LABEL_14:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v29 + 8);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v29);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v39);
  if ( v22 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v22, 1, v16);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((Mesh::MeshGraph **)v41);
  return (unsigned int)v12;
}
