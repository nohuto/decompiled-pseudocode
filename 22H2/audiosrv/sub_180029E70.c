/*
 * XREFs of sub_180029E70 @ 0x180029E70
 * Callers:
 *     sub_18000B4D0 @ 0x18000B4D0 (sub_18000B4D0.c)
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     sub_180029FD0 @ 0x180029FD0 (sub_180029FD0.c)
 *     sub_18002A02C @ 0x18002A02C (sub_18002A02C.c)
 *     sub_18002A1C8 @ 0x18002A1C8 (sub_18002A1C8.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180029E70(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // edi
  _DWORD *v7; // rcx

  *a1 = 0LL;
  v4 = sub_18006A18C(224LL, &unk_18019F848);
  if ( v4 )
  {
    v5 = sub_18002A1C8(v4);
    v6 = sub_18002A02C(v5, *a2);
    if ( v6 >= 0 )
    {
      *a1 = 0LL;
      if ( sub_180027D40(dword_18015B8F0, &stru_18015B900) )
      {
        *a1 = v5;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
        v6 = 0;
      }
      else if ( sub_180027D40(v7, v7) )
      {
        *a1 = v5;
        v6 = 0;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      }
      else
      {
        v6 = -2147467262;
      }
    }
    if ( v5 )
      sub_180029FD0(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
