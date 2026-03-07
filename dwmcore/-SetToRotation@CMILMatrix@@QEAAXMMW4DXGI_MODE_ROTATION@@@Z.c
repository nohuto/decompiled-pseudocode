void __fastcall CMILMatrix::SetToRotation(CMILMatrix *this, float a2, float a3, enum DXGI_MODE_ROTATION a4)
{
  CMILMatrix *v4; // rcx
  int v5; // r9d
  int v6; // r9d
  int v7; // r9d
  CMILMatrix *v8; // rcx

  CMILMatrix::SetToIdentity(this);
  v6 = v5 - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return;
      CMILMatrix::Rotate90(v4);
      a2 = a3;
      a3 = 0.0;
    }
    else
    {
      CMILMatrix::Scale(v4, -1.0, -1.0, 1.0);
    }
  }
  else
  {
    CMILMatrix::Rotate270(v4);
    a3 = a2;
    a2 = 0.0;
  }
  CMILMatrix::Translate(v8, a2, a3);
}
