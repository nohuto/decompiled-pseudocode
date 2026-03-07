NTSTATUS __stdcall IoWMIOpenBlock(LPCGUID Guid, ULONG DesiredAccess, PVOID *DataBlockObject)
{
  __int64 v6; // rdx
  WCHAR *v7; // rcx
  WCHAR v8; // ax
  int v9; // r8d
  WCHAR *v10; // rax
  int v11; // r10d
  bool v12; // zf
  int v13; // edx
  int v14; // r11d
  int v15; // ecx
  int v16; // ebx
  int v17; // edi
  int Data3; // esi
  int Data2; // r14d
  int v20; // ecx
  NTSTATUS result; // eax
  int v22; // [rsp+20h] [rbp-E0h]
  int v23; // [rsp+28h] [rbp-D8h]
  int v24; // [rsp+30h] [rbp-D0h]
  int v25; // [rsp+38h] [rbp-C8h]
  int v26; // [rsp+40h] [rbp-C0h]
  int v27; // [rsp+48h] [rbp-B8h]
  int v28; // [rsp+50h] [rbp-B0h]
  int v29; // [rsp+58h] [rbp-A8h]
  int v30; // [rsp+60h] [rbp-A0h]
  int v31; // [rsp+68h] [rbp-98h]
  void *v32; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  __int128 v34; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+98h] [rbp-68h]
  __int64 v36; // [rsp+A0h] [rbp-60h]
  __int128 v37; // [rsp+A8h] [rbp-58h]
  WCHAR SourceString[9]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t pszDest[39]; // [rsp+D2h] [rbp-2Eh] BYREF

  v32 = 0LL;
  v6 = 46LL;
  DestinationString = 0LL;
  v7 = SourceString;
  do
  {
    if ( v6 == -2147483600 )
      break;
    v8 = *(WCHAR *)((char *)v7 + (char *)L"\\WmiGuid\\" - (char *)SourceString);
    if ( !v8 )
      break;
    *v7++ = v8;
    --v6;
  }
  while ( v6 );
  v9 = Guid->Data4[4];
  v10 = v7 - 1;
  v11 = Guid->Data4[3];
  v12 = v6 == 0;
  v13 = Guid->Data4[5];
  v14 = Guid->Data4[2];
  if ( !v12 )
    v10 = v7;
  v15 = Guid->Data4[6];
  v16 = Guid->Data4[1];
  v17 = Guid->Data4[0];
  Data3 = Guid->Data3;
  Data2 = Guid->Data2;
  *v10 = 0;
  v31 = Guid->Data4[7];
  v30 = v15;
  v29 = v13;
  v28 = v9;
  v27 = v11;
  v26 = v14;
  v25 = v16;
  v24 = v17;
  v23 = Data3;
  v22 = Data2;
  RtlStringCchPrintfW(
    pszDest,
    0x25uLL,
    L"%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",
    Guid->Data1,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  RtlInitUnicodeString(&DestinationString, SourceString);
  p_DestinationString = &DestinationString;
  v36 = 512LL;
  v34 = 0LL;
  LODWORD(v34) = 48;
  v37 = 0LL;
  if ( (DesiredAccess & 4) != 0 )
    v20 = 2244928;
  else
    v20 = (DesiredAccess & 0x40000) != 0 ? 2244872 : 2244924;
  result = WmipOpenBlock(v20, 0LL, (__int64)&v34, DesiredAccess, &v32);
  if ( result >= 0 )
  {
    *DataBlockObject = v32;
    return 0;
  }
  return result;
}
