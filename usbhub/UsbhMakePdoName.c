/*
 * XREFs of UsbhMakePdoName @ 0x1C0043BAC
 * Callers:
 *     UsbhCreatePdo @ 0x1C0053530 (UsbhCreatePdo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022A90 (__security_check_cookie.c)
 *     memset @ 0x1C0023880 (memset.c)
 */

__int64 __fastcall UsbhMakePdoName(__int64 a1, struct _UNICODE_STRING *a2, ULONG a3)
{
  __int64 Pool2; // rax
  void *v6; // rdi
  __int128 v8; // xmm1
  NTSTATUS appended; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-98h] BYREF
  __int128 v11; // [rsp+30h] [rbp-88h]
  __int128 v12; // [rsp+40h] [rbp-78h]
  WCHAR SourceString[32]; // [rsp+50h] [rbp-68h] BYREF

  v11 = *(_OWORD *)L"\\Device\\USBPDO-";
  v12 = *(_OWORD *)L"USBPDO-";
  DestinationString = 0LL;
  memset(SourceString, 0, sizeof(SourceString));
  Pool2 = ExAllocatePool2(64LL, 96LL, 1112885333LL);
  v6 = (void *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v8 = v12;
  *(_OWORD *)Pool2 = v11;
  *(_OWORD *)(Pool2 + 16) = v8;
  RtlInitUnicodeString(a2, (PCWSTR)Pool2);
  a2->MaximumLength = 96;
  RtlInitUnicodeString(&DestinationString, SourceString);
  DestinationString.MaximumLength = 64;
  appended = RtlIntegerToUnicodeString(a3, 0xAu, &DestinationString);
  if ( appended >= 0 )
    appended = RtlAppendUnicodeStringToString(a2, &DestinationString);
  if ( (appended & 0xC0000000) == 0xC0000000 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)appended;
}
