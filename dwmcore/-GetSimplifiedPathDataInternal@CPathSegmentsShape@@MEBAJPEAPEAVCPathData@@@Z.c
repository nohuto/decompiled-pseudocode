/*
 * XREFs of ?GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x180015AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800161E4 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x1800166BC (-IsSimpleGeometry@CPathData@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x18027CE18 (-Simplify@CPathData@@QEBAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CPathSegmentsShape::GetSimplifiedPathDataInternal(CPathSegmentsShape *this, struct CPathData **a2)
{
  CPathData **v2; // rdi
  unsigned int v3; // ebx
  CPathData *v4; // rcx
  struct CPathData *v6; // rcx
  CPathData *v8; // rbx
  int v9; // eax
  unsigned int v10; // ecx
  struct CPathData *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = (CPathData **)((char *)this + 16);
  v3 = 0;
  v4 = (CPathData *)*((_QWORD *)this + 2);
  v11 = 0LL;
  if ( CPathData::IsSimpleGeometry(v4) )
  {
    Microsoft::WRL::ComPtr<CPathData>::operator=(&v11, v2);
  }
  else
  {
    v8 = *v2;
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v11);
    v9 = CPathData::Simplify(v8, &v11);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x2Fu, 0LL);
      goto LABEL_4;
    }
  }
  v6 = v11;
  v11 = 0LL;
  *a2 = v6;
LABEL_4:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v11);
  return v3;
}
