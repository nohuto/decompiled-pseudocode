/*
 * XREFs of sub_1800CA310 @ 0x1800CA310
 * Callers:
 *     sub_1800912C8 @ 0x1800912C8 (sub_1800912C8.c)
 * Callees:
 *     sub_1800C98D4 @ 0x1800C98D4 (sub_1800C98D4.c)
 *     sub_1800CA244 @ 0x1800CA244 (sub_1800CA244.c)
 *     sub_1800CD0B4 @ 0x1800CD0B4 (sub_1800CD0B4.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800CA310(_QWORD *a1, int a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  _QWORD *v6; // rbx
  int v8; // [rsp+40h] [rbp-40h] BYREF
  int v9; // [rsp+44h] [rbp-3Ch] BYREF
  int v10; // [rsp+48h] [rbp-38h] BYREF
  int v11; // [rsp+4Ch] [rbp-34h] BYREF
  int v12; // [rsp+50h] [rbp-30h] BYREF
  _QWORD *v13[2]; // [rsp+58h] [rbp-28h] BYREF
  int v14; // [rsp+68h] [rbp-18h] BYREF

  v13[1] = a1;
  v14 = a2;
  sub_1800CD0B4(a1, 11LL, 5LL);
  *a1 = &Spectre::Engine::VertexBuffer::`vftable';
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v3 = sub_1800CA244(v13, &v12, &v11, &v10, &v9, &v8, &v14);
  v4 = *v3;
  *v3 = 0LL;
  v5 = (void (__fastcall ***)(_QWORD, __int64))a1[14];
  a1[14] = v4;
  if ( v5 )
    (**v5)(v5, 1LL);
  v6 = v13[0];
  if ( v13[0] )
  {
    sub_1800C98D4(v13[0]);
    j__o_free(v6);
  }
  return a1;
}
