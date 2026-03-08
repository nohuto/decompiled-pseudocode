/*
 * XREFs of ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18027D80C
 * Callers:
 *     ?GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z @ 0x1800DBF00 (-GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEAM@Z @ 0x18027D704 (-GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEA.c)
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18027D8D4 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 */

bool __fastcall CAnimationInterpolator::GetAnimationValue(
        CAnimationInterpolator *this,
        __int64 a2,
        float *a3,
        bool *a4)
{
  bool result; // al
  float v8; // [rsp+44h] [rbp-1Ch] BYREF
  int v9; // [rsp+48h] [rbp-18h] BYREF
  float v10; // [rsp+4Ch] [rbp-14h] BYREF
  signed __int64 v11; // [rsp+50h] [rbp-10h] BYREF

  v8 = 0.0;
  v10 = 0.0;
  v11 = 0LL;
  v9 = 0;
  result = CAnimationInterpolator::GetInterpolatedValue(this, a2, &v8, a4);
  if ( result )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, int *, float *, signed __int64 *))(**(_QWORD **)this + 16LL))(
               *(_QWORD *)this,
               &v9,
               &v10,
               &v11);
    if ( result
      && (!v9 || (result = CAnimationInterpolator::GetAdjustedHandoffValue((__int64)this, a2, v8, v9, v10, v11, &v8))) )
    {
      *a3 = v8;
    }
  }
  return result;
}
