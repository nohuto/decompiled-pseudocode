/*
 * XREFs of wcsstr @ 0x1403D4300
 * Callers:
 *     BcpGetProgressMessages @ 0x1403BCBAC (BcpGetProgressMessages.c)
 *     SmUniqueIdParseProductName @ 0x14059D4B0 (SmUniqueIdParseProductName.c)
 *     SiIsWinPEBoot @ 0x140602560 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x1406025D4 (SiGetBootDeviceName.c)
 *     EtwpGenerateFileName @ 0x14060A1EC (EtwpGenerateFileName.c)
 *     PiGetDeviceRegProperty @ 0x140634FF8 (PiGetDeviceRegProperty.c)
 *     PfSnIsHostingApplication @ 0x140679E60 (PfSnIsHostingApplication.c)
 *     SiGetBiosSystemPartition @ 0x14077AD94 (SiGetBiosSystemPartition.c)
 *     BiIsWinPEBoot @ 0x140782F84 (BiIsWinPEBoot.c)
 *     IopCheckIfNotNativeDriver @ 0x140891450 (IopCheckIfNotNativeDriver.c)
 *     PiGetDeviceRegistryProperty @ 0x14089E678 (PiGetDeviceRegistryProperty.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140972518 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140973514 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SubstringMatch @ 0x14097FFD4 (SubstringMatch.c)
 *     PopGetBitlockerKeyLocation @ 0x140997D30 (PopGetBitlockerKeyLocation.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsstr(const wchar_t *Str, const wchar_t *SubStr)
{
  wchar_t *v3; // r8
  wchar_t v5; // ax
  signed __int64 i; // r9
  const wchar_t *v7; // rdx

  v3 = (wchar_t *)Str;
  if ( !*SubStr )
    return (wchar_t *)Str;
  v5 = *Str;
  if ( !*Str )
    return 0LL;
  for ( i = (char *)Str - (char *)SubStr; ; i += 2LL )
  {
    v7 = SubStr;
    if ( v5 )
      break;
LABEL_9:
    if ( !*v7 )
      return v3;
    v5 = *++v3;
    if ( !*v3 )
      return 0LL;
  }
  while ( *v7 )
  {
    if ( *(const wchar_t *)((char *)v7 + i) == *v7 )
    {
      if ( *(const wchar_t *)((char *)++v7 + i) )
        continue;
    }
    goto LABEL_9;
  }
  return v3;
}
