/*
 * XREFs of sub_180010510 @ 0x180010510
 * Callers:
 *     <none>
 * Callees:
 *     sub_180029ED0 @ 0x180029ED0 (sub_180029ED0.c)
 *     sub_180066D1C @ 0x180066D1C (sub_180066D1C.c)
 *     sub_180068210 @ 0x180068210 (sub_180068210.c)
 *     sub_18006AA58 @ 0x18006AA58 (sub_18006AA58.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _Query_perf_counter @ 0x18011F982 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x18011F988 (_Query_perf_frequency.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180010510(__int64 a1)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v4; // rbx
  _QWORD *v5; // rax
  volatile signed __int32 *v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF

  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v4 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  v10 = 0LL;
  sub_180029ED0(a1, &v10);
  if ( (_QWORD)v10 )
  {
    v5 = (_QWORD *)sub_18006AA58();
    sub_180068210(*v5, 0LL);
  }
  v6 = (volatile signed __int32 *)*((_QWORD *)&v10 + 1);
  if ( *((_QWORD *)&v10 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v7 = Query_perf_frequency();
  v8 = Query_perf_counter();
  return sub_180066D1C(
           a1,
           v4,
           1000000000 * (v8 / v7) + 1000000000 * (v8 % v7) / v7,
           1000000000 * (v8 / v7) + 1000000000 * (v8 % v7) / v7 - v4);
}
