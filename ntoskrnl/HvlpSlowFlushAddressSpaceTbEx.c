/*
 * XREFs of HvlpSlowFlushAddressSpaceTbEx @ 0x14054785C
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x1403C6A88 (HvlFlushAddressSpaceTb.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1405472B0 (HvlpAffinityToHvProcessorSet.c)
 */

char __fastcall HvlpSlowFlushAddressSpaceTbEx(LONGLONG a1, __int64 a2, char a3)
{
  PHYSICAL_ADDRESS *v6; // r9
  unsigned int v7; // r8d
  PHYSICAL_ADDRESS *v8; // rbx
  PHYSICAL_ADDRESS v9; // rax
  int v10; // eax
  __int128 v12; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-E0h]
  __int64 v14; // [rsp+40h] [rbp-D8h]
  _BYTE v15[192]; // [rsp+48h] [rbp-D0h] BYREF

  v13 = 0LL;
  LODWORD(v14) = 0;
  v12 = 0LL;
  v6 = HvlpAcquireHypercallPage((__int64)&v12, 1, (__int64)v15, 96LL);
  v6->QuadPart = a1;
  v7 = a3 == 0 ? 4 : 0;
  v8 = v6 + 2;
  v9.QuadPart = v7 | 2;
  if ( a1 )
    v9.QuadPart = v7;
  v6[1] = v9;
  v10 = HvlpAffinityToHvProcessorSet(a2, (PHYSICAL_ADDRESS *)&v6[2].QuadPart, (v12 & 2) != 0 ? 64 : 4064);
  if ( v10 == -1 )
    v10 = HvlpAffinityToHvProcessorSet(0LL, v8, 0);
  HvcallInitiateHypercall(((v10 + 7) << 14) & 0x3FE0000 | 0x13);
  return HvlpReleaseHypercallPage((__int64)&v12);
}
