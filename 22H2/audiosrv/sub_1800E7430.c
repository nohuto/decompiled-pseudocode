/*
 * XREFs of sub_1800E7430 @ 0x1800E7430
 * Callers:
 *     sub_180027860 @ 0x180027860 (sub_180027860.c)
 *     sub_1800371F0 @ 0x1800371F0 (sub_1800371F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_1800E7430(char *a1, char *a2, __int64 *a3)
{
  char *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 != a1 )
  {
    v5 = a2 - 8;
    do
    {
      --a3;
      v6 = 0LL;
      if ( &v9 != v5 )
      {
        v6 = *(_QWORD *)v5;
        *(_QWORD *)v5 = 0LL;
      }
      v7 = *a3;
      *a3 = v6;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      v5 -= 8;
    }
    while ( v5 + 8 != a1 );
  }
  return a3;
}
