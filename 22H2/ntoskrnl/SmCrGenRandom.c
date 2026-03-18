/*
 * XREFs of SmCrGenRandom @ 0x1405CDD1C
 * Callers:
 *     SmKmKeyGenNewKey @ 0x1409D9224 (SmKmKeyGenNewKey.c)
 *     SmCrEncStart @ 0x1409DA8DC (SmCrEncStart.c)
 * Callees:
 *     BCryptGenRandom @ 0x1405B7888 (BCryptGenRandom.c)
 */

NTSTATUS __fastcall SmCrGenRandom(PUCHAR pbBuffer, ULONG cbBuffer, __int64 a3, ULONG a4)
{
  return BCryptGenRandom(pbBuffer, pbBuffer, cbBuffer, a4);
}
