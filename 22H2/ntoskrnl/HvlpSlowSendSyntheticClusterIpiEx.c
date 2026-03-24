/*
 * XREFs of HvlpSlowSendSyntheticClusterIpiEx @ 0x1404F759C
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x14038FD30 (HvlSendSyntheticClusterIpi.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1404FA7B0 (HvlpAffinityToHvProcessorSet.c)
 */

__int64 __fastcall HvlpSlowSendSyntheticClusterIpiEx(__int64 a1, int a2)
{
  _DWORD *v4; // rbx
  int v5; // eax
  __int64 v6; // r9
  __int64 v7; // rdx
  __int16 v8; // bx
  __int128 v10; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v11; // [rsp+38h] [rbp-D0h]
  _BYTE v12[176]; // [rsp+48h] [rbp-C0h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v4 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v10, 1, (__int64)v12, 88LL);
  v5 = HvlpAffinityToHvProcessorSet(a1, v4 + 2, (v10 & 2) != 0 ? 64 : 4072);
  if ( v5 == -1 )
  {
    HvlpReleaseHypercallPage((__int64)&v10);
    v4 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v10, 1, 0LL, 0LL);
    v5 = HvlpAffinityToHvProcessorSet(a1, v4 + 2, 4072LL);
  }
  v7 = *((_QWORD *)&v11 + 1);
  v4[1] = 0;
  *v4 = a2;
  v8 = HvcallInitiateHypercall(((v5 + 7) << 14) & 0x3FE0000 | 0x15u, v7, 0LL, v6);
  HvlpReleaseHypercallPage((__int64)&v10);
  return v8 != 0 ? 0xC0000001 : 0;
}
