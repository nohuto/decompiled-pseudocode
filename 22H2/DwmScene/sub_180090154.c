/*
 * XREFs of sub_180090154 @ 0x180090154
 * Callers:
 *     sub_1800E9890 @ 0x1800E9890 (sub_1800E9890.c)
 *     sub_1800EA640 @ 0x1800EA640 (sub_1800EA640.c)
 * Callees:
 *     sub_18009FD8C @ 0x18009FD8C (sub_18009FD8C.c)
 *     sub_1800A5574 @ 0x1800A5574 (sub_1800A5574.c)
 *     sub_1800EC274 @ 0x1800EC274 (sub_1800EC274.c)
 *     sub_1800ECEEC @ 0x1800ECEEC (sub_1800ECEEC.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180090154(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rbx
  __int128 v6; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v7; // [rsp+30h] [rbp-30h]
  __int128 v8; // [rsp+40h] [rbp-20h] BYREF

  v7 = a2;
  v8 = 0LL;
  sub_18009FD8C(a1, &v8, 8LL);
  sub_1800EC274(v8, &qword_18020C438, 7LL, 256LL);
  sub_1800ECEEC(v8);
  v6 = 0LL;
  if ( *((_QWORD *)&v8 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v8 + 1) + 8LL));
  v6 = v8;
  result = sub_1800A5574(*a2, &v6);
  v4 = (volatile signed __int32 *)*((_QWORD *)&v8 + 1);
  if ( *((_QWORD *)&v8 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v8 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      result = (unsigned int)_InterlockedDecrement(v4 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v5 = (volatile signed __int32 *)a2[1];
  if ( v5 )
  {
    result = (unsigned int)_InterlockedDecrement(v5 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      result = (unsigned int)_InterlockedDecrement(v5 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return result;
}
