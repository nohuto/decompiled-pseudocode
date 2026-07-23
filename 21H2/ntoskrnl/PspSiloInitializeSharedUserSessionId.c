/*
 * XREFs of PspSiloInitializeSharedUserSessionId @ 0x140622B90
 * Callers:
 *     PspInitializeSiloStructures @ 0x140A3DBC4 (PspInitializeSiloStructures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSiloInitializeSharedUserSessionId(__int64 a1)
{
  *(_DWORD *)(a1 + 24) = -1;
  return 0LL;
}
