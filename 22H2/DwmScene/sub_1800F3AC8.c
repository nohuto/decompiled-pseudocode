/*
 * XREFs of sub_1800F3AC8 @ 0x1800F3AC8
 * Callers:
 *     _setlocale_set_cat_0 @ 0x1800AA5C4 (_setlocale_set_cat_0.c)
 *     sub_1800AAAB0 @ 0x1800AAAB0 (sub_1800AAAB0.c)
 *     sub_1800D86A8 @ 0x1800D86A8 (sub_1800D86A8.c)
 *     sub_1800D8EA8 @ 0x1800D8EA8 (sub_1800D8EA8.c)
 *     sub_180104F70 @ 0x180104F70 (sub_180104F70.c)
 *     sub_180127491 @ 0x180127491 (sub_180127491.c)
 *     sub_1801274CD @ 0x1801274CD (sub_1801274CD.c)
 *     sub_180127509 @ 0x180127509 (sub_180127509.c)
 *     sub_18012820D @ 0x18012820D (sub_18012820D.c)
 *     sub_180128219 @ 0x180128219 (sub_180128219.c)
 *     sub_18012A29F @ 0x18012A29F (sub_18012A29F.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800F3AC8(__int64 a1)
{
  __int64 v2; // rdx
  signed __int32 v3; // eax
  void (__fastcall ***v4)(_QWORD); // rcx
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(v2 + 8);
      if ( !v3 )
        break;
      if ( v3 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3) )
      {
        v4 = *(void (__fastcall ****)(_QWORD))a1;
        v5 = *(volatile signed __int32 **)(a1 + 8);
        if ( *(_QWORD *)a1 )
          (**v4)(v4);
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
  v6 = *(volatile signed __int32 **)(a1 + 8);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  }
}
