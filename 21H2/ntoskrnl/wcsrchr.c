/*
 * XREFs of wcsrchr @ 0x1403E34B0
 * Callers:
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1407455A8 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     SdbGetDatabaseMatchEx @ 0x14075B6A4 (SdbGetDatabaseMatchEx.c)
 *     AslPathSplit @ 0x14075CF70 (AslPathSplit.c)
 *     PiIsDriverBlocked @ 0x14075E568 (PiIsDriverBlocked.c)
 *     PiUpdateDriverDBCache @ 0x14075E74C (PiUpdateDriverDBCache.c)
 *     PiLookupInDDBCache @ 0x14075EB84 (PiLookupInDDBCache.c)
 *     EtwpGenerateFileName @ 0x1407FC710 (EtwpGenerateFileName.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140800BAC (PopBcdSetDefaultResumeObjectElements.c)
 *     PiDqDeleteUserObject @ 0x14094A3E4 (PiDqDeleteUserObject.c)
 *     BiTranslateSymbolicLinkFile @ 0x140A1DF34 (BiTranslateSymbolicLinkFile.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A24104 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140A281F8 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x140A2D760 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A2DB88 (DrvDbDeleteObjectSubKey.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140B4DE2C (CmpGetSystemRelativeRegistryHiveFilePath.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsrchr(const wchar_t *Str, wchar_t Ch)
{
  const wchar_t *v2; // r8
  __int16 v4; // ax

  v2 = Str;
  while ( *Str++ )
    ;
  while ( 1 )
  {
    v4 = *--Str;
    if ( Str == v2 )
      break;
    if ( v4 == Ch )
      return (wchar_t *)Str;
  }
  if ( v4 == Ch )
    return (wchar_t *)Str;
  return 0LL;
}
