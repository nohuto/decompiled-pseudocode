__int64 __fastcall bWriteUserSystemEUDCRegistry(PVOID ValueData)
{
  HANDLE Handle; // [rsp+30h] [rbp-10h] BYREF
  HANDLE v3; // [rsp+38h] [rbp-8h] BYREF
  PCWSTR Path; // [rsp+78h] [rbp+38h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Path, 0x208u);
  if ( Path )
  {
    Handle = 0LL;
    v3 = 0LL;
    if ( (int)GetUserEUDCRegistryPath((WCHAR *)Path) >= 0 )
      bNotIsKeySymbolicLink(Path, &Handle, &v3);
    if ( Handle )
      ZwClose(Handle);
    if ( v3 )
      ZwClose(v3);
  }
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&Path);
  return 0LL;
}
