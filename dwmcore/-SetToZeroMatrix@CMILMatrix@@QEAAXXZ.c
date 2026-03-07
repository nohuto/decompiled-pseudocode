void __fastcall CMILMatrix::SetToZeroMatrix(CMILMatrix *this)
{
  char v2; // al

  CMILMatrix::SetMatrix(this, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
  v2 = *((_BYTE *)this + 65) & 0xD5;
  *((_BYTE *)this + 64) = 119;
  *((_BYTE *)this + 65) = v2 | 0x15;
}
