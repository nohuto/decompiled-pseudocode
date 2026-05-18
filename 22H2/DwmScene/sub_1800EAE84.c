/*
 * XREFs of sub_1800EAE84 @ 0x1800EAE84
 * Callers:
 *     sub_180094DB0 @ 0x180094DB0 (sub_180094DB0.c)
 * Callees:
 *     sub_180012938 @ 0x180012938 (sub_180012938.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180078958 @ 0x180078958 (sub_180078958.c)
 *     sub_1800EB244 @ 0x1800EB244 (sub_1800EB244.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800EAE84(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rdi
  __int128 v10; // [rsp+20h] [rbp-50h] BYREF
  __int128 v11; // [rsp+30h] [rbp-40h]
  __int128 v12; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+50h] [rbp-20h]
  __int128 v14; // [rsp+58h] [rbp-18h] BYREF

  v2 = sub_1800EB244(a1);
  v12 = 0LL;
  v13 = 0LL;
  sub_180078958(v2, &v12);
  v3 = 0;
  v4 = v12;
  if ( (__int64)(*((_QWORD *)&v12 + 1) - v12) >> 4 )
  {
    v5 = 0LL;
    do
    {
      v11 = 0LL;
      v6 = 2 * v5;
      v7 = *(volatile signed __int32 **)(v4 + 8 * v6 + 8);
      if ( v7 )
      {
        _InterlockedIncrement(v7 + 2);
        v7 = *(volatile signed __int32 **)(v4 + 8 * v6 + 8);
      }
      v8 = *(_QWORD *)(v4 + 8 * v6);
      *(_QWORD *)&v11 = v8;
      *((_QWORD *)&v11 + 1) = v7;
      v14 = 0LL;
      sub_1800615B4(v8 + 24, (__int64)&v14);
      v10 = 0LL;
      if ( v7 )
      {
        _InterlockedIncrement(v7 + 2);
        v8 = v11;
      }
      *(_QWORD *)&v10 = v8;
      *((_QWORD *)&v10 + 1) = v7;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a1 + 88LL))(a1, &v10);
      if ( BYTE8(v14) )
        sub_180061A34(v14);
      if ( v7 )
      {
        if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
          if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
        }
      }
      ++v3;
      v4 = v12;
      v5 = v3;
    }
    while ( v3 < (unsigned __int64)((__int64)(*((_QWORD *)&v12 + 1) - v12) >> 4) );
  }
  return sub_180012938((__int64 *)&v12);
}
