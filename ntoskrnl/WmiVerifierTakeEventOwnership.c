/*
 * XREFs of WmiVerifierTakeEventOwnership @ 0x1405F9790
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x140AE1170 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall WmiVerifierTakeEventOwnership(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0x20000) == 0;
}
