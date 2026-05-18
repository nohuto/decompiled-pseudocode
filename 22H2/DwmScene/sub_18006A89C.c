/*
 * XREFs of sub_18006A89C @ 0x18006A89C
 * Callers:
 *     sub_180073FB4 @ 0x180073FB4 (sub_180073FB4.c)
 * Callees:
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_18006B2BC @ 0x18006B2BC (sub_18006B2BC.c)
 *     sub_18006BBDC @ 0x18006BBDC (sub_18006BBDC.c)
 *     sub_1800D0B44 @ 0x1800D0B44 (sub_1800D0B44.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18006A89C(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  volatile signed __int32 *v4; // rdi
  __int64 result; // rax
  __int64 v6; // r14
  _QWORD *i; // rbx
  _QWORD *v8; // rax
  signed __int32 v9; // eax
  bool v10; // zf
  _BYTE v11[8]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v12; // [rsp+38h] [rbp-28h] BYREF
  __int128 v13; // [rsp+48h] [rbp-18h] BYREF

  v3 = *a2;
  v4 = (volatile signed __int32 *)a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v13 = 0LL;
  sub_18006B2BC(a1, &v13);
  v12 = 0LL;
  sub_1800615B4(a1 + 24, (__int64)&v12);
  result = *(_QWORD *)(a1 + 256);
  v6 = a1 + 248;
  for ( i = *(_QWORD **)(a1 + 248); i != (_QWORD *)result && *i != v3; i += 2 )
    ;
  if ( i != (_QWORD *)result )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 360LL))(v3, 0LL);
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 184LL))(v3);
    sub_1800D0B44(*v8, 500LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 336LL))(v3);
    result = sub_18006BBDC(v6, v11, i);
  }
  if ( BYTE8(v12) )
    result = sub_180061A34(v12);
  if ( BYTE8(v13) )
    result = sub_180061A34(v13);
  if ( v4 )
  {
    v9 = _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF);
    v10 = v9 == 1;
    result = (unsigned int)(v9 - 1);
    if ( v10 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      result = (unsigned int)_InterlockedDecrement(v4 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return result;
}
