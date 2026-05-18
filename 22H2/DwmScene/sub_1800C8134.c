/*
 * XREFs of sub_1800C8134 @ 0x1800C8134
 * Callers:
 *     sub_1800C9720 @ 0x1800C9720 (sub_1800C9720.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180062688 @ 0x180062688 (sub_180062688.c)
 *     sub_1800628C4 @ 0x1800628C4 (sub_1800628C4.c)
 *     sub_1800C74C8 @ 0x1800C74C8 (sub_1800C74C8.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall sub_1800C8134(__int64 a1, _OWORD *a2, __int64 a3, __int64 *a4)
{
  __int64 v7; // rbx
  __int128 v9; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10[4]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v11; // [rsp+50h] [rbp-28h] BYREF

  *(_QWORD *)&v9 = a2;
  v11 = 0LL;
  sub_1800C74C8(*a4, (__int64 *)&v11);
  sub_180062688(a1, v10);
  sub_1800628C4(v11, v10);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v11 + 40LL))(v11, a3) )
  {
    v9 = 0LL;
    std::shared_ptr<__ExceptionPtr>::operator=(&v11, (__int64 *)&v9);
    if ( *((_QWORD *)&v9 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v7 = *((_QWORD *)&v9 + 1);
        (***((void (__fastcall ****)(_QWORD))&v9 + 1))(*((_QWORD *)&v9 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v9 + 1) + 8LL))(*((_QWORD *)&v9 + 1));
      }
    }
  }
  *a2 = v11;
  return a2;
}
