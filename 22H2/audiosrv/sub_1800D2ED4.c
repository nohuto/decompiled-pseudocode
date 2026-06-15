/*
 * XREFs of sub_1800D2ED4 @ 0x1800D2ED4
 * Callers:
 *     sub_1800D2E00 @ 0x1800D2E00 (sub_1800D2E00.c)
 * Callees:
 *     sub_1800583E4 @ 0x1800583E4 (sub_1800583E4.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 **__fastcall sub_1800D2ED4(__int64 a1, __int64 **a2, __int64 *a3, __int64 *a4)
{
  __int64 *v4; // rbp
  __int64 *v5; // rsi
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 **result; // rax

  v4 = *(__int64 **)(a1 + 8);
  v5 = a4;
  v9 = a3;
  if ( a4 != v4 )
  {
    do
    {
      v10 = *v5;
      *v5 = 0LL;
      v11 = *v9;
      *v9 = v10;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      ++v9;
      ++v5;
    }
    while ( v5 != v4 );
    v4 = *(__int64 **)(a1 + 8);
  }
  sub_1800583E4(v9, v4);
  result = a2;
  *a2 = a3;
  *(_QWORD *)(a1 + 8) = v9;
  return result;
}
