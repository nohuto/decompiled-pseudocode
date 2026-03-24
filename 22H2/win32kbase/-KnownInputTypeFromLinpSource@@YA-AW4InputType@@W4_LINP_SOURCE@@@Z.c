/*
 * XREFs of ?KnownInputTypeFromLinpSource@@YA?AW4InputType@@W4_LINP_SOURCE@@@Z @ 0x1C0049B78
 * Callers:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C00496F0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KnownInputTypeFromLinpSource(int a1)
{
  int v1; // edx
  int v2; // edx
  __int64 result; // rax
  int v4; // edx
  int v5; // edx

  v1 = 11;
  if ( a1 != 17 )
    v1 = a1;
  v2 = v1 - 1;
  if ( !v2 )
    return 4LL;
  result = 2LL;
  v4 = v2 - 2;
  if ( v4 )
  {
    v5 = v4 - 8;
    if ( v5 )
    {
      if ( v5 == 2 )
        return 16LL;
      else
        return 0LL;
    }
    else
    {
      return 8LL;
    }
  }
  return result;
}
