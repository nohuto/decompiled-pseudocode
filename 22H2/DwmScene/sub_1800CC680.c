/*
 * XREFs of sub_1800CC680 @ 0x1800CC680
 * Callers:
 *     sub_1800CCAB0 @ 0x1800CCAB0 (sub_1800CCAB0.c)
 *     sub_1800F184C @ 0x1800F184C (sub_1800F184C.c)
 * Callees:
 *     sub_180062550 @ 0x180062550 (sub_180062550.c)
 *     sub_1800CBD34 @ 0x1800CBD34 (sub_1800CBD34.c)
 *     sub_1800CC2A8 @ 0x1800CC2A8 (sub_1800CC2A8.c)
 *     sub_1800CC828 @ 0x1800CC828 (sub_1800CC828.c)
 *     sub_1800CCA38 @ 0x1800CCA38 (sub_1800CCA38.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800CC680(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rbx
  __int128 v9; // [rsp+20h] [rbp-29h] BYREF
  int v10; // [rsp+30h] [rbp-19h] BYREF
  __int64 v11; // [rsp+38h] [rbp-11h]
  _QWORD v12[4]; // [rsp+40h] [rbp-9h] BYREF
  __int128 v13; // [rsp+60h] [rbp+17h]
  __int128 v14; // [rsp+70h] [rbp+27h] BYREF

  result = sub_180062550(a1, a2);
  v13 = 0LL;
  v5 = *(_QWORD *)(a1 + 168);
  if ( v5 )
  {
    while ( 1 )
    {
      result = *(unsigned int *)(v5 + 8);
      if ( !(_DWORD)result )
        break;
      if ( (_DWORD)result == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), result + 1, result) )
      {
        v6 = *(_QWORD *)(a1 + 160);
        *(_QWORD *)&v13 = v6;
        result = *(_QWORD *)(a1 + 168);
        *((_QWORD *)&v13 + 1) = result;
        goto LABEL_3;
      }
    }
  }
  v6 = v13;
LABEL_3:
  if ( v6 )
  {
    v14 = 0LL;
    sub_1800CBD34(*a2, (__int64 *)&v14);
    v10 = *(_DWORD *)(a1 + 96);
    v11 = *(_QWORD *)(a1 + 104);
    sub_1800CC2A8(v12, (__int64 *)(a1 + 112));
    v12[3] = *(_QWORD *)(a1 + 136);
    sub_1800CCA38(v14, *a2, &v10, v6);
    v9 = v14;
    v14 = 0uLL;
    result = sub_1800CC828(a1, &v9);
    v7 = (volatile signed __int32 *)*((_QWORD *)&v14 + 1);
    if ( *((_QWORD *)&v14 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        result = (unsigned int)_InterlockedDecrement(v7 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
  }
  if ( *((_QWORD *)&v13 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v8 = *((_QWORD *)&v13 + 1);
      (***((void (__fastcall ****)(_QWORD))&v13 + 1))(*((_QWORD *)&v13 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(*((_QWORD *)&v13 + 1));
    }
  }
  return result;
}
