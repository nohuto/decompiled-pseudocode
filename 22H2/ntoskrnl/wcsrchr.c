/*
 * XREFs of wcsrchr @ 0x1403D3A00
 * Callers:
 *     EtwpGenerateFileName @ 0x14068EAAC (EtwpGenerateFileName.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14072DF0C (_CmDeleteDeviceRegKeyWorker.c)
 *     PiDqDeleteUserObject @ 0x14072E608 (PiDqDeleteUserObject.c)
 *     PiLookupInDDBCache @ 0x14073A060 (PiLookupInDDBCache.c)
 *     SdbGetDatabaseMatchEx @ 0x1407591F8 (SdbGetDatabaseMatchEx.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14076BA48 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiIsDriverBlocked @ 0x14077E204 (PiIsDriverBlocked.c)
 *     PiUpdateDriverDBCache @ 0x14077E38C (PiUpdateDriverDBCache.c)
 *     AslPathSplit @ 0x14077F5C8 (AslPathSplit.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140782DF4 (PopBcdSetDefaultResumeObjectElements.c)
 *     BiTranslateSymbolicLinkFile @ 0x14097001C (BiTranslateSymbolicLinkFile.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140977F0C (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x14097C9EC (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x14097CDFC (DrvDbDeleteObjectSubKey.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140A8E850 (CmpGetSystemRelativeRegistryHiveFilePath.c)
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
