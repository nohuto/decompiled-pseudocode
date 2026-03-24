/*
 * XREFs of DrvDxgkPollDisplayChildren @ 0x1C0147110
 * Callers:
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C011E9D0 (xxxDisplayDiagBlackScreenDetected.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkPollDisplayChildren(__int64 a1)
{
  if ( qword_1C02518F0 )
    return qword_1C02518F0(a1, 0LL);
  else
    return 3221225659LL;
}
