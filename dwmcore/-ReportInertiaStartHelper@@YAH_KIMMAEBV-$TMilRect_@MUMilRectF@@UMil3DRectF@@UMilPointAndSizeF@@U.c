/*
 * XREFs of ?ReportInertiaStartHelper@@YAH_KIMMAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DMATRIX@@@Z @ 0x1801979A4
 * Callers:
 *     ?ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z @ 0x180209554 (-ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1801176EC (ceilf_0.c)
 *     InputTypeToInertiaSourceType @ 0x180197968 (InputTypeToInertiaSourceType.c)
 */

__int64 __fastcall ReportInertiaStartHelper(__int64 a1, int a2, float a3, float a4, float *a5, _DWORD *a6)
{
  int v7; // eax
  float v8; // xmm0_4
  int v9; // eax
  float v10; // xmm0_4
  int v11; // eax
  float v12; // xmm0_4
  int v13; // eax
  float v14; // xmm0_4
  int v15; // xmm1_4
  int v16; // xmm0_4
  int v17; // xmm1_4
  int v18; // xmm0_4
  int v19; // xmm1_4
  _DWORD v21[4]; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v22[10]; // [rsp+40h] [rbp-30h] BYREF

  *(float *)v21 = a3;
  *(float *)&v21[1] = a4;
  v7 = InputTypeToInertiaSourceType(a2);
  v8 = *a5;
  v21[2] = v7;
  v9 = (int)ceilf_0(v8);
  v10 = a5[1];
  v22[0] = v9;
  v11 = (int)ceilf_0(v10);
  v12 = a5[2];
  v22[1] = v11;
  v13 = (int)ceilf_0(v12);
  v14 = a5[3];
  v22[2] = v13;
  v22[3] = (int)ceilf_0(v14);
  v15 = a6[1];
  v22[4] = *a6;
  v16 = a6[4];
  v22[5] = v15;
  v17 = a6[5];
  v22[6] = v16;
  v18 = a6[12];
  v22[7] = v17;
  v19 = a6[13];
  v22[8] = v18;
  v22[9] = v19;
  return ReportInertia(a1, 5LL, 0LL, v21, v22);
}
