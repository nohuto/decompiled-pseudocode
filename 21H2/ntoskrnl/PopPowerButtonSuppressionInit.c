/*
 * XREFs of PopPowerButtonSuppressionInit @ 0x140B310D4
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     PopReadErrataDeviceAllowedForPowerButtonSuppression @ 0x140B5323C (PopReadErrataDeviceAllowedForPowerButtonSuppression.c)
 */

__int64 (__fastcall *PopPowerButtonSuppressionInit())(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v1; // [rsp+30h] [rbp-18h]

  PopPowerButtonSuppression = 0LL;
  qword_140C20B48 = 0LL;
  *(__int128 *)((char *)&xmmword_140C20B50 + 8) = 0LL;
  xmmword_140C20B50 = 0LL;
  *(_QWORD *)&xmmword_140C20B50 = 0LL;
  if ( PopPlatformAoAc )
  {
    PopReadErrataDeviceAllowedForPowerButtonSuppression();
    result = wil_details_FeatureReporting_ReportUsageToService(
               (__int64)&Feature_PowerButtonSuppression__private_reporting,
               0x135B67Bu,
               0,
               0,
               (__int64)&Feature_LiveDumpOnAppxAllUserStoreAccessDenied_logged_traits,
               0,
               v1);
    LOBYTE(PopPowerButtonSuppression) = 0;
  }
  return result;
}
