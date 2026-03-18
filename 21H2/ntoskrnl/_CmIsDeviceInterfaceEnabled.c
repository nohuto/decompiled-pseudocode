/*
 * XREFs of _CmIsDeviceInterfaceEnabled @ 0x140781748
 * Callers:
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406CC2C8 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x140781DE0 (PiPnpRtlInterfaceFilterCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14083E6C0 (_CmDeviceClassesSubkeyCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     _NtPlugPlayGetDeviceInterfaceEnabled @ 0x140781790 (_NtPlugPlayGetDeviceInterfaceEnabled.c)
 */

NTSTATUS __fastcall CmIsDeviceInterfaceEnabled(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return NtPlugPlayGetDeviceInterfaceEnabled(a1, &DestinationString, a4);
  return result;
}
