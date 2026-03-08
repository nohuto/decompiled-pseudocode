/*
 * XREFs of RtlUnalignedStringCchLengthW @ 0x140246434
 * Callers:
 *     _RegRtlCreateTreeTransacted @ 0x140687B40 (_RegRtlCreateTreeTransacted.c)
 *     _PnpSetPropertyWorker @ 0x140687D54 (_PnpSetPropertyWorker.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA2A4 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _PnpGetGenericStoreProperty @ 0x1406D13D0 (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenPropertiesKey @ 0x1406D1610 (_PnpOpenPropertiesKey.c)
 *     _CmValidateDeviceName @ 0x1406D3DF0 (_CmValidateDeviceName.c)
 *     _PnpParseIndirectResourceString @ 0x140751C48 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x14077B4AC (_PnpParseIndirectInfString.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140864664 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpDeletePropertyWorker @ 0x14086D5EC (_PnpDeletePropertyWorker.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140874D18 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _RegRtlDeletePathInternal @ 0x140A67F0C (_RegRtlDeletePathInternal.c)
 *     DrvDbValidateDeviceIdName @ 0x140A6AB2C (DrvDbValidateDeviceIdName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnalignedStringCchLengthW(STRSAFE_PCUNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t v3; // r9
  NTSTATUS result; // eax

  if ( !psz )
  {
    result = -1073741811;
LABEL_12:
    if ( pcchLength )
      *pcchLength = 0LL;
    return result;
  }
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
  if ( !v3 )
    goto LABEL_12;
  return result;
}
