/*
 * XREFs of ?reserve_region@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCVIRenderList@@_K0@Z @ 0x1800C1F94
 * Callers:
 *     ?AddCVIToPreRenderList@CDesktopTree@@UEAAXAEAVCVIRenderList@@@Z @ 0x1800C1F40 (-AddCVIToPreRenderList@CDesktopTree@@UEAAXAEAVCVIRenderList@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAVCVIRenderList@@@std@@V?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@V?$move_iterator@PEAVCVIRenderList@@@0@0V12@@Z @ 0x1801BD0F8 (--$move_backward@V-$move_iterator@PEAVCVIRenderList@@@std@@V-$checked_array_iterator@PEAVCVIRend.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAVCVIRenderList@@@std@@V?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@V?$move_iterator@PEAVCVIRenderList@@@0@0V12@@Z @ 0x1801BD1BC (--$uninitialized_move@V-$move_iterator@PEAVCVIRenderList@@@std@@V-$checked_array_iterator@PEAVCV.c)
 */

char *__fastcall detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdx
  char *v6; // rbx
  signed __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdi
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdi
  LPVOID v17; // rax
  __int64 v18; // r8
  char *v19; // rdx
  LPVOID v20; // rbx
  char *v21; // rcx
  bool v22; // zf
  char *v23; // rcx
  __int64 v24; // rsi
  LPVOID v25; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-60h]
  signed __int64 v27; // [rsp+30h] [rbp-58h]
  _BYTE v28[32]; // [rsp+40h] [rbp-48h] BYREF

  v2 = *((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 2);
  if ( !(0xCCCCCCCCCCCCCCCDuLL * ((v4 - v2) >> 3)) )
  {
    v14 = 0xCCCCCCCCCCCCCCCDuLL * ((v2 - *(_QWORD *)a1) >> 3);
    v15 = v14 + 1;
    if ( v14 + 1 < v14 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v16 = detail::liberal_expansion_policy::expand(a1, 0xCCCCCCCCCCCCCCCDuLL * ((v4 - *(_QWORD *)a1) >> 3), v15);
    v17 = operator new(saturated_mul(v16, 0x28uLL));
    v18 = *((_QWORD *)a1 + 1);
    v19 = *(char **)a1;
    v20 = v17;
    v25 = v17;
    v26 = v14;
    v27 = 0LL;
    ((void (__fastcall *)(_BYTE *, char *, __int64, LPVOID *))std::uninitialized_move<std::move_iterator<CVIRenderList *>,stdext::checked_array_iterator<CVIRenderList *>>)(
      v28,
      v19,
      v18,
      &v25);
    v21 = *(char **)a1;
    v22 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v20;
    if ( v22 )
      v21 = 0LL;
    operator delete(v21);
    v23 = *(char **)a1;
    v2 = *(_QWORD *)a1 + 40 * v14;
    *((_QWORD *)a1 + 1) = v2;
    *((_QWORD *)a1 + 2) = &v23[40 * v16];
  }
  v6 = *(char **)a1;
  v7 = 0xCCCCCCCCCCCCCCCDuLL * ((v2 - *(_QWORD *)a1) >> 3);
  v8 = v7 - a2;
  v9 = *(_QWORD *)a1 + 8 * ((v2 - *(_QWORD *)a1) >> 3);
  if ( !v9 )
    goto LABEL_15;
  v10 = 0xCCCCCCCCCCCCCCCDuLL * ((v2 - *(_QWORD *)a1) >> 3) - a2;
  if ( v8 > 1 )
    v10 = 1LL;
  v11 = v2 - 40 * v10;
  if ( v2 != v11 )
  {
    v24 = v2 - 40;
    *(_OWORD *)v9 = *(_OWORD *)v24;
    *(_OWORD *)(v9 + 16) = *(_OWORD *)(v24 + 16);
    *(_QWORD *)(v9 + 32) = *(_QWORD *)(v24 + 32);
    if ( v24 != v11 )
LABEL_15:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 1 )
  {
    if ( v7 && (!v6 || v7 < 0) )
      goto LABEL_15;
    v26 = v7;
    v27 = v7;
    v12 = 40 * a2;
    v25 = v6;
    ((void (__fastcall *)(_BYTE *, char *, char *, LPVOID *))std::move_backward<std::move_iterator<CVIRenderList *>,stdext::checked_array_iterator<CVIRenderList *>>)(
      v28,
      &v6[40 * a2],
      &v6[40 * v7 - 40],
      &v25);
  }
  else
  {
    v12 = 40 * a2;
  }
  *((_QWORD *)a1 + 1) += 40LL;
  return &v6[v12];
}
