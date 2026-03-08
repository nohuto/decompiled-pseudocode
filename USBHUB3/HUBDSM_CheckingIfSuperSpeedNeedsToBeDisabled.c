/*
 * XREFs of HUBDSM_CheckingIfSuperSpeedNeedsToBeDisabled @ 0x1C0021280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfSuperSpeedNeedsToBeDisabled(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  result = 4061LL;
  if ( (*(_DWORD *)(v1 + 1644) & 0x80000) != 0 && (*(_DWORD *)(v1 + 1456) & 0x800) != 0 )
    return 4089LL;
  return result;
}
