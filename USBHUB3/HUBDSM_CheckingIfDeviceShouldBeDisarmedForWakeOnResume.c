/*
 * XREFs of HUBDSM_CheckingIfDeviceShouldBeDisarmedForWakeOnResume @ 0x1C0023EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfDeviceShouldBeDisarmedForWakeOnResume(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  if ( (*(_DWORD *)(v1 + 1632) & 0x100) == 0 )
    return 4061LL;
  result = 4089LL;
  if ( (*(_DWORD *)(*(_QWORD *)(v1 + 16) + 32LL) & 0x10) != 0 )
    return 4061LL;
  return result;
}
