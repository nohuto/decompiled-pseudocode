/*
 * XREFs of PspDestroyProcessParameterOverrides @ 0x140648C30
 * Callers:
 *     PspDeleteCreateProcessContext @ 0x140648A94 (PspDeleteCreateProcessContext.c)
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
