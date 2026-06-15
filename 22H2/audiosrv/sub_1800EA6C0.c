/*
 * XREFs of sub_1800EA6C0 @ 0x1800EA6C0
 * Callers:
 *     sub_1800EA51C @ 0x1800EA51C (sub_1800EA51C.c)
 *     sub_1800ED398 @ 0x1800ED398 (sub_1800ED398.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD58C @ 0x1800CD58C (sub_1800CD58C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800EA6C0(_QWORD **a1)
{
  __int64 result; // rax
  __int64 *v3; // rdi
  __int64 *v4; // rbx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)qword_18019EE50 + 56LL))(qword_18019EE50, &v5);
  v3 = (__int64 *)*((_QWORD *)&v5 + 1);
  v4 = (__int64 *)v5;
  if ( (_QWORD)v5 != *((_QWORD *)&v5 + 1) )
  {
    do
    {
      result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v4 + 376LL))(*v4, **a1);
      ++v4;
    }
    while ( v4 != v3 );
    v3 = (__int64 *)*((_QWORD *)&v5 + 1);
    v4 = (__int64 *)v5;
  }
  if ( v4 )
  {
    sub_1800CD58C(v4, v3);
    return sub_1800472E0((__int64)v4, (v6 - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return result;
}
