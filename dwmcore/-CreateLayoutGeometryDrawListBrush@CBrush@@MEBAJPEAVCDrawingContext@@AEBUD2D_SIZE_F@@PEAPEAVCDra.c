/*
 * XREFs of ?CreateLayoutGeometryDrawListBrush@CBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x1800E0460
 * Callers:
 *     ?CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x1800E02A0 (-CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 * Callees:
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18007E788 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18007EFB0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBrush::CreateLayoutGeometryDrawListBrush(
        CBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListBrush **a4)
{
  CGeometryOnlyDrawListBrush *v6; // rcx
  int v7; // ebx
  FLOAT width; // xmm1_4
  CGeometryOnlyDrawListBrush *v9; // rax
  FLOAT height; // xmm0_4
  CGeometryOnlyDrawListBrush *v11; // rcx
  CGeometryOnlyDrawListBrush *v13; // [rsp+30h] [rbp-20h] BYREF
  struct CGeometryOnlyDrawListBrush *v14[2]; // [rsp+38h] [rbp-18h] BYREF
  char v15; // [rsp+48h] [rbp-8h]

  v13 = 0LL;
  v14[1] = 0LL;
  v14[0] = (struct CGeometryOnlyDrawListBrush *)&v13;
  v15 = 1;
  v7 = CGeometryOnlyDrawListBrush::Create(&v14[1]);
  if ( v15 )
  {
    v6 = *(CGeometryOnlyDrawListBrush **)v14[0];
    *(_QWORD *)v14[0] = v14[1];
    if ( v6 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v6, 1);
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0, v7, 0x8Fu, 0LL);
    v11 = v13;
  }
  else
  {
    width = a3->width;
    v9 = v13;
    height = a3->height;
    v14[0] = 0LL;
    *((_BYTE *)v13 + 52) = 1;
    v11 = 0LL;
    *((_DWORD *)v9 + 12) = 50529027;
    v14[1] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(LODWORD(height), LODWORD(width));
    *((_OWORD *)v9 + 2) = *(_OWORD *)v14;
    *a4 = v13;
    v13 = 0LL;
  }
  if ( v11 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v11, 1);
  return (unsigned int)v7;
}
