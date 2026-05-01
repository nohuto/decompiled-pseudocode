/*
 * XREFs of ??$_ScaleByDPI@U_MARGINS@@@MultitaskingViewConfigHelpers@@YAXPEAU_MARGINS@@II@Z @ 0x180406D90
 * Callers:
 *     ?ScaleMetricsByDPI@MultitaskingViewConfigHelpers@@YAXAEBUMultitaskingViewConfig@@IPEAU2@@Z @ 0x1804071E0 (-ScaleMetricsByDPI@MultitaskingViewConfigHelpers@@YAXAEBUMultitaskingViewConfig@@IPEAU2@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall MultitaskingViewConfigHelpers::_ScaleByDPI<_MARGINS>(int *a1, int a2, int a3)
{
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int result; // eax

  v6 = MulDiv(*a1, a2, a3);
  v7 = a1[1];
  *a1 = v6;
  v8 = MulDiv(v7, a2, a3);
  v9 = a1[2];
  a1[1] = v8;
  v10 = MulDiv(v9, a2, a3);
  v11 = a1[3];
  a1[2] = v10;
  result = MulDiv(v11, a2, a3);
  a1[3] = result;
  return result;
}
