/*
 * XREFs of ?eqCross@EFLOAT@@QEAA?AV1@AEBVPOINTFL@@0@Z @ 0x1C018C570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall EFLOAT::eqCross(float *a1, _DWORD *a2, float *a3, float *a4)
{
  _DWORD *result; // rax
  float v5; // xmm4_4

  result = a2;
  v5 = *a4 * a3[1];
  *a1 = a4[1] * *a3;
  *a1 = *a1 - v5;
  *a2 = *(_DWORD *)a1;
  return result;
}
