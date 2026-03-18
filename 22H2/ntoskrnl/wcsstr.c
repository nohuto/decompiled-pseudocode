/*
 * XREFs of wcsstr @ 0x1403DB540
 * Callers:
 *     BcpGetProgressMessages @ 0x140383E30 (BcpGetProgressMessages.c)
 *     SmUniqueIdParseProductName @ 0x1405CA888 (SmUniqueIdParseProductName.c)
 *     PiGetDeviceRegProperty @ 0x140793418 (PiGetDeviceRegProperty.c)
 *     SiIsWinPEBoot @ 0x1407C0020 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x1407C0094 (SiGetBootDeviceName.c)
 *     PfSnIsHostingApplication @ 0x1407C3168 (PfSnIsHostingApplication.c)
 *     EtwpGenerateFileName @ 0x1407E9820 (EtwpGenerateFileName.c)
 *     BiIsWinPEBoot @ 0x140805598 (BiIsWinPEBoot.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1408081F8 (BiGetObjectReferenceFromEfiEntry.c)
 *     IopCheckIfNotNativeDriver @ 0x140944694 (IopCheckIfNotNativeDriver.c)
 *     PiGetDeviceRegistryProperty @ 0x140954DC8 (PiGetDeviceRegistryProperty.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140A5F114 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiGetBiosSystemPartition @ 0x140A604C4 (SiGetBiosSystemPartition.c)
 *     SubstringMatch @ 0x140A6EFAC (SubstringMatch.c)
 *     PopGetBitlockerKeyLocation @ 0x140AA0858 (PopGetBitlockerKeyLocation.c)
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
