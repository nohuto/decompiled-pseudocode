/*
 * XREFs of MiVadSupportsPhysicalContiguityQuery @ 0x140A3D224
 * Callers:
 *     MiProcessVaContiguityInformation @ 0x14065B3D4 (MiProcessVaContiguityInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadSupportsPhysicalContiguityQuery(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 0x70) == 0 && (*(_DWORD *)(a1 + 48) & 0x200000) != 0;
}
