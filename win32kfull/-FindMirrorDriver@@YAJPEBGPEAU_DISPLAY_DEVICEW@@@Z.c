/*
 * XREFs of ?FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z @ 0x1C0205904
 * Callers:
 *     xxxRemoteConsoleShadowStart @ 0x1C02063C0 (xxxRemoteConsoleShadowStart.c)
 * Callees:
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00BE504 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C010A9B4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall FindMirrorDriver(PCWSTR SourceString, struct _DISPLAY_DEVICEW *a2)
{
  char v3; // bl
  unsigned int v4; // esi
  __int64 v5; // rax
  unsigned __int64 i; // rcx
  __int64 v7; // r8
  UNICODE_STRING String1; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+88h] [rbp-78h]
  int v13; // [rsp+90h] [rbp-70h]
  __int64 v14; // [rsp+98h] [rbp-68h]
  __int64 v15; // [rsp+A0h] [rbp-60h]
  int v16; // [rsp+A8h] [rbp-58h]
  __int64 v17; // [rsp+B0h] [rbp-50h]
  int v18; // [rsp+B8h] [rbp-48h]
  _BYTE v19[2]; // [rsp+BEh] [rbp-42h] BYREF
  WCHAR Path[133]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v21[6]; // [rsp+1CAh] [rbp+CAh] BYREF
  _BYTE v22[256]; // [rsp+1D0h] [rbp+D0h] BYREF

  v3 = 0;
  String1 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v4 = 1;
  a2->cb = 840;
  if ( (int)DrvEnumDisplayDevices(0LL, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 96LL) + 80LL), 0LL, a2, 0, 0) >= 0 )
  {
    while ( 1 )
    {
      if ( (a2->StateFlags & 8) != 0
        && (int)RtlStringCchCopyNW((char *)Path, 133LL, (char *)a2->DeviceKey, 0x80uLL) >= 0 )
      {
        v5 = -1LL;
        do
          ++v5;
        while ( Path[v5] );
        for ( i = (unsigned __int64)&v19[2 * v5]; i > (unsigned __int64)Path; i -= 2LL )
        {
          if ( *(_WORD *)i == 92 )
            goto LABEL_11;
        }
        if ( *(_WORD *)i != 92 )
          goto LABEL_14;
LABEL_11:
        QueryTable.QueryRoutine = 0LL;
        QueryTable.Name = L"Service";
        QueryTable.Flags = 288;
        QueryTable.EntryContext = &String1;
        QueryTable.DefaultType = 16777217;
        QueryTable.DefaultData = 0LL;
        QueryTable.DefaultLength = 0;
        v12 = 0LL;
        v13 = 0;
        v14 = 0LL;
        v15 = 0LL;
        v16 = 0;
        v17 = 0LL;
        v18 = 0;
        if ( RtlStringCchCopyW((unsigned __int16 *)(i + 2), (__int64)&v21[-i - 2] >> 1, (size_t *)L"Video") >= 0 )
        {
          memset_0(v22, 0, sizeof(v22));
          *(_DWORD *)&String1.Length = 0x1000000;
          String1.Buffer = (PWSTR)v22;
          if ( RtlQueryRegistryValues(0, Path, &QueryTable, 0LL, 0LL) >= 0
            && !RtlCompareUnicodeString(&String1, &DestinationString, 1u) )
          {
            break;
          }
        }
      }
LABEL_14:
      v7 = v4++;
      if ( (int)DrvEnumDisplayDevices(0LL, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 96LL) + 80LL), v7, a2, 0, 0) < 0 )
        return v3 == 0 ? 0xC0000001 : 0;
    }
    v3 = 1;
  }
  return v3 == 0 ? 0xC0000001 : 0;
}
