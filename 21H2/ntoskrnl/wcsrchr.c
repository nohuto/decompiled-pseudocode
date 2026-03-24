/*
 * XREFs of wcsrchr @ 0x1403D4100
 * Callers:
 *     EtwpGenerateFileName @ 0x1406ABAFC (EtwpGenerateFileName.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14072D04C (_CmDeleteDeviceRegKeyWorker.c)
 *     PiDqDeleteUserObject @ 0x14072D748 (PiDqDeleteUserObject.c)
 *     PiLookupInDDBCache @ 0x14073DBC0 (PiLookupInDDBCache.c)
 *     SdbGetDatabaseMatchEx @ 0x140759A08 (SdbGetDatabaseMatchEx.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14076C27C (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiIsDriverBlocked @ 0x14077E304 (PiIsDriverBlocked.c)
 *     PiUpdateDriverDBCache @ 0x14077E48C (PiUpdateDriverDBCache.c)
 *     AslPathSplit @ 0x14077F6C8 (AslPathSplit.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140782EF4 (PopBcdSetDefaultResumeObjectElements.c)
 *     BiTranslateSymbolicLinkFile @ 0x14096FFCC (BiTranslateSymbolicLinkFile.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140977EBC (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x14097C99C (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x14097CDAC (DrvDbDeleteObjectSubKey.c)
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
