/*
 * XREFs of ?_Change_array@?$vector@UInstance_Pos4_QRot_ColorDW_Size2@@V?$allocator@UInstance_Pos4_QRot_ColorDW_Size2@@@std@@@std@@AEAAXQEAUInstance_Pos4_QRot_ColorDW_Size2@@_K1@Z @ 0x1801C77CC
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UInstance_Pos4_QRot_ColorDW_Size2@@V?$allocator@UInstance_Pos4_QRot_ColorDW_Size2@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801BCA34 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UInstance_Pos4_QRot_ColorDW_Size2@@V-$allo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Instance_Pos4_QRot_ColorDW_Size2>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 4));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 48 * a3;
  result = a2 + 48 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
