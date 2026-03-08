/*
 * XREFs of ?reserve_region@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUPrimitiveUVDesc@@_K0@Z @ 0x1800D9A54
 * Callers:
 *     ?resize@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBUPrimitiveUVDesc@@@Z @ 0x1800D99B0 (-resize@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expans.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUPrimitiveUVDesc@@@std@@V?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@V?$move_iterator@PEAUPrimitiveUVDesc@@@0@0V12@@Z @ 0x1801F741C (--$move_backward@V-$move_iterator@PEAUPrimitiveUVDesc@@@std@@V-$checked_array_iterator@PEAUPrimi.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUPrimitiveUVDesc@@@std@@V?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@V?$move_iterator@PEAUPrimitiveUVDesc@@@0@0V12@@Z @ 0x1801F7614 (--$uninitialized_move@V-$move_iterator@PEAUPrimitiveUVDesc@@@std@@V-$checked_array_iterator@PEAU.c)
 */

char *__fastcall detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rdx
  char *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r11
  __int64 v15; // rdi
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdi
  LPVOID v20; // rax
  __int64 v21; // r8
  char *v22; // rdx
  LPVOID v23; // rbx
  char *v24; // rcx
  bool v25; // zf
  __int64 v26; // r14
  __int64 v27; // rdx
  unsigned __int64 v28; // r9
  LPVOID v29; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-60h]
  __int64 v31; // [rsp+30h] [rbp-58h]
  _BYTE v32[32]; // [rsp+40h] [rbp-48h] BYREF

  v3 = *((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  if ( 0x4EC4EC4EC4EC4EC5LL * ((v5 - v3) >> 2) < a3 )
  {
    v17 = 0x4EC4EC4EC4EC4EC5LL * ((v3 - *(_QWORD *)a1) >> 2);
    v18 = v17 + a3;
    if ( v18 < v17 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v19 = detail::liberal_expansion_policy::expand(a1, 0x4EC4EC4EC4EC4EC5LL * ((v5 - *(_QWORD *)a1) >> 2), v18);
    v20 = operator new(saturated_mul(v19, 0x34uLL));
    v21 = *((_QWORD *)a1 + 1);
    v22 = *(char **)a1;
    v23 = v20;
    v29 = v20;
    v30 = v17;
    v31 = 0LL;
    ((void (__fastcall *)(_BYTE *, char *, __int64, LPVOID *))std::uninitialized_move<std::move_iterator<PrimitiveUVDesc *>,stdext::checked_array_iterator<PrimitiveUVDesc *>>)(
      v32,
      v22,
      v21,
      &v29);
    v24 = *(char **)a1;
    v25 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v23;
    if ( v25 )
      v24 = 0LL;
    operator delete(v24);
    v3 = *(_QWORD *)a1 + 52 * v17;
    *((_QWORD *)a1 + 1) = v3;
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 52 * v19;
  }
  v8 = *(char **)a1;
  v9 = 0x4EC4EC4EC4EC4EC5LL * ((v3 - *(_QWORD *)a1) >> 2);
  v10 = *(_QWORD *)a1 + 4 * ((v3 - *(_QWORD *)a1) >> 2);
  v11 = v9 - a2;
  if ( a3 && (!v10 || (a3 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_25;
  v12 = 0x4EC4EC4EC4EC4EC5LL * ((v3 - *(_QWORD *)a1) >> 2) - a2;
  if ( a3 < v11 )
    v12 = a3;
  v13 = 52 * a3;
  v14 = v3 - 52 * v12;
  if ( v3 != v14 )
  {
    v26 = v3 - 52;
    v27 = v10 + v13 + 8;
    v28 = a3;
    if ( v10 )
    {
      while ( v28 )
      {
        --v28;
        v27 -= 52LL;
        if ( v28 >= a3 )
          break;
        *(_DWORD *)(v27 - 8) = *(_DWORD *)v26;
        *(_DWORD *)(v27 - 4) = *(_DWORD *)(v26 + 4);
        *(_DWORD *)v27 = *(_DWORD *)(v26 + 8);
        *(_DWORD *)(v27 + 4) = *(_DWORD *)(v26 + 12);
        *(_DWORD *)(v27 + 8) = *(_DWORD *)(v26 + 16);
        *(_DWORD *)(v27 + 12) = *(_DWORD *)(v26 + 20);
        *(_DWORD *)(v27 + 16) = *(_DWORD *)(v26 + 24);
        *(_DWORD *)(v27 + 20) = *(_DWORD *)(v26 + 28);
        *(_DWORD *)(v27 + 24) = *(_DWORD *)(v26 + 32);
        *(_OWORD *)(v27 + 28) = *(_OWORD *)(v26 + 36);
        if ( v26 == v14 )
          goto LABEL_8;
        v26 -= 52LL;
      }
    }
    goto LABEL_25;
  }
LABEL_8:
  if ( v11 > a3 )
  {
    if ( !v9 || v8 && v9 >= 0 )
    {
      v30 = v9;
      v15 = 52 * a2;
      v31 = v9;
      v29 = v8;
      ((void (__fastcall *)(_BYTE *, char *, char *, LPVOID *))std::move_backward<std::move_iterator<PrimitiveUVDesc *>,stdext::checked_array_iterator<PrimitiveUVDesc *>>)(
        v32,
        &v8[52 * a2],
        &v8[52 * (v9 - a3)],
        &v29);
      goto LABEL_10;
    }
LABEL_25:
    _invalid_parameter_noinfo_noreturn();
  }
  v15 = 52 * a2;
LABEL_10:
  *((_QWORD *)a1 + 1) += v13;
  return &v8[v15];
}
