/*
 * XREFs of ?InterpolateCubic@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x18027DAAC
 * Callers:
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18027D8D4 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

float __fastcall CAnimationInterpolator::InterpolateCubic(
        CAnimationInterpolator *this,
        const struct DwmAnimationPrimitive *a2,
        int a3)
{
  double v4; // xmm6_8
  __int64 v5; // rax
  double v6; // xmm0_8
  double v7; // xmm6_8

  v4 = (double)(a3 - *((_DWORD *)a2 + 2));
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
  if ( v5 < 0 )
    v6 = (double)(int)(v5 & 1 | ((unsigned __int64)v5 >> 1)) + (double)(int)(v5 & 1 | ((unsigned __int64)v5 >> 1));
  else
    v6 = (double)(int)v5;
  v7 = v4 / v6;
  return *((float *)a2 + 4) * (v7 * v7) * v7
       + *((float *)a2 + 5) * (v7 * v7)
       + *((float *)a2 + 6) * v7
       + *((float *)a2 + 7);
}
