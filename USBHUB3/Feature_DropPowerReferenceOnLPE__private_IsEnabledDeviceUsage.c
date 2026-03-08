/*
 * XREFs of Feature_DropPowerReferenceOnLPE__private_IsEnabledDeviceUsage @ 0x1C000CE58
 * Callers:
 *     HUBFDO_EvtDeviceD0Entry @ 0x1C000D350 (HUBFDO_EvtDeviceD0Entry.c)
 *     HUBFDO_EvtDeviceCleanupCallback @ 0x1C000DB80 (HUBFDO_EvtDeviceCleanupCallback.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0078890 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     Feature_DropPowerReferenceOnLPE__private_IsEnabledFallback @ 0x1C000CE3C (Feature_DropPowerReferenceOnLPE__private_IsEnabledFallback.c)
 */

__int64 Feature_DropPowerReferenceOnLPE__private_IsEnabledDeviceUsage()
{
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
    return (__int64)WPP_MAIN_CB.Dpc.DpcData & 1;
  else
    return Feature_DropPowerReferenceOnLPE__private_IsEnabledFallback(LODWORD(WPP_MAIN_CB.Dpc.DpcData), 3u);
}
