/*
 * XREFs of WmiVerifierTakeEventOwnership @ 0x14062C930
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x140AA0FF0 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall WmiVerifierTakeEventOwnership(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0x20000) == 0;
}
