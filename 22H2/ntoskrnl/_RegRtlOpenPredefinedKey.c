/*
 * XREFs of _RegRtlOpenPredefinedKey @ 0x14085C760
 * Callers:
 *     _RegRtlOpenKeyTransacted @ 0x1406CEE20 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlCreateKeyTransacted @ 0x14079844C (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlQueryKeyPathName @ 0x14086223C (_RegRtlQueryKeyPathName.c)
 * Callees:
 *     _RegRtlOpenKeyTransacted @ 0x1406CEE20 (_RegRtlOpenKeyTransacted.c)
 *     RtlFreeUnicodeString @ 0x14076F8E0 (RtlFreeUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1407FB180 (RtlFormatCurrentUserKeyPath.c)
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
