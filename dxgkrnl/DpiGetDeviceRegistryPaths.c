__int64 __fastcall DpiGetDeviceRegistryPaths(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  int v5; // ebx
  int v7; // eax
  unsigned int v8; // esi
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  UnicodeString = 0LL;
  v5 = 0;
  while ( 1 )
  {
    v7 = v5 == 1 && *(_BYTE *)(v3 + 480)
       ? DpiCopyUnicodeString(&UnicodeString, (PCUNICODE_STRING)(a3 + 40))
       : DpiGetRegistryPathFromPDO(a2, v5 == 0, &UnicodeString);
    v8 = v7;
    if ( v7 >= 0 )
    {
      if ( v5 )
      {
        *(struct _UNICODE_STRING *)(v3 + 528) = UnicodeString;
        v5 = 2;
      }
      else
      {
        *(struct _UNICODE_STRING *)(v3 + 512) = UnicodeString;
        v5 = 1;
      }
    }
    *(_DWORD *)&UnicodeString.Length = 0;
    UnicodeString.Buffer = 0LL;
    if ( v7 < 0 )
      break;
    if ( v5 == 2 )
      return v8;
  }
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString((PUNICODE_STRING)(v3 + 512));
  RtlFreeUnicodeString((PUNICODE_STRING)(v3 + 528));
  return v8;
}
