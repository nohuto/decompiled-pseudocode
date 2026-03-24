/*
 * XREFs of wcsstr @ 0x1403D3A90
 * Callers:
 *     BcpGetProgressMessages @ 0x1403BC3DC (BcpGetProgressMessages.c)
 *     SmUniqueIdParseProductName @ 0x14059D1C0 (SmUniqueIdParseProductName.c)
 *     PfSnIsHostingApplication @ 0x140630DEC (PfSnIsHostingApplication.c)
 *     SiIsWinPEBoot @ 0x140687A00 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x140687A74 (SiGetBootDeviceName.c)
 *     EtwpGenerateFileName @ 0x14068EAAC (EtwpGenerateFileName.c)
 *     PiGetDeviceRegProperty @ 0x1406B8FC8 (PiGetDeviceRegProperty.c)
 *     SiGetBiosSystemPartition @ 0x14077AAD4 (SiGetBiosSystemPartition.c)
 *     BiIsWinPEBoot @ 0x140782CC4 (BiIsWinPEBoot.c)
 *     IopCheckIfNotNativeDriver @ 0x140891340 (IopCheckIfNotNativeDriver.c)
 *     PiGetDeviceRegistryProperty @ 0x14089E568 (PiGetDeviceRegistryProperty.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140972388 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140973384 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SubstringMatch @ 0x14097FE44 (SubstringMatch.c)
 *     PopGetBitlockerKeyLocation @ 0x140996D20 (PopGetBitlockerKeyLocation.c)
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
