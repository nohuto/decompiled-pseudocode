/*
 * XREFs of wcsrchr @ 0x1403D4270
 * Callers:
 *     EtwpGenerateFileName @ 0x14060A1EC (EtwpGenerateFileName.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14072D4FC (_CmDeleteDeviceRegKeyWorker.c)
 *     PiDqDeleteUserObject @ 0x14072DBF8 (PiDqDeleteUserObject.c)
 *     PiLookupInDDBCache @ 0x14073DD80 (PiLookupInDDBCache.c)
 *     SdbGetDatabaseMatchEx @ 0x140759BC8 (SdbGetDatabaseMatchEx.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14076C43C (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiIsDriverBlocked @ 0x14077E4C4 (PiIsDriverBlocked.c)
 *     PiUpdateDriverDBCache @ 0x14077E64C (PiUpdateDriverDBCache.c)
 *     AslPathSplit @ 0x14077F888 (AslPathSplit.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x1407830B4 (PopBcdSetDefaultResumeObjectElements.c)
 *     BiTranslateSymbolicLinkFile @ 0x1409701AC (BiTranslateSymbolicLinkFile.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14097809C (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x14097CB7C (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x14097CF8C (DrvDbDeleteObjectSubKey.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140A8F850 (CmpGetSystemRelativeRegistryHiveFilePath.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsrchr(const wchar_t *Str, wchar_t Ch)
{
  const wchar_t *v2; // r9
  wchar_t *v3; // r8
  __int16 v5; // ax

  v2 = Str;
  v3 = 0LL;
  while ( *Str++ )
    ;
  do
    v5 = *--Str;
  while ( Str != v2 && v5 != Ch );
  if ( v5 == Ch )
    return (wchar_t *)Str;
  return v3;
}
