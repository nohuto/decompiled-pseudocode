/*
 * XREFs of sub_1800186E0 @ 0x1800186E0
 * Callers:
 *     sub_180019D80 @ 0x180019D80 (sub_180019D80.c)
 *     sub_180023360 @ 0x180023360 (sub_180023360.c)
 *     sub_180023940 @ 0x180023940 (sub_180023940.c)
 *     sub_180024B60 @ 0x180024B60 (sub_180024B60.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     sub_18002C8D0 @ 0x18002C8D0 (sub_18002C8D0.c)
 *     sub_180030200 @ 0x180030200 (sub_180030200.c)
 *     sub_180032DB0 @ 0x180032DB0 (sub_180032DB0.c)
 *     sub_180033080 @ 0x180033080 (sub_180033080.c)
 *     sub_180033220 @ 0x180033220 (sub_180033220.c)
 *     sub_180033D40 @ 0x180033D40 (sub_180033D40.c)
 *     sub_180036A50 @ 0x180036A50 (sub_180036A50.c)
 *     sub_180039510 @ 0x180039510 (sub_180039510.c)
 *     sub_180039880 @ 0x180039880 (sub_180039880.c)
 *     sub_18003A5A8 @ 0x18003A5A8 (sub_18003A5A8.c)
 *     sub_180104F70 @ 0x180104F70 (sub_180104F70.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800186E0(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  volatile signed __int32 *v5; // rbx

  v3 = *a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = a2[1];
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  *a1 = v3;
  a1[1] = a2[1];
  v5 = (volatile signed __int32 *)a2[1];
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return a1;
}
