/*
 * XREFs of ?GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z @ 0x1C00E1B38
 * Callers:
 *     ReadPointerDeviceSettingsFull @ 0x1C00E0A64 (ReadPointerDeviceSettingsFull.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00E14E0 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C00E2040 (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

_BOOL8 __fastcall GetFlickMap(struct tagFLICK_MAP *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  int PointerDeviceCfgStringSetting; // ebx
  __int128 *v8; // rsi
  GUID **v9; // r14
  const WCHAR *v10; // rdx
  HANDLE v11; // rcx
  GUID *v12; // r12
  __int128 v13; // xmm1
  __int64 v14; // rcx
  __int128 v15; // xmm0
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  GUID v18; // [rsp+50h] [rbp-B0h]
  __int128 v19; // [rsp+60h] [rbp-A0h]
  _QWORD v20[15]; // [rsp+78h] [rbp-88h] BYREF
  WCHAR SourceString[128]; // [rsp+F0h] [rbp-10h] BYREF

  Handle = 0LL;
  v4 = 0;
  DestinationString = 0LL;
  if ( gFlickMapMonitor )
    goto LABEL_2;
  v20[0] = a1;
  v20[2] = (char *)a1 + 16;
  v20[4] = (char *)a1 + 32;
  v20[6] = (char *)a1 + 48;
  v20[8] = (char *)a1 + 64;
  v20[10] = (char *)a1 + 80;
  v20[12] = (char *)a1 + 96;
  v20[14] = (char *)a1 + 112;
  if ( (unsigned int)RIMIsDefaultUILanguageRTL(a1, a2, a3, a4) != dword_1C032B024 )
  {
    v15 = xmmword_1C032B788;
    xmmword_1C032B788 = xmmword_1C032B728;
    dword_1C032B024 = dword_1C032B024 == 0;
    xmmword_1C032B728 = v15;
  }
  PointerDeviceCfgStringSetting = OpenDeviceCfgKey(
                                    0x7Cu,
                                    L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters\\FlickCommands",
                                    0x20019u,
                                    &Handle,
                                    0);
  if ( PointerDeviceCfgStringSetting >= 0 )
  {
    v8 = &xmmword_1C032B728;
    v9 = (GUID **)v20;
    while ( PointerDeviceCfgStringSetting >= 0 )
    {
      v10 = (const WCHAR *)*((_QWORD *)v8 - 1);
      v11 = Handle;
      *(v9 - 1) = (GUID *)SourceString;
      PointerDeviceCfgStringSetting = ReadPointerDeviceCfgStringSetting(v11, v10, SourceString, 0x7Du);
      if ( PointerDeviceCfgStringSetting >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        v12 = *v9;
        PointerDeviceCfgStringSetting = RtlGUIDFromString(&DestinationString, *v9);
        if ( PointerDeviceCfgStringSetting >= 0 )
        {
          v13 = (__int128)*v12;
          v18 = *v12;
          v19 = 0LL;
          v14 = -*(_QWORD *)&v18.Data1;
          if ( !*(_QWORD *)&v18.Data1 )
            v14 = *((_QWORD *)&v19 + 1) - *(_QWORD *)v18.Data4;
          if ( v14 )
            *v8 = v13;
        }
      }
      ++v4;
      v9 += 2;
      v8 = (__int128 *)((char *)v8 + 24);
      if ( v4 >= 8 )
      {
        if ( PointerDeviceCfgStringSetting >= 0 )
          gFlickMapMonitor = 1;
        break;
      }
    }
    ZwClose(Handle);
  }
  if ( gFlickMapMonitor )
  {
LABEL_2:
    PointerDeviceCfgStringSetting = 0;
    *(_OWORD *)a1 = xmmword_1C032B728;
    *((_OWORD *)a1 + 1) = xmmword_1C032B740;
    *((_OWORD *)a1 + 2) = xmmword_1C032B758;
    *((_OWORD *)a1 + 3) = xmmword_1C032B770;
    *((_OWORD *)a1 + 4) = xmmword_1C032B788;
    *((_OWORD *)a1 + 5) = xmmword_1C032B7A0;
    *((_OWORD *)a1 + 6) = xmmword_1C032B7B8;
    *((_OWORD *)a1 + 7) = xmmword_1C032B7D0;
  }
  return PointerDeviceCfgStringSetting >= 0;
}
