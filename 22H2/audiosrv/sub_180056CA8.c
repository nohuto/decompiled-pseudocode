/*
 * XREFs of sub_180056CA8 @ 0x180056CA8
 * Callers:
 *     sub_1800562D0 @ 0x1800562D0 (sub_1800562D0.c)
 * Callees:
 *     sub_180056D5C @ 0x180056D5C (sub_180056D5C.c)
 *     sub_180056F44 @ 0x180056F44 (sub_180056F44.c)
 *     sub_1800579A4 @ 0x1800579A4 (sub_1800579A4.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180056CA8(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, void *, __int64 *))
{
  _QWORD *v4; // rcx
  int v5; // ebx
  int v6; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v4 = (_QWORD *)(a1 + 24);
  if ( (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*v4 != a2 )
    sub_1800579A4(v4);
  v5 = sub_180056D5C(a1);
  if ( v5 >= 0 )
  {
    v5 = sub_180056F44(a1);
    if ( v5 >= 0 )
    {
      v5 = (**a2)(a2, &unk_18015B660, &v8);
      if ( v5 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, a1 + 112);
        v5 = 0;
        if ( v6 < 0 )
          v5 = v6;
      }
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v5;
}
