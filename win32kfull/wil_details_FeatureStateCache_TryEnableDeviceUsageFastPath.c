/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C012CDB8
 * Callers:
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C010AD6C (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     wil_details_IsEnabledFallback @ 0x1C012CF68 (wil_details_IsEnabledFallback.c)
 *     Feature_StrictIAMForegroundCheck__private_ReportDeviceUsage @ 0x1C012D160 (Feature_StrictIAMForegroundCheck__private_ReportDeviceUsage.c)
 *     Feature_AtomicCheckFailure__private_ReportDeviceUsage @ 0x1C012D370 (Feature_AtomicCheckFailure__private_ReportDeviceUsage.c)
 *     Feature_DeliverDespiteMessageFilter__private_ReportDeviceUsage @ 0x1C012D614 (Feature_DeliverDespiteMessageFilter__private_ReportDeviceUsage.c)
 *     Feature_QuickLaunchInvocation__private_ReportDeviceUsage @ 0x1C012E1C8 (Feature_QuickLaunchInvocation__private_ReportDeviceUsage.c)
 *     Feature_DesktopDisplayBroker__private_ReportDeviceUsage @ 0x1C012E22C (Feature_DesktopDisplayBroker__private_ReportDeviceUsage.c)
 *     Feature_StrictParentBasedAllowForegroundActivate__private_ReportDeviceUsage @ 0x1C012E440 (Feature_StrictParentBasedAllowForegroundActivate__private_ReportDeviceUsage.c)
 *     Feature_ReadClipboardEvent__private_ReportDeviceUsage @ 0x1C012E950 (Feature_ReadClipboardEvent__private_ReportDeviceUsage.c)
 *     Feature_UseSharedCreateDestroyWinEventHooks__private_ReportDeviceUsage @ 0x1C012E9B4 (Feature_UseSharedCreateDestroyWinEventHooks__private_ReportDeviceUsage.c)
 *     Feature_UseSharedCreateDestroyWindowsHooks__private_ReportDeviceUsage @ 0x1C012EA18 (Feature_UseSharedCreateDestroyWindowsHooks__private_ReportDeviceUsage.c)
 *     Feature_UseSharedNtUserMessageCall__private_ReportDeviceUsage @ 0x1C012EA7C (Feature_UseSharedNtUserMessageCall__private_ReportDeviceUsage.c)
 *     Feature_UserCritOpt__private_ReportDeviceUsage @ 0x1C012EAE0 (Feature_UserCritOpt__private_ReportDeviceUsage.c)
 *     Feature_BoostOnDragSize__private_ReportDeviceUsage @ 0x1C012EB98 (Feature_BoostOnDragSize__private_ReportDeviceUsage.c)
 *     Feature_Emrbspi__private_ReportDeviceUsage @ 0x1C012F2D4 (Feature_Emrbspi__private_ReportDeviceUsage.c)
 *     Feature_Erpsrbspi__private_ReportDeviceUsage @ 0x1C012F338 (Feature_Erpsrbspi__private_ReportDeviceUsage.c)
 *     Feature_InkProcessor__private_ReportDeviceUsage @ 0x1C012F574 (Feature_InkProcessor__private_ReportDeviceUsage.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(unsigned __int8 a1, int a2, __int64 a3)
{
  volatile signed __int32 *v3; // r9
  int v4; // edx
  unsigned int v5; // r10d
  signed __int32 v6; // eax
  signed __int32 v7; // ett

  v3 = *(volatile signed __int32 **)a3;
  v4 = a2 - 3;
  if ( v4 )
  {
    if ( v4 != 1 )
      return;
    v5 = 32;
  }
  else
  {
    v5 = 16;
  }
  if ( *(_BYTE *)(a3 + 30) || *(_BYTE *)(a3 + 29) )
  {
    _InterlockedOr(v3, v5);
  }
  else
  {
    v6 = *v3;
    do
    {
      if ( (v6 & 2) == 0 )
        break;
      if ( ((a1 ^ (unsigned __int8)v6) & 1) != 0 )
        break;
      v7 = v6;
      v6 = _InterlockedCompareExchange(v3, v5 | v6, v6);
    }
    while ( v7 != v6 );
  }
}
