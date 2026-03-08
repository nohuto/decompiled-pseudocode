/*
 * XREFs of ?Convert3dTo2dMatrix@CPalmRejectZoneInfo@@AEAAJPEBUtagINPUT_TRANSFORM@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1C02156C4
 * Callers:
 *     ?GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@PEBUCompositionInputObject@@U2@@Z @ 0x1C02159E0 (-GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA-AUtagRECT@@PEBUCompositionInpu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPalmRejectZoneInfo::Convert3dTo2dMatrix(
        CPalmRejectZoneInfo *this,
        const struct tagINPUT_TRANSFORM *a2,
        struct D2D_MATRIX_3X2_F *a3)
{
  float v3; // xmm2_4
  __int64 result; // rax
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm1_4

  if ( *((float *)a2 + 3) != 0.0 )
    return 2151677959LL;
  if ( *((float *)a2 + 7) != 0.0 )
    return 2151677959LL;
  if ( *((float *)a2 + 11) != 0.0 )
    return 2151677959LL;
  v3 = *((float *)a2 + 15);
  if ( v3 == 0.0 )
    return 2151677959LL;
  result = 0LL;
  v5 = *((float *)a2 + 1) / v3;
  *(float *)a3 = *(float *)a2 / v3;
  v6 = *((float *)a2 + 4);
  *((float *)a3 + 1) = v5;
  v7 = *((float *)a2 + 5) / v3;
  *((float *)a3 + 2) = v6 / v3;
  v8 = *((float *)a2 + 12);
  *((float *)a3 + 3) = v7;
  v9 = *((float *)a2 + 13) / v3;
  *((float *)a3 + 4) = v8 / v3;
  *((float *)a3 + 5) = v9;
  return result;
}
