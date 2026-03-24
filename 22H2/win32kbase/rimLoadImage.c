/*
 * XREFs of rimLoadImage @ 0x1C006D450
 * Callers:
 *     RIMInitialize @ 0x1C006CD60 (RIMInitialize.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C002C2D0 (Win32AllocPool.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     wcsrchr @ 0x1C00C56DC (wcsrchr.c)
 *     _strnicmp @ 0x1C00C57CC (_strnicmp.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

struct _SYSTEM_GDI_DRIVER_INFORMATION *rimLoadImage()
{
  NTSTATUS v0; // eax
  int v1; // edi
  wchar_t *v2; // rax
  const WCHAR *v3; // rax
  NTSTATUS v4; // eax
  _DWORD *v5; // rax
  _DWORD *v6; // rsi
  NTSTATUS v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r14
  char *v10; // rbx
  __int64 AddressOfEntryPoint; // rcx
  ULONG AnsiString; // [rsp+28h] [rbp-E0h] BYREF
  ULONG AnsiString_4; // [rsp+2Ch] [rbp-DCh] BYREF
  struct _STRING AnsiString_8; // [rsp+30h] [rbp-D8h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING SourceString_8; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE SystemInformation[304]; // [rsp+68h] [rbp-A0h] BYREF

  DestinationString_8 = 0LL;
  qword_1C0250D20 = 0LL;
  gHidParseImageInfo.DriverName = 0LL;
  xmmword_1C0250D00 = 0LL;
  xmmword_1C0250D10 = 0LL;
  RtlInitUnicodeString(&DestinationString_8, L"\\SystemRoot\\System32\\Drivers\\hidparse.sys");
  gHidParseImageInfo.DriverName = DestinationString_8;
  v0 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, &gHidParseImageInfo, 0x38uLL);
  v1 = 0;
  if ( v0 >= 0 )
    return &gHidParseImageInfo;
  if ( v0 != -1073741554 )
    return 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  AnsiString = 0;
  AnsiString_8 = 0LL;
  SourceString_8 = 0LL;
  v2 = wcsrchr(L"\\SystemRoot\\System32\\Drivers\\hidparse.sys", 0x5Cu);
  v3 = v2 ? v2 + 1 : L"\\SystemRoot\\System32\\Drivers\\hidparse.sys";
  RtlInitUnicodeString(&SourceString_8, v3);
  if ( RtlUnicodeStringToAnsiString(&AnsiString_8, &SourceString_8, 1u) < 0 )
    return 0LL;
  v4 = ZwQuerySystemInformation(SystemModuleInformation, SystemInformation, 0x130u, &AnsiString);
  if ( (int)(v4 + 0x80000000) < 0 || v4 == -1073741820 )
  {
    while ( 1 )
    {
      v5 = (_DWORD *)Win32AllocPool(AnsiString, 0x646C6452u);
      v6 = v5;
      if ( !v5 )
        break;
      v7 = ZwQuerySystemInformation(SystemModuleInformation, v5, AnsiString, &AnsiString);
      if ( v7 != -1073741820 )
      {
        if ( v7 >= 0 )
        {
          v8 = 0;
          if ( *v6 )
          {
            while ( 1 )
            {
              v9 = v8;
              if ( !strnicmp(
                      (const char *)&v6[74 * v8 + 12] + HIWORD(v6[74 * v8 + 11]),
                      AnsiString_8.Buffer,
                      AnsiString_8.Length) )
                break;
              if ( ++v8 >= *v6 )
                goto LABEL_15;
            }
            AnsiString_4 = 0;
            v10 = *(char **)&v6[74 * v8 + 6];
            *((_QWORD *)&xmmword_1C0250D10 + 1) = RtlImageDirectoryEntryToData(
                                                    *(PVOID *)&v6[74 * v9 + 6],
                                                    1u,
                                                    0,
                                                    &AnsiString_4);
            AddressOfEntryPoint = RtlImageNtHeader(v10)->OptionalHeader.AddressOfEntryPoint;
            *((_QWORD *)&xmmword_1C0250D00 + 1) = 0LL;
            *(_QWORD *)&xmmword_1C0250D10 = &v10[AddressOfEntryPoint];
            v1 = 1;
            *(_QWORD *)&xmmword_1C0250D00 = v10;
          }
        }
LABEL_15:
        Win32FreePool((__int64)v6);
        break;
      }
      Win32FreePool((__int64)v6);
    }
  }
  RtlFreeAnsiString(&AnsiString_8);
  if ( v1 == 1 )
    return &gHidParseImageInfo;
  else
    return 0LL;
}
