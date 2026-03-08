/*
 * XREFs of ?SetFilterKeys@@YAHPEAUtagFILTERKEYS@@@Z @ 0x1C017B1F4
 * Callers:
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1C017B654 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00CD374 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     FastWriteProfileValue @ 0x1C015D3A0 (FastWriteProfileValue.c)
 */

__int64 __fastcall SetFilterKeys(struct tagFILTERKEYS *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // edi
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // rax
  unsigned int v10; // edi
  unsigned __int16 v12[40]; // [rsp+30h] [rbp-29h] BYREF

  memset(v12, 0, sizeof(v12));
  RtlStringCchPrintfW(v12, 40LL, L"%d", *((unsigned int *)a1 + 1));
  v2 = -1LL;
  v3 = -1LL;
  do
    ++v3;
  while ( v12[v3] );
  v4 = (unsigned int)FastWriteProfileValue(0LL, 0xFu, (const WCHAR *)L"Flags", 1u, v12, 2 * (int)v3 + 2);
  RtlStringCchPrintfW(v12, 40LL, L"%d", *((unsigned int *)a1 + 2));
  v5 = -1LL;
  do
    ++v5;
  while ( v12[v5] );
  v6 = (unsigned int)FastWriteProfileValue(0LL, 0xFu, (const WCHAR *)L"DelayBeforeAcceptance", 1u, v12, 2 * (int)v5 + 2) & v4;
  RtlStringCchPrintfW(v12, 40LL, L"%d", *((unsigned int *)a1 + 3));
  v7 = -1LL;
  do
    ++v7;
  while ( v12[v7] );
  v8 = (unsigned int)FastWriteProfileValue(0LL, 0xFu, (const WCHAR *)L"AutoRepeatDelay", 1u, v12, 2 * (int)v7 + 2) & v6;
  RtlStringCchPrintfW(v12, 40LL, L"%d", *((unsigned int *)a1 + 4));
  v9 = -1LL;
  do
    ++v9;
  while ( v12[v9] );
  v10 = (unsigned int)FastWriteProfileValue(0LL, 0xFu, (const WCHAR *)L"AutoRepeatRate", 1u, v12, 2 * (int)v9 + 2) & v8;
  RtlStringCchPrintfW(v12, 40LL, L"%d", *((unsigned int *)a1 + 5));
  do
    ++v2;
  while ( v12[v2] );
  return v10 & (unsigned int)FastWriteProfileValue(0LL, 0xFu, (const WCHAR *)L"BounceTime", 1u, v12, 2 * (int)v2 + 2);
}
