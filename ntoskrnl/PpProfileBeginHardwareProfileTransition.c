/*
 * XREFs of PpProfileBeginHardwareProfileTransition @ 0x140960AF0
 * Callers:
 *     PipProcessStartPhase1 @ 0x1406F7074 (PipProcessStartPhase1.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall PpProfileBeginHardwareProfileTransition(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 )
    return KeWaitForSingleObject(&PiProfileChangeSemaphore, Executive, 0, 0, 0LL);
  return result;
}
