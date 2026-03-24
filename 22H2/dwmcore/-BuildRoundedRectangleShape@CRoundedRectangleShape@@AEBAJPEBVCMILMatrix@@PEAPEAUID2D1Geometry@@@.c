/*
 * XREFs of ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18001735C
 * Callers:
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180017250 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?IntersectGeometryBuilder@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@QEBHPEAPEAUID2D1PathGeometry@@_N@Z @ 0x1800174EC (-IntersectGeometryBuilder@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@QEBHPEAPEAUID2D1PathGeometr.c)
 *     ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAUMilPoint2F@@PEBVCMILMatrix@@PEA_NPEAH@Z @ 0x180017A48 (-CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAUMilPoint2F@@PEBVCMILMatrix@@PEA_NPEA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?CreateFullRectD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEAPEAUID2D1PathGeometry@@@Z @ 0x18025FA60 (-CreateFullRectD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEAPEAUID2D1PathGeometry@@.c)
 */

__int64 __fastcall CRoundedRectangleShape::BuildRoundedRectangleShape(
        CRoundedRectangleShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  unsigned int v4; // ecx
  int v5; // edi
  int v6; // ebx
  int v7; // r14d
  bool v8; // r9
  bool *v9; // rsi
  int v10; // eax
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // [rsp+30h] [rbp-89h] BYREF
  bool v15[4]; // [rsp+34h] [rbp-85h] BYREF
  struct ID2D1PathGeometry *v16; // [rsp+38h] [rbp-81h] BYREF
  _BYTE v17[160]; // [rsp+40h] [rbp-79h] BYREF

  v16 = 0LL;
  v14 = 0;
  CRoundedRectangleShape::CalcEdgesAndControlPoints(this, (struct MilPoint2F *)v17, a2, v15, &v14);
  v5 = v14;
  if ( v14 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 1;
    if ( v14 <= 0 )
      goto LABEL_8;
    v9 = v15;
    while ( 1 )
    {
      if ( *v9 )
      {
        v10 = CRoundedRectangleShape::IntersectGeometryBuilder(
                (const struct MilPoint2F *)v17,
                &dword_18028B900[7 * v7],
                &v16,
                v8);
        v6 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v10, 0x13Eu, 0LL);
LABEL_8:
          if ( v6 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v6, 0x75u, 0LL);
          else
LABEL_9:
            *a3 = v16;
          return (unsigned int)v6;
        }
        v8 = 0;
        --v5;
      }
      ++v7;
      ++v9;
      if ( v5 <= 0 )
        goto LABEL_8;
    }
  }
  v12 = CRoundedRectangleShape::CreateFullRectD2DGeometry((const struct MilPoint2F *)v17, &v16);
  v6 = v12;
  if ( v12 >= 0 )
    goto LABEL_9;
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x6Eu, 0LL);
  return (unsigned int)v6;
}
