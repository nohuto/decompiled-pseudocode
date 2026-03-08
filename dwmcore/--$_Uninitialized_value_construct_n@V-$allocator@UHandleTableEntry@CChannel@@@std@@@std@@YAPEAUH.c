/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAPEAUHandleTableEntry@CChannel@@PEAU12@_KAEAV?$allocator@UHandleTableEntry@CChannel@@@0@@Z @ 0x1800A6BA8
 * Callers:
 *     ?CreateNewHandleTableEntry@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@PEAUIUnknown@@@Z @ 0x180044220 (-CreateNewHandleTableEntry@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@PEAUIUnknown@@@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UHandleTableEntry@CChannel@@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800A6AB4 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UHandleTableEntry@CChannel@@V-$allocator@U.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAXPEAUHandleTableEntry@CChannel@@QEAU12@AEAV?$allocator@UHandleTableEntry@CChannel@@@0@@Z @ 0x1800A827C (--$_Destroy_range@V-$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAXPEAUHandleTableEntry@C.c)
 */

_QWORD *__fastcall std::_Uninitialized_value_construct_n<std::allocator<CChannel::HandleTableEntry>>(
        _QWORD *a1,
        __int64 a2)
{
  for ( ; a2; --a2 )
  {
    *a1 = 0LL;
    a1[1] = 0LL;
    a1 += 2;
  }
  std::_Destroy_range<std::allocator<CChannel::HandleTableEntry>>(a1, a1);
  return a1;
}
