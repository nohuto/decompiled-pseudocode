/*
 * XREFs of HvlpSlowSendSyntheticClusterIpiEx @ 0x1405440CC
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x1403C6D90 (HvlSendSyntheticClusterIpi.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1405472B0 (HvlpAffinityToHvProcessorSet.c)
 */

__int64 __fastcall HvlpSlowSendSyntheticClusterIpiEx(__int64 a1, ULONG a2)
{
  PHYSICAL_ADDRESS *v4; // rbx
  int v5; // eax
  __int16 v6; // bx
  __int128 v8; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v9; // [rsp+38h] [rbp-D0h]
  __int64 v10; // [rsp+40h] [rbp-C8h]
  _BYTE v11[176]; // [rsp+48h] [rbp-C0h] BYREF

  v9 = 0LL;
  LODWORD(v10) = 0;
  v8 = 0LL;
  v4 = HvlpAcquireHypercallPage((__int64)&v8, 1, (__int64)v11, 88LL);
  v5 = HvlpAffinityToHvProcessorSet(a1, &v4[1], (v8 & 2) != 0 ? 64 : 4072);
  if ( v5 == -1 )
  {
    HvlpReleaseHypercallPage((__int64)&v8);
    v4 = HvlpAcquireHypercallPage((__int64)&v8, 1, 0LL, 0LL);
    v5 = HvlpAffinityToHvProcessorSet(a1, &v4[1], 4072LL);
  }
  v4->HighPart = 0;
  v4->LowPart = a2;
  v6 = HvcallInitiateHypercall(((v5 + 7) << 14) & 0x3FE0000 | 0x15u);
  HvlpReleaseHypercallPage((__int64)&v8);
  return v6 != 0 ? 0xC0000001 : 0;
}
