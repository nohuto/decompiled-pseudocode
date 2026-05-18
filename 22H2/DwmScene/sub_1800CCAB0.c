/*
 * XREFs of sub_1800CCAB0 @ 0x1800CCAB0
 * Callers:
 *     sub_1800F184C @ 0x1800F184C (sub_1800F184C.c)
 * Callees:
 *     sub_180012938 @ 0x180012938 (sub_180012938.c)
 *     sub_180062680 @ 0x180062680 (sub_180062680.c)
 *     sub_1800626B8 @ 0x1800626B8 (sub_1800626B8.c)
 *     sub_180078958 @ 0x180078958 (sub_180078958.c)
 *     sub_1800CC530 @ 0x1800CC530 (sub_1800CC530.c)
 *     sub_1800CC680 @ 0x1800CC680 (sub_1800CC680.c)
 *     sub_1800CCED4 @ 0x1800CCED4 (sub_1800CCED4.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800CCAB0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdx
  volatile signed __int32 *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int128 *v12; // rdx
  __int64 v13; // rax
  volatile signed __int32 *v14; // rbx
  __int128 v16; // [rsp+28h] [rbp-38h] BYREF
  __int128 v17; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h]

  sub_1800CC530(a1 + 96, a2);
  v6 = a3[1];
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
    v6 = a3[1];
  }
  *(_QWORD *)(a1 + 160) = *a3;
  v7 = *(volatile signed __int32 **)(a1 + 168);
  *(_QWORD *)(a1 + 168) = v6;
  if ( v7 && _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
  if ( sub_1800626B8(a1, 1) )
  {
    v8 = sub_180062680(a1);
    v17 = 0LL;
    v18 = 0LL;
    sub_180078958(v8, &v17);
    v9 = 0;
    v10 = v17;
    if ( (__int64)(*((_QWORD *)&v17 + 1) - v17) >> 4 )
    {
      v11 = 0LL;
      do
      {
        v12 = (__int128 *)(v10 + 16 * v11);
        v16 = 0LL;
        v13 = *((_QWORD *)v12 + 1);
        if ( v13 )
          _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
        v16 = *v12;
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 32LL))(v16) )
          sub_1800CC680(a1, (__int64 *)&v16);
        v14 = (volatile signed __int32 *)*((_QWORD *)&v16 + 1);
        if ( *((_QWORD *)&v16 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
            if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          }
        }
        ++v9;
        v10 = v17;
        v11 = v9;
      }
      while ( v9 < (unsigned __int64)((__int64)(*((_QWORD *)&v17 + 1) - v17) >> 4) );
    }
    sub_180012938((__int64 *)&v17);
  }
  return sub_1800CCED4(a2 + 16);
}
