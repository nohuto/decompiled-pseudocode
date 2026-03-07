void __fastcall IopBootLog(PCUNICODE_STRING Source, char a2)
{
  PUNICODE_STRING v4; // rdi
  const UNICODE_STRING *v5; // rdx
  unsigned __int16 Length; // bx
  wchar_t *Buffer; // rsi
  int Data; // [rsp+28h] [rbp-E0h]
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING Sourcea; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING v11; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING v12; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING ValueName; // [rsp+78h] [rbp-90h] BYREF
  wchar_t pszDest[256]; // [rsp+88h] [rbp-80h] BYREF
  char v15; // [rsp+288h] [rbp+180h] BYREF

  *(_QWORD *)&DestinationString.Length = 0x1000000LL;
  DestinationString.Buffer = (wchar_t *)&v15;
  v12 = 0LL;
  ValueName = 0LL;
  v11 = 0LL;
  Sourcea = 0LL;
  if ( qword_140D53028 )
  {
    ExAcquireResourceExclusiveLite((PERESOURCE)&qword_140D53028[4], 1u);
    v4 = qword_140D53028;
    v5 = qword_140D53028;
    if ( !a2 )
      v5 = qword_140D53028 + 1;
    RtlCopyUnicodeString(&DestinationString, v5);
    RtlInitUnicodeString(&Sourcea, L" ");
    RtlAppendUnicodeStringToString(&DestinationString, &Sourcea);
    RtlAppendUnicodeStringToString(&DestinationString, Source);
    RtlInitUnicodeString(&v11, L"\r\n");
    RtlAppendUnicodeStringToString(&DestinationString, &v11);
    Length = DestinationString.Length;
    Buffer = DestinationString.Buffer;
    if ( DestinationString.Length == DestinationString.MaximumLength )
    {
      Length = DestinationString.Length - 2;
      DestinationString.Length = Length;
      DestinationString.Buffer[(unsigned __int64)Length >> 1] = 0;
    }
    ++LODWORD(v4[10].Buffer);
    RtlStringCchPrintfW(pszDest, 0x100uLL, L"%d");
    RtlInitUnicodeString(&v12, pszDest);
    RtlInitUnicodeString(&ValueName, &word_1408834C0);
    if ( BYTE4(qword_140D53028[10].Buffer) )
    {
      IopBootLogToFile(&DestinationString);
    }
    else
    {
      *(_QWORD *)&Sourcea.Length = 0LL;
      *(_QWORD *)&DestinationString.Length = 0LL;
      if ( (int)IopOpenRegistryKey(
                  &DestinationString,
                  0LL,
                  &CmRegistryMachineSystemCurrentControlSetControlBootLog,
                  983103LL,
                  1) >= 0 )
      {
        LOBYTE(Data) = 1;
        if ( (int)IopOpenRegistryKey(&Sourcea, *(_QWORD *)&DestinationString.Length, &v12, 983103LL, Data) >= 0 )
        {
          ZwSetValueKey(*(HANDLE *)&Sourcea.Length, &ValueName, 0, 1u, Buffer, Length + 2);
          ZwClose(*(HANDLE *)&Sourcea.Length);
        }
        ZwClose(*(HANDLE *)&DestinationString.Length);
      }
    }
    ExReleaseResourceLite((PERESOURCE)&qword_140D53028[4]);
  }
}
