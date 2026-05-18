/*
 * XREFs of sub_1800CD5F0 @ 0x1800CD5F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012938 @ 0x180012938 (sub_180012938.c)
 *     sub_1800626B8 @ 0x1800626B8 (sub_1800626B8.c)
 *     sub_180062770 @ 0x180062770 (sub_180062770.c)
 *     sub_180063B28 @ 0x180063B28 (sub_180063B28.c)
 *     sub_180078958 @ 0x180078958 (sub_180078958.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800CD5F0(_QWORD *a1)
{
  __int64 v2; // rax
  char result; // al
  __int64 v4; // rax
  __int128 i; // rdi
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  sub_180062770((__int64)a1);
  v2 = a1[14];
  if ( v2 )
    LODWORD(v2) = *(_DWORD *)(v2 + 24);
  if ( (_DWORD)v2 != 2 )
    sub_180063B28(a1 + 15);
  result = sub_1800626B8((__int64)a1, 1);
  if ( result )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
    v6 = 0LL;
    v7 = 0LL;
    sub_180078958(v4, &v6);
    for ( i = v6; (_QWORD)i != *((_QWORD *)&i + 1); *(_QWORD *)&i = i + 16 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, i);
    return sub_180012938((__int64 *)&v6);
  }
  return result;
}
