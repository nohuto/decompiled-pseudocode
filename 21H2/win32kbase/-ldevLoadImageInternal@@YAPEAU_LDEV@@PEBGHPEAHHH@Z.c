/*
 * XREFs of ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C0015860
 * Callers:
 *     ldevLoadImage @ 0x1C00157E0 (ldevLoadImage.c)
 * Callees:
 *     MakeSystemRelativePath @ 0x1C0015B10 (MakeSystemRelativePath.c)
 *     FreeSystemRelativePath @ 0x1C0015C20 (FreeSystemRelativePath.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C002AE08 (PALLOCMEM2.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C00B7374 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     wcsrchr @ 0x1C00C534C (wcsrchr.c)
 *     _strnicmp @ 0x1C00C543C (_strnicmp.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     MakeSystemDriversRelativePath @ 0x1C014D704 (MakeSystemDriversRelativePath.c)
 */

struct _LDEV *__fastcall ldevLoadImageInternal(PCWSTR Source, int a2, int *a3, signed int a4, int a5)
{
  __int64 v5; // rbx
  struct _LDEV *v6; // rdi
  int v7; // r14d
  __int64 v8; // r13
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // esi
  struct _LDEV *i; // rbx
  const UNICODE_STRING *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  UNICODE_STRING *v22; // r13
  __int64 v23; // rax
  __int64 v24; // rsi
  int v25; // ebx
  ULONG v26; // r12d
  SYSTEM_INFORMATION_CLASS v27; // ecx
  __int64 v28; // rdx
  NTSTATUS v29; // r14d
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // r12d
  wchar_t *v33; // rax
  const WCHAR *v34; // rax
  int v35; // ebx
  _DWORD *v36; // rax
  _DWORD *v37; // r15
  unsigned int v38; // ebx
  __int64 v39; // r12
  _DWORD *j; // rbx
  unsigned int v41; // eax
  char *v42; // rbx
  __int64 AddressOfEntryPoint; // rcx
  ULONG ReturnLength; // [rsp+24h] [rbp-DCh] BYREF
  ULONG Size; // [rsp+28h] [rbp-D8h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-D0h] BYREF
  struct _STRING AnsiString; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD SystemInformation[76]; // [rsp+60h] [rbp-A0h] BYREF

