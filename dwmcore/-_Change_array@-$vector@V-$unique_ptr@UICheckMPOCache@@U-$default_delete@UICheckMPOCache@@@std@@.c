/*
 * XREFs of ?_Change_array@?$vector@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@2@_K1@Z @ 0x18028D194
 * Callers:
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@?$vector@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@1@QEAV21@$$QEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@1@@Z @ 0x1801166D4 (--$_Emplace_reallocate@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<std::unique_ptr<ICheckMPOCache>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void **v4; // rdi
  void **v9; // rbp
  __int64 result; // rax

  v4 = *(void ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(void ***)(a1 + 8);
    while ( v4 != v9 )
    {
      if ( *v4 )
        operator delete(*v4);
      ++v4;
    }
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
