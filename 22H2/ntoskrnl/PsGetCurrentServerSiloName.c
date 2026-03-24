/*
 * XREFs of PsGetCurrentServerSiloName @ 0x140905B10
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 *__fastcall PsGetCurrentServerSiloName(__int64 a1, __int64 a2)
{
  _WORD *v2; // rax
  __int64 *v3; // rcx

  v2 = (char *)PsGetCurrentServerSiloGlobals(a1, a2) + 1088;
  v3 = &PspDefaultSiloName;
  if ( *v2 )
    return (__int64 *)v2;
  return v3;
}
