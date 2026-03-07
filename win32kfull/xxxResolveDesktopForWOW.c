__int64 __fastcall xxxResolveDesktopForWOW(PUNICODE_STRING Destination)
{
  UNICODE_STRING v2; // xmm1
  __int16 v3; // cx
  unsigned __int64 v4; // xmm0_8
  _WORD *i; // rdx
  int v6; // edi
  NTSTATUS v7; // edi
  struct _UNICODE_STRING *v8; // r15
  __int64 v9; // r8
  char *v10; // rsi
  __int64 v12; // rdx
  int v13; // edi
  PVOID BaseAddress; // [rsp+30h] [rbp-2A8h] BYREF
  struct _UNICODE_STRING Destinationa; // [rsp+38h] [rbp-2A0h] BYREF
  char *v16; // [rsp+48h] [rbp-290h]
  ULONG_PTR RegionSize[2]; // [rsp+50h] [rbp-288h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-278h] BYREF
  UNICODE_STRING Source; // [rsp+70h] [rbp-268h] BYREF
  PUNICODE_STRING v20; // [rsp+80h] [rbp-258h]
  HANDLE Handle; // [rsp+88h] [rbp-250h] BYREF
  _BYTE v22[528]; // [rsp+A0h] [rbp-238h] BYREF

  v20 = Destination;
  DestinationString = 0LL;
  Source = 0LL;
  *(_QWORD *)&Destinationa.Length = 34209792LL;
  memset_0(v22, 0, 0x20AuLL);
  Handle = 0LL;
  BaseAddress = 0LL;
  Destinationa.Buffer = (PWSTR)v22;
  if ( !Destination->Length )
  {
    RtlInitUnicodeString(&DestinationString, L"Default");
LABEL_8:
    v6 = 1;
    goto LABEL_10;
  }
  v2 = *Destination;
  Source = v2;
  v3 = (unsigned __int16)_mm_cvtsi128_si32((__m128i)v2) >> 1;
  v4 = _mm_srli_si128((__m128i)v2, 8).m128i_u64[0];
  for ( i = (_WORD *)v4; v3; --v3 )
  {
    if ( *i == 92 )
      break;
    ++i;
  }
  if ( !v3 )
  {
    DestinationString = v2;
    goto LABEL_8;
  }
  DestinationString.Buffer = i + 1;
  DestinationString.MaximumLength = 2 * v3 - 2;
  DestinationString.Length = DestinationString.MaximumLength;
  Source.Length = 2 * ((__int64)((__int64)i - v4) >> 1);
  *i = 0;
  v6 = 0;
  RtlAppendUnicodeToString(&Destinationa, szWindowStationDirectory);
  RtlAppendUnicodeToString(&Destinationa, L"\\");
  RtlAppendUnicodeStringToString(&Destinationa, &Source);
LABEL_10:
  if ( v6 )
  {
    RtlInitUnicodeString(&Source, L"WinSta0");
    RtlAppendUnicodeToString(&Destinationa, szWindowStationDirectory);
    RtlAppendUnicodeToString(&Destinationa, L"\\");
    RtlAppendUnicodeStringToString(&Destinationa, &Source);
  }
  RegionSize[0] = 586LL;
  v7 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x1000u, 4u);
  v8 = (struct _UNICODE_STRING *)((char *)BaseAddress + 48);
  v16 = (char *)BaseAddress + 48;
  if ( v7 < 0 )
    return 3221225495LL;
  SafeCopyUnicodeString((PUNICODE_STRING)BaseAddress + 3, &Destinationa);
  *(_DWORD *)BaseAddress = 48;
  *((_QWORD *)BaseAddress + 1) = 0LL;
  *((_DWORD *)BaseAddress + 6) = 64;
  *((_QWORD *)BaseAddress + 2) = v8;
  *((_QWORD *)BaseAddress + 4) = 0LL;
  *((_QWORD *)BaseAddress + 5) = 0LL;
  v10 = (char *)OpenWindowStation((__int64)BaseAddress, 0x2000000, v9);
  v16 = v10;
  if ( v10 )
  {
    SafeCopyUnicodeString(v8, &DestinationString);
    *(_DWORD *)BaseAddress = 48;
    *((_QWORD *)BaseAddress + 1) = v10;
    *((_DWORD *)BaseAddress + 6) = 64;
    *((_QWORD *)BaseAddress + 2) = v8;
    *((_QWORD *)BaseAddress + 4) = 0LL;
    *((_QWORD *)BaseAddress + 5) = 0LL;
    v13 = OpenDesktop((__int64)BaseAddress, v12, 0LL, 0x2000000, &Handle);
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, RegionSize, 0x8000u);
    ObCloseHandle(v10, 1);
    if ( v13 >= 0 )
    {
      CloseProtectedHandle(Handle, 1);
      RtlCopyUnicodeString(Destination, &Source);
      RtlAppendUnicodeToString(Destination, L"\\");
      RtlAppendUnicodeStringToString(Destination, &DestinationString);
      return 0LL;
    }
    else
    {
      return (unsigned int)v13;
    }
  }
  else
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, RegionSize, 0x8000u);
    return 3221225506LL;
  }
}
