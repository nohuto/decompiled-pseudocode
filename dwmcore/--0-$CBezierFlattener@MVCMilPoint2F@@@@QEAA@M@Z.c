float *__fastcall CBezierFlattener<float,CMilPoint2F>::CBezierFlattener<float,CMilPoint2F>(float *a1, float a2)
{
  float *result; // rax
  float v4; // xmm6_4

  `vector constructor iterator'(a1, 8uLL, 4uLL, (void *(*)(void *))CMilPoint2F::CMilPoint2F);
  `vector constructor iterator'(a1 + 12, 8uLL, 4uLL, (void *(*)(void *))CMilPoint2F::CMilPoint2F);
  result = a1;
  v4 = fmaxf(a2, 0.0) * 6.0;
  a1[11] = (float)(a2 * a2) * 0.000099999997;
  a1[8] = v4;
  a1[10] = v4 * 0.25;
  return result;
}
