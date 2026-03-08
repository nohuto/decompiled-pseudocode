/*
 * XREFs of HvlDmaGetDmaGuardEnabled @ 0x140540DE0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvlpHvToNtStatus @ 0x140456F16 (HvlpHvToNtStatus.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlDmaGetDmaGuardEnabled(_BYTE *a1)
{
  PHYSICAL_ADDRESS *v2; // rbx
  PHYSICAL_ADDRESS *v3; // rsi
  unsigned __int16 v4; // bx
  __m256i v6; // [rsp+20h] [rbp-E8h] BYREF
  __m256i v7; // [rsp+40h] [rbp-C8h] BYREF
  int v8; // [rsp+60h] [rbp-A8h]
  _BYTE v9[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v10[2064]; // [rsp+78h] [rbp-90h] BYREF

  v8 = 0;
  v7.m256i_i32[0] = 0;
  memset(&v7.m256i_u64[1], 0, 24);
  memset(&v6.m256i_u64[1], 0, 24);
  v2 = HvlpAcquireHypercallPage((__int64)&v7.m256i_i64[1], 1, (__int64)v9, 8LL);
  v3 = HvlpAcquireHypercallPage((__int64)&v6.m256i_i64[1], 2, (__int64)v10, 1032LL);
  v2->QuadPart = 0LL;
  v2->LowPart = 20;
  v4 = HvcallInitiateHypercall(123);
  if ( !v4 )
    *a1 = v3->LowPart;
  HvlpReleaseHypercallPage((__int64)&v6.m256i_i64[1]);
  HvlpReleaseHypercallPage((__int64)&v7.m256i_i64[1]);
  return HvlpHvToNtStatus(v4);
}
