/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18000CC94
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000CE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_K@Z @ 0x18001893C (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil.c)
 * Callees:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x180008370 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18000C4F0 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        int a6)
{
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  void (__fastcall *v14)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  void (__fastcall *v15)(__int64 *, void (__fastcall *)(void *), __int64); // rax
  void (__fastcall *v16)(_QWORD, __int64, _QWORD, _QWORD); // rax
  __int64 v17; // rdx
  unsigned int v19; // [rsp+34h] [rbp-44h]
  __int64 v20; // [rsp+48h] [rbp-30h] BYREF

  v10 = wil_details_FeatureReporting_RecordUsageInCache((__int64)&v20, a1, a5, a6);
  v11 = 0;
  v12 = *(_OWORD *)v10;
  v13 = *(_QWORD *)(v10 + 16);
  v19 = HIDWORD(*(_QWORD *)v10);
  if ( g_wil_details_RecordSRUMFeatureUsage && (!a5 || a5 - 100 <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(a2, a5, 1LL);
  if ( (_DWORD)v12 )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      a2,
      (struct wil_details_FeatureReportingCache *)a1);
  if ( DWORD1(v12) )
  {
    v14 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage
      || (v14 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))g_wil_details_apiRecordFeatureUsage) != 0LL )
    {
      v14(a2, DWORD2(v12), v19, 0LL);
    }
  }
  if ( !(_DWORD)v13 && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&stru_18019C2C8);
    if ( !qword_18019C2E8 )
    {
      v15 = (void (__fastcall *)(__int64 *, void (__fastcall *)(void *), __int64))g_wil_details_internalSubscribeFeatureStateChangeNotification;
      qword_18019C2E8 = 0LL;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
        || (v15 = (void (__fastcall *)(__int64 *, void (__fastcall *)(void *), __int64))g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
      {
        v15(&qword_18019C2E8, _lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_, -1LL);
      }
    }
    ReleaseSRWLockExclusive(&stru_18019C2C8);
  }
  if ( a3 )
  {
    v16 = (void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))g_wil_details_internalRecordFeatureUsage;
    v17 = a5;
    LODWORD(v17) = a5 | 0x80000000;
    if ( !a4 )
      v17 = a5;
    if ( g_wil_details_internalRecordFeatureUsage
      || (v16 = (void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))g_wil_details_apiRecordFeatureUsage) != 0LL )
    {
      v16(a2, v17, 0LL, 0LL);
    }
  }
  LOBYTE(v11) = (_DWORD)v13 == 0;
  return v11;
}
