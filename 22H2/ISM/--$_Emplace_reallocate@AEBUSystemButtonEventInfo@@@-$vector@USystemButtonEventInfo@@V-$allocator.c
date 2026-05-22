/*
 * XREFs of ??$_Emplace_reallocate@AEBUSystemButtonEventInfo@@@?$vector@USystemButtonEventInfo@@V?$allocator@USystemButtonEventInfo@@@std@@@std@@QEAAPEAUSystemButtonEventInfo@@QEAU2@AEBU2@@Z @ 0x180102A30
 * Callers:
 *     ?SendSystemButtonEvent@SystemButtonEventController@@QEAAXAEBUSystemButtonEventInfo@@@Z @ 0x1801027B8 (-SendSystemButtonEvent@SystemButtonEventController@@QEAAXAEBUSystemButtonEventInfo@@@Z.c)
 *     ?OnCursorCreated@SystemCursorService@@UEAAJUCursorId@@UCursorCreateData@@@Z @ 0x1801400D0 (-OnCursorCreated@SystemCursorService@@UEAAJUCursorId@@UCursorCreateData@@@Z.c)
 *     ?RemoveExpiredNodePropertiesUpdatedCallbacks@DynamicNodeSourceBase@Holographic@Internal@Windows@@IEAA?AV?$vector@USPATIAL_NODE_ID@@V?$allocator@USPATIAL_NODE_ID@@@std@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180163560 (-RemoveExpiredNodePropertiesUpdatedCallbacks@DynamicNodeSourceBase@Holographic@Internal@Windows@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UCursorDeviceInfo@@V?$allocator@UCursorDeviceInfo@@@std@@@std@@AEAAXQEAUCursorDeviceInfo@@_K1@Z @ 0x180029924 (-_Change_array@-$vector@UCursorDeviceInfo@@V-$allocator@UCursorDeviceInfo@@@std@@@std@@AEAAXQEAU.c)
 *     memmove_0 @ 0x18004B267 (memmove_0.c)
 */

unsigned __int64 __fastcall std::vector<SystemButtonEventInfo>::_Emplace_reallocate<SystemButtonEventInfo const &>(
        const void **a1,
        _BYTE *a2,
        _OWORD *a3)
{
  signed __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  size_t v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r14
  unsigned __int64 v15; // rdi
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  void *v18; // rcx
  size_t v19; // r8
  unsigned __int64 result; // rax
  void *v21; // [rsp+58h] [rbp+10h]

  v6 = a2 - (_BYTE *)*a1;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = (__int64)v13;
  v21 = v13;
  try
  {
    v15 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
    *(_OWORD *)((char *)v13 + v15) = *a3;
    v16 = a1[1];
    v17 = *a1;
    v18 = v13;
    if ( a2 == v16 )
    {
      v19 = v16 - v17;
    }
    else
    {
      memmove_0(v13, v17, a2 - (_BYTE *)*a1);
      v18 = (void *)(v14 + v15 + 16);
      v19 = (_BYTE *)a1[1] - a2;
      v17 = a2;
    }
    memmove_0(v18, v17, v19);
    std::vector<CursorDeviceInfo>::_Change_array((__int64)a1, v14, v8, v11);
    result = (unsigned __int64)*a1 + v15;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)(16 * v11));
    throw;
  }
  return result;
}
