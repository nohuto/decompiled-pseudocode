/*
 * XREFs of HvlNotifyRootCrashdump @ 0x1404F5B14
 * Callers:
 *     HvlPrepareForRootCrashdump @ 0x1404F5BDC (HvlPrepareForRootCrashdump.c)
 *     KeBugCheck2 @ 0x140516A10 (KeBugCheck2.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlNotifyRootCrashdump(int a1)
{
  char result; // al
  _DWORD *v3; // rax
  _OWORD v4[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v5[16]; // [rsp+40h] [rbp-28h] BYREF

  result = HvlpRootFlags;
  memset(v4, 0, sizeof(v4));
  if ( (HvlpRootFlags & 4) != 0 )
  {
    v3 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v4, 1, (__int64)v5, 8LL);
    *v3 = 2;
    if ( a1 )
    {
      if ( a1 == 1 )
      {
        v3[1] = 2;
      }
      else
      {
        if ( a1 != 2 )
          return HvlpReleaseHypercallPage((__int64)v4);
        v3[1] = 3;
      }
    }
    else
    {
      v3[1] = 1;
    }
    HvcallInitiateHypercall(135);
    return HvlpReleaseHypercallPage((__int64)v4);
  }
  return result;
}
