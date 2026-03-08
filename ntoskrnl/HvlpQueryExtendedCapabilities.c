/*
 * XREFs of HvlpQueryExtendedCapabilities @ 0x140547138
 * Callers:
 *     HvlpDetermineEnlightenments @ 0x140546B64 (HvlpDetermineEnlightenments.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlpQueryExtendedCapabilities(LONGLONG *a1)
{
  PHYSICAL_ADDRESS *v2; // rsi
  __int16 v3; // bx
  __int128 v5; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-38h]
  __int64 v7; // [rsp+38h] [rbp-30h]
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  LODWORD(v7) = 0;
  v2 = HvlpAcquireHypercallPage((__int64)&v5, 2, (__int64)&v8, 8LL);
  v3 = HvcallInitiateHypercall(32769);
  HvlpReleaseHypercallPage((__int64)&v5);
  if ( v3 )
    return 0;
  *a1 = v2->QuadPart;
  return 1;
}
