__int64 __fastcall CreateSystemRootLink(_QWORD *a1)
{
  int DirectoryObject; // eax
  int v3; // eax
  __int64 v4; // r9
  NTSTATUS v5; // eax
  int SymbolicLinkObject; // eax
  NTSTATUS v7; // eax
  int v8; // eax
  __int64 v9; // r9
  NTSTATUS v10; // eax
  int v11; // eax
  int v12; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  HANDLE v15; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+48h] [rbp-C0h]
  UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-B8h]
  __int64 v19; // [rsp+58h] [rbp-B0h]
  __int64 v20; // [rsp+60h] [rbp-A8h]
  _QWORD v21[3]; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING v23; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-70h] BYREF
  wchar_t pszDest[256]; // [rsp+A8h] [rbp-60h] BYREF

  v16 = 48LL;
  v19 = 80LL;
  Handle = 0LL;
  v15 = 0LL;
  DestinationString = 0LL;
  v23 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\ArcName");
  v17 = 0LL;
  p_DestinationString = &DestinationString;
  v20 = SePublicDefaultUnrestrictedSd;
  memset(v21, 0, sizeof(v21));
  DirectoryObject = NtCreateDirectoryObject((__int64)&Handle);
  if ( DirectoryObject < 0 )
    KeBugCheckEx(0x64u, DirectoryObject, 1uLL, 0LL, 0LL);
  NtClose(Handle);
  RtlInitUnicodeString(&DestinationString, L"\\Device");
  LODWORD(v16) = 48;
  p_DestinationString = &DestinationString;
  v20 = SePublicDefaultUnrestrictedSd;
  v17 = 0LL;
  LODWORD(v19) = 80;
  v21[0] = 0LL;
  v3 = NtCreateDirectoryObject((__int64)&Handle);
  if ( v3 < 0 )
    KeBugCheckEx(0x64u, v3, 2uLL, 0LL, 0LL);
  NtClose(Handle);
  RtlInitUnicodeString(&v23, L"\\Device\\BootDevice");
  v4 = a1[23];
  p_DestinationString = &v23;
  v20 = SePublicDefaultUnrestrictedSd;
  LODWORD(v16) = 48;
  v17 = 0LL;
  LODWORD(v19) = 80;
  v21[0] = 0LL;
  v5 = RtlStringCbPrintfW(pszDest, 0x200uLL, L"\\ArcName\\%S", v4);
  if ( v5 < 0 )
    KeBugCheckEx(0x64u, v5, 3uLL, 0LL, 0LL);
  RtlInitUnicodeString((PUNICODE_STRING)&v21[1], pszDest);
  SymbolicLinkObject = NtCreateSymbolicLinkObject(
                         (unsigned __int64)&v15,
                         983041,
                         (__int64)&v16,
                         (UNICODE_STRING *)&v21[1]);
  if ( SymbolicLinkObject < 0 )
    KeBugCheckEx(0x64u, SymbolicLinkObject, 4uLL, 0LL, 0LL);
  NtClose(v15);
  RtlInitUnicodeString(&v23, L"\\SystemRoot");
  LODWORD(v16) = 48;
  p_DestinationString = &v23;
  v20 = SePublicDefaultUnrestrictedSd;
  BugCheckParameter4 = a1[25];
  v17 = 0LL;
  LODWORD(v19) = 80;
  v21[0] = 0LL;
  v7 = RtlStringCbPrintfW(pszDest, 0x200uLL, L"%s%S", L"\\Device\\BootDevice", BugCheckParameter4);
  if ( v7 < 0 )
    KeBugCheckEx(0x64u, v7, 5uLL, 0LL, 0LL);
  RtlInitUnicodeString((PUNICODE_STRING)&v21[1], pszDest);
  LOWORD(v21[1]) -= 2;
  v8 = NtCreateSymbolicLinkObject((unsigned __int64)&v15, 983041, (__int64)&v16, (UNICODE_STRING *)&v21[1]);
  if ( v8 < 0 )
    KeBugCheckEx(0x64u, v8, 6uLL, 0LL, 0LL);
  NtClose(v15);
  RtlInitUnicodeString(&v23, L"\\Device\\OSDataDevice");
  v9 = a1[42];
  p_DestinationString = &v23;
  v20 = SePublicDefaultUnrestrictedSd;
  LODWORD(v16) = 48;
  v17 = 0LL;
  LODWORD(v19) = 80;
  v21[0] = 0LL;
  if ( !v9 )
    v9 = a1[23];
  v10 = RtlStringCbPrintfW(pszDest, 0x200uLL, L"\\ArcName\\%S", v9);
  if ( v10 < 0 )
    KeBugCheckEx(0x64u, v10, 7uLL, 0LL, 0LL);
  RtlInitUnicodeString((PUNICODE_STRING)&v21[1], pszDest);
  v11 = NtCreateSymbolicLinkObject((unsigned __int64)&v15, 983041, (__int64)&v16, (UNICODE_STRING *)&v21[1]);
  if ( v11 < 0 )
    KeBugCheckEx(0x64u, v11, 8uLL, 0LL, 0LL);
  NtClose(v15);
  RtlInitUnicodeString(&v23, L"\\OSDataRoot");
  LODWORD(v16) = 48;
  p_DestinationString = &v23;
  v20 = SePublicDefaultUnrestrictedSd;
  v17 = 0LL;
  LODWORD(v19) = 80;
  v21[0] = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)&v21[1], L"\\Device\\OSDataDevice");
  v12 = NtCreateSymbolicLinkObject((unsigned __int64)&v15, 983041, (__int64)&v16, (UNICODE_STRING *)&v21[1]);
  if ( v12 < 0 )
    KeBugCheckEx(0x64u, v12, 9uLL, 0LL, 0LL);
  NtClose(v15);
  return 0LL;
}
