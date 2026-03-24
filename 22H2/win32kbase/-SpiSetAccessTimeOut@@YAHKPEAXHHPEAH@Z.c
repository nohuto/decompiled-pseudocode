/*
 * XREFs of ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1C0138674
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C000CD30 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C000D550 (-AccessTimeOutReset@@YAXXZ.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C000D590 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     CreateProfileUserName @ 0x1C000DC60 (CreateProfileUserName.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0068828 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 *     FastWriteProfileValue @ 0x1C011DFA0 (FastWriteProfileValue.c)
 */

__int64 __fastcall SpiSetAccessTimeOut(int a1, unsigned int *a2, int a3, int a4, int *a5)
{
  const UNICODE_STRING *ProfileUserName; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // eax
  bool v12; // zf
  __int64 v13; // rax
  __int128 v15; // [rsp+38h] [rbp-51h] BYREF
  __int64 v16; // [rsp+48h] [rbp-41h]
  wchar_t Dest[40]; // [rsp+58h] [rbp-31h] BYREF

  if ( a1 && a1 != 12 || !a2 || *a2 != 12 || (a2[1] & 3) != a2[1] || a2[2] > 0x36EE80 )
    return 0LL;
  if ( a3 )
  {
    memset(Dest, 0, sizeof(Dest));
    v15 = 0LL;
    v16 = 0LL;
    ProfileUserName = (const UNICODE_STRING *)CreateProfileUserName((__int64)&v15);
    RtlStringCchPrintfW(Dest, 40LL, L"%d", a2[1]);
    v8 = -1LL;
    v9 = -1LL;
    do
      ++v9;
    while ( Dest[v9] );
    *a5 = (unsigned int)FastWriteProfileValue(
                          ProfileUserName,
                          0x12u,
                          (const WCHAR *)L"Flags",
                          1u,
                          Dest,
                          2 * (int)v9 + 2);
    RtlStringCchPrintfW(Dest, 40LL, L"%d", a2[2]);
    v10 = -1LL;
    do
      ++v10;
    while ( Dest[v10] );
    v11 = (unsigned int)FastWriteProfileValue(
                          ProfileUserName,
                          0x12u,
                          (const WCHAR *)L"TimeToWait",
                          1u,
                          Dest,
                          2 * (int)v10 + 2);
    v12 = (v11 & *a5) == 0;
    *a5 &= v11;
    a4 = *a5;
    if ( v12 )
    {
      RtlStringCchPrintfW(Dest, 40LL, L"%d", (unsigned int)qword_1C024F92C);
      v13 = -1LL;
      do
        ++v13;
      while ( Dest[v13] );
      FastWriteProfileValue(ProfileUserName, 0x12u, (const WCHAR *)L"Flags", 1u, Dest, 2 * v13 + 2);
      RtlStringCchPrintfW(Dest, 40LL, L"%d", HIDWORD(qword_1C024F92C));
      do
        ++v8;
      while ( Dest[v8] );
      FastWriteProfileValue(ProfileUserName, 0x12u, (const WCHAR *)L"TimeToWait", 1u, Dest, 2 * v8 + 2);
    }
    if ( ProfileUserName )
    {
      if ( qword_1C02560E8 )
        qword_1C02560E8(&v15);
    }
  }
  if ( !a4 )
    return 0LL;
  memmove(&gAccessTimeOut, a2, *a2);
  gAccessTimeOut = 12;
  SetAccessEnabledFlag();
  AccessTimeOutReset();
  return 1LL;
}
