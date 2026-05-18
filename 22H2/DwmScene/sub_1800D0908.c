/*
 * XREFs of sub_1800D0908 @ 0x1800D0908
 * Callers:
 *     sub_1800D0B44 @ 0x1800D0B44 (sub_1800D0B44.c)
 * Callees:
 *     sub_1800619A8 @ 0x1800619A8 (sub_1800619A8.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180062A5C @ 0x180062A5C (sub_180062A5C.c)
 *     sub_1800646EC @ 0x1800646EC (sub_1800646EC.c)
 *     sub_180065588 @ 0x180065588 (sub_180065588.c)
 *     sub_1800D0CC4 @ 0x1800D0CC4 (sub_1800D0CC4.c)
 *     sub_1801037F0 @ 0x1801037F0 (sub_1801037F0.c)
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _Query_perf_counter @ 0x18011F982 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x18011F988 (_Query_perf_frequency.c)
 *     _Thrd_yield @ 0x18011FA56 (_Thrd_yield.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800D0908(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v6; // rsi
  char v7; // r12
  __int64 v8; // rbp
  __int64 **v9; // rax
  __int64 *v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  int v19; // [rsp+38h] [rbp-F0h]
  __int64 v20; // [rsp+48h] [rbp-E0h] BYREF
  _BYTE v21[136]; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v22[3]; // [rsp+D8h] [rbp-50h] BYREF

  v2 = a2;
  sub_1800619A8(a1);
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v6 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  sub_180065588((__int64)v21);
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 56);
  v19 = v8;
  v9 = *(__int64 ***)(a1 + 48);
  v10 = *v9;
  if ( *v9 != (__int64 *)v9 )
  {
    do
    {
      if ( v7 )
        break;
      v11 = Query_perf_frequency();
      v12 = Query_perf_counter();
      if ( 1000000000 * (v12 % v11) / v11 + 1000000000 * (v12 / v11) - v6 >= 1000000 * v2 )
      {
LABEL_6:
        sub_1801163DC(
          &unk_18020CB18,
          4LL,
          "GpuProfiler::FramesData::WaitPendingFrames() -- wait for flush abandoned (limit is %lld ms)",
          v2);
        v7 = 1;
      }
      else
      {
        while ( 1 )
        {
          LOBYTE(v13) = 1;
          if ( (unsigned int)sub_1801037F0(*(_QWORD *)(a1 + 16 * (v10[4] + 4)), v21, v13) == 3 )
            break;
          Thrd_yield();
          v14 = Query_perf_frequency();
          v15 = Query_perf_counter();
          if ( 1000000000 * (v15 % v14) / v14 + 1000000000 * (v15 / v14) - v6 >= 1000000 * v2 )
            goto LABEL_6;
        }
        sub_1800D0CC4(a1 + 8, v10 + 4);
        v10 = (__int64 *)*sub_180062A5C((_QWORD *)(a1 + 48), &v20, v10);
      }
    }
    while ( v10 != *(__int64 **)(a1 + 48) );
    LODWORD(v8) = v19;
  }
  v16 = Query_perf_frequency();
  v17 = Query_perf_counter();
  sub_1801163DC(
    &unk_18020CB18,
    2LL,
    "GpuProfiler::FramesData::WaitPendingFrames() -- waited %lld ms for flush (pending frames: %d)",
    (1000000000 * (v17 % v16) / v16 + 1000000000 * (v17 / v16) - v6) / 1000000,
    v8);
  sub_1800646EC(v22, (__int64)v22);
  return sub_180061A34(a1);
}
