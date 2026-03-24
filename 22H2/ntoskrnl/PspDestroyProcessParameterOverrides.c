/*
 * XREFs of PspDestroyProcessParameterOverrides @ 0x1406C19F0
 * Callers:
 *     PspDeleteCreateProcessContext @ 0x1406C1854 (PspDeleteCreateProcessContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspDestroyProcessParameterOverrides(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return PsDestroyProcessParameterOverrides(a1);
  return result;
}
