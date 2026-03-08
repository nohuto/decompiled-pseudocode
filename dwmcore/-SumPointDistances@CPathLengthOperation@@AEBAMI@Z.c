/*
 * XREFs of ?SumPointDistances@CPathLengthOperation@@AEBAMI@Z @ 0x180016468
 * Callers:
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x180016234 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1801177AC (sqrtf_0.c)
 */

float __fastcall CPathLengthOperation::SumPointDistances(CPathLengthOperation *this, unsigned int a2)
{
  float v2; // xmm6_4
  float *v3; // rbx
  __int64 v4; // rsi
  float *v5; // rdi
  float v6; // xmm0_4

  v2 = 0.0;
  if ( a2 )
  {
    v3 = (float *)((char *)this + 92);
    v4 = a2;
    v5 = (float *)((char *)this + 100);
    do
    {
      v6 = sqrtf_0((float)((float)(*v3 - *v5) * (float)(*v3 - *v5)) + (float)((float)(v3[1] - v5[1])
                                                                            * (float)(v3[1] - v5[1])));
      v5 += 2;
      v2 = v2 + v6;
      v3 += 2;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
