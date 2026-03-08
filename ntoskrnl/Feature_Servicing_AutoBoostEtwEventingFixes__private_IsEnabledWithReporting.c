/*
 * XREFs of Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting @ 0x14040C880
 * Callers:
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14045EAC6 (EtwTraceAutoBoostEntryExhaustion.c)
 *     EtwTraceAutoBoostSetFloor @ 0x14045EB78 (EtwTraceAutoBoostSetFloor.c)
 * Callees:
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceOpportunity @ 0x14040C764 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceOpportunity.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceUsage @ 0x14040C79C (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceUsage.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReporting @ 0x14040C7F0 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReporting.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting @ 0x14040C828 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting.c)
 */

__int64 __fastcall Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting(int a1)
{
  switch ( a1 )
  {
    case 0:
      return Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReporting();
    case 3:
      return Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceUsage();
    case 4:
      return Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceOpportunity();
  }
  return Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting(a1);
}
