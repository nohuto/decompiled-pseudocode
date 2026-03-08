/*
 * XREFs of HvlResetCoverageVector @ 0x14053D84C
 * Callers:
 *     ExpCovQueryHypervisorInformation @ 0x140A03908 (ExpCovQueryHypervisorInformation.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 */

char HvlResetCoverageVector()
{
  _DWORD *v0; // rbx
  __int128 v2; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v3; // [rsp+30h] [rbp-D0h]
  __int64 v4; // [rsp+38h] [rbp-C8h]
  __int128 v5; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v6; // [rsp+50h] [rbp-B0h]
  __int64 v7; // [rsp+58h] [rbp-A8h]
  _BYTE v8[144]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v9[2064]; // [rsp+F0h] [rbp-10h] BYREF

  v6 = 0LL;
  LODWORD(v7) = 0;
  v3 = 0LL;
  LODWORD(v4) = 0;
  v5 = 0LL;
  v2 = 0LL;
  v0 = (_DWORD *)HvlpAcquireHypercallPage(&v5, 1LL, v9, 1032LL);
  HvlpAcquireHypercallPage(&v2, 2LL, v8, 72LL);
  *v0 = 3;
  LOBYTE(v0) = (unsigned __int16)HvcallInitiateHypercall(147) == 0;
  HvlpReleaseHypercallPage(&v2);
  HvlpReleaseHypercallPage(&v5);
  return (char)v0;
}
