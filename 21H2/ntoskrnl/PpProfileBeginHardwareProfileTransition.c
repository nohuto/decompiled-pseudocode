/*
 * XREFs of PpProfileBeginHardwareProfileTransition @ 0x1408AB4D8
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140736AD4 (PnpProcessQueryRemoveAndEject.c)
 *     PipProcessStartPhase1 @ 0x14073E02C (PipProcessStartPhase1.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall PpProfileBeginHardwareProfileTransition(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 )
    return KeWaitForSingleObject(&PiProfileChangeSemaphore, Executive, 0, 0, 0LL);
  return result;
}
