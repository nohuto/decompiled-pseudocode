/*
 * XREFs of ?reserve_region@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUCpuClipStackState@CScopedClipStack@@_K0@Z @ 0x1800220F4
 * Callers:
 *     ?DuplicateScopeToClipStack@CScopedClipStack@@QEBAXPEAV1@AEBVCMILMatrix@@@Z @ 0x1800219A0 (-DuplicateScopeToClipStack@CScopedClipStack@@QEBAXPEAV1@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??$destruct_range@UCpuClipStackState@CScopedClipStack@@@detail@@YAXPEAUCpuClipStackState@CScopedClipStack@@0@Z @ 0x1800221EC (--$destruct_range@UCpuClipStackState@CScopedClipStack@@@detail@@YAXPEAUCpuClipStackState@CScoped.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@0@0V12@@Z @ 0x1801D75F0 (--$move_backward@V-$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V-$checked_array.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@0@0V12@@Z @ 0x1801D7784 (--$uninitialized_move@V-$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V-$checked_.c)
 */

CShapePtr *__fastcall detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdx
  CShapePtr *v6; // rbx
  signed __int64 v7; // rcx
  unsigned __int64 v8; // r8
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // rdi
  CShapePtr *v13; // rbx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdi
  void *v18; // rax
  __int64 v19; // r8
  CShapePtr *v20; // rdx
  void *v21; // rbx
  CShapePtr *v22; // rcx
  bool v23; // zf
  CShapePtr *v24; // rcx
  __int64 v25; // rsi
  CShapePtr *v26; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-60h]
  signed __int64 v28; // [rsp+30h] [rbp-58h]
  _BYTE v29[32]; // [rsp+40h] [rbp-48h] BYREF

  v2 = *((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 2);
  if ( !(0xCCCCCCCCCCCCCCCDuLL * ((v4 - v2) >> 3)) )
  {
    v15 = 0xCCCCCCCCCCCCCCCDuLL * ((v2 - *(_QWORD *)a1) >> 3);
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v17 = detail::liberal_expansion_policy::expand(a1, 0xCCCCCCCCCCCCCCCDuLL * ((v4 - *(_QWORD *)a1) >> 3), v16);
    v18 = operator new(saturated_mul(v17, 0x28uLL));
    v19 = *((_QWORD *)a1 + 1);
    v20 = *(CShapePtr **)a1;
    v21 = v18;
    v26 = (CShapePtr *)v18;
    v27 = v15;
    v28 = 0LL;
    ((void (__fastcall *)(_BYTE *, CShapePtr *, __int64, CShapePtr **))std::uninitialized_move<std::move_iterator<CScopedClipStack::CpuClipStackState *>,stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>>)(
      v29,
      v20,
      v19,
      &v26);
    detail::destruct_range<CScopedClipStack::CpuClipStackState>(*(CShapePtr **)a1);
    v22 = *(CShapePtr **)a1;
    v23 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v21;
    if ( v23 )
      v22 = 0LL;
    operator delete(v22);
    v24 = *(CShapePtr **)a1;
    v2 = *(_QWORD *)a1 + 40 * v15;
    *((_QWORD *)a1 + 1) = v2;
    *((_QWORD *)a1 + 2) = (char *)v24 + 40 * v17;
  }
  v6 = *(CShapePtr **)a1;
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
    v25 = v2 - 40;
    *(_QWORD *)v9 = *(_QWORD *)v25;
    *(_BYTE *)(v9 + 8) = *(_BYTE *)(v25 + 8);
    *(_QWORD *)v25 = 0LL;
    *(_BYTE *)(v25 + 8) = 0;
    *(_QWORD *)(v9 + 16) = *(_QWORD *)(v25 + 16);
    *(_QWORD *)(v9 + 24) = *(_QWORD *)(v25 + 24);
    *(_DWORD *)(v9 + 32) = *(_DWORD *)(v25 + 32);
    *(_BYTE *)(v9 + 36) = *(_BYTE *)(v25 + 36);
    if ( v25 != v11 )
LABEL_15:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 1 )
  {
    if ( v7 && (!v6 || v7 < 0) )
      goto LABEL_15;
    v27 = v7;
    v28 = v7;
    v12 = 40 * a2;
    v26 = v6;
    ((void (__fastcall *)(_BYTE *, char *, char *, CShapePtr **))std::move_backward<std::move_iterator<CScopedClipStack::CpuClipStackState *>,stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>>)(
      v29,
      (char *)v6 + 40 * a2,
      (char *)v6 + 40 * v7 - 40,
      &v26);
  }
  else
  {
    v12 = 40 * a2;
  }
  v13 = (CShapePtr *)((char *)v6 + v12);
  detail::destruct_range<CScopedClipStack::CpuClipStackState>(v13);
  *((_QWORD *)a1 + 1) += 40LL;
  return v13;
}
