/*
 * XREFs of PspShutdownCsrProcess @ 0x1409AA2D8
 * Callers:
 *     PspTerminateSiloSubsystemProcesses @ 0x1409AAAF0 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140208BFC (RtlStringCchPrintfW.c)
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     PsAttachSiloToCurrentThread @ 0x1402993A0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402993C0 (PsDetachSiloFromCurrentThread.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x140412390 (ZwWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1404124D0 (ZwSetEvent.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenEvent @ 0x140412B10 (ZwOpenEvent.c)
 *     ZwCreateEvent @ 0x140412C10 (ZwCreateEvent.c)
 *     PsInvokeWin32Callout @ 0x1407D2D10 (PsInvokeWin32Callout.c)
 *     PsTerminateProcess @ 0x1407DC8A0 (PsTerminateProcess.c)
 */

NTSTATUS __fastcall PspShutdownCsrProcess(struct _LIST_ENTRY *a1, unsigned int a2, _KPROCESS *a3)
{
  struct _LIST_ENTRY *v5; // rdi
  NTSTATUS v6; // eax
  HANDLE v7; // rcx
  int v8; // ebx
  HANDLE v9; // rcx
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE EventHandle; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v13; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v16; // [rsp+88h] [rbp-78h] BYREF
  wchar_t pszDest[120]; // [rsp+C0h] [rbp-40h] BYREF

  v13 = a2;
  memset(&v16, 0, sizeof(v16));
  Handle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  EventHandle = 0LL;
  v5 = PsAttachSiloToCurrentThread(a1);
  RtlStringCchPrintfW(pszDest, 0x78uLL, L"\\Sessions\\%d\\BaseNamedObjects\\EventShutdownCSRSS", a2);
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ZwOpenEvent(&EventHandle, 0x1F0003u, &ObjectAttributes);
  RtlStringCchPrintfW(pszDest, 0x78uLL, L"\\Sessions\\%d\\BaseNamedObjects\\EventRitExited", a2);
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 704;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwCreateEvent(&Handle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  v7 = Handle;
  if ( v6 < 0 )
    v7 = 0LL;
  Handle = v7;
  PsDetachSiloFromCurrentThread(v5);
  KiStackAttachProcess(a3, 0, (__int64)&v16);
  v8 = PsInvokeWin32Callout(31, 0LL, 1, &v13);
  KiUnstackDetachProcess(&v16);
  if ( EventHandle )
  {
    ZwSetEvent(EventHandle, 0LL);
    ZwClose(EventHandle);
    EventHandle = 0LL;
  }
  v9 = Handle;
  if ( Handle )
  {
    if ( v8 >= 0 )
    {
      ZwWaitForSingleObject(Handle, 0, 0LL);
      v9 = Handle;
    }
    ZwClose(v9);
    Handle = 0LL;
  }
  result = PsTerminateProcess(a3, 0xC00002EB);
  if ( result >= 0 )
    return KeWaitForSingleObject(a3, Executive, 0, 0, 0LL);
  return result;
}
