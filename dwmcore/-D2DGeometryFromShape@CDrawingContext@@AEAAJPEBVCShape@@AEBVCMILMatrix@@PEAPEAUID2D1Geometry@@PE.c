/*
 * XREFs of ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x1801D0340
 * Callers:
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801D1120 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A530 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::D2DGeometryFromShape(
        CDrawingContext *this,
        const struct CShape *a2,
        __int64 a3,
        struct ID2D1Geometry **a4,
        bool *a5)
{
  const struct CShape *v5; // rsi
  bool v8; // bp
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx

  *a4 = 0LL;
  v5 = a2;
  LOBYTE(a2) = 1;
  v8 = CMILMatrix::Is2DAffine<1>(a3, (__int64)a2) == 0;
  v9 = (*(__int64 (__fastcall **)(const struct CShape *, __int64, struct ID2D1Geometry **))(*(_QWORD *)v5 + 24LL))(
         v5,
         a3 & -(__int64)v8,
         a4);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x977u, 0LL);
  }
  else if ( a5 )
  {
    *a5 = v8;
  }
  return v11;
}
