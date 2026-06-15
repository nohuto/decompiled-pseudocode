/*
 * XREFs of sub_180055130 @ 0x180055130
 * Callers:
 *     sub_180063460 @ 0x180063460 (sub_180063460.c)
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     sub_180046360 @ 0x180046360 (sub_180046360.c)
 *     sub_1800550C0 @ 0x1800550C0 (sub_1800550C0.c)
 *     sub_180067E5C @ 0x180067E5C (sub_180067E5C.c)
 *     sub_180068CE0 @ 0x180068CE0 (sub_180068CE0.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 sub_180055130()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  int v2; // edi
  _DWORD *v3; // rcx
  _DWORD *v4; // r9

  qword_18019EE58 = 0LL;
  v0 = sub_18006A18C(72LL, &unk_18019F848);
  if ( v0 )
  {
    v1 = sub_180067E5C(v0);
    v2 = sub_180068CE0(v1);
    if ( v2 >= 0 )
    {
      qword_18019EE58 = 0LL;
      if ( sub_180027D40(&xmmword_18015B930, &stru_18015B900) || sub_180027D40(v3, &dword_18015B850) )
      {
        qword_18019EE58 = v1;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
        v2 = 0;
      }
      else
      {
        v2 = sub_1800550C0(v1 + 8, v4);
        if ( v2 >= 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019EE58 + 8LL))(qword_18019EE58);
      }
    }
    if ( v1 )
      sub_180046360(v1);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v2;
}
