/*
 * XREFs of ?GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z @ 0x18027DA4C
 * Callers:
 *     ?TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z @ 0x180130D3E (-TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z.c)
 *     ?FindCurrentPrimitive@CAnimationInterpolator@@IEAA_N_J@Z @ 0x18027D680 (-FindCurrentPrimitive@CAnimationInterpolator@@IEAA_N_J@Z.c)
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18027D8D4 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

const struct DwmAnimationPrimitive *__fastcall CAnimationInterpolator::GetPrimitiveAtIndex(
        CAnimationInterpolator *this,
        unsigned int a2)
{
  if ( a2 >= (***(unsigned int (__fastcall ****)(_QWORD))this)(*(_QWORD *)this) )
    return 0LL;
  else
    return (const struct DwmAnimationPrimitive *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 8LL))(
                                                   *(_QWORD *)this,
                                                   a2);
}
