/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180196110
 * Callers:
 *     ?destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18010E1F4 (-destroy@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXX.c)
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x180194864 (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x1801B3140 (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     wil_details_RecordCachedUsage @ 0x180110C20 (wil_details_RecordCachedUsage.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180197308 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(wil::details::EnabledStateManager *this)
{
  unsigned int *v1; // rsi
  unsigned int *v3; // rbx
  const char *v4; // [rsp+20h] [rbp-8h]

  v1 = (unsigned int *)*((_QWORD *)this + 7);
  v3 = (unsigned int *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)((char *)v1 - (char *)v3) >= 0x10 )
  {
    while ( v3 != v1 )
    {
      wil_details_RecordCachedUsage((wil::details *)*v3, *((_QWORD *)v3 + 1));
      v3 += 4;
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    wil::details::WilApi_RecordFeatureUsage(0LL, 0xFEu, 0, 0, v4);
  }
}
