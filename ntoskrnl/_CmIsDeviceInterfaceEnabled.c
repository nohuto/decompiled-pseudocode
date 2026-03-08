/*
 * XREFs of _CmIsDeviceInterfaceEnabled @ 0x1406D42F0
 * Callers:
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406C8298 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1406D4190 (PiPnpRtlInterfaceFilterCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140824A50 (_CmDeviceClassesSubkeyCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

NTSTATUS __fastcall CmIsDeviceInterfaceEnabled(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  __int64 (__fastcall *v7)(__int64, UNICODE_STRING *, __int64, _QWORD); // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, UNICODE_STRING *, __int64, _QWORD))(a1 + 288);
    if ( v7 )
      return v7(a1, &DestinationString, a4, 0LL);
    else
      return -1073741822;
  }
  return result;
}
