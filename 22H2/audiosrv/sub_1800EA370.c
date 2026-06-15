/*
 * XREFs of sub_1800EA370 @ 0x1800EA370
 * Callers:
 *     sub_1800135B8 @ 0x1800135B8 (sub_1800135B8.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800EA370(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  _QWORD *i; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _BYTE v11[16]; // [rsp+20h] [rbp-28h] BYREF

  for ( i = a2; i != a3; ++i )
  {
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v11);
    v9 = *v8 - *(_QWORD *)(a4 + 48);
    if ( *v8 == *(_QWORD *)(a4 + 48) )
      v9 = v8[1] - *(_QWORD *)(a4 + 56);
    if ( !v9 )
      break;
  }
  *a1 = i;
  return a1;
}
