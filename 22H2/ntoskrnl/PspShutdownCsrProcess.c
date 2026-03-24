/*
 * XREFs of PspShutdownCsrProcess @ 0x1409066A0
 * Callers:
 *     PspTerminateSiloSubsystemProcesses @ 0x140906E34 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x140348150 (RtlStringCchPrintfW.c)
 *     PsDetachSiloFromCurrentThread @ 0x14034C200 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14034C220 (PsAttachSiloToCurrentThread.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x1403F9AA0 (ZwWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1403F9BE0 (ZwSetEvent.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwOpenEvent @ 0x1403FA220 (ZwOpenEvent.c)
 *     ZwCreateEvent @ 0x1403FA320 (ZwCreateEvent.c)
 *     PsInvokeWin32Callout @ 0x14061B5A0 (PsInvokeWin32Callout.c)
 *     PsTerminateProcess @ 0x14069F4E8 (PsTerminateProcess.c)
 *     PspWaitForUsermodeExit @ 0x14090B33C (PspWaitForUsermodeExit.c)
 */

__int64 __fastcall PspShutdownCsrProcess(struct _LIST_ENTRY *a1, unsigned int a2, _KPROCESS *a3)
{
  struct _LIST_ENTRY *v5; // rdi
  NTSTATUS v6; // eax
  HANDLE v7; // rcx
  _DWORD *v8; // r9
  int v9; // ebx
  HANDLE v10; // rcx
  __int64 result; // rax
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE EventHandle; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v14; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v17[3]; // [rsp+88h] [rbp-78h] BYREF
  wchar_t pszDest[120]; // [rsp+C0h] [rbp-40h] BYREF

  v14 = a2;
  memset(v17, 0, sizeof(v17));
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
  KiStackAttachProcess(a3, 0LL, (__int64)v17, v8);
  v9 = PsInvokeWin32Callout(31, 0LL, 1, (__int64)&v14);
  KiUnstackDetachProcess((__int64)v17, 0);
  if ( EventHandle )
  {
    ZwSetEvent(EventHandle, 0LL);
    ZwClose(EventHandle);
    EventHandle = 0LL;
  }
  v10 = Handle;
  if ( Handle )
  {
    if ( v9 >= 0 )
    {
      ZwWaitForSingleObject(Handle, 0, 0LL);
      v10 = Handle;
    }
    ZwClose(v10);
    Handle = 0LL;
  }
  result = PsTerminateProcess((ULONG_PTR)a3);
  if ( (int)result >= 0 )
    return PspWaitForUsermodeExit(a3);
  return result;
}
