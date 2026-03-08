/*
 * XREFs of Feature_AnimateWorkAreaChanges__private_IsEnabledDeviceUsage @ 0x1C012F280
 * Callers:
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x1C00F954C (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 *     ?xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00FB37C (-xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 *     ?xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ @ 0x1C00FC970 (-xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ.c)
 * Callees:
 *     Feature_AnimateWorkAreaChanges__private_IsEnabledFallback @ 0x1C012F2B8 (Feature_AnimateWorkAreaChanges__private_IsEnabledFallback.c)
 */

__int64 Feature_AnimateWorkAreaChanges__private_IsEnabledDeviceUsage()
{
  if ( (Feature_AnimateWorkAreaChanges__private_featureState & 0x10) != 0 )
    return Feature_AnimateWorkAreaChanges__private_featureState & 1;
  else
    return Feature_AnimateWorkAreaChanges__private_IsEnabledFallback(
             (unsigned int)Feature_AnimateWorkAreaChanges__private_featureState,
             3LL);
}
