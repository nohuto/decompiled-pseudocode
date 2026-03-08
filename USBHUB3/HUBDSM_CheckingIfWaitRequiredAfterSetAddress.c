/*
 * XREFs of HUBDSM_CheckingIfWaitRequiredAfterSetAddress @ 0x1C0022190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfWaitRequiredAfterSetAddress(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  if ( (*(_DWORD *)(v1 + 1456) & 0x800) == 0 )
    return 4089LL;
  result = 4061LL;
  if ( (*(_DWORD *)(v1 + 1636) & 0x200) != 0 )
    return 4089LL;
  return result;
}
