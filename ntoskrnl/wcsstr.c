/*
 * XREFs of wcsstr @ 0x1403D6020
 * Callers:
 *     BcpGetProgressMessages @ 0x1403811E0 (BcpGetProgressMessages.c)
 *     SmUniqueIdParseProductName @ 0x1405C83D8 (SmUniqueIdParseProductName.c)
 *     PiGetDeviceRegProperty @ 0x1406C6230 (PiGetDeviceRegProperty.c)
 *     SiIsWinPEBoot @ 0x14076E3F0 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x14076E464 (SiGetBootDeviceName.c)
 *     EtwpGenerateFileName @ 0x14079A7F0 (EtwpGenerateFileName.c)
 *     PfSnIsHostingApplication @ 0x1407E4654 (PfSnIsHostingApplication.c)
 *     BiIsWinPEBoot @ 0x14082C790 (BiIsWinPEBoot.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x14082F354 (BiGetObjectReferenceFromEfiEntry.c)
 *     IopCheckIfNotNativeDriver @ 0x140941674 (IopCheckIfNotNativeDriver.c)
 *     PiGetDeviceRegistryProperty @ 0x140951DA8 (PiGetDeviceRegistryProperty.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140A5C414 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiGetBiosSystemPartition @ 0x140A5D7C4 (SiGetBiosSystemPartition.c)
 *     SubstringMatch @ 0x140A6C2AC (SubstringMatch.c)
 *     PopGetBitlockerKeyLocation @ 0x140A9D6A0 (PopGetBitlockerKeyLocation.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsstr(const wchar_t *Str, const wchar_t *SubStr)
{
  wchar_t *v3; // r8
  signed __int64 v5; // r9
  const wchar_t *v6; // rdx

  v3 = (wchar_t *)Str;
  if ( !*SubStr )
    return (wchar_t *)Str;
  if ( *Str )
  {
    v5 = (char *)Str - (char *)SubStr;
    while ( 2 )
    {
      v6 = SubStr;
      do
      {
        if ( !*v6 )
          return v3;
        if ( *(const wchar_t *)((char *)v6 + v5) != *v6 )
          break;
        ++v6;
      }
      while ( *(const wchar_t *)((char *)v6 + v5) );
      if ( !*v6 )
        return v3;
      ++v3;
      v5 += 2LL;
      if ( *v3 )
        continue;
      break;
    }
  }
  return 0LL;
}
