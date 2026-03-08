/*
 * XREFs of ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800EF28C
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x1800951C0 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18002FFF8 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x180030870 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18005C160 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18007E788 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18007EFB0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180094528 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x180095C98 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x1800EF3F0 (-Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CRenderData::DrawSolidColorRectangle(
        CRenderData *this,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3,
        const struct MilRectF *a4,
        const struct _D3DCOLORVALUE *a5)
{
  __int128 v7; // xmm0
  CGeometryOnlyDrawListBrush *v8; // rcx
  int v9; // ebx
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r9
  int DrawList; // eax
  __int64 v16; // rcx
  struct _D3DCOLORVALUE v18; // [rsp+38h] [rbp-D0h] BYREF
  struct CGeometryOnlyDrawListBrush *v19; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v20[3]; // [rsp+50h] [rbp-B8h] BYREF
  int v21; // [rsp+68h] [rbp-A0h]
  int v22; // [rsp+B4h] [rbp-54h]
  char v23; // [rsp+B8h] [rbp-50h]
  _BYTE v24[20]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v25; // [rsp+DCh] [rbp-2Ch]

  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v24, a2);
  v21 = 0;
  *(_OWORD *)&v20[1] = 0LL;
  v22 = 257;
  v23 = 0;
  v7 = *(_OWORD *)&Convert_MilColorF_scRGB_To_MilColorF_sRGB((struct _D3DCOLORVALUE *)&v18.b, a5)->r;
  *(_QWORD *)&v18.r = 0LL;
  v19 = 0LL;
  v25 = v7;
  *(_QWORD *)&v18.b = &v18;
  LOBYTE(v20[0]) = 1;
  v9 = CGeometryOnlyDrawListBrush::Create(&v19);
  if ( LOBYTE(v20[0]) )
  {
    v8 = **(CGeometryOnlyDrawListBrush ***)&v18.b;
    **(_QWORD **)&v18.b = v19;
    if ( v8 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v8, 1);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v8, 0LL, 0, v9, 0x397u, 0LL);
  }
  else
  {
    v10 = *(_QWORD *)&v18.r;
    v11 = *(_OWORD *)a4;
    *(_BYTE *)(*(_QWORD *)&v18.r + 52LL) = 1;
    *(_OWORD *)(v10 + 32) = v11;
    *(_DWORD *)(v10 + 48) = 50529027;
    v12 = *(_QWORD *)&v18.r;
    *(_QWORD *)&v18.r = 0LL;
    v19 = (struct CGeometryOnlyDrawListBrush *)*((_QWORD *)&v11 + 1);
    *(_QWORD *)&v18.b = v12;
    CBrushDrawListGenerator::AttachInput((__int64)v24, 0, (__int64 *)&v18.b);
    if ( *(_QWORD *)&v18.b )
      std::default_delete<CDrawListBrush>::operator()(v13, *(__int64 (__fastcall ****)(_QWORD, __int64))&v18.b);
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v24,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v20[1],
                 a3,
                 v14);
    v9 = DrawList;
    if ( DrawList < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, DrawList, 0x39Bu, 0LL);
  }
  if ( *(_QWORD *)&v18.r )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(*(CGeometryOnlyDrawListBrush **)&v18.r, 1);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v24);
  return (unsigned int)v9;
}
