/*
 * XREFs of ?_Change_array@?$vector@PEAURecord@CProcessAttributionManager@@V?$allocator@PEAURecord@CProcessAttributionManager@@@std@@@std@@AEAAXQEAPEAURecord@CProcessAttributionManager@@_K1@Z @ 0x1800F9780
 * Callers:
 *     ??$_Emplace_reallocate@AEBQEAURecord@CProcessAttributionManager@@@?$vector@PEAURecord@CProcessAttributionManager@@V?$allocator@PEAURecord@CProcessAttributionManager@@@std@@@std@@QEAAPEAPEAURecord@CProcessAttributionManager@@QEAPEAU23@AEBQEAU23@@Z @ 0x1800F967C (--$_Emplace_reallocate@AEBQEAURecord@CProcessAttributionManager@@@-$vector@PEAURecord@CProcessAt.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CProcessAttributionManager::Record *>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
