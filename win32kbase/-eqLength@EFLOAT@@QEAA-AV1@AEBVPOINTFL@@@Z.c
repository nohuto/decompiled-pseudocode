_DWORD *__fastcall EFLOAT::eqLength(EFLOAT *a1, _DWORD *a2, float *a3)
{
  float v4; // xmm2_4
  _DWORD *result; // rax

  v4 = *a3;
  *(float *)a1 = a3[1] * a3[1];
  *(float *)a1 = (float)(v4 * v4) + *(float *)a1;
  *(_DWORD *)a1 = *(_DWORD *)a1;
  EFLOAT::vSqrt(a1);
  result = a2;
  *a2 = *(_DWORD *)a1;
  return result;
}
