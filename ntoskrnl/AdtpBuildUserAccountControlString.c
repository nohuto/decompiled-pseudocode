__int64 __fastcall AdtpBuildUserAccountControlString(
        ULONG Value,
        ULONG a2,
        UNICODE_STRING *a3,
        _BYTE *a4,
        PUNICODE_STRING Destination,
        _BYTE *a6,
        PUNICODE_STRING DestinationString,
        _BYTE *a8)
{
  unsigned int v8; // ebx
  int v12; // edi
  __int64 Pool2; // rax
  wchar_t *v14; // rax
  ULONG v15; // r12d
  ULONG v16; // r15d
  int v17; // edx
  int v18; // eax
  unsigned __int16 v19; // di
  wchar_t *v20; // rax
  unsigned int v21; // esi
  int v22; // edi
  UNICODE_STRING String; // [rsp+20h] [rbp-50h] BYREF
  ULONG Valuea; // [rsp+30h] [rbp-40h]
  _BYTE *v26; // [rsp+38h] [rbp-38h]
  _BYTE *v27; // [rsp+40h] [rbp-30h]
  char v28; // [rsp+48h] [rbp-28h] BYREF

  v8 = 0;
  *a4 = 0;
  v12 = 0;
  v27 = a8;
  *a6 = 0;
  *a8 = 0;
  *(_DWORD *)&a3->Length = 1441792;
  Valuea = a2;
  v26 = a6;
  String.Buffer = (wchar_t *)&v28;
  *(_QWORD *)&String.Length = 1310720LL;
  Pool2 = ExAllocatePool2(256LL, 22LL, 1799447891LL);
  a3->Buffer = (wchar_t *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  *a4 = 1;
  *(_DWORD *)&Destination->Length = 1441792;
  v14 = (wchar_t *)ExAllocatePool2(256LL, 22LL, 1799447891LL);
  Destination->Buffer = v14;
  if ( !v14 )
    return (unsigned int)-1073741801;
  *v26 = 1;
  RtlAppendUnicodeToString(a3, L"0x");
  RtlIntegerToUnicodeString(Value, 0x10u, &String);
  RtlAppendUnicodeStringToString(a3, &String);
  RtlAppendUnicodeToString(Destination, L"0x");
  v15 = Valuea;
  RtlIntegerToUnicodeString(Valuea, 0x10u, &String);
  RtlAppendUnicodeStringToString(Destination, &String);
  v16 = v15 ^ Value;
  if ( !v16 )
  {
    RtlInitUnicodeString(DestinationString, L"-");
    return v8;
  }
  v17 = 1;
  do
  {
    v18 = v12++;
    if ( (v17 & v16) == 0 )
      v12 = v18;
    v17 *= 2;
  }
  while ( v17 );
  v19 = 32 * v12 + 2;
  DestinationString->Length = 0;
  DestinationString->MaximumLength = v19;
  v20 = (wchar_t *)ExAllocatePool2(256LL, v19, 1799447891LL);
  DestinationString->Buffer = v20;
  if ( v20 )
  {
    v21 = 0;
    v22 = 1;
    *v27 = 1;
    do
    {
      if ( !v22 )
        break;
      if ( (v22 & v16) != 0 && RtlIntegerToUnicodeString(v21 + ((v15 & v22) != 0 ? 2080 : 2048), 0xAu, &String) >= 0 )
      {
        RtlAppendUnicodeToString(DestinationString, L"\r\n\t\t%%");
        RtlAppendUnicodeStringToString(DestinationString, &String);
      }
      ++v21;
      v22 *= 2;
    }
    while ( v21 < 0x20 );
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v8;
}
