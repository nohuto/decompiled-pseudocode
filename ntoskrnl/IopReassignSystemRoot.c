/*
 * XREFs of IopReassignSystemRoot @ 0x140B6CE8C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140208BFC (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     NtCreateSymbolicLinkObject @ 0x140740CD0 (NtCreateSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x140755C30 (NtQuerySymbolicLinkObject.c)
 *     NtOpenSymbolicLinkObject @ 0x1407563E0 (NtOpenSymbolicLinkObject.c)
 *     NtMakeTemporaryObject @ 0x140791BC0 (NtMakeTemporaryObject.c)
 *     RtlUnicodeStringToAnsiString @ 0x1407A34D0 (RtlUnicodeStringToAnsiString.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 */

char __fastcall IopReassignSystemRoot(__int64 a1, STRING *a2)
{
  __int64 v2; // r9
  int v4; // eax
  int SymbolicLinkObject; // ebx
  HANDLE Handle; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-D8h] BYREF
  _DWORD v9[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+40h] [rbp-C0h]
  UNICODE_STRING *p_DestinationString; // [rsp+48h] [rbp-B8h]
  int v12; // [rsp+50h] [rbp-B0h]
  int v13; // [rsp+54h] [rbp-ACh]
  __int128 v14; // [rsp+58h] [rbp-A8h]
  UNICODE_STRING v15; // [rsp+68h] [rbp-98h] BYREF
  wchar_t pszDest[256]; // [rsp+80h] [rbp-80h] BYREF

  v2 = *(_QWORD *)(a1 + 184);
  v9[1] = 0;
  v13 = 0;
  Handle = 0LL;
  v15 = 0LL;
  DestinationString = 0LL;
  if ( RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\ArcName\\%S", v2) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, pszDest);
  DestinationString.MaximumLength = 512;
  while ( 1 )
  {
    v9[0] = 48;
    p_DestinationString = &DestinationString;
    v10 = 0LL;
    v12 = 576;
    v14 = 0LL;
    v4 = NtOpenSymbolicLinkObject((unsigned __int64)&Handle, 983041, (__int64)v9);
    if ( v4 == -1073741788 )
      break;
    if ( v4 >= 0 )
    {
      DestinationString.Length = 0;
      SymbolicLinkObject = NtQuerySymbolicLinkObject(Handle, (unsigned __int64)&DestinationString, 0LL);
      ObCloseHandle(Handle, 0);
      if ( SymbolicLinkObject >= 0 )
        continue;
    }
    return 0;
  }
  if ( RtlUnicodeStringToAnsiString(a2, &DestinationString, 0) < 0 )
    return 0;
  RtlInitUnicodeString(&v15, L"\\Device\\BootDevice");
  v9[0] = 48;
  p_DestinationString = &v15;
  v10 = 0LL;
  v12 = 576;
  v14 = 0LL;
  if ( (int)NtOpenSymbolicLinkObject((unsigned __int64)&Handle, 983041, (__int64)v9) < 0 )
    return 0;
  NtMakeTemporaryObject(Handle);
  ObCloseHandle(Handle, 0);
  v9[0] = 48;
  p_DestinationString = &v15;
  v10 = 0LL;
  v12 = 592;
  v14 = 0LL;
  NtCreateSymbolicLinkObject((unsigned __int64)&Handle, 983041, (__int64)v9, &DestinationString);
  ObCloseHandle(Handle, 0);
  return 1;
}
