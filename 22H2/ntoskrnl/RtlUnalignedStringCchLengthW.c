/*
 * XREFs of RtlUnalignedStringCchLengthW @ 0x14022B68C
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA46C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _PnpGetGenericStoreProperty @ 0x1406CDAB0 (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenPropertiesKey @ 0x1406CDCF0 (_PnpOpenPropertiesKey.c)
 *     _CmValidateDeviceName @ 0x1406CE870 (_CmValidateDeviceName.c)
 *     _RegRtlCreateTreeTransacted @ 0x140797F40 (_RegRtlCreateTreeTransacted.c)
 *     _PnpSetPropertyWorker @ 0x140798154 (_PnpSetPropertyWorker.c)
 *     _PnpParseIndirectResourceString @ 0x14079E934 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x1407CB7F4 (_PnpParseIndirectInfString.c)
 *     _PnpDeletePropertyWorker @ 0x14086FB0C (_PnpDeletePropertyWorker.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140876094 (_PnpGetGenericStorePropertyKeys.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14087C0D0 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _RegRtlDeletePathInternal @ 0x140A6AC0C (_RegRtlDeletePathInternal.c)
 *     DrvDbValidateDeviceIdName @ 0x140A6D82C (DrvDbValidateDeviceIdName.c)
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
