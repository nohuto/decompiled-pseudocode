/*
 * XREFs of ?reserve_region@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUEffectInput@@_K0@Z @ 0x180035BC8
 * Callers:
 *     ??$emplace_back@UEffectInput@@@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXUEffectInput@@@Z @ 0x180035A60 (--$emplace_back@UEffectInput@@@-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180035AF0 (--0EffectInput@@QEAA@AEBU0@@Z.c)
 *     ??$destruct_range@UEffectInput@@@detail@@YAXPEAUEffectInput@@0@Z @ 0x180035CB8 (--$destruct_range@UEffectInput@@@detail@@YAXPEAUEffectInput@@0@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUEffectInput@@@std@@V?$checked_array_iterator@PEAUEffectInput@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUEffectInput@@@stdext@@V?$move_iterator@PEAUEffectInput@@@0@0V12@@Z @ 0x18027FAF8 (--$move_backward@V-$move_iterator@PEAUEffectInput@@@std@@V-$checked_array_iterator@PEAUEffectInp.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUEffectInput@@@std@@V?$checked_array_iterator@PEAUEffectInput@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUEffectInput@@@stdext@@V?$move_iterator@PEAUEffectInput@@@0@0V12@@Z @ 0x18027FBD0 (--$uninitialized_move@V-$move_iterator@PEAUEffectInput@@@std@@V-$checked_array_iterator@PEAUEffe.c)
 */

char *__fastcall detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::reserve_region(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdx
  __int64 v6; // rcx
  char *v7; // rdi
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  const struct EffectInput *v12; // r12
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdi
  LPVOID v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  LPVOID v22; // rbx
  void *v23; // rcx
  bool v24; // zf
  __int64 v25; // rax
  const struct EffectInput *v26; // rsi
  LPVOID v27; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-60h]
  __int64 v29; // [rsp+30h] [rbp-58h]
  _BYTE v30[32]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v31; // [rsp+A0h] [rbp+18h]

  v2 = a1[1];
  v4 = a1[2];
  v6 = 1LL;
  if ( !(0x4EC4EC4EC4EC4EC5LL * ((v4 - v2) >> 3)) )
  {
    v16 = 0x4EC4EC4EC4EC4EC5LL * ((v2 - *a1) >> 3);
    v17 = v16 + 1;
    if ( v16 + 1 < v16 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v18 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)v6,
            0x4EC4EC4EC4EC4EC5LL * ((v4 - *a1) >> 3),
            v17);
    v19 = operator new(saturated_mul(v18, 0x68uLL));
    v20 = a1[1];
    v21 = *a1;
    v27 = v19;
    v29 = 0LL;
    v22 = v19;
    v28 = v16;
    ((void (__fastcall *)(_BYTE *, __int64, __int64, LPVOID *))std::uninitialized_move<std::move_iterator<EffectInput *>,stdext::checked_array_iterator<EffectInput *>>)(
      v30,
      v21,
      v20,
      &v27);
    detail::destruct_range<EffectInput>(*a1, a1[1]);
    v23 = (void *)*a1;
    v24 = *a1 == (_QWORD)(a1 + 3);
    *a1 = v22;
    if ( v24 )
      v23 = 0LL;
    operator delete(v23);
    v2 = *a1 + 104 * v16;
    a1[1] = v2;
    a1[2] = *a1 + 104 * v18;
  }
  v7 = (char *)*a1;
  v8 = 0x4EC4EC4EC4EC4EC5LL * ((v2 - *a1) >> 3);
  v9 = v8 - a2;
  v10 = *a1 + 8 * ((v2 - *a1) >> 3);
  if ( !v10 )
    goto LABEL_20;
  v11 = 0x4EC4EC4EC4EC4EC5LL * ((v2 - *a1) >> 3) - a2;
  if ( v9 > 1 )
    v11 = 1LL;
  v12 = (const struct EffectInput *)(v2 - 104 * v11);
  if ( (const struct EffectInput *)v2 != v12 )
  {
    v25 = 0LL;
    v26 = (const struct EffectInput *)(v2 - 104);
    v31 = 0LL;
    while ( 1 )
    {
      EffectInput::EffectInput((EffectInput *)(v10 + 104 * v25), v26);
      if ( v26 == v12 )
        break;
      v26 = (const struct EffectInput *)((char *)v26 - 104);
      if ( v31 )
      {
        v25 = v31 - 1;
        v31 = v25;
        if ( !v25 )
          continue;
      }
      goto LABEL_20;
    }
  }
  if ( v9 <= 1 )
  {
    v13 = 104 * a2;
    goto LABEL_8;
  }
  if ( v8 && (!v7 || v8 < 0) )
LABEL_20:
    _invalid_parameter_noinfo_noreturn();
  v13 = 104 * a2;
  v27 = v7;
  v28 = v8;
  v29 = v8;
  ((void (__fastcall *)(_BYTE *, char *, char *, LPVOID *))std::move_backward<std::move_iterator<EffectInput *>,stdext::checked_array_iterator<EffectInput *>>)(
    v30,
    &v7[104 * a2],
    &v7[104 * v8 - 104],
    &v27);
LABEL_8:
  v14 = (unsigned __int64)&v7[104 * a2 + 104];
  if ( v10 < v14 )
    v14 = v10;
  detail::destruct_range<EffectInput>(&v7[v13], v14);
  a1[1] += 104LL;
  return &v7[v13];
}
