/*
 * XREFs of PpProfileBeginHardwareProfileTransition @ 0x14094FB70
 * Callers:
 *     PipProcessStartPhase1 @ 0x1407491FC (PipProcessStartPhase1.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1407655BC (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall PpProfileBeginHardwareProfileTransition(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 )
    return KeWaitForSingleObject(&PiProfileChangeSemaphore, Executive, 0, 0, 0LL);
  return result;
}
