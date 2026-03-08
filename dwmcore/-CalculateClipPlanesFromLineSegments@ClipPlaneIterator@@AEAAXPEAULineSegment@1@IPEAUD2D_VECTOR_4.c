/*
 * XREFs of ?CalculateClipPlanesFromLineSegments@ClipPlaneIterator@@AEAAXPEAULineSegment@1@IPEAUD2D_VECTOR_4F@@@Z @ 0x1801D6698
 * Callers:
 *     ?GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x1801D6ACC (-GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z.c)
 *     ?GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x1801D6BA0 (-GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z.c)
 * Callees:
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _hypot_0 @ 0x1801176A4 (_hypot_0.c)
 */

void __fastcall ClipPlaneIterator::CalculateClipPlanesFromLineSegments(
        ClipPlaneIterator *this,
        struct ClipPlaneIterator::LineSegment *a2,
        unsigned int a3,
        struct D2D_VECTOR_4F *a4)
{
  __int64 v7; // rbx
  float *v8; // rdi
  __int64 v9; // r12
  signed __int64 v10; // r14
  float v11; // xmm8_4
  float v12; // xmm9_4
  float v13; // xmm7_4
  float v14; // xmm6_4
  float v15; // xmm1_4
  float v16; // xmm6_4
  float v17; // xmm7_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm6_4
  float v21; // xmm1_4
  float v22; // xmm9_4
  float v23; // xmm7_4
  float v24; // xmm8_4
  float v25; // xmm10_4
  float v26; // xmm1_4
  __int128 v27; // [rsp+20h] [rbp-88h]

  v7 = a3;
  if ( !a3 )
    goto LABEL_10;
  DWORD2(v27) = 0;
  v8 = (float *)((char *)a2 + 8);
  v9 = a3;
  v10 = (char *)a4 - (char *)a2;
  do
  {
    v11 = *v8;
    v12 = v8[1];
    v13 = *v8 - *(v8 - 2);
    v14 = v12 - *(v8 - 1);
    if ( *(_QWORD *)v8 >= *((_QWORD *)v8 - 1) )
    {
      v11 = *(v8 - 2);
      v12 = *(v8 - 1);
    }
    v15 = hypot_0(v13, v14);
    v16 = v14 / v15;
    v17 = v13 / v15;
    v18 = (float)(v17 * v11) + (float)(v16 * v12);
    v19 = v18 * v16;
    v20 = COERCE_FLOAT(LODWORD(v16) ^ _xmm) * *((float *)this + 4);
    v21 = v18 * v17;
    v22 = v12 - v19;
    v23 = v17 * *((float *)this + 4);
    v24 = v11 - v21;
    if ( (float)((float)(v22 * v23) + (float)(v24 * v20)) <= 0.0 )
      v25 = *(float *)&FLOAT_1_0;
    else
      v25 = FLOAT_N1_0;
    *(_QWORD *)&v27 = __PAIR64__(LODWORD(v23), LODWORD(v20));
    v26 = hypot_0(v24, v22);
    *((float *)&v27 + 3) = v26 * v25;
    *(_OWORD *)((char *)v8 + v10 - 8) = v27;
    v8 += 4;
    --v9;
  }
  while ( v9 );
  if ( a3 < 4 )
LABEL_10:
    memset_0(&a4[v7], 0, 16LL * (4 - a3));
}
