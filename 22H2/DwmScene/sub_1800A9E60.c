/*
 * XREFs of sub_1800A9E60 @ 0x1800A9E60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180063C48 @ 0x180063C48 (sub_180063C48.c)
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 *     sub_1800AC348 @ 0x1800AC348 (sub_1800AC348.c)
 *     sub_1800AC570 @ 0x1800AC570 (sub_1800AC570.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A9E60(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rbx
  __int128 v7; // [rsp+30h] [rbp-38h] BYREF
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF
  __int64 *v9; // [rsp+50h] [rbp-18h] BYREF

  v9 = a2;
  if ( *(_DWORD *)(a1 + 128) )
  {
    v7 = 0LL;
    sub_1800AC570(a1, &v7);
    v8 = 0LL;
    sub_1800AC348(a1, &v8);
  }
  LODWORD(v9) = sub_18006AB3C(*a2);
  result = sub_180063C48((__int64 *)(a1 + 448), (unsigned int *)&v9);
  v5 = (volatile signed __int32 *)a2[1];
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
    v5 = (volatile signed __int32 *)a2[1];
  }
  if ( v5 )
  {
    result = (unsigned int)_InterlockedDecrement(v5 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      result = (unsigned int)_InterlockedDecrement(v5 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v6 = (volatile signed __int32 *)a2[1];
  if ( v6 )
  {
    result = (unsigned int)_InterlockedDecrement(v6 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      result = (unsigned int)_InterlockedDecrement(v6 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return result;
}
