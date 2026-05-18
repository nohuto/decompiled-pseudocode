/*
 * XREFs of sub_18010529C @ 0x18010529C
 * Callers:
 *     sub_1800D7CAC @ 0x1800D7CAC (sub_1800D7CAC.c)
 *     sub_18010C0A0 @ 0x18010C0A0 (sub_18010C0A0.c)
 *     sub_18010C5C0 @ 0x18010C5C0 (sub_18010C5C0.c)
 * Callees:
 *     sub_1800683A8 @ 0x1800683A8 (sub_1800683A8.c)
 *     sub_1800AA078 @ 0x1800AA078 (sub_1800AA078.c)
 *     sub_1800AC570 @ 0x1800AC570 (sub_1800AC570.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18010529C(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rdx
  __int64 result; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v14; // [rsp+30h] [rbp-30h]
  __int64 v15; // [rsp+38h] [rbp-28h]
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF

  v14 = a3;
  v15 = a4;
  v16 = 0LL;
  sub_1800AA078(a1, &v16, a2);
  sub_1800683A8(v16, (__int64)a3, a4, a5);
  v13 = 0LL;
  v8 = a3[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a3[1];
  }
  *(_QWORD *)&v13 = *a3;
  *((_QWORD *)&v13 + 1) = v8;
  result = sub_1800AC570(a1, (__int64 *)&v13);
  v10 = (volatile signed __int32 *)*((_QWORD *)&v16 + 1);
  if ( *((_QWORD *)&v16 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      result = (unsigned int)_InterlockedDecrement(v10 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = (volatile signed __int32 *)a3[1];
  if ( v11 )
  {
    result = (unsigned int)_InterlockedDecrement(v11 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      result = (unsigned int)_InterlockedDecrement(v11 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v12 = *(volatile signed __int32 **)(a4 + 8);
  if ( v12 )
  {
    result = (unsigned int)_InterlockedDecrement(v12 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      result = (unsigned int)_InterlockedDecrement(v12 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return result;
}
