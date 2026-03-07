_BOOL8 __fastcall GetCustomFlickPath(GUID *Guid, PUNICODE_STRING Destination)
{
  BOOL v4; // ebx
  WCHAR *v5; // rax
  struct _UNICODE_STRING GuidString; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)&Destination->Length = 14548992;
  GuidString = 0LL;
  v4 = 0;
  v5 = (WCHAR *)Win32AllocPoolZInit(222LL, 2020635477LL);
  if ( v5 )
  {
    Destination->Buffer = v5;
    if ( RtlAppendUnicodeToString(
           Destination,
           L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters\\CustomFlickCommands\\") >= 0
      && RtlStringFromGUID(Guid, &GuidString) >= 0 )
    {
      v4 = RtlAppendUnicodeStringToString(Destination, &GuidString) >= 0;
      RtlFreeUnicodeString(&GuidString);
    }
  }
  return v4;
}
