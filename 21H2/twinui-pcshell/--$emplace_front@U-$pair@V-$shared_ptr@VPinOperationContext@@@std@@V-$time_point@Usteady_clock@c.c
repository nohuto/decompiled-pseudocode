/*
 * XREFs of ??$emplace_front@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAAAEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@1@$$QEAU21@@Z @ 0x180133D94
 * Callers:
 *     ?HandlePinRejected@PinHistory@@QEAAXV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x18013A95C (-HandlePinRejected@PinHistory@@QEAAXV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 *     ?HandlePinRequested@PinHistory@@QEAAXV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x18013ABB4 (-HandlePinRequested@PinHistory@@QEAAXV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@AEAAX_K@Z @ 0x180144DEC (-_Growmap@-$deque@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@.c)
 */

__int64 __fastcall std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::emplace_front<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>(
        __int64 **a1,
        _QWORD *a2)
{
  unsigned __int64 v4; // rcx
  bool v5; // zf
  __int64 *v6; // r14
  __int64 v7; // rdi
  __int64 *v8; // r14
  __int64 *v9; // rcx
  __int64 v10; // rbp
  _QWORD *v11; // rcx

  v4 = (unsigned __int64)a1[2];
  if ( v4 <= (unsigned __int64)a1[4] + 1 )
  {
    std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::_Growmap(a1);
    v4 = (unsigned __int64)a1[2];
  }
  v5 = ((v4 - 1) & (unsigned __int64)a1[3]) == 0;
  a1[3] = (__int64 *)((v4 - 1) & (unsigned __int64)a1[3]);
  v6 = a1[3];
  if ( v5 )
    v6 = a1[2];
  v7 = 0LL;
  v8 = (__int64 *)((char *)v6 - 1);
  v9 = a1[1];
  v10 = (unsigned __int64)v8 & ((unsigned __int64)a1[2] - 1);
  if ( !v9[v10] )
  {
    a1[1][v10] = (__int64)std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
    v9 = a1[1];
  }
  v11 = (_QWORD *)v9[v10];
  *v11 = 0LL;
  v11[1] = 0LL;
  *v11 = *a2;
  v11[1] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v11[2] = a2[2];
  a1[4] = (__int64 *)((char *)a1[4] + 1);
  a1[3] = v8;
  if ( *a1 )
    v7 = **a1;
  return *(_QWORD *)(*(_QWORD *)(v7 + 8) + 8 * ((unsigned __int64)v8 & (*(_QWORD *)(v7 + 16) - 1LL)));
}
