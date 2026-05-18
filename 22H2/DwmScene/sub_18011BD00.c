/*
 * XREFs of sub_18011BD00 @ 0x18011BD00
 * Callers:
 *     sub_18011BC30 @ 0x18011BC30 (sub_18011BC30.c)
 *     sub_18011D420 @ 0x18011D420 (sub_18011D420.c)
 * Callees:
 *     sub_18002B7A0 @ 0x18002B7A0 (sub_18002B7A0.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_18011BD00(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 i; // rbx
  __int64 *v5; // rax
  __int64 j; // rdx
  __int64 v7; // rdx
  __int64 *v8; // rdi
  __int64 *v9; // rcx

  i = a3[2];
  v5 = a3;
  if ( *(_BYTE *)(i + 25) )
  {
    for ( i = a3[1]; !*(_BYTE *)(i + 25) && v5 == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
      v5 = (__int64 *)i;
  }
  else
  {
    for ( j = *(_QWORD *)i; !*(_BYTE *)(j + 25); j = *(_QWORD *)j )
      i = j;
  }
  v8 = sub_18002B7A0(a1, a3);
  v9 = (__int64 *)v8[12];
  if ( v9 )
  {
    LOBYTE(v7) = v9 != v8 + 5;
    (*(void (__fastcall **)(__int64 *, __int64))(*v9 + 32))(v9, v7);
    v8[12] = 0LL;
  }
  j_j__o_free(v8);
  *a2 = i;
  return a2;
}
