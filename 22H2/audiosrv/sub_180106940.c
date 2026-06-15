/*
 * XREFs of sub_180106940 @ 0x180106940
 * Callers:
 *     sub_180105F64 @ 0x180105F64 (sub_180105F64.c)
 *     sub_1801065E8 @ 0x1801065E8 (sub_1801065E8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180106940(__int64 a1, void (__fastcall ***a2)(_QWORD, __int128 *, __int64 *))
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  result = 0LL;
  v3 = 0LL;
  if ( a2 )
  {
    (**a2)(a2, &xmmword_18015B880, &v3);
    return v3;
  }
  return result;
}
