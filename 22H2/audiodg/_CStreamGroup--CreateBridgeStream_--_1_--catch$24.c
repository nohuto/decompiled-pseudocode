/*
 * XREFs of _CStreamGroup::CreateBridgeStream_::_1_::catch$24 @ 0x14004D517
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::CreateBridgeStream_::_1_::catch_24(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 160);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 240) = *v3;
  return 0LL;
}
