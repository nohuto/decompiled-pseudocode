/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x1C00D3450
 * Callers:
 *     wil_details_IsEnabledFallback @ 0x1C0165FF0 (wil_details_IsEnabledFallback.c)
 *     Feature_BrokeredDisplays_RotMgr__private_ReportDeviceUsage @ 0x1C0166594 (Feature_BrokeredDisplays_RotMgr__private_ReportDeviceUsage.c)
 *     Feature_AtomicCheckFailure__private_ReportDeviceUsage @ 0x1C016667C (Feature_AtomicCheckFailure__private_ReportDeviceUsage.c)
 *     Feature_PerProcessSystemDpi__private_ReportDeviceUsage @ 0x1C01666E0 (Feature_PerProcessSystemDpi__private_ReportDeviceUsage.c)
 *     Feature_DWMTouchTargeting__private_ReportDeviceUsage @ 0x1C0166D1C (Feature_DWMTouchTargeting__private_ReportDeviceUsage.c)
 *     Feature_PenTailDockEvents__private_ReportDeviceUsage @ 0x1C0166F0C (Feature_PenTailDockEvents__private_ReportDeviceUsage.c)
 *     Feature_DeliverViaSendMessage__private_ReportDeviceUsage @ 0x1C01671FC (Feature_DeliverViaSendMessage__private_ReportDeviceUsage.c)
 *     Feature_QuickLaunchInvocation__private_ReportDeviceUsage @ 0x1C0167EC8 (Feature_QuickLaunchInvocation__private_ReportDeviceUsage.c)
 *     Feature_BrokeredDisplays_ConsoleSessions__private_ReportDeviceUsage @ 0x1C01689EC (Feature_BrokeredDisplays_ConsoleSessions__private_ReportDeviceUsage.c)
 *     Feature_DesktopDisplayBroker__private_ReportDeviceUsage @ 0x1C0168A50 (Feature_DesktopDisplayBroker__private_ReportDeviceUsage.c)
 *     Feature_InkProcessor__private_ReportDeviceUsage @ 0x1C0169828 (Feature_InkProcessor__private_ReportDeviceUsage.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C00D3570 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        int a3))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // r8
  int v7; // r8d
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v9; // [rsp+70h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2 & 1;
  v5 = (unsigned __int8)a3;
  switch ( a3 )
  {
    case 0:
      goto LABEL_12;
    case 1:
      v6 = 4 * (unsigned int)!(a2 & 1);
      break;
    case 2:
      v6 = 4 * (unsigned int)!(a2 & 1) + 1;
      break;
    case 3:
      v6 = 4 * (unsigned int)!(a2 & 1) + 2;
      break;
    case 4:
      v6 = 4 * (unsigned int)!(a2 & 1) + 3;
      break;
    case 5:
      v6 = 2 * (unsigned int)!(a2 & 1) + 8;
      break;
    case 6:
      v6 = 2 * (unsigned int)!(a2 & 1) + 9;
      break;
    default:
      LOBYTE(v5) = a3 - 100;
      if ( (unsigned __int8)(a3 - 100) > 0x31u )
      {
LABEL_12:
        v6 = 255LL;
      }
      else
      {
        v7 = 100;
        if ( (a2 & 1) == 0 )
          v7 = 150;
        v6 = (unsigned int)(unsigned __int8)v5 + v7;
      }
      break;
  }
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     a1,
                                                                                                     a2,
                                                                                                     v6,
                                                                                                     v5);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16), 0LL, v4, &v9, 0LL, 0, 1LL);
  }
  return result;
}
