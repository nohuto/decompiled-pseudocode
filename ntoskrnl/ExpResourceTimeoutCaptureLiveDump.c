/*
 * XREFs of ExpResourceTimeoutCaptureLiveDump @ 0x14060DBE0
 * Callers:
 *     <none>
 * Callees:
 *     DbgkWerCaptureLiveKernelDump @ 0x14087EC10 (DbgkWerCaptureLiveKernelDump.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpResourceTimeoutCaptureLiveDump(_QWORD *P)
{
  DbgkWerCaptureLiveKernelDump(
    (unsigned int)L"ResourceTimeout",
    460,
    P[5],
    P[4],
    *((unsigned int *)P + 12),
    *((unsigned int *)P + 13),
    0LL,
    0LL,
    0);
  ExFreePoolWithTag(P, 0x6F546552u);
}
