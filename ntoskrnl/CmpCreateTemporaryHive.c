/*
 * XREFs of CmpCreateTemporaryHive @ 0x140A09630
 * Callers:
 *     CmSaveKey @ 0x140A08D50 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x140A09144 (CmSaveMergedKeys.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpCreateHive @ 0x14072C06C (CmpCreateHive.c)
 */

ULONG_PTR __fastcall CmpCreateTemporaryHive(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  ULONG_PTR v6[2]; // [rsp+60h] [rbp-1D8h] BYREF
  _BYTE v7[432]; // [rsp+70h] [rbp-1C8h] BYREF

  v4 = 0LL;
  v6[0] = 0LL;
  memset(v7, 0, sizeof(v7));
  if ( (int)CmpCreateHive(v6, 0, 1, 0, 0LL, 0LL, 0LL, 17956864, a1, a2, 0LL, (__int64)v7) >= 0 )
    return v6[0];
  return v4;
}
