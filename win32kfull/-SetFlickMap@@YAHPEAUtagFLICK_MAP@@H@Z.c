/*
 * XREFs of ?SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z @ 0x1C01F48B4
 * Callers:
 *     WritePointerDeviceSettingsFull @ 0x1C01F4CBC (WritePointerDeviceSettingsFull.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00F2C34 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z @ 0x1C01F4A30 (-WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z.c)
 */

_BOOL8 __fastcall SetFlickMap(struct tagFLICK_MAP *a1, int a2)
{
  unsigned int v2; // r14d
  int v5; // ebx
  __int128 *v6; // rsi
  const GUID *const *v7; // rdi
  const GUID *v8; // rax
  HANDLE Handle; // [rsp+38h] [rbp-69h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+40h] [rbp-61h] BYREF
  _QWORD v12[15]; // [rsp+60h] [rbp-41h] BYREF

  Handle = 0LL;
  v2 = 0;
  GuidString = 0LL;
  v5 = OpenDeviceCfgKey(
         0x7Cu,
         L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters\\FlickCommands",
         0x20006u,
         &Handle,
         0);
  if ( v5 >= 0 )
  {
    v12[0] = a1;
    v12[2] = (char *)a1 + 16;
    v12[12] = (char *)a1 + 96;
    v12[4] = (char *)a1 + 32;
    v12[14] = (char *)a1 + 112;
    v12[6] = (char *)a1 + 48;
    v6 = &xmmword_1C03572A8;
    v12[8] = (char *)a1 + 64;
    v12[10] = (char *)a1 + 80;
    v7 = (const GUID *const *)v12;
    do
    {
      if ( v5 < 0 )
        break;
      if ( a2 )
      {
        v5 = RtlStringFromGUID(*v7, &GuidString);
        if ( v5 >= 0 )
        {
          v5 = WritePointerDeviceCfgSetting(
                 Handle,
                 *((const unsigned __int16 **)v6 - 1),
                 1u,
                 (unsigned __int8 *)GuidString.Buffer,
                 GuidString.MaximumLength);
          RtlFreeUnicodeString(&GuidString);
          GuidString.Buffer = 0LL;
        }
      }
      v8 = *v7;
      ++v2;
      v7 += 2;
      *v6 = (__int128)*v8;
      v6 = (__int128 *)((char *)v6 + 24);
    }
    while ( v2 < 8 );
    ZwClose(Handle);
  }
  if ( v5 >= 0 )
    gFlickMapMonitor = 1;
  return v5 >= 0;
}
