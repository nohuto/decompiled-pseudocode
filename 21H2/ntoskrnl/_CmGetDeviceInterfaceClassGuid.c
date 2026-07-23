/*
 * XREFs of _CmGetDeviceInterfaceClassGuid @ 0x140632D04
 * Callers:
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x140632AA8 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     IopProcessSetInterfaceState @ 0x14074929C (IopProcessSetInterfaceState.c)
 *     PiSwCompleteCreate @ 0x14074D850 (PiSwCompleteCreate.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _CmGetDeviceInterfaceClassGuidString @ 0x140632D78 (_CmGetDeviceInterfaceClassGuidString.c)
 *     RtlGUIDFromString @ 0x140639680 (RtlGUIDFromString.c)
 */

int __fastcall CmGetDeviceInterfaceClassGuid(__int64 a1, __int64 a2, GUID *a3)
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  WCHAR SourceString[40]; // [rsp+30h] [rbp-68h] BYREF

  DestinationString = 0LL;
  result = CmGetDeviceInterfaceClassGuidString(a1, a2, SourceString);
  if ( result >= 0 )
  {
    result = RtlInitUnicodeStringEx(&DestinationString, SourceString);
    if ( result >= 0 )
      return RtlGUIDFromString(&DestinationString, a3);
  }
  return result;
}
