void __fastcall CMILMatrix::Decompose2DAffineMatrixIntoScaleAndRest(
        CMILMatrix *this,
        struct CMILMatrix *a2,
        struct CMILMatrix *a3,
        bool *a4)
{
  CMILMatrix *v8; // rcx
  bool v9; // al
  CMILMatrix *v10; // rcx
  float v11; // [rsp+48h] [rbp+10h] BYREF
  float v12; // [rsp+50h] [rbp+18h] BYREF

  CMILMatrix::Get2DScaleDimensions(this, &v12, &v11);
  CMILMatrix::SetToIdentity(a2);
  CMILMatrix::Scale(v8, v12, v11, 1.0);
  *(_OWORD *)a3 = *(_OWORD *)a2;
  *((_OWORD *)a3 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a3 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)a3 + 3) = *((_OWORD *)a2 + 3);
  *((_DWORD *)a3 + 16) = *((_DWORD *)a2 + 16);
  v9 = CMILMatrix::Invert(a3);
  *a4 = v9;
  if ( v9 )
    CMILMatrix::Multiply(v10, this);
}
