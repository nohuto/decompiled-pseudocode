/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180055DD4
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180055D40 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 * Callees:
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18002D190 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x180051F7C (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1800560E8 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        struct wil_details_FeatureReportingCache *a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  void (__fastcall *v14)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  void (__fastcall *v15)(_QWORD, __int64, _QWORD, _QWORD); // rax
  __int64 v16; // rdx
  unsigned int v18; // [rsp+34h] [rbp-44h]
  __int64 v19; // [rsp+48h] [rbp-30h] BYREF

  v10 = wil_details_FeatureReporting_RecordUsageInCache(&v19, a1, a5, a6);
  v11 = 0;
  v12 = *(_OWORD *)v10;
  v13 = *(_QWORD *)(v10 + 16);
  v18 = HIDWORD(*(_QWORD *)v10);
  if ( g_wil_details_RecordSRUMFeatureUsage && (!a5 || a5 - 100 <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(a2, a5, 1LL);
  if ( (_DWORD)v12 )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      a2,
      a1);
  if ( DWORD1(v12) )
  {
    v14 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage
      || (v14 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))g_wil_details_apiRecordFeatureUsage) != 0LL )
    {
      v14(a2, DWORD2(v12), v18, 0LL);
    }
  }
  if ( !(_DWORD)v13 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
  if ( a3 )
  {
    v15 = (void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))g_wil_details_internalRecordFeatureUsage;
    v16 = a5;
    LODWORD(v16) = a5 | 0x80000000;
    if ( !a4 )
      v16 = a5;
    if ( g_wil_details_internalRecordFeatureUsage
      || (v15 = (void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))g_wil_details_apiRecordFeatureUsage) != 0LL )
    {
      v15(a2, v16, 0LL, 0LL);
    }
  }
  LOBYTE(v11) = (_DWORD)v13 == 0;
  return v11;
}
