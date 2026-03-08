/*
 * XREFs of ?_Change_array@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEAAXQEAVCMilPoint2F@@_K1@Z @ 0x1800B9ACC
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800B9278 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CMilPoint2F>::_Change_array(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (a1[2] - v6) & 0xFFFFFFFFFFFFFFF8uLL);
  *a1 = a2;
  a1[1] = a2 + 8 * a3;
  result = a2 + 8 * a4;
  a1[2] = result;
  return result;
}
