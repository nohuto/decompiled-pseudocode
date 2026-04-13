/*
 * XREFs of ??1last_error_context@wil@@QEAA@XZ @ 0x180005F8C
 * Callers:
 *     _wil::details_abi::heap_buffer::reserve_::_1_::dtor$0 @ 0x1800D0EFA (_wil--details_abi--heap_buffer--reserve_--_1_--dtor$0.c)
 *     _wil::details::RecordFeatureError_::_1_::dtor$0 @ 0x1800D0F78 (_wil--details--RecordFeatureError_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::last_error_context::~last_error_context(wil::last_error_context *this)
{
  if ( !*(_BYTE *)this )
    SetLastError(*((_DWORD *)this + 1));
}
