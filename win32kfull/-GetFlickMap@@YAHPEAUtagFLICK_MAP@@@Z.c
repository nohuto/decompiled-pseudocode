_BOOL8 __fastcall GetFlickMap(struct tagFLICK_MAP *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OWORD *v4; // rsi
  unsigned int v5; // r12d
  int PointerDeviceCfgStringSetting; // ebx
  __int128 *v9; // r14
  GUID **v10; // r15
  const WCHAR *v11; // rdx
  void *v12; // rcx
  GUID *v13; // r13
  __int128 v14; // xmm1
  __int64 v15; // rcx
  __int128 v16; // xmm0
  void *DestinationString[3]; // [rsp+38h] [rbp-D0h] BYREF
  GUID v18; // [rsp+58h] [rbp-B0h]
  __int128 v19; // [rsp+68h] [rbp-A0h]
  _QWORD v20[15]; // [rsp+80h] [rbp-88h] BYREF
  WCHAR SourceString[128]; // [rsp+F8h] [rbp-10h] BYREF

  memset(DestinationString, 0, sizeof(DestinationString));
  v4 = (_OWORD *)((char *)a1 + 16);
  v5 = 0;
  if ( gFlickMapMonitor )
    goto LABEL_2;
  v20[0] = a1;
  v20[4] = (char *)a1 + 32;
  v20[6] = (char *)a1 + 48;
  v20[8] = (char *)a1 + 64;
  v20[10] = (char *)a1 + 80;
  v20[12] = (char *)a1 + 96;
  v20[14] = (char *)a1 + 112;
  v20[2] = (char *)a1 + 16;
  if ( (unsigned int)RIMIsDefaultUILanguageRTL(a1, a2, a3, a4) != dword_1C0357024 )
  {
    v16 = xmmword_1C0357308;
    xmmword_1C0357308 = xmmword_1C03572A8;
    dword_1C0357024 = dword_1C0357024 == 0;
    xmmword_1C03572A8 = v16;
  }
  PointerDeviceCfgStringSetting = OpenDeviceCfgKey(
                                    0x7Cu,
                                    L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters\\FlickCommands",
                                    0x20019u,
                                    DestinationString,
                                    0);
  if ( PointerDeviceCfgStringSetting >= 0 )
  {
    v9 = &xmmword_1C03572A8;
    v10 = (GUID **)v20;
    while ( PointerDeviceCfgStringSetting >= 0 )
    {
      v11 = (const WCHAR *)*((_QWORD *)v9 - 1);
      v12 = DestinationString[0];
      *(v10 - 1) = (GUID *)SourceString;
      PointerDeviceCfgStringSetting = ReadPointerDeviceCfgStringSetting(v12, v11, SourceString, 0x7Du);
      if ( PointerDeviceCfgStringSetting >= 0 )
      {
        RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], SourceString);
        v13 = *v10;
        PointerDeviceCfgStringSetting = RtlGUIDFromString((PCUNICODE_STRING)&DestinationString[1], *v10);
        if ( PointerDeviceCfgStringSetting >= 0 )
        {
          v14 = (__int128)*v13;
          v18 = *v13;
          v19 = 0LL;
          v15 = -*(_QWORD *)&v18.Data1;
          if ( !*(_QWORD *)&v18.Data1 )
            v15 = *((_QWORD *)&v19 + 1) - *(_QWORD *)v18.Data4;
          if ( v15 )
            *v9 = v14;
        }
      }
      ++v5;
      v10 += 2;
      v9 = (__int128 *)((char *)v9 + 24);
      if ( v5 >= 8 )
      {
        if ( PointerDeviceCfgStringSetting >= 0 )
          gFlickMapMonitor = 1;
        break;
      }
    }
    ZwClose(DestinationString[0]);
  }
  if ( gFlickMapMonitor )
  {
LABEL_2:
    PointerDeviceCfgStringSetting = 0;
    *(_OWORD *)a1 = xmmword_1C03572A8;
    *v4 = xmmword_1C03572C0;
    *((_OWORD *)a1 + 2) = xmmword_1C03572D8;
    *((_OWORD *)a1 + 3) = xmmword_1C03572F0;
    *((_OWORD *)a1 + 4) = xmmword_1C0357308;
    *((_OWORD *)a1 + 5) = xmmword_1C0357320;
    *((_OWORD *)a1 + 6) = xmmword_1C0357338;
    *((_OWORD *)a1 + 7) = xmmword_1C0357350;
  }
  return PointerDeviceCfgStringSetting >= 0;
}
