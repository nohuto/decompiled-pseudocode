/*
 * XREFs of HUBDSM_CheckingIfDisableNeededInUnconfigured @ 0x1C0023640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfDisableNeededInUnconfigured(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  if ( (*(_DWORD *)(v1 + 1636) & 0x100000) == 0 )
    return 4061LL;
  result = 4089LL;
  _InterlockedAnd((volatile signed __int32 *)(v1 + 1636), 0xFFEFFFFF);
  return result;
}
