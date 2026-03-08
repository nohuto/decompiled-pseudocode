/*
 * XREFs of HUBDSM_CheckingIfMsOs20RegistryValuesShouldBeInstalled @ 0x1C0024810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfMsOs20RegistryValuesShouldBeInstalled(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  if ( (*(_DWORD *)(v1 + 2464) & 0x140) == 0 )
    return 4061LL;
  result = 4089LL;
  if ( (*(_DWORD *)(v1 + 1632) & 0x200) != 0 )
    return 4061LL;
  return result;
}
