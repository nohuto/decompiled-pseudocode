/*
 * XREFs of Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage @ 0x1C00DC8F8
 * Callers:
 *     xxxInitProcessInfo @ 0x1C0070EFC (xxxInitProcessInfo.c)
 *     _RegisterLogonProcess @ 0x1C008CF70 (_RegisterLogonProcess.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C008D904 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     ?ShutdownImWorker@@YAJXZ @ 0x1C00D4710 (-ShutdownImWorker@@YAJXZ.c)
 *     ?ProcessTranslatedChar@@YAJPEAU_CHARHOOKSTRUCT@@@Z @ 0x1C0155770 (-ProcessTranslatedChar@@YAJPEAU_CHARHOOKSTRUCT@@@Z.c)
 * Callees:
 *     Feature_WebThreatDefenseToggle__private_IsEnabledFallback @ 0x1C00DC930 (Feature_WebThreatDefenseToggle__private_IsEnabledFallback.c)
 */

__int64 Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage()
{
  if ( (Feature_WebThreatDefenseToggle__private_featureState & 0x10) != 0 )
    return Feature_WebThreatDefenseToggle__private_featureState & 1;
  else
    return Feature_WebThreatDefenseToggle__private_IsEnabledFallback(
             (unsigned int)Feature_WebThreatDefenseToggle__private_featureState,
             3LL);
}
