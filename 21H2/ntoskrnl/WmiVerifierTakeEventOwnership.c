/*
 * XREFs of WmiVerifierTakeEventOwnership @ 0x1405A5AF8
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x1409E9050 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall WmiVerifierTakeEventOwnership(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0x20000) == 0;
}
