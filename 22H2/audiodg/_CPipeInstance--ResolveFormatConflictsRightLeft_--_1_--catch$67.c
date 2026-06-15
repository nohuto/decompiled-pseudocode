/*
 * XREFs of _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::catch$67 @ 0x14002C3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::catch_67(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 304);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 64) = *v3;
  return 0LL;
}
