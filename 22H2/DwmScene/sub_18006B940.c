/*
 * XREFs of sub_18006B940 @ 0x18006B940
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006156C @ 0x18006156C (sub_18006156C.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_18006AB7C @ 0x18006AB7C (sub_18006AB7C.c)
 *     sub_18006ABFC @ 0x18006ABFC (sub_18006ABFC.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18006B940(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // esi
  unsigned int i; // edi
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int128 v9; // [rsp+30h] [rbp-88h] BYREF
  __int128 v10; // [rsp+40h] [rbp-78h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( (_BYTE)result )
  {
    result = sub_18006ABFC(a1);
    v5 = result;
    for ( i = 0; i < v5; ++i )
    {
      v9 = 0LL;
      sub_18006AB7C(a1, &v9, i);
      v7 = v9;
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 368LL))(v9);
      if ( result == a2 )
      {
        v10 = 0LL;
        sub_18006156C(v7 + 8, (__int64)&v10);
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
        if ( BYTE8(v10) )
          result = sub_180061A34(v10);
      }
      if ( *((_QWORD *)&v9 + 1) )
      {
        result = (unsigned int)_InterlockedExchangeAdd(
                                 (volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 8LL),
                                 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
        {
          v8 = *((_QWORD *)&v9 + 1);
          (***((void (__fastcall ****)(_QWORD))&v9 + 1))(*((_QWORD *)&v9 + 1));
          result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 12), 0xFFFFFFFF);
          if ( (_DWORD)result == 1 )
            result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v9 + 1) + 8LL))(*((_QWORD *)&v9 + 1));
        }
      }
    }
  }
  return result;
}
