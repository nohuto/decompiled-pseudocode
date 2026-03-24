/*
 * XREFs of HvlpInvokeGetPageListHypercall @ 0x1404FB3B0
 * Callers:
 *     HvlpGetPageList @ 0x1404FB2E8 (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x1404FB4CC (HvlpStartPageListIteration.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlpInvokeGetPageListHypercall(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  __int128 v8; // [rsp+20h] [rbp-68h] BYREF
  __int128 v9; // [rsp+30h] [rbp-58h]
  _BYTE v10[48]; // [rsp+40h] [rbp-48h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  v4 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v8, 1, (__int64)v10, 24LL);
  v5 = *((_QWORD *)&v9 + 1);
  v4[1] = -1LL;
  *v4 = a2;
  v4[2] = 1LL;
  HvcallInitiateHypercall(151, v5, *(_QWORD *)(a1 + 16), v6);
  return HvlpReleaseHypercallPage((__int64)&v8);
}
