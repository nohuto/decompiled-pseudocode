char __fastcall CCursorState::GetScaleAndRotation(
        const struct CMILMatrix *this,
        float *a2,
        enum DXGI_MODE_ROTATION *a3)
{
  char v6; // di
  enum DXGI_MODE_ROTATION Rotation; // eax
  float v9; // [rsp+50h] [rbp+18h] BYREF
  float v10; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0;
  Rotation = (unsigned int)CMILMatrix::GetRotation(this);
  *a3 = Rotation;
  if ( Rotation )
  {
    CMILMatrix::Get2DScaleDimensions(this, &v9, &v10);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 - v10) & _xmm) <= 0.0000011920929
      && COERCE_FLOAT(LODWORD(v9) & _xmm) >= 0.0000011920929 )
    {
      *a2 = v9;
      return 1;
    }
  }
  return v6;
}
