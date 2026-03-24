/*
 * XREFs of ?ComputeMaxTrackSize@@YA?AUtagSIZE@@UtagRECT@@G@Z @ 0x1C0042524
 * Callers:
 *     GetMaxTrackSizeForWindow @ 0x1C00424BC (GetMaxTrackSizeForWindow.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00614D0 (GetDpiDependentMetric.c)
 */

struct tagSIZE __fastcall ComputeMaxTrackSize(struct tagRECT *a1, unsigned __int16 a2)
{
  unsigned int v2; // edi
  int DpiDependentMetric; // ebx
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h]

  v2 = a2;
  DpiDependentMetric = GetDpiDependentMetric(29LL, a2);
  LODWORD(v7) = a1->right + 2 * (DpiDependentMetric + GetDpiDependentMetric(14LL, v2) + 2) - a1->left;
  v5 = GetDpiDependentMetric(29LL, v2);
  HIDWORD(v7) = a1->bottom + 2 * (v5 + GetDpiDependentMetric(15LL, v2)) + 4 - a1->top;
  return (struct tagSIZE)v7;
}
