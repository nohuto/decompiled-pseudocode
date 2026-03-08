/*
 * XREFs of ?GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800DB080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::GetWorldTransform3x2(CDrawingContext *this, struct D2D_MATRIX_3X2_F *a2)
{
  int v2; // eax
  float *v3; // rax
  FLOAT v4; // xmm0_4
  FLOAT v5; // xmm1_4
  FLOAT v6; // xmm2_4
  FLOAT v7; // xmm3_4
  FLOAT v8; // xmm4_4

  v2 = *((_DWORD *)this + 94);
  if ( v2 )
    v3 = (float *)(*((_QWORD *)this + 49) + 68LL * (unsigned int)(v2 - 1));
  else
    v3 = (float *)&CMILMatrix::Identity;
  v4 = v3[1];
  v5 = v3[4];
  v6 = v3[5];
  v7 = v3[12];
  v8 = v3[13];
  a2->m11 = *v3;
  a2->m12 = v4;
  a2->m21 = v5;
  a2->m22 = v6;
  a2->dx = v7;
  a2->dy = v8;
}
