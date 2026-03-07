__int64 __fastcall PiBuildAndOpenDeviceDirectoryPath(
        PCUNICODE_STRING SourceString,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  void *v7; // rdi
  __int64 v9; // r9
  unsigned int v10; // ecx
  int UnicodeString; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+80h] [rbp+8h] BYREF

  DestinationString = 0LL;
  v7 = 0LL;
  v14 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v9 = -1LL;
  do
    ++v9;
  while ( *(_WORD *)(a3 + 2 * v9) );
  v10 = *a2 + SourceString->Length + 20 + 2 * v9;
  if ( v10 <= 0xFFFE )
  {
    UnicodeString = IopAllocateUnicodeString((__int64)&DestinationString, v10);
    if ( UnicodeString >= 0 )
    {
      UnicodeString = RtlUnicodeStringPrintfEx(
                        &DestinationString,
                        0LL,
                        0x800u,
                        L"%wZ\\%ws\\%wZ\\%ws",
                        SourceString,
                        L"Devices",
                        a2,
                        a3);
      if ( UnicodeString >= 0 )
      {
        UnicodeString = PiOpenDirectoryWithRoot(SourceString, &DestinationString, (__int64)&v14);
        if ( UnicodeString < 0 )
          v7 = (void *)v14;
        else
          *a5 = v14;
      }
    }
  }
  else
  {
    UnicodeString = -2147483643;
  }
  RtlFreeUnicodeString(&DestinationString);
  if ( v7 )
    ZwClose(v7);
  return (unsigned int)UnicodeString;
}