  v5 = a4;
  v6 = 0LL;
  ReturnLength = a4;
  String2 = 0LL;
  v7 = 0;
  v8 = a2;
  v11 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v11[3] = Source;
  v11[4] = v8;
  v11[5] = v5;
  WdLogEvent5_WdEvent(v11);
  *a3 = 0;
  if ( (unsigned int)MakeSystemRelativePath(Source, &String2) )
  {
    v14 = 1;
    while ( 1 )
    {
      for ( i = gpldevDrivers; i; i = *(struct _LDEV **)i )
      {
        v16 = (const UNICODE_STRING *)*((_QWORD *)i + 2);
        if ( v16
          && (*((_DWORD *)i + 6) == 5) == (_DWORD)v8
          && (*((_DWORD *)i + 8) & 4u) >> 2 == a5
          && RtlEqualUnicodeString(v16, &String2, 1u) )
        {
          v19 = WdLogNewEntry5_WdTrace(v18, v17);
          WdLogEvent5_WdTrace(v19);
          ++*((_DWORD *)i + 7);
          v6 = i;
          *a3 = 1;
          goto LABEL_10;
        }
      }
      if ( ReturnLength )
        break;
      if ( !v14 )
      {
        if ( v7 )
        {
          FreeSystemRelativePath(&String2);
          if ( !(unsigned int)MakeSystemRelativePath(Source, &String2) )
            goto LABEL_10;
        }
        break;
      }
      v14 = 0;
      FreeSystemRelativePath(&String2);
      if ( !(unsigned int)MakeSystemDriversRelativePath(Source, &String2) )
        break;
      v7 = 1;
    }
    v22 = (UNICODE_STRING *)PALLOCMEM2(0x38uLL);
    v23 = PALLOCMEM2(0x388uLL);
    v24 = v23;
    v25 = 1;
    if ( v22 )
    {
      if ( v23 )
      {
        v26 = ReturnLength;
        *(_QWORD *)(v23 + 896) = v23 + 64;
        *(_DWORD *)(v23 + 60) = 0;
        while ( 1 )
        {
          gulDriverFailureReason = 0;
          v27 = SystemLoadGdiDriverInformation;
          *v22 = String2;
          if ( !v26 )
            v27 = SystemLoadGdiDriverInSystemSpaceInformation;
          v29 = ZwSetSystemInformation(v27, v22, 0x38uLL);
          if ( v29 >= 0 )
            goto LABEL_20;
          if ( v29 != -1073741554 )
            gulDriverFailureReason = 3;
          if ( v26 )
            goto LABEL_59;
          if ( v29 != -1073741772 )
            break;
          if ( v25 )
          {
            v25 = 0;
            FreeSystemRelativePath(&String2);
            if ( (unsigned int)MakeSystemDriversRelativePath(Source, &String2) )
              continue;
          }
          goto LABEL_61;
        }
        if ( v29 == -1073741554 )
        {
          memset(SystemInformation, 0, sizeof(SystemInformation));
          ReturnLength = 0;
          v32 = 0;
          AnsiString = 0LL;
          DestinationString = 0LL;
          v33 = wcsrchr(Source, 0x5Cu);
          v34 = v33 ? v33 + 1 : Source;
          RtlInitUnicodeString(&DestinationString, v34);
          v29 = RtlUnicodeStringToAnsiString(&AnsiString, &DestinationString, 1u);
          if ( v29 >= 0 )
          {
            v29 = ZwQuerySystemInformation(SystemModuleInformation, SystemInformation, 0x130u, &ReturnLength);
            if ( (int)(v29 + 0x80000000) < 0 || v29 == -1073741820 )
            {
              v35 = 296 * SystemInformation[0];
              v36 = (_DWORD *)PALLOCMEM2((unsigned int)(296 * SystemInformation[0] + 8));
              v37 = v36;
              if ( v36 )
              {
                v29 = ZwQuerySystemInformation(SystemModuleInformation, v36, v35 + 8, &ReturnLength);
                if ( v29 >= 0 )
                {
                  v38 = 0;
                  if ( *v37 )
                  {
                    while ( 1 )
                    {
                      v39 = v38;
                      if ( !strnicmp(
                              (const char *)&v37[74 * v38 + 12] + HIWORD(v37[74 * v38 + 11]),
                              AnsiString.Buffer,
                              AnsiString.Length) )
                        break;
                      if ( ++v38 >= *v37 )
                        goto LABEL_48;
                    }
                    Size = 0;
                    for ( j = RtlImageDirectoryEntryToData(gpvWin32kImageBase, 1u, 1u, &Size); j; j += 5 )
                    {
                      v41 = j[3];
                      if ( !v41 || !*j )
                        break;
                      if ( !strnicmp((const char *)gpvWin32kImageBase + v41, AnsiString.Buffer, AnsiString.Length) )
                      {
                        Size = 0;
                        v42 = *(char **)&v37[74 * v39 + 6];
                        v22[2].Buffer = (PWSTR)RtlImageDirectoryEntryToData(v42, 1u, 0, &Size);
                        v32 = 1;
                        AddressOfEntryPoint = RtlImageNtHeader(v42)->OptionalHeader.AddressOfEntryPoint;
                        *(_QWORD *)&v22[1].Length = v42;
                        *(_QWORD *)&v22[2].Length = &v42[AddressOfEntryPoint];
                        v22[1].Buffer = 0LL;
                        goto LABEL_49;
                      }
                    }
LABEL_48:
                    v32 = 0;
                  }
                }
LABEL_49:
                Win32FreePool(v37);
              }
            }
            RtlFreeAnsiString(&AnsiString);
            if ( v32 )
            {
              *(_DWORD *)(v24 + 32) |= 2u;
LABEL_20:
              v30 = *(unsigned int *)(v24 + 32);
              *(_DWORD *)(v24 + 56) = -1;
              *(_QWORD *)(v24 + 16) = v22;
              *(_DWORD *)(v24 + 28) = 1;
              *(_DWORD *)(v24 + 24) = 5;
              *(_DWORD *)(v24 + 32) = v30 ^ ((unsigned __int8)v30 ^ (unsigned __int8)(4 * a5)) & 4;
              if ( gpldevDrivers )
                *((_QWORD *)gpldevDrivers + 1) = v24;
              *(_QWORD *)v24 = gpldevDrivers;
              *(_QWORD *)(v24 + 8) = 0LL;
              gpldevDrivers = (struct _LDEV *)v24;
              v31 = WdLogNewEntry5_WdTrace(v30, v28);
              *(_QWORD *)(v31 + 24) = v24;
              WdLogEvent5_WdTrace(v31);
              return (struct _LDEV *)v24;
            }
          }
        }
LABEL_59:
        if ( v29 == -1073741702 )
          DrvLogDisplayDriverEvent(3LL);
      }
LABEL_61:
      Win32FreePool(v22);
    }
    if ( v24 )
      Win32FreePool(v24);
LABEL_10:
    FreeSystemRelativePath(&String2);
  }
  v20 = WdLogNewEntry5_WdTrace(v13, v12);
  *(_QWORD *)(v20 + 24) = v6;
  WdLogEvent5_WdTrace(v20);
  return v6;
}
