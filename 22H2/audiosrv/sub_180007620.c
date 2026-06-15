/*
 * XREFs of sub_180007620 @ 0x180007620
 * Callers:
 *     sub_180006A60 @ 0x180006A60 (sub_180006A60.c)
 *     sub_1800D5474 @ 0x1800D5474 (sub_1800D5474.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

char __fastcall sub_180007620(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  void *v6; // rax
  void *v7; // rsi
  const void *v8; // rcx
  size_t v9; // r8
  __int64 v11; // rax

  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 <= v4 )
    return 1;
  v5 = *(int *)(a1 + 24);
  if ( *(_QWORD *)a1 )
  {
    if ( !v5 )
    {
      v5 = v4 >> 1;
      if ( a2 - v4 > v4 >> 1 )
        v5 = a2 - v4;
    }
    if ( a2 < v4 + v5 )
      a2 = v4 + v5;
    v6 = (void *)o_calloc(a2, 8LL);
    v7 = v6;
    if ( v6 )
    {
      v8 = *(const void **)a1;
      v9 = 8LL * *(_QWORD *)(a1 + 8);
      if ( v9 )
      {
        if ( !v8 )
        {
          *(_DWORD *)o__errno() = 22;
          o__invalid_parameter_noinfo();
          sub_1800B8610(2147942487LL);
        }
        memmove(v6, *(const void **)a1, v9);
        v8 = *(const void **)a1;
      }
      _o_free(v8);
      *(_QWORD *)a1 = v7;
LABEL_13:
      *(_QWORD *)(a1 + 16) = a2;
      return 1;
    }
  }
  else
  {
    if ( v5 > a2 )
      a2 = v5;
    v11 = o_calloc(a2, 8LL);
    *(_QWORD *)a1 = v11;
    if ( v11 )
      goto LABEL_13;
  }
  return 0;
}
