/*
 * XREFs of _RegRtlOpenPredefinedKey @ 0x140858A9C
 * Callers:
 *     _RegRtlCreateKeyTransacted @ 0x14068804C (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlOpenKeyTransacted @ 0x1406D43A0 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlQueryKeyPathName @ 0x14085E3CC (_RegRtlQueryKeyPathName.c)
 * Callees:
 *     _RegRtlOpenKeyTransacted @ 0x1406D43A0 (_RegRtlOpenKeyTransacted.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140747770 (RtlFormatCurrentUserKeyPath.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall RegRtlOpenPredefinedKey(__int64 a1, HANDLE *a2)
{
  wchar_t *Buffer; // rdx
  int v4; // ebx
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  UnicodeString = 0LL;
  switch ( a1 )
  {
    case 2147483650LL:
      Buffer = L"\\REGISTRY\\MACHINE";
LABEL_3:
      v4 = RegRtlOpenKeyTransacted(0LL, Buffer, 0, 0x2000000u, a2, 0LL);
      goto LABEL_4;
    case 2147483648LL:
      Buffer = L"\\REGISTRY\\MACHINE\\SOFTWARE\\CLASSES";
      goto LABEL_3;
    case 2147483651LL:
      Buffer = L"\\REGISTRY\\USER";
      goto LABEL_3;
    case 2147483653LL:
      Buffer = L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\HARDWARE PROFILES\\CURRENT";
      goto LABEL_3;
  }
  if ( a1 != 2147483649LL )
  {
    v4 = -1073741816;
    goto LABEL_4;
  }
  v4 = RtlFormatCurrentUserKeyPath(&UnicodeString);
  if ( v4 >= 0 )
  {
    Buffer = UnicodeString.Buffer;
    goto LABEL_3;
  }
LABEL_4:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v4;
}
