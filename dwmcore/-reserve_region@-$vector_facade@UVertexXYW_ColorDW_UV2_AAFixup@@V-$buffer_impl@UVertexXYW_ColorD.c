/*
 * XREFs of ?reserve_region@?$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVertexXYW_ColorDW_UV2_AAFixup@@_K0@Z @ 0x1800B32F8
 * Callers:
 *     ?insert@?$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UVertexXYW_ColorDW_UV2_AAFixup@@@2@V?$basic_iterator@$$CBUVertexXYW_ColorDW_UV2_AAFixup@@@2@_KAEBUVertexXYW_ColorDW_UV2_AAFixup@@@Z @ 0x1800B3208 (-insert@-$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V-$buffer_impl@UVertexXYW_ColorDW_UV2_AA.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800B09B8 (-ensure_extra_capacity@-$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_.c)
 *     ??$move_backward@V?$move_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@std@@V?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@V?$move_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@0@0V12@@Z @ 0x1801FE198 (--$move_backward@V-$move_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@std@@V-$checked_array_iter.c)
 */

char *__fastcall detail::vector_facade<VertexXYW_ColorDW_UV2_AAFixup,detail::buffer_impl<VertexXYW_ColorDW_UV2_AAFixup,40,1,detail::liberal_expansion_policy>>::reserve_region(
        const void **a1,
        __int64 a2,
        unsigned __int64 a3)
{
  char *v6; // rbp
  char *v7; // rdx
  __int64 v8; // r9
  unsigned __int64 v9; // r11
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  char *v14; // r10
  __int64 v15; // rdi
  char *v17; // rax
  unsigned __int64 v18; // rdx
  _OWORD *v19; // rcx
  _QWORD v20[4]; // [rsp+20h] [rbp-48h] BYREF
  char v21[32]; // [rsp+40h] [rbp-28h] BYREF

  detail::buffer_impl<VertexXYW_ColorDW_UV2_AAFixup,40,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    a3);
  v6 = (char *)*a1;
  v7 = (char *)a1[1];
  v8 = (v7 - (_BYTE *)*a1) >> 6;
  v9 = v8 - a2;
  v10 = (__int64)*a1 + 64 * v8;
  if ( a3 && (!v10 || (a3 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_19;
  v11 = (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 6) - a2;
  if ( a3 < v9 )
    v11 = a3;
  v12 = a3 << 6;
  v13 = v11 << 6;
  v14 = &v7[-v13];
  if ( v7 != &v7[-v13] )
  {
    v17 = v7 - 64;
    v18 = a3;
    v19 = (_OWORD *)(v12 + v10);
    if ( v10 )
    {
      while ( v18 )
      {
        --v18;
        v19 -= 4;
        if ( v18 >= a3 )
          break;
        *v19 = *(_OWORD *)v17;
        v19[1] = *((_OWORD *)v17 + 1);
        v19[2] = *((_OWORD *)v17 + 2);
        v19[3] = *((_OWORD *)v17 + 3);
        if ( v17 == v14 )
          goto LABEL_7;
        v17 -= 64;
      }
    }
    goto LABEL_19;
  }
LABEL_7:
  if ( v9 > a3 )
  {
    if ( !v8 || v6 && v8 >= 0 )
    {
      v15 = a2 << 6;
      v20[1] = v8;
      v20[2] = v8;
      v20[0] = v6;
      ((void (__fastcall *)(char *, char *, char *, _QWORD *))std::move_backward<std::move_iterator<VertexXYW_ColorDW_UV2_AAFixup *>,stdext::checked_array_iterator<VertexXYW_ColorDW_UV2_AAFixup *>>)(
        v21,
        &v6[v15],
        &v6[64 * (v8 - a3)],
        v20);
      goto LABEL_9;
    }
LABEL_19:
    _invalid_parameter_noinfo_noreturn();
  }
  v15 = a2 << 6;
LABEL_9:
  a1[1] = (char *)a1[1] + v12;
  return &v6[v15];
}
