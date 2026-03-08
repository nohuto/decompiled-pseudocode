/*
 * XREFs of ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800D2CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z @ 0x1800D2EFC (-TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z.c)
 *     ?EnsureD2DGeometry@CRoundedRectangleShape@@AEBAJXZ @ 0x1800D2F98 (-EnsureD2DGeometry@CRoundedRectangleShape@@AEBAJXZ.c)
 */

__int64 __fastcall CRoundedRectangleShape::GetD2DGeometry(
        CRoundedRectangleShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx

  v6 = CRoundedRectangleShape::EnsureD2DGeometry(this);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xCBu, 0LL);
  }
  else
  {
    v9 = CTransformedGeometryHelper::TransformGeometry(a2, *(struct ID2D1Geometry **)(*((_QWORD *)this + 2) + 72LL), a3);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xCCu, 0LL);
  }
  return v8;
}
