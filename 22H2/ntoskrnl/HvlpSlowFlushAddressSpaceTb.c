/*
 * XREFs of HvlpSlowFlushAddressSpaceTb @ 0x1404FACE4
 * Callers:
 *     KiFlushAddressSpaceTb @ 0x14038FAAC (KiFlushAddressSpaceTb.c)
 *     HvlFlushAddressSpaceTb @ 0x14038FCEC (HvlFlushAddressSpaceTb.c)
 * Callees:
 *     HvlpPrepareFlushHeader @ 0x14038FC98 (HvlpPrepareFlushHeader.c)
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlpSlowFlushAddressSpaceTb(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rax
  __int64 v7; // r9
  __int128 v9; // [rsp+20h] [rbp-68h] BYREF
  __int128 v10; // [rsp+30h] [rbp-58h]
  __int64 v11; // [rsp+40h] [rbp-48h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v6 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v9, 1, (__int64)&v11, 24LL);
  HvlpPrepareFlushHeader(v6, a1, a2, a3);
  HvcallInitiateHypercall(2, *((__int64 *)&v10 + 1), 0LL, v7);
  return HvlpReleaseHypercallPage((__int64)&v9);
}
