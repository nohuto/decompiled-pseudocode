/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x180039364
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800392F4 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 * Callees:
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x1800AF8F4 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x1800AFA24 (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x180110FFC (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180197308 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        struct wil_details_FeatureReportingCache *a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v12; // rax
  unsigned int v13; // ebp
  __int128 v14; // xmm1
  __int64 v15; // xmm0_8
  __int64 v16; // r8
  unsigned int v17; // edx
  const char *v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+48h] [rbp-30h] BYREF

  v12 = wil_details_FeatureReporting_RecordUsageInCache(&v20, a1, a5);
  v13 = 1;
  v14 = *(_OWORD *)v12;
  v15 = *(_QWORD *)(v12 + 16);
  if ( g_wil_details_RecordSRUMFeatureUsage && (!a5 || a5 - 100 <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(a2, a5, 1LL);
  if ( (_DWORD)v14 )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(&wil::details::g_enabledStateManager, a2, a1);
  v16 = DWORD1(v14);
  if ( DWORD1(v14) )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a2, DWORD2(v14), DWORD1(v14), 0, v19);
  if ( !(_DWORD)v15 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager,
      (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
  if ( a3 )
  {
    v17 = a5 | 0x80000000;
    if ( !a4 )
      v17 = a5;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a2, v17, 0, 0, v19);
  }
  if ( (_DWORD)v15 )
  {
    return 0;
  }
  else if ( g_wil_details_realtimeFeatureUsageHook )
  {
    LOBYTE(v16) = a8;
    g_wil_details_realtimeFeatureUsageHook(a2, a5, v16);
  }
  return v13;
}
