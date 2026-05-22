/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18003F0A4
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18003F014 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 * Callees:
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x1800121A0 (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18003EF34 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x18003F3A8 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180068188 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        struct wil_details_FeatureReportingCache *a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5)
{
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  unsigned int v13; // edx
  const char *v15; // [rsp+20h] [rbp-58h]
  unsigned int v16; // [rsp+34h] [rbp-44h]
  __int64 v17; // [rsp+48h] [rbp-30h] BYREF

  v9 = wil_details_FeatureReporting_RecordUsageInCache(&v17, a1, a5);
  v10 = 0;
  v11 = *(_OWORD *)v9;
  v12 = *(_QWORD *)(v9 + 16);
  v16 = HIDWORD(*(_QWORD *)v9);
  if ( g_wil_details_RecordSRUMFeatureUsage && (!a5 || a5 - 100 <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(a2, a5, 1LL);
  if ( (_DWORD)v11 )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(&wil::details::g_enabledStateManager, a2, a1);
  if ( DWORD1(v11) )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a2, DWORD2(v11), v16, 0, v15);
  if ( !(_DWORD)v12 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
  if ( a3 )
  {
    v13 = a5 | 0x80000000;
    if ( !a4 )
      v13 = a5;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a2, v13, 0, 0, v15);
  }
  LOBYTE(v10) = (_DWORD)v12 == 0;
  return v10;
}
