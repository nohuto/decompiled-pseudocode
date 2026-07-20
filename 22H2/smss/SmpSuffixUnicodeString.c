/*
 * XREFs of SmpSuffixUnicodeString @ 0x14000F520
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140009604 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall SmpSuffixUnicodeString(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int16 v4; // r8
  WCHAR *v5; // rcx
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_WORD *)a2 < 0x24u )
    return 0;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_WORD *)a2 - 36;
  String2.Length = 36;
  v5 = (WCHAR *)(v3 + 2 * ((unsigned __int64)v4 >> 1));
  LOWORD(v3) = *(_WORD *)(a2 + 2) - v4;
  String2.Buffer = v5;
  String2.MaximumLength = v3;
  return RtlEqualUnicodeString(&SmpStateMigrationKeyword, &String2, 1u);
}
