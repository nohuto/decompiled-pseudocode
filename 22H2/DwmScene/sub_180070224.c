/*
 * XREFs of sub_180070224 @ 0x180070224
 * Callers:
 *     sub_18007BE20 @ 0x18007BE20 (sub_18007BE20.c)
 *     sub_1801250FD @ 0x1801250FD (sub_1801250FD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180070224(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 *i; // rbx
  __int64 v6; // r8
  __int64 v7; // rax
  volatile signed __int32 *v8; // rcx

  for ( i = a1; i != a2; i += 2 )
  {
    v6 = i[1];
    i[1] = 0LL;
    v7 = *i;
    *i = 0LL;
    v8 = (volatile signed __int32 *)a3[1];
    *a3 = v7;
    a3[1] = v6;
    if ( v8 && _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    a3 += 2;
  }
  return a3;
}
