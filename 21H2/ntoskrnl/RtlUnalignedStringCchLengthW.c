/*
 * XREFs of RtlUnalignedStringCchLengthW @ 0x140253984
 * Callers:
 *     _PnpParseIndirectResourceString @ 0x1405DE350 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x14061004C (_PnpParseIndirectInfString.c)
 *     _PnpGetGenericStoreProperty @ 0x14062CFEC (_PnpGetGenericStoreProperty.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406315BC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _RegRtlCreateTreeTransacted @ 0x140633154 (_RegRtlCreateTreeTransacted.c)
 *     _CmValidateDeviceName @ 0x140637080 (_CmValidateDeviceName.c)
 *     _PnpOpenPropertiesKey @ 0x14063A2D4 (_PnpOpenPropertiesKey.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14073A948 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _PnpSetPropertyWorker @ 0x1407469A0 (_PnpSetPropertyWorker.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140768140 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpDeletePropertyWorker @ 0x14076D15C (_PnpDeletePropertyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x14097CB7C (_RegRtlDeletePathInternal.c)
 *     DrvDbValidateDeviceIdName @ 0x14097E8B4 (DrvDbValidateDeviceIdName.c)
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
