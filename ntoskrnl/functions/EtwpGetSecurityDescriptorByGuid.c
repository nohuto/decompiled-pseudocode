char __fastcall EtwpGetSecurityDescriptorByGuid(unsigned int *a1, _QWORD *a2)
{
  int v4; // [rsp+20h] [rbp-D8h]
  int v5; // [rsp+28h] [rbp-D0h]
  int v6; // [rsp+30h] [rbp-C8h]
  int v7; // [rsp+38h] [rbp-C0h]
  int v8; // [rsp+40h] [rbp-B8h]
  int v9; // [rsp+48h] [rbp-B0h]
  int v10; // [rsp+50h] [rbp-A8h]
  int v11; // [rsp+58h] [rbp-A0h]
  int v12; // [rsp+60h] [rbp-98h]
  int v13; // [rsp+68h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-88h] BYREF
  wchar_t pszDest[40]; // [rsp+80h] [rbp-78h] BYREF

  v13 = *((unsigned __int8 *)a1 + 15);
  v12 = *((unsigned __int8 *)a1 + 14);
  v11 = *((unsigned __int8 *)a1 + 13);
  v10 = *((unsigned __int8 *)a1 + 12);
  v9 = *((unsigned __int8 *)a1 + 11);
  v8 = *((unsigned __int8 *)a1 + 10);
  v7 = *((unsigned __int8 *)a1 + 9);
  v6 = *((unsigned __int8 *)a1 + 8);
  v5 = *((unsigned __int16 *)a1 + 3);
  v4 = *((unsigned __int16 *)a1 + 2);
  RtlStringCbPrintfW(
    pszDest,
    0x4CuLL,
    L"%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",
    *a1,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    0LL,
    0LL);
  RtlInitUnicodeString(&DestinationString, pszDest);
  EtwpGetGuidSecurityDescriptor(&DestinationString, a2);
  if ( *a2 )
    return 1;
  *a2 = EtwpDefaultTraceSecurityDescriptor;
  return 0;
}
