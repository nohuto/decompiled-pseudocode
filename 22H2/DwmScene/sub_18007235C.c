/*
 * XREFs of sub_18007235C @ 0x18007235C
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
 *     ?dtor$1@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z@4HA_0 @ 0x18012583A (-dtor$1@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_18012583A.c)
 *     sub_18012591E @ 0x18012591E (sub_18012591E.c)
 *     sub_180125942 @ 0x180125942 (sub_180125942.c)
 *     sub_180125966 @ 0x180125966 (sub_180125966.c)
 *     unknown_libname_50 @ 0x180125996 (unknown_libname_50.c)
 *     sub_1801259DE @ 0x1801259DE (sub_1801259DE.c)
 *     sub_180125A26 @ 0x180125A26 (sub_180125A26.c)
 *     sub_180125A56 @ 0x180125A56 (sub_180125A56.c)
 *     sub_180125A86 @ 0x180125A86 (sub_180125A86.c)
 *     unknown_libname_134 @ 0x180125BDC (unknown_libname_134.c)
 *     sub_180125CA8 @ 0x180125CA8 (sub_180125CA8.c)
 *     sub_180125CE4 @ 0x180125CE4 (sub_180125CE4.c)
 *     sub_180125D20 @ 0x180125D20 (sub_180125D20.c)
 *     sub_180125D50 @ 0x180125D50 (sub_180125D50.c)
 *     sub_180125D68 @ 0x180125D68 (sub_180125D68.c)
 *     ?dtor$4@?0??_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z@4HA_1 @ 0x180125D8C (-dtor$4@-0--_Putmfld@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@st_ea_180125D8C.c)
 *     sub_18012749D @ 0x18012749D (sub_18012749D.c)
 *     unknown_libname_140 @ 0x1801274E5 (unknown_libname_140.c)
 *     sub_180127521 @ 0x180127521 (sub_180127521.c)
 *     sub_180127C04 @ 0x180127C04 (sub_180127C04.c)
 *     sub_18012A2B7 @ 0x18012A2B7 (sub_18012A2B7.c)
 * Callees:
 *     sub_1800E4050 @ 0x1800E4050 (sub_1800E4050.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18007235C(__int64 *a1)
{
  __int64 v2; // rdx
  signed __int32 v3; // eax
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rcx

  v2 = a1[1];
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(v2 + 8);
      if ( !v3 )
        break;
      if ( v3 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3) )
      {
        v4 = *a1;
        v5 = (volatile signed __int32 *)a1[1];
        if ( *a1 )
          sub_1800E4050(v4, a1[2]);
        if ( v5 )
        {
          if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
            if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
          }
        }
        break;
      }
    }
  }
  v6 = (volatile signed __int32 *)a1[1];
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  }
}
