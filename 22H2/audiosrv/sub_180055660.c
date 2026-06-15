/*
 * XREFs of sub_180055660 @ 0x180055660
 * Callers:
 *     sub_180074AF0 @ 0x180074AF0 (sub_180074AF0.c)
 *     sub_180074B00 @ 0x180074B00 (sub_180074B00.c)
 *     sub_180074B10 @ 0x180074B10 (sub_180074B10.c)
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     sub_1800550C0 @ 0x1800550C0 (sub_1800550C0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180055660(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rdx
  _DWORD *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // r10
  int v11; // ebx

  *a3 = 0LL;
  if ( sub_180027D40(a2, &stru_18015B900) || sub_180027D40(v3, &dword_18015B850) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( sub_180027D40(v7, v6) )
  {
    *v8 = v9;
    v11 = 0;
    goto LABEL_5;
  }
  v11 = sub_1800550C0(v9 + 8, v10);
  if ( v11 >= 0 )
LABEL_5:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
  return (unsigned int)v11;
}
