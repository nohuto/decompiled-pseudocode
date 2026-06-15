/*
 * XREFs of _CpuManager::RegisterDevice_::_1_::catch$3 @ 0x14004026F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CpuManager::RegisterDevice_::_1_::catch_3(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 152);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 48) = *v3;
  return 0LL;
}
