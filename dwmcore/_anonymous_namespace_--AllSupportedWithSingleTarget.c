/*
 * XREFs of _anonymous_namespace_::AllSupportedWithSingleTarget @ 0x1801A43C0
 * Callers:
 *     _anonymous_namespace_::DisableBufferingForInteraction @ 0x1801A45F4 (_anonymous_namespace_--DisableBufferingForInteraction.c)
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x1801A4680 (-GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PE.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall anonymous_namespace_::AllSupportedWithSingleTarget(__int64 a1, unsigned int a2)
{
  char v4; // bl
  __int64 v5; // rax

  v4 = 0;
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1)
    && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1) )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    return (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v5 + 80LL))(v5, a2, 2LL) != 0;
  }
  return v4;
}
