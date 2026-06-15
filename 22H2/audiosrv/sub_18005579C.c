/*
 * XREFs of sub_18005579C @ 0x18005579C
 * Callers:
 *     sub_180065030 @ 0x180065030 (sub_180065030.c)
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     sub_180068284 @ 0x180068284 (sub_180068284.c)
 *     sub_180068910 @ 0x180068910 (sub_180068910.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_18005579C()
{
  __int64 v0; // rax
  __int64 v1; // rax
  __int64 v2; // rbx
  _DWORD *v3; // rcx
  unsigned int v4; // edi

  qword_18019EE50 = 0LL;
  v0 = sub_18006A18C(72LL, &unk_18019F848);
  if ( v0 )
  {
    v1 = sub_180068284(v0);
    qword_18019EE50 = 0LL;
    v2 = v1;
    if ( sub_180027D40(dword_18015BA80, &stru_18015B900) )
    {
      qword_18019EE50 = v2;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      v4 = 0;
    }
    else if ( sub_180027D40(v3, v3) )
    {
      qword_18019EE50 = v2;
      v4 = 0;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    }
    else
    {
      v4 = -2147467262;
    }
    if ( v2 )
      sub_180068910(v2);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
