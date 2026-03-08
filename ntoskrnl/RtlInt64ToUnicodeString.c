/*
 * XREFs of RtlInt64ToUnicodeString @ 0x14071C710
 * Callers:
 *     ExpWnfComposeValueName @ 0x14071C674 (ExpWnfComposeValueName.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlLargeIntegerToChar @ 0x14071C7C0 (RtlLargeIntegerToChar.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __stdcall RtlInt64ToUnicodeString(ULONGLONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  STRING SourceString; // [rsp+20h] [rbp-88h] BYREF
  ULONGLONG v7[2]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v8[80]; // [rsp+40h] [rbp-68h] BYREF

  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  v7[0] = Value;
  result = RtlLargeIntegerToChar(v7, Base, 65LL, v8);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 65;
    SourceString.Buffer = v8;
    v5 = -1LL;
    do
      ++v5;
    while ( v8[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(String, &SourceString, 0);
  }
  return result;
}
