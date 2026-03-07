void __fastcall CMILMatrix::Set2DScaleAndOffset(CMILMatrix *this, float a2, float a3, float a4, float a5)
{
  char v6; // al

  CMILMatrix::Set2DAffineMatrix(this, a2, 0.0, 0.0, a3, a4, a5);
  v6 = *((_BYTE *)this + 64) & 0x3F | 0x40;
  *((_BYTE *)this + 65) |= 3u;
  *((_BYTE *)this + 64) = v6;
}
