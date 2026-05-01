/*
 * XREFs of std::_Func_impl_no_alloc__lambda_e2edcbd86782980be71391e7aac94914__bool_APP_LAYOUT_ENUM_ITEM_::_Do_call @ 0x1800D8F90
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

char __fastcall std::_Func_impl_no_alloc__lambda_e2edcbd86782980be71391e7aac94914__bool_APP_LAYOUT_ENUM_ITEM_::_Do_call(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdx

  v2 = *(_QWORD *)(a2 + 16);
  if ( v2 == **(_QWORD **)(a1 + 8) )
    return 1;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(*(__int64 **)(a1 + 16), v2);
  return 0;
}
