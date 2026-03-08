/*
 * XREFs of KsepStringAnsiToUnicode @ 0x1407FFFD0
 * Callers:
 *     KsepMatchInitCpuInfo @ 0x140B35128 (KsepMatchInitCpuInfo.c)
 *     KsepMatchInitAcpiOemInfo @ 0x140B351B8 (KsepMatchInitAcpiOemInfo.c)
 * Callees:
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall KsepStringAnsiToUnicode(wchar_t *a1, unsigned __int16 a2, char *a3, unsigned __int16 a4)
{
  STRING v5; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING v6; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)(&v5.MaximumLength + 1) = 0;
  *(_DWORD *)(&v6.MaximumLength + 1) = 0;
  v6.Buffer = a1;
  v6.MaximumLength = a2;
  v5.Buffer = a3;
  v6.Length = 0;
  v5.MaximumLength = a4;
  v5.Length = a4;
  return RtlAnsiStringToUnicodeString(&v6, &v5, 0);
}
