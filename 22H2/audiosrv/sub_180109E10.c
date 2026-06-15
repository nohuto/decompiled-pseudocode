/*
 * XREFs of sub_180109E10 @ 0x180109E10
 * Callers:
 *     sub_180109A24 @ 0x180109A24 (sub_180109A24.c)
 *     sub_180109AB0 @ 0x180109AB0 (sub_180109AB0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180109E10(_QWORD *a1, char a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = a1[1];
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  if ( a2 )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 24LL))(a1);
  return result;
}
