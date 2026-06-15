/*
 * XREFs of sub_1800EFC8C @ 0x1800EFC8C
 * Callers:
 *     sub_1800F1300 @ 0x1800F1300 (sub_1800F1300.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D2EA8 @ 0x1800D2EA8 (sub_1800D2EA8.c)
 *     sub_1800F1240 @ 0x1800F1240 (sub_1800F1240.c)
 *     sub_1800F1624 @ 0x1800F1624 (sub_1800F1624.c)
 */

__int64 __fastcall sub_1800EFC8C(_QWORD **a1, __int64 *a2)
{
  _QWORD *v3; // rbx
  __int64 *v5; // rbp
  __int64 *i; // rdi
  __int64 v7; // r14
  __int64 *j; // rsi
  __int64 v9; // rdx
  __int64 result; // rax
  _QWORD *v11; // rbx
  __int64 *v12; // r15
  unsigned __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  char v16; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  v5 = *(__int64 **)(*a2 + 32);
  for ( i = *(__int64 **)(*a2 + 24); i != v5; ++i )
  {
    if ( *i == *v3 )
      break;
  }
  v7 = 0LL;
  if ( i != v5 )
  {
    for ( j = i + 1; j != v5; ++j )
    {
      v9 = *j;
      if ( *j != *v3 )
      {
        *j = 0LL;
        sub_1800D2EA8(i++, v9);
      }
    }
  }
  sub_1800F1624(*a2 + 24, &v16, i, *(_QWORD *)(*a2 + 32));
  result = *a2;
  v11 = *a1;
  v12 = *(__int64 **)(*a2 + 48);
  v13 = (unsigned __int64)(*(_QWORD *)(result + 56) - (_QWORD)v12 + 7LL) >> 3;
  if ( (unsigned __int64)v12 > *(_QWORD *)(result + 56) )
    v13 = 0LL;
  if ( v13 )
  {
    do
    {
      v14 = *v12;
      v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 184LL))(*v11);
      result = sub_1800F1240(v14, 1LL, v15);
      ++v7;
      ++v12;
    }
    while ( v7 != v13 );
  }
  return result;
}
