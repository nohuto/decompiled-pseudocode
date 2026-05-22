/*
 * XREFs of std::_Func_impl_no_alloc__lambda_e9caf7be01a97f1d4a6ebcd24956563c__void_::_Do_call @ 0x180167350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Func_impl_no_alloc__lambda_e9caf7be01a97f1d4a6ebcd24956563c__void_::_Do_call(__int64 a1)
{
  _BYTE *v1; // rdx

  **(_BYTE **)(a1 + 8) = 1;
  v1 = *(_BYTE **)(a1 + 16);
  *v1 = 0;
  wil::details::SetEvent(*(wil::details **)(*(_QWORD *)(a1 + 24) + 168LL), v1);
}
