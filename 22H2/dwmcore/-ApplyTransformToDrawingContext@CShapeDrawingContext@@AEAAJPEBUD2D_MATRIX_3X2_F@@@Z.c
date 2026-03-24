/*
 * XREFs of ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180261050
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18026170C (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180040940 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800415F0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C4488 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CShapeDrawingContext::ApplyTransformToDrawingContext(
        CDrawingContext **this,
        const struct D2D_MATRIX_3X2_F *a2)
{
  unsigned int v2; // edi
  const struct D2D_MATRIX_3X2_F *v3; // r9
  int v5; // eax
  __int64 v6; // rcx
  _BYTE v8[88]; // [rsp+30h] [rbp-58h] BYREF

  v2 = 0;
  v3 = a2;
  if ( a2 )
  {
    if ( *((_BYTE *)this + 528) && *((_BYTE *)this + 530) )
    {
      CDrawingContext::PopTransformInternal(this[41], 1);
      *((_BYTE *)this + 530) = 0;
    }
    if ( !*((_BYTE *)this + 530) )
    {
      CMILMatrix::CMILMatrix((CMILMatrix *)v8, v3);
      v5 = CDrawingContext::PushTransformInternal(this[41], 0LL, (const struct CMILMatrix *)v8, 1, 1);
      v2 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x186u, 0LL);
      }
      else
      {
        *((_BYTE *)this + 528) = 0;
        *((_BYTE *)this + 530) = 1;
      }
    }
  }
  else if ( *((_BYTE *)this + 530) )
  {
    CDrawingContext::PopTransformInternal(this[41], 1);
    *((_BYTE *)this + 530) = 0;
  }
  return v2;
}
