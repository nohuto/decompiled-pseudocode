/*
 * XREFs of SmCrGenRandom @ 0x1405A0380
 * Callers:
 *     SmKmKeyGenNewKey @ 0x14092BBD4 (SmKmKeyGenNewKey.c)
 *     SmCrEncStart @ 0x14092D290 (SmCrEncStart.c)
 * Callees:
 *     BCryptGenRandom @ 0x140595DAC (BCryptGenRandom.c)
 */

NTSTATUS __fastcall SmCrGenRandom(PUCHAR pbBuffer, ULONG cbBuffer, __int64 a3, ULONG a4)
{
  return BCryptGenRandom(pbBuffer, pbBuffer, cbBuffer, a4);
}
