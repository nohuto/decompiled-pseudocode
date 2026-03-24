/*
 * XREFs of HvlResetCoverageVector @ 0x1404F1A0C
 * Callers:
 *     ExpCovQueryHypervisorInformation @ 0x1409575C0 (ExpCovQueryHypervisorInformation.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 */

char HvlResetCoverageVector()
{
  _DWORD *v0; // rbx
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // r9
  __int128 v5; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v6; // [rsp+30h] [rbp-D0h]
  __int128 v7; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v8; // [rsp+50h] [rbp-B0h]
  _BYTE v9[144]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v10[2064]; // [rsp+F0h] [rbp-10h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v0 = (_DWORD *)HvlpAcquireHypercallPage(&v7, 1LL, v10, 1032LL);
  HvlpAcquireHypercallPage(&v5, 2LL, v9, 72LL);
  v1 = *((_QWORD *)&v6 + 1);
  v2 = *((_QWORD *)&v8 + 1);
  *v0 = 3;
  LOBYTE(v0) = (unsigned __int16)HvcallInitiateHypercall(147, v2, v1, v3) == 0;
  HvlpReleaseHypercallPage(&v5);
  HvlpReleaseHypercallPage(&v7);
  return (char)v0;
}
