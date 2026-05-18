/*
 * XREFs of sub_180066384 @ 0x180066384
 * Callers:
 *     sub_180067520 @ 0x180067520 (sub_180067520.c)
 *     sub_1800D77BC @ 0x1800D77BC (sub_1800D77BC.c)
 * Callees:
 *     sub_18009ADA4 @ 0x18009ADA4 (sub_18009ADA4.c)
 *     sub_18009AE08 @ 0x18009AE08 (sub_18009AE08.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180066384(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v5; // rbx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0LL;
  sub_18009ADA4(a1, &v6, a2);
  if ( (_QWORD)v6 )
  {
    v2 = sub_18009AE08(v6);
    v3 = (volatile signed __int32 *)*((_QWORD *)&v6 + 1);
    if ( *((_QWORD *)&v6 + 1)
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v6 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
    return v2;
  }
  else
  {
    v5 = (volatile signed __int32 *)*((_QWORD *)&v6 + 1);
    if ( *((_QWORD *)&v6 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v6 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
        if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      }
    }
    return 0LL;
  }
}
