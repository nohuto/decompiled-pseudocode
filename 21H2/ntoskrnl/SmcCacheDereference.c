/*
 * XREFs of SmcCacheDereference @ 0x1409D79E8
 * Callers:
 *     SmcProcessCreateRequest @ 0x1409D4BC0 (SmcProcessCreateRequest.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 */

void __fastcall SmcCacheDereference(__int64 a1, char a2)
{
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(32LL * (a2 & 0xF) + a1 + 8));
}
