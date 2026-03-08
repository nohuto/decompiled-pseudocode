/*
 * XREFs of MyRegQueryUlong @ 0x1C0043C88
 * Callers:
 *     ReadManifestAssignedValue @ 0x1C0042FCC (ReadManifestAssignedValue.c)
 *     CheckUSBFnIncludeDefaultCfg @ 0x1C00430C8 (CheckUSBFnIncludeDefaultCfg.c)
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C00436CC (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 */

__int64 __fastcall MyRegQueryUlong(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3)
{
  NTSTATUS v5; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  __int128 KeyValueInformation; // [rsp+48h] [rbp-30h] BYREF
  int v10; // [rsp+58h] [rbp-20h]

  ResultLength = 0;
  v10 = 0;
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v5 = ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         &KeyValueInformation,
         0x14u,
         &ResultLength);
  if ( v5 >= 0 )
  {
    if ( DWORD2(KeyValueInformation) == 4 )
      *a3 = HIDWORD(KeyValueInformation);
    else
      return (unsigned int)-1073741823;
  }
  return (unsigned int)v5;
}
