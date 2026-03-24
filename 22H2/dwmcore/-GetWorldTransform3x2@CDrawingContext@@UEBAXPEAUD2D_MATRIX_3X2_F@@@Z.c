/*
 * XREFs of ?GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800D3AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008D0E8 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 */

void __fastcall CDrawingContext::GetWorldTransform3x2(CDrawingContext *this, struct D2D_MATRIX_3X2_F *a2)
{
  const struct CMILMatrix *TopByReference; // rax
  int v3; // xmm0_4
  int v4; // xmm1_4
  int v5; // xmm2_4
  int v6; // xmm3_4
  int v7; // xmm4_4
  _DWORD *v8; // r8

  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 384));
  v3 = *((_DWORD *)TopByReference + 1);
  v4 = *((_DWORD *)TopByReference + 4);
  v5 = *((_DWORD *)TopByReference + 5);
  v6 = *((_DWORD *)TopByReference + 12);
  v7 = *((_DWORD *)TopByReference + 13);
  *v8 = *(_DWORD *)TopByReference;
  v8[1] = v3;
  v8[2] = v4;
  v8[3] = v5;
  v8[4] = v6;
  v8[5] = v7;
}
