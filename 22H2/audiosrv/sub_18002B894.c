/*
 * XREFs of sub_18002B894 @ 0x18002B894
 * Callers:
 *     sub_180017690 @ 0x180017690 (sub_180017690.c)
 * Callees:
 *     sub_18002B930 @ 0x18002B930 (sub_18002B930.c)
 *     sub_18002B988 @ 0x18002B988 (sub_18002B988.c)
 *     sub_18002BC4C @ 0x18002BC4C (sub_18002BC4C.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_180071940 @ 0x180071940 (sub_180071940.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18002B894(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rdx

  *a1 = 0LL;
  v4 = sub_18006A18C(320LL, &unk_18019F848);
  if ( v4 )
  {
    v6 = sub_18002BC4C(v4);
    v5 = sub_18002B988(v6, *a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        sub_180071940(v6, v7);
      *a1 = v6;
      v5 = 0;
    }
    if ( v6 )
      sub_18002B930(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
