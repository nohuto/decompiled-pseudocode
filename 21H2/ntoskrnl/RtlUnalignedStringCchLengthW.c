/*
 * XREFs of RtlUnalignedStringCchLengthW @ 0x1402659E4
 * Callers:
 *     _PnpGetGenericStoreProperty @ 0x1406381DC (_PnpGetGenericStoreProperty.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14063C7AC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _RegRtlCreateTreeTransacted @ 0x14063E344 (_RegRtlCreateTreeTransacted.c)
 *     _CmValidateDeviceName @ 0x140642270 (_CmValidateDeviceName.c)
 *     _PnpOpenPropertiesKey @ 0x1406454C4 (_PnpOpenPropertiesKey.c)
 *     _PnpParseIndirectResourceString @ 0x140684510 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x1406B109C (_PnpParseIndirectInfString.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14073A788 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _PnpSetPropertyWorker @ 0x1407467E0 (_PnpSetPropertyWorker.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140767F80 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpDeletePropertyWorker @ 0x14076CF9C (_PnpDeletePropertyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x14097C99C (_RegRtlDeletePathInternal.c)
 *     DrvDbValidateDeviceIdName @ 0x14097E6D4 (DrvDbValidateDeviceIdName.c)
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
