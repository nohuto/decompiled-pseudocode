/*
 * XREFs of ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x18001514C
 * Callers:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800615C0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ??0CTrimPathOperation@@QEAA@XZ @ 0x18001527C (--0CTrimPathOperation@@QEAA@XZ.c)
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18001539C (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 *     ?GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z @ 0x1800159F0 (-GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800DBA68 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800EF9A8 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ??0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z @ 0x1800F8414 (--0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CGeometry::GetTrimmedShapeData(CGeometry *this, const struct CShape *a2, struct CShapePtr *a3)
{
  int SimplifiedPathData; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  CPathSegmentsShape *v9; // rax
  unsigned int v10; // ecx
  CPathSegmentsShape *v11; // rsi
  unsigned int v13; // [rsp+20h] [rbp-E0h]
  struct CPathData *v14; // [rsp+30h] [rbp-D0h] BYREF
  struct CPathData *v15; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v16[400]; // [rsp+40h] [rbp-C0h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  CTrimPathOperation::CTrimPathOperation((CTrimPathOperation *)v16);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v15);
  SimplifiedPathData = CShape::GetSimplifiedPathData(a2, &v15);
  v8 = SimplifiedPathData;
  if ( SimplifiedPathData < 0 )
  {
    v13 = 286;
    goto LABEL_10;
  }
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v14);
  SimplifiedPathData = CTrimPathOperation::Trim(
                         (CTrimPathOperation *)v16,
                         v15,
                         *((float *)this + 22),
                         *((float *)this + 23),
                         *((float *)this + 24),
                         &v14);
  v8 = SimplifiedPathData;
  if ( SimplifiedPathData < 0 )
  {
    v13 = 287;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, SimplifiedPathData, v13, 0LL);
    goto LABEL_6;
  }
  v9 = (CPathSegmentsShape *)DefaultHeap::Alloc(0x18uLL);
  if ( v9 && (v11 = CPathSegmentsShape::CPathSegmentsShape(v9, v14)) != 0LL )
  {
    CShapePtr::Release(a3);
    *(_QWORD *)a3 = v11;
    *((_BYTE *)a3 + 8) = 1;
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x122u, 0LL);
  }
LABEL_6:
  std::vector<unsigned char>::_Tidy(v16);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v15);
  return v8;
}
