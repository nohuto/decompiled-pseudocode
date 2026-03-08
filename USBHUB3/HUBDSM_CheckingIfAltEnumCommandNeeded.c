/*
 * XREFs of HUBDSM_CheckingIfAltEnumCommandNeeded @ 0x1C00222D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfAltEnumCommandNeeded(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  if ( (*(_DWORD *)(v1 + 2464) & 4) == 0 )
    return 4061LL;
  result = 4089LL;
  if ( (*(_DWORD *)(v1 + 2468) & 1) != 0 )
    return 4061LL;
  return result;
}
