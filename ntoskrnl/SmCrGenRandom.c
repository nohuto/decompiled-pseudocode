/*
 * XREFs of SmCrGenRandom @ 0x1405CB86C
 * Callers:
 *     SmKmKeyGenNewKey @ 0x1409D6384 (SmKmKeyGenNewKey.c)
 *     SmCrEncStart @ 0x1409D7A3C (SmCrEncStart.c)
 * Callees:
 *     BCryptGenRandom @ 0x1405B53D8 (BCryptGenRandom.c)
 */

NTSTATUS __fastcall SmCrGenRandom(PUCHAR pbBuffer, ULONG cbBuffer, __int64 a3, ULONG a4)
{
  return BCryptGenRandom(pbBuffer, pbBuffer, cbBuffer, a4);
}
