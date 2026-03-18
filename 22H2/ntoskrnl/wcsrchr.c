/*
 * XREFs of wcsrchr @ 0x1403DB4B0
 * Callers:
 *     PiLookupInDDBCache @ 0x140692D24 (PiLookupInDDBCache.c)
 *     PiIsDriverBlocked @ 0x140692F18 (PiIsDriverBlocked.c)
 *     PiUpdateDriverDBCache @ 0x140693190 (PiUpdateDriverDBCache.c)
 *     SdbGetDatabaseMatchEx @ 0x1407571D0 (SdbGetDatabaseMatchEx.c)
 *     AslPathSplit @ 0x1407590D0 (AslPathSplit.c)
 *     EtwpGenerateFileName @ 0x1407E9820 (EtwpGenerateFileName.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140804DD8 (PopBcdSetDefaultResumeObjectElements.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1408769B8 (DrvDbGetDriverPackageMappedProperty.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140879CB4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDqDeleteUserObject @ 0x14095C2EC (PiDqDeleteUserObject.c)
 *     SdbGetMergeRedirectPath @ 0x140A4E170 (SdbGetMergeRedirectPath.c)
 *     BiTranslateSymbolicLinkFile @ 0x140A5D2E8 (BiTranslateSymbolicLinkFile.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A61F64 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140A6603C (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x140A6AC0C (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A6B02C (DrvDbDeleteObjectSubKey.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140B99234 (CmpGetSystemRelativeRegistryHiveFilePath.c)
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
