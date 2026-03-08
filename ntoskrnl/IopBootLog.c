/*
 * XREFs of IopBootLog @ 0x14072A928
 * Callers:
 *     PipCallDriverAddDevice @ 0x1406C644C (PipCallDriverAddDevice.c)
 *     IopLoadDriver @ 0x14072A9DC (IopLoadDriver.c)
 *     IopInitializeBootLogging @ 0x140941EE0 (IopInitializeBootLogging.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140208BFC (RtlStringCchPrintfW.c)
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     IopOpenRegistryKey @ 0x1407803E0 (IopOpenRegistryKey.c)
 *     IopBootLogToFile @ 0x140941244 (IopBootLogToFile.c)
 */

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
