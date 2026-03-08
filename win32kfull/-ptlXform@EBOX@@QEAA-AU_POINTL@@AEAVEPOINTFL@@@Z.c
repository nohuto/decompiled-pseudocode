/*
 * XREFs of ?ptlXform@EBOX@@QEAA?AU_POINTL@@AEAVEPOINTFL@@@Z @ 0x1C02C89C8
 * Callers:
 *     ?bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z @ 0x1C02C8340 (-bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z.c)
 * Callees:
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
 */

struct _POINTL __fastcall EBOX::ptlXform(EBOX *this, struct EPOINTFL *a2, float *a3)
{
  float v3; // xmm3_4
  float v5; // xmm2_4
  unsigned int v7; // r8d
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a3;
  v5 = a3[1];
  bFToL((float)((float)*((int *)this + 14) * v5) + (float)((float)*((int *)this + 12) * *a3), (int *)&v9, 6u);
  bFToL((float)((float)*((int *)this + 15) * v5) + (float)((float)*((int *)this + 13) * v3), (int *)&v9 + 1, v7);
  LODWORD(v9) = *((_DWORD *)this + 10) + v9;
  HIDWORD(v9) += *((_DWORD *)this + 11);
  *(_QWORD *)a2 = v9;
  return (struct _POINTL)a2;
}
