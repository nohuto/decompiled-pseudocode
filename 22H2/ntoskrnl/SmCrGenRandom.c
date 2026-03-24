/*
 * XREFs of SmCrGenRandom @ 0x1405A0090
 * Callers:
 *     SmKmKeyGenNewKey @ 0x14092BAC4 (SmKmKeyGenNewKey.c)
 *     SmCrEncStart @ 0x14092D180 (SmCrEncStart.c)
 * Callees:
 *     BCryptGenRandom @ 0x140595ABC (BCryptGenRandom.c)
 */

NTSTATUS __fastcall SmCrGenRandom(PUCHAR pbBuffer, ULONG cbBuffer, __int64 a3, ULONG a4)
{
  return BCryptGenRandom(pbBuffer, pbBuffer, cbBuffer, a4);
}
