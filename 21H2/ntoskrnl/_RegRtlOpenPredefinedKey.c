/*
 * XREFs of _RegRtlOpenPredefinedKey @ 0x14085D278
 * Callers:
 *     _RegRtlCreateKeyTransacted @ 0x140772D80 (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlOpenKeyTransacted @ 0x14078003C (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlQueryKeyPathName @ 0x1408621F8 (_RegRtlQueryKeyPathName.c)
 * Callees:
 *     RtlFormatCurrentUserKeyPath @ 0x14066B5D0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     _RegRtlOpenKeyTransacted @ 0x14078003C (_RegRtlOpenKeyTransacted.c)
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
