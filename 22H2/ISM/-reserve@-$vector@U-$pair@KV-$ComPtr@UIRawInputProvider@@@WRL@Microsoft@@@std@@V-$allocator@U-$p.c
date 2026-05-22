/*
 * XREFs of ?reserve@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@QEAAX_K@Z @ 0x180041790
 * Callers:
 *     ?SendDeviceCommand@InputStateManager@@UEAAJKPEAUDeviceCommandMessage@@@Z @ 0x180087D70 (-SendDeviceCommand@InputStateManager@@UEAAJKPEAUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@@2@@std@@CAXXZ @ 0x1800404EC (-_Xlength@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKU.c)
 *     ?_Reallocate_exactly@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@AEAAX_K@Z @ 0x1800416D4 (-_Reallocate_exactly@-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V-$al.c)
 */

void __fastcall std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::reserve(
        __int64 a1,
        unsigned __int64 a2)
{
  if ( a2 > (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputInfoValidator::PointerState>>>>>::_Xlength();
    std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::_Reallocate_exactly(
      (char **)a1,
      a2);
  }
}
