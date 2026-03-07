__int64 __fastcall SddlpUuidFromString(wchar_t *SourceString, GUID *Guid)
{
  unsigned int v2; // edi
  rsize_t v5; // rsi
  __int64 v6; // rax
  wchar_t *v7; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-88h] BYREF
  wchar_t Dst[2]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v11[74]; // [rsp+34h] [rbp-74h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  if ( *SourceString == 123 )
    goto LABEL_8;
  v5 = -1LL;
  v6 = -1LL;
  do
    ++v6;
  while ( SourceString[v6] );
  if ( SourceString[v6 - 1] == 125 )
  {
LABEL_8:
    v7 = SourceString;
  }
  else
  {
    wcscpy(Dst, L"{");
    memset(v11, 0, sizeof(v11));
    do
      ++v5;
    while ( SourceString[v5] );
    wcsncat_s(Dst, 0x27uLL, SourceString, v5);
    wcsncat_s(Dst, 0x27uLL, L"}", 2uLL);
    v7 = Dst;
  }
  RtlInitUnicodeString(&DestinationString, v7);
  LOBYTE(v2) = RtlGUIDFromString(&DestinationString, Guid) >= 0;
  return v2;
}
