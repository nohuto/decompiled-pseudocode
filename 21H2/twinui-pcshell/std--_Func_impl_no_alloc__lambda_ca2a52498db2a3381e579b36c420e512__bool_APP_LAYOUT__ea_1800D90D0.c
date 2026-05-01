/*
 * XREFs of std::_Func_impl_no_alloc__lambda_ca2a52498db2a3381e579b36c420e512__bool_APP_LAYOUT_ENUM_ITEM_::_Do_call @ 0x1800D90D0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

bool __fastcall std::_Func_impl_no_alloc__lambda_ca2a52498db2a3381e579b36c420e512__bool_APP_LAYOUT_ENUM_ITEM_::_Do_call(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(*(__int64 **)(a1 + 16), *(_QWORD *)(a2 + 16));
  return PPIWin32VtcLayoutOperation::_sideBarLocation != 0;
}
