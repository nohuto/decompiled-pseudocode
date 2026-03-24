/*
 * XREFs of ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1C0138C14
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C000CD30 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C000D590 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0068828 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 *     FastWriteProfileValue @ 0x1C011DFA0 (FastWriteProfileValue.c)
 */

__int64 __fastcall SpiSetToggleKeys(int a1, unsigned int *a2, int a3, unsigned int a4, int *a5)
{
  unsigned int v9; // r9d
  unsigned int v10; // eax
  int v11; // r9d
  __int64 v12; // rax
  wchar_t Dest[40]; // [rsp+30h] [rbp-78h] BYREF

  memset(Dest, 0, sizeof(Dest));
  if ( (a1 & 0xFFFFFFF7) != 0 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  if ( *a2 != 8 )
    return 0LL;
  v9 = a2[1];
  if ( (v9 & 0x3F) != v9 )
    return 0LL;
  v10 = v9 & 0xFFFFFFFD;
  v11 = v9 | 2;
  if ( (dword_1C024F93C & 2) == 0 )
    v11 = v10;
  a2[1] = v11;
  if ( a3 )
  {
    RtlStringCchPrintfW(Dest, 40LL, L"%d");
    v12 = -1LL;
    do
      ++v12;
    while ( Dest[v12] );
    a4 = (unsigned int)FastWriteProfileValue(0LL, 0x11u, (const WCHAR *)L"Flags", 1u, Dest, 2 * (int)v12 + 2);
    *a5 = a4;
  }
  if ( !a4 )
    return 0LL;
  memmove(&gToggleKeys, a2, *a2);
  gToggleKeys = 8;
  SetAccessEnabledFlag();
  return 1LL;
}
