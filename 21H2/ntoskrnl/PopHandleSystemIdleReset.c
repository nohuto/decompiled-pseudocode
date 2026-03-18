/*
 * XREFs of PopHandleSystemIdleReset @ 0x140368FC4
 * Callers:
 *     PopResetIdleTime @ 0x140368F70 (PopResetIdleTime.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x1402D6254 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x1402D62A8 (PopCheckForWork.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 */

__int64 (__fastcall *__fastcall PopHandleSystemIdleReset(
        int a1))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v3; // [rsp+30h] [rbp-18h]

  if ( !PopPlatformAoAc )
    result = wil_details_FeatureReporting_ReportUsageToService(
               (__int64)&Feature_PowerEventProcessorSystemIdle__private_reporting,
               0x16F54A4u,
               0,
               0,
               (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
               1u,
               v3);
  if ( a1 == 2 )
  {
    if ( PopIdleScanInterval )
    {
      _InterlockedOr(&PopPendingSystemIdleResetMask, 4u);
      PopGetPolicyWorker(128);
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))PopCheckForWork();
    }
  }
  return result;
}
