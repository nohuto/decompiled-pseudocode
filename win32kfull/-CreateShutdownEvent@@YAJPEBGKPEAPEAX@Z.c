/*
 * XREFs of ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C00BD4DC
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C0078068 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     RawInputThread @ 0x1C007A0C0 (RawInputThread.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00C1278 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CreateShutdownEvent(const unsigned __int16 *a1, int a2, void **a3)
{
  unsigned int *v6; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR SourceString[256]; // [rsp+70h] [rbp-90h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  v6 = (unsigned int *)SGDGetUserSessionState(a1);
  RtlStringCchPrintfW(SourceString, 0x100uLL, L"\\Sessions\\%ld\\BaseNamedObjects\\%ws", *v6, a1);
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = a2 | 0x240;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwCreateEvent(a3, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
}
