/*
 * XREFs of HvpLogEntryCheckHeaderChecksum @ 0x1407F9C94
 * Callers:
 *     HvpIsLogEntryHeaderCoherent @ 0x1407F9C24 (HvpIsLogEntryHeaderCoherent.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SymCryptMarvin32 @ 0x1403F0388 (SymCryptMarvin32.c)
 */

_BOOL8 __fastcall HvpLogEntryCheckHeaderChecksum(__int64 a1)
{
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_DWORD *)a1 != 1162638920 )
    return 0LL;
  SymCryptMarvin32((int *)&HvSymcryptSeed, (unsigned __int16 *)a1, 0x20uLL, &v3);
  return *(_QWORD *)(a1 + 32) == v3;
}
