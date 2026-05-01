/*
 * XREFs of ?erase@?$deque@_KV?$allocator@_K@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@2@@Z @ 0x1800EEEF4
 * Callers:
 *     ?ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z @ 0x1800E89A4 (-ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z.c)
 * Callees:
 *     ?erase@?$deque@_KV?$allocator@_K@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@2@0@Z @ 0x1800EED48 (-erase@-$deque@_KV-$allocator@_K@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_Deque_val@U-$_Deque_sim.c)
 */

_QWORD *__fastcall std::deque<unsigned __int64>::erase(unsigned __int64 *a1, _QWORD *a2, __int64 a3)
{
  _QWORD **v3; // r9
  _QWORD **v4; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  __int128 v12; // [rsp+38h] [rbp-20h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h]

  v3 = *(_QWORD ***)a3;
  v4 = 0LL;
  if ( *(_QWORD *)a3 && *v3 )
    v4 = (_QWORD **)**v3;
  v7 = *(_QWORD *)(a3 + 16);
  v10 = 0LL;
  if ( v4 )
  {
    v8 = *v4;
    if ( v8 )
      *(_QWORD *)&v10 = *v8;
  }
  v11 = v7 + 1;
  v12 = 0LL;
  if ( v3 && *v3 )
    *(_QWORD *)&v12 = **v3;
  v13 = v7;
  std::deque<unsigned __int64>::erase(a1, a2, (__int64)&v12, (__int64)&v10);
  return a2;
}
