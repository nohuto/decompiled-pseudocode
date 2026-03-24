/*
 * XREFs of ?SetFilterKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagFILTERKEYS@@@Z @ 0x1C0138454
 * Callers:
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1C0138914 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0068828 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     FastWriteProfileValue @ 0x1C011DFA0 (FastWriteProfileValue.c)
 */

__int64 __fastcall SetFilterKeys(struct _UNICODE_STRING *a1, struct tagFILTERKEYS *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // edi
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // rax
  unsigned int v12; // edi
  wchar_t Dest[40]; // [rsp+30h] [rbp-29h] BYREF

  memset(Dest, 0, sizeof(Dest));
  RtlStringCchPrintfW(Dest, 40LL, L"%d", *((unsigned int *)a2 + 1));
  v4 = -1LL;
  v5 = -1LL;
  do
    ++v5;
  while ( Dest[v5] );
  v6 = (unsigned int)FastWriteProfileValue(a1, 0xFu, (const WCHAR *)L"Flags", 1u, Dest, 2 * (int)v5 + 2);
  RtlStringCchPrintfW(Dest, 40LL, L"%d", *((unsigned int *)a2 + 2));
  v7 = -1LL;
  do
    ++v7;
  while ( Dest[v7] );
  v8 = (unsigned int)FastWriteProfileValue(a1, 0xFu, (const WCHAR *)L"DelayBeforeAcceptance", 1u, Dest, 2 * (int)v7 + 2) & v6;
  RtlStringCchPrintfW(Dest, 40LL, L"%d", *((unsigned int *)a2 + 3));
  v9 = -1LL;
  do
    ++v9;
  while ( Dest[v9] );
  v10 = (unsigned int)FastWriteProfileValue(a1, 0xFu, (const WCHAR *)L"AutoRepeatDelay", 1u, Dest, 2 * (int)v9 + 2) & v8;
  RtlStringCchPrintfW(Dest, 40LL, L"%d", *((unsigned int *)a2 + 4));
  v11 = -1LL;
  do
    ++v11;
  while ( Dest[v11] );
  v12 = (unsigned int)FastWriteProfileValue(a1, 0xFu, (const WCHAR *)L"AutoRepeatRate", 1u, Dest, 2 * (int)v11 + 2) & v10;
  RtlStringCchPrintfW(Dest, 40LL, L"%d", *((unsigned int *)a2 + 5));
  do
    ++v4;
  while ( Dest[v4] );
  return v12 & (unsigned int)FastWriteProfileValue(a1, 0xFu, (const WCHAR *)L"BounceTime", 1u, Dest, 2 * (int)v4 + 2);
}
