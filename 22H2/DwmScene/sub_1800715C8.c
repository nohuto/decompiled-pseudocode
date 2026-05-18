/*
 * XREFs of sub_1800715C8 @ 0x1800715C8
 * Callers:
 *     sub_180074BF0 @ 0x180074BF0 (sub_180074BF0.c)
 *     sub_180076C30 @ 0x180076C30 (sub_180076C30.c)
 *     sub_180076F08 @ 0x180076F08 (sub_180076F08.c)
 *     sub_180077988 @ 0x180077988 (sub_180077988.c)
 *     sub_180077C90 @ 0x180077C90 (sub_180077C90.c)
 *     sub_1800786DC @ 0x1800786DC (sub_1800786DC.c)
 *     sub_180079804 @ 0x180079804 (sub_180079804.c)
 *     sub_18007A284 @ 0x18007A284 (sub_18007A284.c)
 *     sub_18007AC40 @ 0x18007AC40 (sub_18007AC40.c)
 *     _setlocale_set_cat_0 @ 0x1800AA5C4 (_setlocale_set_cat_0.c)
 *     sub_1800AAAB0 @ 0x1800AAAB0 (sub_1800AAAB0.c)
 *     sub_1800BD760 @ 0x1800BD760 (sub_1800BD760.c)
 *     sub_1800BDD30 @ 0x1800BDD30 (sub_1800BDD30.c)
 *     sub_180104F70 @ 0x180104F70 (sub_180104F70.c)
 * Callees:
 *     sub_1800E3F94 @ 0x1800E3F94 (sub_1800E3F94.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800715C8(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rdi
  volatile signed __int32 *v8; // rcx
  signed __int32 v10; // eax
  __int128 v11; // [rsp+28h] [rbp-18h]

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v11 = 0LL;
  v5 = a2[1];
  if ( v5 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v5 + 8);
      if ( !v10 )
        break;
      if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v10 + 1, v10) )
      {
        v7 = *a2;
        *(_QWORD *)&v11 = *a2;
        v6 = a2[1];
        *((_QWORD *)&v11 + 1) = v6;
        goto LABEL_3;
      }
    }
  }
  v6 = 0LL;
  v7 = 0LL;
LABEL_3:
  if ( v7 )
  {
    a1[2] = sub_1800E3F94(v7, a3);
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
      v6 = *((_QWORD *)&v11 + 1);
      v7 = v11;
    }
    *a1 = v7;
    v8 = (volatile signed __int32 *)a1[1];
    a1[1] = v6;
    if ( v8 )
    {
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      v6 = *((_QWORD *)&v11 + 1);
    }
  }
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
    }
  }
  return a1;
}
