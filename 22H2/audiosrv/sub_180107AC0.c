/*
 * XREFs of sub_180107AC0 @ 0x180107AC0
 * Callers:
 *     sub_180074B50 @ 0x180074B50 (sub_180074B50.c)
 *     sub_180074B60 @ 0x180074B60 (sub_180074B60.c)
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180106224 @ 0x180106224 (sub_180106224.c)
 */

__int64 __fastcall sub_180107AC0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 *v3; // r8
  __int64 v4; // r9
  _DWORD *v5; // r10
  int v6; // ebx
  _QWORD *v7; // r8

  *a3 = 0LL;
  if ( sub_180027D40(a2, &stru_18015B900) )
  {
    *v3 = v4;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    return 0;
  }
  else
  {
    v6 = sub_180106224(v4, v5);
    if ( v6 >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
  }
  return (unsigned int)v6;
}
