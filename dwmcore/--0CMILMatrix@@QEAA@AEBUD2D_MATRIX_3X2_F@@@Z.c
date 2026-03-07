CMILMatrix *__fastcall CMILMatrix::CMILMatrix(CMILMatrix *this, const struct D2D_MATRIX_3X2_F *a2)
{
  char v2; // al
  CMILMatrix *result; // rax

  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)this = *(_QWORD *)&a2->m11;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = *(_QWORD *)&a2->m[1][0];
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 1065353216LL;
  *((_QWORD *)this + 6) = *(_QWORD *)&a2->m[2][0];
  v2 = *((_BYTE *)this + 65) & 0xD7;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 1065353216;
  *((_BYTE *)this + 65) = v2 | 0x14;
  result = this;
  *((_BYTE *)this + 64) = 4;
  return result;
}
