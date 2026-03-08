/*
 * XREFs of HvlNotifyRootCrashdump @ 0x140542C28
 * Callers:
 *     HvlPrepareForRootCrashdump @ 0x140542CB4 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x1405430E4 (HvlResumeFromRootCrashdump.c)
 *     KeBugCheck2 @ 0x140565E90 (KeBugCheck2.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlNotifyRootCrashdump(LONG a1)
{
  char result; // al
  PHYSICAL_ADDRESS *v3; // rax
  __int128 v4; // [rsp+20h] [rbp-48h] BYREF
  __int64 v5; // [rsp+30h] [rbp-38h]
  __int64 v6; // [rsp+38h] [rbp-30h]
  _BYTE v7[16]; // [rsp+40h] [rbp-28h] BYREF

  v5 = 0LL;
  LODWORD(v6) = 0;
  result = HvlpRootFlags;
  v4 = 0LL;
  if ( (HvlpRootFlags & 4) != 0 )
  {
    v3 = HvlpAcquireHypercallPage((__int64)&v4, 1, (__int64)v7, 8LL);
    v3->LowPart = 2;
    v3->HighPart = a1;
    HvcallInitiateHypercall(135);
    return HvlpReleaseHypercallPage((__int64)&v4);
  }
  return result;
}
