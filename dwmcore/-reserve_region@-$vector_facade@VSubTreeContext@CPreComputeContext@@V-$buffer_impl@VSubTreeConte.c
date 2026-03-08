/*
 * XREFs of ?reserve_region@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVSubTreeContext@CPreComputeContext@@_K0@Z @ 0x1800D856C
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006B3A0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$destruct_range@VSubTreeContext@CPreComputeContext@@@detail@@YAXPEAVSubTreeContext@CPreComputeContext@@0@Z @ 0x1801B0840 (--$destruct_range@VSubTreeContext@CPreComputeContext@@@detail@@YAXPEAVSubTreeContext@CPreCompute.c)
 *     ??1SubTreeContext@CPreComputeContext@@QEAA@XZ @ 0x1801B12D0 (--1SubTreeContext@CPreComputeContext@@QEAA@XZ.c)
 *     ??$move_backward@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@std@@V?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@0@0V12@@Z @ 0x1801B2A74 (--$move_backward@V-$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@std@@V-$checked_array_.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@std@@V?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@0@0V12@@Z @ 0x1801B2B54 (--$uninitialized_move@V-$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@std@@V-$checked_a.c)
 *     ??0SubTreeContext@CPreComputeContext@@QEAA@$$QEAV01@@Z @ 0x1801B2C20 (--0SubTreeContext@CPreComputeContext@@QEAA@$$QEAV01@@Z.c)
 */

CPreComputeContext::SubTreeContext *__fastcall detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::reserve_region(
        CPreComputeContext::SubTreeContext **a1,
        __int64 a2)
{
  __int64 v2; // rsi
  CPreComputeContext::SubTreeContext *v4; // rdx
  __int64 v6; // rcx
  CPreComputeContext::SubTreeContext *v7; // rdi
  signed __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r15
  CPreComputeContext::SubTreeContext *v14; // rsi
  CPreComputeContext::SubTreeContext *v15; // rdi
  CPreComputeContext::SubTreeContext *i; // rbx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rdi
  CPreComputeContext::SubTreeContext *v21; // rax
  CPreComputeContext::SubTreeContext *v22; // r8
  CPreComputeContext::SubTreeContext *v23; // rdx
  CPreComputeContext::SubTreeContext *v24; // rbx
  CPreComputeContext::SubTreeContext *v25; // rcx
  bool v26; // zf
  __int64 v27; // rdx
  CPreComputeContext::SubTreeContext *v28; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-60h]
  signed __int64 v30; // [rsp+30h] [rbp-58h]
  _BYTE v31[32]; // [rsp+40h] [rbp-48h] BYREF

  v2 = (__int64)a1[1];
  v4 = a1[2];
  v6 = 1LL;
  if ( !(0x823EE08FB823EE09uLL * (((__int64)v4 - v2) >> 3)) )
  {
    v18 = 0x823EE08FB823EE09uLL * ((v2 - (__int64)*a1) >> 3);
    v19 = v18 + 1;
    if ( v18 + 1 < v18 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v20 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)v6,
            0x823EE08FB823EE09uLL * ((v4 - *a1) >> 3),
            v19);
    v21 = (CPreComputeContext::SubTreeContext *)operator new(saturated_mul(v20, 0x1C8uLL));
    v22 = a1[1];
    v23 = *a1;
    v28 = v21;
    v30 = 0LL;
    v24 = v21;
    v29 = v18;
    ((void (__fastcall *)(_BYTE *, CPreComputeContext::SubTreeContext *, CPreComputeContext::SubTreeContext *, CPreComputeContext::SubTreeContext **))std::uninitialized_move<std::move_iterator<CPreComputeContext::SubTreeContext *>,stdext::checked_array_iterator<CPreComputeContext::SubTreeContext *>>)(
      v31,
      v23,
      v22,
      &v28);
    detail::destruct_range<CPreComputeContext::SubTreeContext>(*a1);
    v25 = *a1;
    v26 = *a1 == (CPreComputeContext::SubTreeContext *)(a1 + 3);
    *a1 = v24;
    if ( v26 )
      v25 = 0LL;
    operator delete(v25);
    v2 = (__int64)*a1 + 456 * v18;
    a1[1] = (CPreComputeContext::SubTreeContext *)v2;
    a1[2] = (CPreComputeContext::SubTreeContext *)((char *)*a1 + 456 * v20);
  }
  v7 = *a1;
  v8 = 0x823EE08FB823EE09uLL * ((v2 - (__int64)*a1) >> 3);
  v9 = v8 - a2;
  v10 = (unsigned __int64)*a1 + 8 * ((v2 - (__int64)*a1) >> 3);
  if ( !v10 )
    goto LABEL_18;
  v11 = 0x823EE08FB823EE09uLL * ((v2 - (__int64)*a1) >> 3) - a2;
  if ( v9 > 1 )
    v11 = 1LL;
  v12 = v2 - 456 * v11;
  if ( v2 != v12 )
  {
    CPreComputeContext::SubTreeContext::SubTreeContext(v10, v2 - 456);
    if ( v27 != v12 )
LABEL_18:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v9 > 1 )
  {
    if ( v8 && (!v7 || v8 < 0) )
      goto LABEL_18;
    v13 = 456 * a2;
    v28 = v7;
    v29 = v8;
    v30 = v8;
    ((void (__fastcall *)(_BYTE *, char *, char *, CPreComputeContext::SubTreeContext **))std::move_backward<std::move_iterator<CPreComputeContext::SubTreeContext *>,stdext::checked_array_iterator<CPreComputeContext::SubTreeContext *>>)(
      v31,
      (char *)v7 + 456 * a2,
      (char *)v7 + 456 * v8 - 456,
      &v28);
  }
  else
  {
    v13 = 456 * a2;
  }
  v14 = (CPreComputeContext::SubTreeContext *)((char *)v7 + 456 * a2 + 456);
  if ( v10 < (unsigned __int64)v14 )
    v14 = (CPreComputeContext::SubTreeContext *)v10;
  v15 = (CPreComputeContext::SubTreeContext *)((char *)v7 + v13);
  for ( i = v15; i != v14; i = (CPreComputeContext::SubTreeContext *)((char *)i + 456) )
    CPreComputeContext::SubTreeContext::~SubTreeContext(i);
  a1[1] = (CPreComputeContext::SubTreeContext *)((char *)a1[1] + 456);
  return v15;
}
