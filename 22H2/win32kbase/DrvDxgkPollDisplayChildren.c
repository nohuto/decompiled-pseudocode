/*
 * XREFs of DrvDxgkPollDisplayChildren @ 0x1C0147460
 * Callers:
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C011ECA0 (xxxDisplayDiagBlackScreenDetected.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkPollDisplayChildren(__int64 a1)
{
  if ( qword_1C0250910 )
    return qword_1C0250910(a1, 0LL);
  else
    return 3221225659LL;
}
