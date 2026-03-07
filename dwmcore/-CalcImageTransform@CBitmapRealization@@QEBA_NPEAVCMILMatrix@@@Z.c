char __fastcall CBitmapRealization::CalcImageTransform(CBitmapRealization *this, struct CMILMatrix *a2)
{
  CMILMatrix *v3; // rcx
  __int64 v4; // r8
  char v5; // bl

  CMILMatrix::SetToIdentity(a2);
  v5 = 0;
  if ( *(_BYTE *)(v4 + 313) )
  {
    CMILMatrix::Set2DAffineMatrix(
      v3,
      *(float *)(v4 + 168),
      *(float *)(v4 + 172),
      *(float *)(v4 + 176),
      *(float *)(v4 + 180),
      *(float *)(v4 + 184),
      *(float *)(v4 + 188));
    return (unsigned __int8)CMILMatrix::IsIdentity<0>(a2) == 0;
  }
  return v5;
}
