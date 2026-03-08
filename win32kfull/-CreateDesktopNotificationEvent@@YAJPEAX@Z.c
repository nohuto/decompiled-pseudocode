/*
 * XREFs of ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x1C00C18D0
 * Callers:
 *     xxxCreateWindowStation @ 0x1C00BE56C (xxxCreateWindowStation.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00C1278 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CreateDesktopNotificationEvent(void *a1)
{
  unsigned int *v2; // rax
  NTSTATUS result; // eax
  WCHAR *v4; // rdx
  NTSTATUS v5; // ebx
  void *DirectoryHandle; // [rsp+48h] [rbp-C0h] BYREF
  void *EventHandle; // [rsp+50h] [rbp-B8h] BYREF
  PVOID DestinationString[3]; // [rsp+58h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  WCHAR SourceString[256]; // [rsp+A8h] [rbp-60h] BYREF

  EventHandle = 0LL;
  *(_OWORD *)&DestinationString[1] = 0LL;
  DirectoryHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  if ( gbNonServiceSession )
  {
    v2 = (unsigned int *)SGDGetUserSessionState(a1);
    result = RtlStringCchPrintfW(SourceString, 0x100uLL, (size_t *)L"\\Sessions\\%ld\\BaseNamedObjects", *v2);
    if ( result < 0 )
      return result;
    v4 = SourceString;
  }
  else
  {
    v4 = L"\\BaseNamedObjects";
  }
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], v4);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenDirectoryObject(&DirectoryHandle, 0x2000Fu, &ObjectAttributes);
  if ( v5 >= 0 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"WinSta0_DesktopSwitch");
    ObjectAttributes.SecurityDescriptor = a1;
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
    ObjectAttributes.Attributes = 640;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v5 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    ZwClose(DirectoryHandle);
    if ( v5 >= 0 )
    {
      DestinationString[0] = 0LL;
      v5 = ObReferenceObjectByHandle(EventHandle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, DestinationString, 0LL);
      gpEventSwitchDesktop = (PRKEVENT)DestinationString[0];
      if ( v5 >= 0 )
      {
        KeAttachProcess(gpepCSRSS);
        v5 = ObOpenObjectByPointer(gpEventSwitchDesktop, 0, 0LL, 0x1F0003u, 0LL, 0, &ghEventSwitchDesktop);
        KeDetachProcess();
      }
      ZwClose(EventHandle);
    }
  }
  return v5;
}
