/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f29621112cb61d54fa7d920aa1c0b80f__unsigned_char_Concurrency::task_bool___::_Do_call @ 0x1803972E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall std::_Func_impl_no_alloc__lambda_f29621112cb61d54fa7d920aa1c0b80f__unsigned_char_Concurrency::task_bool___::_Do_call(
        __int64 a1,
        std::_Ref_count_base **a2)
{
  std::_Ref_count_base *v2; // r8
  volatile signed __int32 *v3; // rax
  __int64 v4; // rcx
  std::_Ref_count_base *v6[2]; // [rsp+20h] [rbp-20h] BYREF
  std::_Ref_count_base *v7; // [rsp+30h] [rbp-10h]
  std::_Ref_count_base *v8; // [rsp+38h] [rbp-8h]

  v2 = *a2;
  v7 = *a2;
  v8 = a2[1];
  v3 = (volatile signed __int32 *)v8;
  *a2 = 0LL;
  a2[1] = 0LL;
  *(_OWORD *)v6 = 0LL;
  if ( v3 )
  {
    _InterlockedIncrement(v3 + 2);
    v2 = v7;
    v3 = (volatile signed __int32 *)v8;
  }
  v6[0] = v2;
  v6[1] = (std::_Ref_count_base *)v3;
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, std::_Ref_count_base **))(*(_QWORD *)v4 + 16LL))(v4, v6);
  if ( v6[1] )
    std::_Ref_count_base::_Decref(v6[1]);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return 0;
}
