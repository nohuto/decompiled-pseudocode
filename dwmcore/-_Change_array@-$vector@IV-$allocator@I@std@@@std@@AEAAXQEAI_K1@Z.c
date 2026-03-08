/*
 * XREFs of ?_Change_array@?$vector@IV?$allocator@I@std@@@std@@AEAAXQEAI_K1@Z @ 0x1801B8C8C
 * Callers:
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z @ 0x1801B5194 (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18023F654 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@IV-$allocator@I@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ??$_Emplace_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAI$$QEAI@Z @ 0x1802692B8 (--$_Emplace_reallocate@I@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAI$$QEAI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<unsigned int>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFFCuLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 4 * a3;
  result = a2 + 4 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
