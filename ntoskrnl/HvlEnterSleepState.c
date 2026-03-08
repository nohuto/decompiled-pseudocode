/*
 * XREFs of HvlEnterSleepState @ 0x1405419C0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlEnterSleepState(ULONG a1)
{
  __int16 v1; // bx
  __int128 v3; // [rsp+20h] [rbp-48h] BYREF
  __int64 v4; // [rsp+30h] [rbp-38h]
  __int64 v5; // [rsp+38h] [rbp-30h]
  _BYTE v6[16]; // [rsp+40h] [rbp-28h] BYREF

  v4 = 0LL;
  LODWORD(v5) = 0;
  v3 = 0LL;
  HvlpAcquireHypercallPage((__int64)&v3, 1, (__int64)v6, 8LL)->LowPart = a1;
  v1 = HvcallInitiateHypercall(132);
  HvlpReleaseHypercallPage((__int64)&v3);
  return v1 != 0 ? 0xC0000001 : 0;
}
