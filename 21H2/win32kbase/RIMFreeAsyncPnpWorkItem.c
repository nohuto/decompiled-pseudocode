/*
 * XREFs of RIMFreeAsyncPnpWorkItem @ 0x1C01AA66C
 * Callers:
 *     RIMDeleteAllAsyncPnpWorkNotificationItems @ 0x1C00490B4 (RIMDeleteAllAsyncPnpWorkNotificationItems.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0185330 (RIMOnAsyncPnpWorkNotification.c)
 *     ?RIMQueueAndSignalAsyncPnpWorkItem@@YAXPEAURawInputManagerObject@@PEAU_RIMAsyncPnpWorkItem@@@Z @ 0x1C01A9FF4 (-RIMQueueAndSignalAsyncPnpWorkItem@@YAXPEAURawInputManagerObject@@PEAU_RIMAsyncPnpWorkItem@@@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall RIMFreeAsyncPnpWorkItem(void *a1)
{
  char *v2; // rdx
  char *v3; // rdx
  void *v4; // rcx

  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_RIMVirtPnpQuickRelease__private_reporting,
    30688442LL,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_Vail_logged_traits,
    1,
    3);
  if ( *((_DWORD *)a1 + 4) == 2 )
  {
    v2 = (char *)*((_QWORD *)a1 + 12);
    if ( v2 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v2);
  }
  v3 = (char *)*((_QWORD *)a1 + 6);
  if ( v3 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v3);
  v4 = (void *)*((_QWORD *)a1 + 7);
  if ( v4 )
    ObfDereferenceObject(v4);
  ObfDereferenceObject(*((PVOID *)a1 + 3));
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (char *)a1);
}
