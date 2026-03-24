/*
 * XREFs of ??$emplace_back@AEBUScribbleFrame@CComputeScribbleScheduler@@@?$deque@UScribbleFrame@CComputeScribbleScheduler@@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@QEAAAEAUScribbleFrame@CComputeScribbleScheduler@@AEBU23@@Z @ 0x1801A3BA8
 * Callers:
 *     ?Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z @ 0x1801A4EB4 (-Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050D58 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??C?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@VCMegaRect@@@std@@@std@@@std@@QEBAPEAVCMegaRect@@XZ @ 0x1800EF794 (--C-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@VCMegaRect@@@std@@@std@@@std@@QEBAPEAV.c)
 *     ??0ScribbleFrame@CComputeScribbleScheduler@@QEAA@AEBU01@@Z @ 0x1801A3D1C (--0ScribbleFrame@CComputeScribbleScheduler@@QEAA@AEBU01@@Z.c)
 *     ?_Growmap@?$deque@UScribbleFrame@CComputeScribbleScheduler@@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@AEAAX_K@Z @ 0x1801A5444 (-_Growmap@-$deque@UScribbleFrame@CComputeScribbleScheduler@@V-$allocator@UScribbleFrame@CCompute.c)
 */

__int64 __fastcall std::deque<CComputeScribbleScheduler::ScribbleFrame>::emplace_back<CComputeScribbleScheduler::ScribbleFrame const &>(
        __int64 a1,
        const struct CComputeScribbleScheduler::ScribbleFrame *a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdi
  _QWORD **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD ***v10; // rcx
  _QWORD *v11; // rax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 <= *(_QWORD *)(a1 + 32) + 1LL )
  {
    std::deque<CComputeScribbleScheduler::ScribbleFrame>::_Growmap(a1);
    v4 = *(_QWORD *)(a1 + 16);
  }
  *(_QWORD *)(a1 + 24) &= v4 - 1;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = (*(_QWORD *)(a1 + 16) - 1LL) & (*(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 24));
  if ( !*(_QWORD *)(v5 + 8 * v6) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v6) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
    v5 = *(_QWORD *)(a1 + 8);
  }
  CComputeScribbleScheduler::ScribbleFrame::ScribbleFrame(
    *(CComputeScribbleScheduler::ScribbleFrame **)(v5 + 8 * v6),
    a2);
  ++*(_QWORD *)(a1 + 32);
  v7 = 0LL;
  v8 = *(_QWORD *)(a1 + 32);
  v9 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)a1 )
  {
    v10 = **(_QWORD *****)a1;
    if ( v10 )
      v7 = *v10;
  }
  v13 = 0LL;
  if ( v7 )
  {
    v11 = *v7;
    if ( v11 )
      *(_QWORD *)&v13 = *v11;
  }
  v14 = v8 + v9 - 1;
  return std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<CMegaRect>>>::operator->((__int64 **)&v13);
}
