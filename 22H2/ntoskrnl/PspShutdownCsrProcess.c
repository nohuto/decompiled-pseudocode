/*
 * XREFs of PspShutdownCsrProcess @ 0x1409AD358
 * Callers:
 *     PspTerminateSiloSubsystemProcesses @ 0x1409ADB70 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14022A92C (RtlStringCchPrintfW.c)
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     PsDetachSiloFromCurrentThread @ 0x14031CAB0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14031CAD0 (PsAttachSiloToCurrentThread.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x14041A720 (ZwWaitForSingleObject.c)
 *     ZwSetEvent @ 0x14041A860 (ZwSetEvent.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwOpenEvent @ 0x14041AEA0 (ZwOpenEvent.c)
 *     ZwCreateEvent @ 0x14041AFA0 (ZwCreateEvent.c)
 *     PsTerminateProcess @ 0x140683794 (PsTerminateProcess.c)
 *     PsInvokeWin32Callout @ 0x1406AF850 (PsInvokeWin32Callout.c)
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
  v8 = PsInvokeWin32Callout(31, 0LL, 1, (__int64)&v13);
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
  result = PsTerminateProcess((ULONG_PTR)a3);
  if ( result >= 0 )
    return KeWaitForSingleObject(a3, Executive, 0, 0, 0LL);
  return result;
}
