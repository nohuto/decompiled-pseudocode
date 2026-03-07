void __fastcall CMILMatrix::Set2DAffineMatrix(
        CMILMatrix *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  CMILMatrix::SetMatrix(this, a2, a3, 0.0, 0.0, a4, a5, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, a6, a7, 0.0, 1.0);
  *((_BYTE *)this + 64) = *((_BYTE *)this + 64) & 0xF3 | 4;
  *((_BYTE *)this + 65) = *((_BYTE *)this + 65) & 0xC3 | 0x14;
}
