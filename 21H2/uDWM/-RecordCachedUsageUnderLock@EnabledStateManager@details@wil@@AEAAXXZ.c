/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18002F548
 * Callers:
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x18002F4EC (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ?destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18005390C (-destroy@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXX.c)
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x18007E0F0 (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     wil_details_RecordCachedUsage @ 0x180055388 (wil_details_RecordCachedUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(wil::details::EnabledStateManager *this)
{
  unsigned int *v1; // rsi
  unsigned int *v3; // rbx
  void (__fastcall *v4)(_QWORD, __int64, _QWORD, _QWORD); // rax

  v1 = (unsigned int *)*((_QWORD *)this + 7);
  v3 = (unsigned int *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)((char *)v1 - (char *)v3) >= 0x10 )
  {
    while ( v3 != v1 )
    {
      wil_details_RecordCachedUsage(*v3, *((_QWORD *)v3 + 1));
      v3 += 4;
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    v4 = (void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage
      || (v4 = (void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))g_wil_details_apiRecordFeatureUsage) != 0LL )
    {
      v4(0LL, 254LL, 0LL, 0LL);
    }
  }
}
