/*
 * XREFs of _CmGetDeviceInterfacePathFormat @ 0x1406DBA7C
 * Callers:
 *     IoGetDeviceInterfaceAlias @ 0x1406DB590 (IoGetDeviceInterfaceAlias.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     _CmValidateDeviceInterfaceName @ 0x14077F150 (_CmValidateDeviceInterfaceName.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 */

__int64 __fastcall CmGetDeviceInterfacePathFormat(__int64 a1, const WCHAR *a2, _BYTE *a3)
{
  NTSTATUS inited; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  inited = CmValidateDeviceInterfaceName(a1, a2);
  if ( inited >= 0 )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, a2);
    if ( inited < 0 )
      return (unsigned int)-1073741773;
    if ( RtlPrefixUnicodeString(&stru_1400015C8, &DestinationString, 0) )
    {
      *a3 = 1;
      return (unsigned int)inited;
    }
    if ( !RtlPrefixUnicodeString(&stru_1400015B8, &DestinationString, 0) )
      return (unsigned int)-1073741773;
    *a3 = 0;
  }
  return (unsigned int)inited;
}
