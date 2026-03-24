/*
 * XREFs of HvlNotifyAllProcessorsStarted @ 0x1404F593C
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403B62E8 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1404FA974 (HvlpHvToNtStatus.c)
 */

__int64 HvlNotifyAllProcessorsStarted()
{
  _QWORD *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r9
  unsigned __int16 v3; // bx
  __int128 v5; // [rsp+20h] [rbp-48h] BYREF
  __int128 v6; // [rsp+30h] [rbp-38h]
  _BYTE v7[16]; // [rsp+40h] [rbp-28h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v0 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v5, 1, (__int64)v7, 8LL);
  v1 = *((_QWORD *)&v6 + 1);
  *(_DWORD *)v0 = 4;
  v3 = HvcallInitiateHypercall(135, v1, 0LL, v2);
  HvlpReleaseHypercallPage((__int64)&v5);
  return HvlpHvToNtStatus(v3);
}
