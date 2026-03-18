/*
 * XREFs of wcsstr @ 0x1403E3540
 * Callers:
 *     BcpGetProgressMessages @ 0x1403CABF8 (BcpGetProgressMessages.c)
 *     SmUniqueIdParseProductName @ 0x1405FACB4 (SmUniqueIdParseProductName.c)
 *     SiIsWinPEBoot @ 0x1406BAF60 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x1406BAFD4 (SiGetBootDeviceName.c)
 *     PiGetDeviceRegProperty @ 0x1407741A4 (PiGetDeviceRegProperty.c)
 *     PfSnIsHostingApplication @ 0x1407DC5E4 (PfSnIsHostingApplication.c)
 *     EtwpGenerateFileName @ 0x1407FC710 (EtwpGenerateFileName.c)
 *     BiIsWinPEBoot @ 0x140812540 (BiIsWinPEBoot.c)
 *     IopCheckIfNotNativeDriver @ 0x140933EEC (IopCheckIfNotNativeDriver.c)
 *     PiGetDeviceRegistryProperty @ 0x140943248 (PiGetDeviceRegistryProperty.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140A202A4 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140A212A0 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiGetBiosSystemPartition @ 0x140A22650 (SiGetBiosSystemPartition.c)
 *     SubstringMatch @ 0x140A31A94 (SubstringMatch.c)
 *     PopGetBitlockerKeyLocation @ 0x140A52500 (PopGetBitlockerKeyLocation.c)
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
