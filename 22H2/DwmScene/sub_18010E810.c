/*
 * XREFs of sub_18010E810 @ 0x18010E810
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
 *     sub_1800BD760 @ 0x1800BD760 (sub_1800BD760.c)
 *     sub_1800BDD30 @ 0x1800BDD30 (sub_1800BDD30.c)
 * Callees:
 *     sub_18010EB08 @ 0x18010EB08 (sub_18010EB08.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18010E810(_QWORD *a1, _QWORD *a2, __int64 a3, int a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v9; // rcx
  __int64 v10; // rdx
  char v11; // al
  volatile signed __int32 *v12; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = *a2;
  a1[1] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *((_DWORD *)a1 + 4) = a4;
  a1[3] = a3;
  v9 = a5;
  a1[4] = a5;
  v10 = a6;
  a1[5] = a6;
  v11 = a7;
  *((_BYTE *)a1 + 48) = a7;
  a1[7] = 0LL;
  if ( v11 )
  {
    (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*a1 + 16LL) + 8LL))(*(_QWORD *)(*a1 + 16LL), &a5);
    a1[7] = a5;
  }
  else
  {
    sub_18010EB08(*a1, 1, a3, a4, v9, v10);
  }
  v12 = (volatile signed __int32 *)a2[1];
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return a1;
}
