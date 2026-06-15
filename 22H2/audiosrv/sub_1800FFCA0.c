/*
 * XREFs of sub_1800FFCA0 @ 0x1800FFCA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 (__fastcall **__fastcall sub_1800FFCA0(__int64 a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v2; // rcx

  result = off_180148C98;
  *(_QWORD *)(a1 + 16) = off_180148C98;
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    return (__int64 (__fastcall **)())(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
