/*
 * XREFs of ?GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18021BCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18002FFF8 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x180030870 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18005C160 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180079570 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18007CF6C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18007ECB0 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x180092E30 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180094528 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800946C0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18009598C (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x180095C98 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800B6654 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800D79D0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800E07BC (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180117650 (_alloca_probe.c)
 */

__int64 __fastcall CVisualBitmap::GenerateDrawList(
        CVisualBitmap *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v7; // edi
  int v8; // eax
  CSurfaceDrawListBrush *v9; // rcx
  int v10; // ebx
  CSurfaceDrawListBrush *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r9
  int DrawList; // eax
  __int64 v15; // rcx
  char v17; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v18; // [rsp+31h] [rbp-CFh]
  CSurfaceDrawListBrush *v19; // [rsp+40h] [rbp-C0h] BYREF
  CSurfaceDrawListBrush *v20; // [rsp+48h] [rbp-B8h] BYREF
  CSurfaceDrawListBrush **v21; // [rsp+50h] [rbp-B0h]
  CSurfaceDrawListBrush *v22; // [rsp+58h] [rbp-A8h] BYREF
  char v23; // [rsp+60h] [rbp-A0h]
  __int64 v24; // [rsp+68h] [rbp-98h] BYREF
  float v25; // [rsp+70h] [rbp-90h]
  float v26; // [rsp+74h] [rbp-8Ch]
  _BYTE v27[8]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v28[16]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v29; // [rsp+90h] [rbp-70h] BYREF
  int v30; // [rsp+A0h] [rbp-60h]
  int v31; // [rsp+ECh] [rbp-14h]
  char v32; // [rsp+F0h] [rbp-10h]
  _BYTE v33[16]; // [rsp+100h] [rbp+0h] BYREF
  int v34; // [rsp+110h] [rbp+10h]
  _BYTE v35[4480]; // [rsp+150h] [rbp+50h] BYREF

  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v35);
  v20 = 0LL;
  v24 = 0LL;
  v7 = *((_DWORD *)a2 + 83);
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v33, a2);
  v30 = 0;
  v31 = 257;
  v29 = 0LL;
  v32 = 0;
  CDrawListBitmap::CDrawListBitmap(
    (CDrawListBitmap *)v27,
    (struct IBitmapResource *)(((unsigned __int64)this + 80) & -(__int64)(this != 0LL)));
  CDrawListBitmap::GetSize((CDrawListBitmap *)v27, &v19);
  v25 = (float)(int)v19;
  CDrawListBitmap::GetSize((CDrawListBitmap *)v27, &v19);
  v22 = 0LL;
  v23 = 1;
  v21 = &v20;
  v26 = (float)SHIDWORD(v19);
  v8 = D2DInterpolationModeFromMilInterpolationMode(v7);
  v17 = InterpolationMode::FromD2D1InterpolationMode(v8);
  v18 = 257;
  v10 = CSurfaceDrawListBrush::CreateWithContentRect(
          (CDrawListBitmap *)v27,
          (__int16 *)&v17,
          (float *)&v24,
          (__int64 *)&v22);
  if ( v23 )
  {
    v9 = *v21;
    *v21 = v22;
    if ( v9 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v9, 1);
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0, v10, 0xB6u, 0LL);
  }
  else
  {
    v11 = v20;
    v20 = 0LL;
    v19 = v11;
    CBrushDrawListGenerator::AttachInput((__int64)v33, 0, (__int64 *)&v19);
    if ( v19 )
      std::default_delete<CDrawListBrush>::operator()(v12, (__int64 (__fastcall ***)(_QWORD, __int64))v19);
    v34 = 512;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v33,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v29,
                 (struct CDrawListEntryBuilder *)v35,
                 v13);
    v10 = DrawList;
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, DrawList, 0xBAu, 0LL);
    }
    else
    {
      CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v35);
      v10 = 0;
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v28);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v27);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v33);
  if ( v20 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v20, 1);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v35);
  return (unsigned int)v10;
}
