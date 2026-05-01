/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@V_lambda_d1465830bf7ff245d54538fb3dd3c5c6_@@_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@std@@EEAA_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@2@@Z @ 0x180144B70
 * Callers:
 *     <none>
 * Callees:
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x18002158C (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 */

char __fastcall std::_Func_impl_no_alloc<_lambda_d1465830bf7ff245d54538fb3dd3c5c6_,bool,std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &>::_Do_call(
        __int64 a1,
        __int64 a2)
{
  char v2; // r8
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v2 = 1;
  ++**(_DWORD **)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  if ( **(_DWORD **)(a1 + 8) >= *(_DWORD *)(v4 + 168) )
  {
    v5 = std::chrono::steady_clock::now(&v7);
    v2 = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) = *v5 + *(_QWORD *)(v4 + 176);
  }
  return v2;
}
