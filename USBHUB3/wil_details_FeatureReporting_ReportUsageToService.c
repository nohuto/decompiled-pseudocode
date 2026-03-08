/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x1C000C97C
 * Callers:
 *     wil_details_IsEnabledFallback @ 0x1C000CD00 (wil_details_IsEnabledFallback.c)
 *     HUBPDO_HandlePLDRRecovery @ 0x1C001A06C (HUBPDO_HandlePLDRRecovery.c)
 *     HUBPDO_EvtDeviceCleanup @ 0x1C001A4C0 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBFDO_IoctlTestPortPLDRRecovery @ 0x1C007BFE4 (HUBFDO_IoctlTestPortPLDRRecovery.c)
 *     HUBPDO_EvtWorkItemDripsWatchDogCallback @ 0x1C00803E0 (HUBPDO_EvtWorkItemDripsWatchDogCallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C000C768 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        int a3))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  unsigned int v3; // ebx
  __int64 v5; // r8
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v7; // [rsp+70h] [rbp+18h] BYREF

  v7 = a3;
  v3 = a2 & 1;
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        v5 = 4 * (unsigned int)!(a2 & 1);
        goto LABEL_17;
      case 2:
        v5 = 4 * (unsigned int)!(a2 & 1) + 1;
        goto LABEL_17;
      case 3:
        v5 = 4 * (unsigned int)!(a2 & 1) + 2;
        goto LABEL_17;
      case 4:
        v5 = 4 * (unsigned int)!(a2 & 1) + 3;
        goto LABEL_17;
      case 5:
        v5 = 2 * (unsigned int)!(a2 & 1) + 8;
        goto LABEL_17;
      case 6:
        v5 = 2 * (unsigned int)!(a2 & 1) + 9;
        goto LABEL_17;
    }
    if ( (unsigned __int8)(a3 - 100) <= 0x31u )
    {
      v5 = (unsigned __int8)(a3 - 100) + (v3 != 0 ? 100 : 150);
      goto LABEL_17;
    }
  }
  v5 = 255LL;
LABEL_17:
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     a1,
                                                                                                     a2,
                                                                                                     v5);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16), 0LL, v3, &v7, 0LL, 0, 1LL);
  }
  return result;
}
