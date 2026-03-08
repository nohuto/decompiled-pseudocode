/*
 * XREFs of ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C00D7AB8
 * Callers:
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00D7854 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?CalcDpiOverride@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C00D79DC (-CalcDpiOverride@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 * Callees:
 *     ?CalcDpi@DpiInternal@@YAIII@Z @ 0x1C00D7AFC (-CalcDpi@DpiInternal@@YAIII@Z.c)
 */

struct tagSIZE __fastcall DpiInternal::CalcDpi(DpiInternal *this, const struct tagSIZE *a2, const struct tagSIZE *a3)
{
  unsigned int v5; // r8d
  __int64 v7; // [rsp+30h] [rbp+8h]

  LODWORD(v7) = DpiInternal::CalcDpi((DpiInternal *)*(unsigned int *)this, a2->cx, (unsigned int)a3);
  HIDWORD(v7) = DpiInternal::CalcDpi((DpiInternal *)*((unsigned int *)this + 1), a2->cy, v5);
  return (struct tagSIZE)v7;
}
