/*
 * XREFs of sub_1800F03E8 @ 0x1800F03E8
 * Callers:
 *     sub_1800F0AF8 @ 0x1800F0AF8 (sub_1800F0AF8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 ***__fastcall sub_1800F03E8(__int64 ***a1, __int64 **a2, __int64 **a3, _QWORD *a4)
{
  __int64 **i; // r15
  __int64 v8; // r14
  int v9; // esi
  __int64 ***result; // rax

  for ( i = a2; i != a3; ++i )
  {
    v8 = **i;
    v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 40LL))(*a4);
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 40LL))(v8) == v9 )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
