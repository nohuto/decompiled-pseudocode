/*
 * XREFs of WmiVerifierTakeEventOwnership @ 0x1405FBC30
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x140AE5170 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall WmiVerifierTakeEventOwnership(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0x20000) == 0;
}
