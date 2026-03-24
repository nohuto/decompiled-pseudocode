/*
 * XREFs of ?vMakeIso@DC@@QEAAXXZ @ 0x1C0142860
 * Callers:
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C00247D0 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     GreGetDCPoint @ 0x1C00722C0 (GreGetDCPoint.c)
 * Callees:
 *     EngMulDiv @ 0x1C00718C0 (EngMulDiv.c)
 *     bFToL @ 0x1C0082B80 (bFToL.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C01427E8 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0142824 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 */

void __fastcall DC::vMakeIso(DC *this)
{
  int *v1; // rbx
  INT v3; // r8d
  INT v4; // edx
  unsigned int v5; // edi
  __m128i v6; // xmm0
  float v7; // xmm6_4
  float v8; // xmm6_4
  unsigned int v9; // eax
  int v10; // edi
  float v11; // xmm1_4
  float v12; // xmm2_4
  unsigned int v13; // r8d
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // [rsp+40h] [rbp+8h] BYREF
  __int64 v18; // [rsp+48h] [rbp+10h] BYREF

  v1 = (int *)*((_QWORD *)this + 122);
  v17 = 0;
  v3 = v1[102];
  if ( v3 )
  {
    v4 = v1[106];
    if ( !v4 || (v5 = v1[107]) == 0 )
    {
      v8 = (float)((float)(v1[103] * v1[104]) / (float)v3) / (float)v1[105];
      goto LABEL_8;
    }
    v6 = _mm_cvtsi32_si128(v5);
    v7 = (float)EngMulDiv(v1[103], v4, v3);
  }
  else
  {
    v18 = *((_QWORD *)this + 6);
    v7 = (float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v18);
    v9 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v18);
    v1 = (int *)*((_QWORD *)this + 122);
    v6 = _mm_cvtsi32_si128(v9);
  }
  v8 = v7 / _mm_cvtepi32_ps(v6).m128_f32[0];
LABEL_8:
  v10 = v1[83];
  v11 = (float)v1[80];
  v12 = (float)v1[79];
  bFToL((float)((float)((float)v10 * v11) / v12) * v8, &v17, 6u);
  v14 = abs32(v17);
  v15 = v1[84];
  v17 = v14;
  if ( v15 <= 0 )
  {
    if ( -v15 >= v14 )
    {
      v14 = -v14;
      goto LABEL_10;
    }
  }
  else if ( v15 >= v14 )
  {
LABEL_10:
    v1[84] = v14;
    return;
  }
  bFToL((float)((float)((float)v15 * v12) / v11) / v8, &v17, v13);
  v16 = abs32(v17);
  if ( v10 <= 0 )
    v16 = -v16;
  v1[83] = v16;
}
