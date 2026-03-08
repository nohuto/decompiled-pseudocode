/*
 * XREFs of ?_Change_array@?$vector@UHandleTableEntry@CChannel@@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@AEAAXQEAUHandleTableEntry@CChannel@@_K1@Z @ 0x1800A6BE4
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UHandleTableEntry@CChannel@@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800A6AB4 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UHandleTableEntry@CChannel@@V-$allocator@U.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAXPEAUHandleTableEntry@CChannel@@QEAU12@AEAV?$allocator@UHandleTableEntry@CChannel@@@0@@Z @ 0x1800A827C (--$_Destroy_range@V-$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAXPEAUHandleTableEntry@C.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CChannel::HandleTableEntry>::_Change_array(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CChannel::HandleTableEntry>>(v6, a1[1]);
    result = std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *a1 = a2;
  a1[1] = a2 + 16 * a3;
  a1[2] = a2 + 16 * a4;
  return result;
}
