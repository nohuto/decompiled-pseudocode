/*
 * XREFs of ?_Reallocate@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800A9084
 * Callers:
 *     ?push_back@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@2@@Z @ 0x1800A8BB4 (-push_back@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-.c)
 * Callees:
 *     ??$_Uninit_move@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@V12@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@00AEAU?$_Wrap_alloc@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x1800A9ABC (--$_Uninit_move@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEA.c)
 *     ??2@YAPEAX_K@Z @ 0x1800B2468 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800B2658 (-_Xbad_alloc@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Reallocate(
        _QWORD *a1,
        unsigned __int64 a2)
{
  char *v4; // rsi
  __int64 v5; // rcx
  _QWORD *v6; // r13
  _QWORD *v7; // rbx
  unsigned __int64 v8; // r14
  volatile signed __int32 *v9; // r12
  void *v10; // [rsp+78h] [rbp+10h]

  v4 = 0LL;
  v10 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL || (v4 = (char *)operator new(16 * a2), (v10 = v4) == 0LL) )
      std::_Xbad_alloc();
  }
  try
  {
    std::_Uninit_move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::allocator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(
      *a1,
      a1[1],
      v4);
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Destroy_if_not_nil(
      v5,
      v10);
    throw;
  }
  v6 = (_QWORD *)a1[1];
  v7 = (_QWORD *)*a1;
  v8 = (unsigned __int64)v6 - *a1;
  if ( *a1 )
  {
    if ( v7 != v6 )
    {
      do
      {
        v9 = (volatile signed __int32 *)v7[1];
        if ( v9 )
        {
          if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
            if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
          }
        }
        v7 += 2;
      }
      while ( v7 != v6 );
      v7 = (_QWORD *)*a1;
    }
    operator delete(v7);
  }
  a1[2] = &v4[16 * a2];
  a1[1] = &v4[v8 & 0xFFFFFFFFFFFFFFF0uLL];
  *a1 = v4;
}
