_BOOL8 __fastcall GetCustomFlick(struct tagCUSTOM_FLICK *a1)
{
  int PointerDeviceCfgStringSetting; // ebx
  HANDLE v3; // rcx
  HANDLE v4; // rcx
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-30h] BYREF
  const WCHAR *v7; // [rsp+40h] [rbp-20h] BYREF
  __int64 v8; // [rsp+48h] [rbp-18h]
  const WCHAR *v9; // [rsp+50h] [rbp-10h] BYREF
  __int64 v10; // [rsp+58h] [rbp-8h]
  HANDLE Handle; // [rsp+70h] [rbp+10h] BYREF

  Destination = 0LL;
  Handle = 0LL;
  PointerDeviceCfgStringSetting = -1073741595;
  if ( (unsigned int)GetCustomFlickPath((GUID *)a1, &Destination) )
  {
    Destination.Buffer[(unsigned __int64)Destination.Length >> 1] = 0;
    PointerDeviceCfgStringSetting = OpenDeviceCfgKey(
                                      Destination.MaximumLength,
                                      Destination.Buffer,
                                      0x20019u,
                                      &Handle,
                                      0);
    if ( PointerDeviceCfgStringSetting >= 0 )
    {
      v7 = L"ModifierKeys";
      v8 = 0LL;
      v9 = L"KeyCode";
      v10 = 0LL;
      PointerDeviceCfgStringSetting = ReadPointerDeviceCfgDWORDSetting(Handle, &v7);
      if ( PointerDeviceCfgStringSetting >= 0 )
      {
        v3 = Handle;
        *((_DWORD *)a1 + 4) = HIDWORD(v8);
        PointerDeviceCfgStringSetting = ReadPointerDeviceCfgDWORDSetting(v3, &v9);
        if ( PointerDeviceCfgStringSetting >= 0 )
        {
          v4 = Handle;
          *((_DWORD *)a1 + 5) = HIDWORD(v10);
          PointerDeviceCfgStringSetting = ReadPointerDeviceCfgStringSetting(
                                            v4,
                                            L"FriendlyName",
                                            (unsigned __int16 *)a1 + 14,
                                            0x104u);
        }
      }
    }
    if ( Handle )
      ZwClose(Handle);
    Win32FreePool(Destination.Buffer);
  }
  return PointerDeviceCfgStringSetting >= 0;
}
