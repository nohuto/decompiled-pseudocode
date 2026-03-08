/*
 * XREFs of RtlContinueLongJump @ 0x1405AFBF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     NtContinueEx @ 0x140416740 (NtContinueEx.c)
 */

__int64 __fastcall RtlContinueLongJump(__int64 a1)
{
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]

  v2 = 0LL;
  LODWORD(v2) = 2;
  v3 = 0LL;
  return NtContinueEx(a1, &v2);
}
