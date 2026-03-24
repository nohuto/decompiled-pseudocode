/*
 * XREFs of RtlUnalignedStringCchLengthW @ 0x14032EA54
 * Callers:
 *     _PnpParseIndirectResourceString @ 0x140663774 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x14069425C (_PnpParseIndirectInfString.c)
 *     _PnpGetGenericStoreProperty @ 0x1406B0FBC (_PnpGetGenericStoreProperty.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406B558C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406B7124 (_RegRtlCreateTreeTransacted.c)
 *     _CmValidateDeviceName @ 0x1406BB050 (_CmValidateDeviceName.c)
 *     _PnpOpenPropertiesKey @ 0x1406BE2A4 (_PnpOpenPropertiesKey.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140736C30 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _PnpSetPropertyWorker @ 0x140742C80 (_PnpSetPropertyWorker.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1407675A0 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpDeletePropertyWorker @ 0x14076C76C (_PnpDeletePropertyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x14097C9EC (_RegRtlDeletePathInternal.c)
 *     DrvDbValidateDeviceIdName @ 0x14097E724 (DrvDbValidateDeviceIdName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnalignedStringCchLengthW(STRSAFE_PCUNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t v3; // r9
  NTSTATUS result; // eax

  if ( psz )
  {
    v3 = cchMax;
    do
    {
      if ( !*psz )
        break;
      ++psz;
      --v3;
    }
    while ( v3 );
    result = v3 == 0 ? 0xC000000D : 0;
    if ( pcchLength )
    {
      if ( v3 )
        *pcchLength = cchMax - v3;
      else
        *pcchLength = 0LL;
    }
  }
  else
  {
    result = -1073741811;
  }
  if ( result < 0 )
  {
    if ( pcchLength )
      *pcchLength = 0LL;
  }
  return result;
}
