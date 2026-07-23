/*
 * XREFs of PspDestroyProcessParameterOverrides @ 0x14063DA20
 * Callers:
 *     PspDeleteCreateProcessContext @ 0x14063D884 (PspDeleteCreateProcessContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspDestroyProcessParameterOverrides(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return PsDestroyProcessParameterOverrides();
  return result;
}
