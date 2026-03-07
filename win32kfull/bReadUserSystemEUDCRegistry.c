__int64 __fastcall bReadUserSystemEUDCRegistry(wchar_t *Dst)
{
  WCHAR *v2; // rax
  unsigned int v3; // edi
  WCHAR *v4; // rbx
  WCHAR *v5; // rcx
  int UserEUDCRegistryPath; // esi
  wchar_t *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  PCWSTR Path; // [rsp+30h] [rbp-20h] BYREF
  WCHAR *v12; // [rsp+38h] [rbp-18h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+50h] BYREF
  HANDLE v15; // [rsp+A8h] [rbp+58h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v12, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Path, 0x208u);
  v2 = v12;
  v3 = 0;
  if ( v12 )
  {
    v4 = (WCHAR *)Path;
    if ( Path )
    {
      *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
      v5 = (WCHAR *)Path;
      Handle = 0LL;
      v15 = 0LL;
      *v12 = 0;
      *v4 = 0;
      *(_DWORD *)&DestinationString.Length = 17039360;
      DestinationString.Buffer = v2;
      UserEUDCRegistryPath = GetUserEUDCRegistryPath(v5);
      if ( UserEUDCRegistryPath >= 0 )
      {
        bNotIsKeySymbolicLink(v4, &Handle, &v15);
        UserEUDCRegistryPath = -1073741824;
      }
      if ( Handle )
        ZwClose(Handle);
      if ( v15 )
        ZwClose(v15);
      if ( UserEUDCRegistryPath == -1073741772 )
      {
        v8 = wcsrchr(v4, 0x5Cu);
        v10 = SGDGetSessionState(v9);
        if ( v8 )
        {
          if ( !_wcsicmp(v8 + 1, (const wchar_t *)(*(_QWORD *)(v10 + 32) + 13944LL)) )
          {
            *v8 = 0;
            RtlCreateRegistryKey(0, v4);
            *v8 = 92;
            RtlCreateRegistryKey(0, v4);
            if ( (unsigned int)bWriteUserSystemEUDCRegistry((PVOID)L"EUDC.TTE") )
            {
              RtlInitUnicodeString(&DestinationString, L"EUDC.TTE");
              if ( !wcsncpy_s(Dst, 0x104uLL, DestinationString.Buffer, DestinationString.Length) )
                v3 = 1;
            }
          }
        }
      }
    }
  }
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&Path);
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v12);
  return v3;
}
