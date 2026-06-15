/*
 * XREFs of sub_1800E6050 @ 0x1800E6050
 * Callers:
 *     sub_180074970 @ 0x180074970 (sub_180074970.c)
 *     sub_180074980 @ 0x180074980 (sub_180074980.c)
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800E4080 @ 0x1800E4080 (sub_1800E4080.c)
 */

__int64 __fastcall sub_1800E6050(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rdx
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  _DWORD *v12; // r10

  *a3 = 0LL;
  if ( sub_180027D40(a2, &stru_18015B900) || sub_180027D40(v3, &dword_18015B850) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( sub_180027D40(v7, v6) || sub_180027D40(v8, &xmmword_18015BA70) )
  {
    *v9 = v10;
    v11 = 0;
LABEL_7:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 8LL))(*v9);
    return (unsigned int)v11;
  }
  v11 = sub_1800E4080(v10 + 8, v12);
  if ( v11 >= 0 )
    goto LABEL_7;
  return (unsigned int)v11;
}
