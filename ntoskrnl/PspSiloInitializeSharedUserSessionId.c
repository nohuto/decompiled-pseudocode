/*
 * XREFs of PspSiloInitializeSharedUserSessionId @ 0x14079C7D0
 * Callers:
 *     PspInitializeSiloStructures @ 0x140B3E8CC (PspInitializeSiloStructures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSiloInitializeSharedUserSessionId(__int64 a1)
{
  *(_DWORD *)(a1 + 24) = -1;
  return 0LL;
}
