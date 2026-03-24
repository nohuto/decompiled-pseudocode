/*
 * XREFs of _CmGetDeviceInterfaceClassGuid @ 0x14063DEF4
 * Callers:
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14063DC98 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     IopProcessSetInterfaceState @ 0x1407490DC (IopProcessSetInterfaceState.c)
 *     PiSwCompleteCreate @ 0x14074D690 (PiSwCompleteCreate.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140265AF0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _CmGetDeviceInterfaceClassGuidString @ 0x14063DF68 (_CmGetDeviceInterfaceClassGuidString.c)
 *     RtlGUIDFromString @ 0x140644870 (RtlGUIDFromString.c)
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
