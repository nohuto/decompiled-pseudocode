/*
 * XREFs of ?BeginFigure@CTransformedGeometryHelper@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x1801AFB70
 * Callers:
 *     <none>
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x18026DCC0 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 */

void __fastcall CTransformedGeometryHelper::BeginFigure(CMILMatrix **this, struct D2D_POINT_2F a2, unsigned int a3)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a2;
  CMILMatrix::Transform(this[2], (const struct MilPoint2F *)v5, (struct MilPoint2F *)v5, 1u);
  (*(void (__fastcall **)(CMILMatrix *, _QWORD, _QWORD))(*(_QWORD *)this[4] + 40LL))(this[4], v5[0], a3);
}
