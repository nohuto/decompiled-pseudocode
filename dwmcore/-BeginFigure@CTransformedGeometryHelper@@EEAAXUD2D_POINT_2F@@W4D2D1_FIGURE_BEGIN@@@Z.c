void __fastcall CTransformedGeometryHelper::BeginFigure(CMILMatrix **this, struct D2D_POINT_2F a2, unsigned int a3)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a2;
  CMILMatrix::Transform(this[2], (const struct MilPoint2F *)v5, (struct MilPoint2F *)v5, 1u);
  (*(void (__fastcall **)(CMILMatrix *, _QWORD, _QWORD))(*(_QWORD *)this[4] + 40LL))(this[4], v5[0], a3);
}
