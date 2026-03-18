/*
 * XREFs of SmCrGenRandom @ 0x1405FD93C
 * Callers:
 *     SmKmKeyGenNewKey @ 0x1409D5FA4 (SmKmKeyGenNewKey.c)
 *     SmCrEncStart @ 0x1409D7654 (SmCrEncStart.c)
 * Callees:
 *     BCryptGenRandom @ 0x1405F3DFC (BCryptGenRandom.c)
 */

NTSTATUS __fastcall SmCrGenRandom(PUCHAR pbBuffer, ULONG cbBuffer, __int64 a3, ULONG a4)
{
  return BCryptGenRandom(pbBuffer, pbBuffer, cbBuffer, a4);
}
