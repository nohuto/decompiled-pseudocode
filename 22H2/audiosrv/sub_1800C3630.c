/*
 * XREFs of sub_1800C3630 @ 0x1800C3630
 * Callers:
 *     sub_1800C2E6C @ 0x1800C2E6C (sub_1800C2E6C.c)
 *     sub_1800CE0BC @ 0x1800CE0BC (sub_1800CE0BC.c)
 *     sub_1800CE11C @ 0x1800CE11C (sub_1800CE11C.c)
 *     sub_1800FA1F4 @ 0x1800FA1F4 (sub_1800FA1F4.c)
 *     sub_18013A4D4 @ 0x18013A4D4 (sub_18013A4D4.c)
 *     sub_18013AD18 @ 0x18013AD18 (sub_18013AD18.c)
 *     sub_18013B170 @ 0x18013B170 (sub_18013B170.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

char __fastcall sub_1800C3630(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  void *v7; // rax
  void *v8; // rsi
  const void *v10; // rcx
  size_t v11; // r8
  __int64 v12; // rcx

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
    v7 = (void *)o_calloc(a2, 8LL);
    v8 = v7;
    if ( v7 )
    {
      v10 = *(const void **)a1;
      v11 = 8LL * *(_QWORD *)(a1 + 8);
      if ( v11 )
      {
        if ( !v10 )
        {
          *(_DWORD *)o__errno(0LL) = 22;
          o__invalid_parameter_noinfo(v12);
          sub_1800B8610(-2147024809);
        }
        memmove(v7, *(const void **)a1, v11);
        v10 = *(const void **)a1;
      }
      _o_free(v10);
      *(_QWORD *)a1 = v8;
      goto LABEL_19;
    }
    return 0;
  }
  if ( v5 > a2 )
    a2 = v5;
  v6 = o_calloc(a2, 8LL);
  *(_QWORD *)a1 = v6;
  if ( !v6 )
    return 0;
LABEL_19:
  *(_QWORD *)(a1 + 16) = a2;
  return 1;
}
