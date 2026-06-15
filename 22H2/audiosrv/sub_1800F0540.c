/*
 * XREFs of sub_1800F0540 @ 0x1800F0540
 * Callers:
 *     sub_1800F0AF8 @ 0x1800F0AF8 (sub_1800F0AF8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D2EA8 @ 0x1800D2EA8 (sub_1800D2EA8.c)
 */

__int64 **__fastcall sub_1800F0540(__int64 **a1, __int64 *a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *j; // rsi
  __int64 v7; // rdx
  __int64 **result; // rax

  for ( i = a2; i != a3; ++i )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 120LL))(*i) )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 1; j != a3; ++j )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*j + 120LL))(*j) )
      {
        v7 = *j;
        *j = 0LL;
        sub_1800D2EA8(i++, v7);
      }
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
