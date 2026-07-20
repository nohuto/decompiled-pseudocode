/*
 * XREFs of SmpInitializeKnownDllsAsync @ 0x14000F0B8
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140009604 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     <none>
 */

__int64 SmpInitializeKnownDllsAsync()
{
  NTSTATUS v0; // ebx
  void *v1; // rcx
  int v3; // [rsp+30h] [rbp-40h] BYREF
  const wchar_t *v4; // [rsp+38h] [rbp-38h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *EventHandle; // [rsp+80h] [rbp+10h] BYREF
  __int64 v7; // [rsp+88h] [rbp+18h] BYREF

  EventHandle = 0LL;
  v7 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  v4 = L"\\KnownDlls\\SmKnownDllsInitialized";
  v3 = 4456514;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v3;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 80;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v0 < 0 || (v0 = TpAllocWork(&v7, &SmpInitializeKnownDllsWorker, EventHandle, &SmpCallbackEnviron), v0 < 0) )
  {
    v1 = EventHandle;
  }
  else
  {
    TpPostWork(v7);
    TpReleaseWork(v7);
    v1 = 0LL;
    EventHandle = 0LL;
  }
  if ( v1 )
  {
    NtSetEvent(v1, 0LL);
    NtClose(EventHandle);
  }
  return (unsigned int)v0;
}
