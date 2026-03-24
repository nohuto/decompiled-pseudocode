/*
 * XREFs of ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C0208F1C
 * Callers:
 *     ReadPointerDeviceSettingsFull @ 0x1C00E0714 (ReadPointerDeviceSettingsFull.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00E1190 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C00E1CF0 (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     ?GetCustomFlickPath@@YAHAEBU_GUID@@PEAU_UNICODE_STRING@@@Z @ 0x1C0209050 (-GetCustomFlickPath@@YAHAEBU_GUID@@PEAU_UNICODE_STRING@@@Z.c)
 */

_BOOL8 __fastcall GetCustomFlick(GUID *a1)
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
  if ( (unsigned int)GetCustomFlickPath(a1, &Destination) )
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
        a1[1].Data1 = HIDWORD(v8);
        PointerDeviceCfgStringSetting = ReadPointerDeviceCfgDWORDSetting(v3, &v9);
        if ( PointerDeviceCfgStringSetting >= 0 )
        {
          v4 = Handle;
          *(_DWORD *)&a1[1].Data2 = HIDWORD(v10);
          PointerDeviceCfgStringSetting = ReadPointerDeviceCfgStringSetting(
                                            v4,
                                            L"FriendlyName",
                                            (char *)&a1[1].Data4[4],
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
