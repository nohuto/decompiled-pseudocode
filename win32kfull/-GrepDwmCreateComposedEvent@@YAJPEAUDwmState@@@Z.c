NTSTATUS __fastcall GrepDwmCreateComposedEvent(wchar_t *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rbx
  Gre::Base *v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  unsigned int v5; // esi
  NTSTATUS v6; // ebx
  unsigned __int16 *v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int16 *v9; // rdi
  NTSTATUS result; // eax
  Gre::Base *v11; // rcx
  void *v12; // rcx
  int CurrentWin32kSessionId; // [rsp+30h] [rbp-29h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-9h] BYREF
  void *EventHandle; // [rsp+C0h] [rbp+67h] BYREF
  void *DirectoryHandle; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned __int16 *v18; // [rsp+D0h] [rbp+77h] BYREF
  unsigned __int64 v19; // [rsp+D8h] [rbp+7Fh] BYREF

  DirectoryHandle = 0LL;
  EventHandle = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v2 = Gre::Base::Globals((Gre::Base *)a1);
  v4 = Gre::Base::Globals(v3);
  ++*(_DWORD *)(*((_QWORD *)v4 + 241) + 1573020LL);
  v5 = *(_DWORD *)(*((_QWORD *)v2 + 241) + 1573020LL);
  CurrentWin32kSessionId = GetCurrentWin32kSessionId();
  v6 = RtlStringCchPrintfExW(
         a1 + 96,
         0x44uLL,
         &v18,
         &v19,
         0x1000u,
         L"\\Sessions\\%ld\\BaseNamedObjects",
         CurrentWin32kSessionId);
  if ( v6 < 0
    || (RtlInitUnicodeString(&DestinationString, a1 + 96),
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.ObjectName = &DestinationString,
        ObjectAttributes.Length = 48,
        ObjectAttributes.Attributes = 576,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        v6 = ZwOpenDirectoryObject(&DirectoryHandle, 0x2000Fu, &ObjectAttributes),
        v6 < 0) )
  {
    v12 = EventHandle;
LABEL_8:
    if ( v12 )
      ObCloseHandle(v12, 0);
    if ( DirectoryHandle )
      ObCloseHandle(DirectoryHandle, 0);
    return v6;
  }
  else
  {
    v7 = v18;
    v8 = v19;
    *v18 = 92;
    v9 = v7 + 1;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.SecurityDescriptor = &unk_1C0312730;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    while ( 1 )
    {
      result = RtlStringCchPrintfW(v9, v8 - 1, (size_t *)L"DwmComposedEvent_%x", v5);
      if ( result < 0 )
        break;
      RtlInitUnicodeString(&DestinationString, v9);
      result = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
      v6 = result;
      if ( result != -1073741771 )
      {
        if ( result < 0 )
          return result;
        *(_DWORD *)(*((_QWORD *)Gre::Base::Globals(v11) + 241) + 1573020LL) = v5;
        v12 = 0LL;
        *((_QWORD *)a1 + 41) = EventHandle;
        EventHandle = 0LL;
        goto LABEL_8;
      }
      ++v5;
    }
  }
  return result;
}
