/*
 * XREFs of ??$_Destroy_range@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@std@@@std@@YAXPEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@0@0AEAV?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@0@@Z @ 0x180041368
 * Callers:
 *     ??$_Uninitialized_move@PEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@PEAU12@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@YAPEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@0@@Z @ 0x18004152C (--$_Uninitialized_move@PEAU-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@PEAU12@V-.c)
 *     ??1?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@QEAA@XZ @ 0x1800415F0 (--1-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V-$allocator@U-$pair@KV.c)
 *     ?_Change_array@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@AEAAXQEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@2@_K1@Z @ 0x180041644 (-_Change_array@-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V-$allocato.c)
 *     ?_Destroy@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@AEAAXPEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@2@0@Z @ 0x1800416C0 (-_Destroy@-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V-$allocator@U-$.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall std::_Destroy_range<std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      v3 += 2;
      result = v3 - 1;
    }
    while ( v3 - 1 != a2 );
  }
  return result;
}
