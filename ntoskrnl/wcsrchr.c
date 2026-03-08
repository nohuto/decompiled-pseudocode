/*
 * XREFs of wcsrchr @ 0x1403D5F90
 * Callers:
 *     EtwpGenerateFileName @ 0x14079A7F0 (EtwpGenerateFileName.c)
 *     PiUpdateDriverDBCache @ 0x14079D924 (PiUpdateDriverDBCache.c)
 *     PiLookupInDDBCache @ 0x14079DD70 (PiLookupInDDBCache.c)
 *     PiIsDriverBlocked @ 0x14079DF64 (PiIsDriverBlocked.c)
 *     AslPathSplit @ 0x1407A1568 (AslPathSplit.c)
 *     SdbGetDatabaseMatchEx @ 0x1407A1A40 (SdbGetDatabaseMatchEx.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14082BFD0 (PopBcdSetDefaultResumeObjectElements.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140864F88 (DrvDbGetDriverPackageMappedProperty.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1408766D8 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDqDeleteUserObject @ 0x1409592CC (PiDqDeleteUserObject.c)
 *     SdbGetMergeRedirectPath @ 0x140A4B4A0 (SdbGetMergeRedirectPath.c)
 *     BiTranslateSymbolicLinkFile @ 0x140A5A968 (BiTranslateSymbolicLinkFile.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A5F264 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140A6333C (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x140A67F0C (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A6832C (DrvDbDeleteObjectSubKey.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140B95024 (CmpGetSystemRelativeRegistryHiveFilePath.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsrchr(const wchar_t *Str, wchar_t Ch)
{
  const wchar_t *v2; // r9
  wchar_t *v3; // r8

  v2 = Str;
  v3 = 0LL;
  while ( *Str++ )
    ;
  do
    --Str;
  while ( Str != v2 && *Str != Ch );
  if ( *Str == Ch )
    return (wchar_t *)Str;
  return v3;
}
