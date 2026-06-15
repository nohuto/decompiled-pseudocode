/*
 * XREFs of sub_1800556DC @ 0x1800556DC
 * Callers:
 *     sub_180065030 @ 0x180065030 (sub_180065030.c)
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     sub_180045430 @ 0x180045430 (sub_180045430.c)
 *     sub_180068460 @ 0x180068460 (sub_180068460.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800E4080 @ 0x1800E4080 (sub_1800E4080.c)
 */

__int64 sub_1800556DC()
{
  __int64 v0; // rax
  __int64 v1; // rax
  __int64 v2; // rdi
  _DWORD *v3; // rcx
  _DWORD *v4; // rcx
  _DWORD *v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // ebx

  qword_18019EE48 = 0LL;
  v0 = sub_18006A18C(80LL, &unk_18019F848);
  if ( !v0 )
    return (unsigned int)-2147024882;
  v1 = sub_180068460(v0);
  qword_18019EE48 = 0LL;
  v2 = v1;
  if ( sub_180027D40(&xmmword_18015BA70, &stru_18015B900) || sub_180027D40(v3, &dword_18015B850) )
  {
    qword_18019EE48 = v2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v8 = 0;
  }
  else
  {
    if ( sub_180027D40(v4, v5) )
    {
      qword_18019EE48 = v7;
      v8 = 0;
LABEL_6:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      goto LABEL_7;
    }
    v8 = sub_1800E4080(v7 + 8, v6, &qword_18019EE48);
    if ( v8 >= 0 )
    {
      v7 = qword_18019EE48;
      goto LABEL_6;
    }
  }
LABEL_7:
  if ( v2 )
    sub_180045430(v2);
  return (unsigned int)v8;
}
