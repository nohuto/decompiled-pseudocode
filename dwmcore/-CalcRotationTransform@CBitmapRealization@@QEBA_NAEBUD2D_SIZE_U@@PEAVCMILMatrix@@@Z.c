char __fastcall CBitmapRealization::CalcRotationTransform(
        CBitmapRealization *this,
        const struct D2D_SIZE_U *a2,
        struct CMILMatrix *a3)
{
  char v5; // bl
  _BYTE *v6; // r9
  enum DXGI_MODE_ROTATION v7; // r9d

  v5 = 0;
  CMILMatrix::SetToIdentity(a3);
  if ( v6[313] )
  {
    v7 = (*(unsigned int (__fastcall **)(_BYTE *))(*(_QWORD *)v6 + 48LL))(v6);
    if ( v7 != DXGI_MODE_ROTATION_IDENTITY )
    {
      CMILMatrix::SetToRotation(a3, (float)(int)a2->width, (float)(int)a2->height, v7);
      return 1;
    }
  }
  return v5;
}
