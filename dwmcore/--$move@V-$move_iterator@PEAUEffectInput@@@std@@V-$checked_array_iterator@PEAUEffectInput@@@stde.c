/*
 * XREFs of ??$move@V?$move_iterator@PEAUEffectInput@@@std@@V?$checked_array_iterator@PEAUEffectInput@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUEffectInput@@@stdext@@V?$move_iterator@PEAUEffectInput@@@0@0V12@@Z @ 0x18027FA20
 * Callers:
 *     ?clear_region@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180038474 (-clear_region@-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00Vliberal_expansio.c)
 * Callees:
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x180092EE8 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 */

__int64 __fastcall std::move<std::move_iterator<EffectInput *>,stdext::checked_array_iterator<EffectInput *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbx
  _QWORD *v5; // r14
  __int64 v8; // rdx
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a2;
  v5 = a4 + 2;
  v8 = 0x4EC4EC4EC4EC4EC5LL * ((a3 - a2) >> 3);
  if ( v8 < 0 )
  {
    if ( *v5 >= (unsigned __int64)-v8 )
      goto LABEL_3;
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 0 && a4[1] - *v5 < (unsigned __int64)v8 )
    goto LABEL_8;
LABEL_3:
  v10 = *a4 + 104LL * *v5;
  while ( v4 != a3 )
  {
    EffectInput::operator=(v10, v4);
    v10 += 104LL;
    v4 += 104LL;
  }
  result = a1;
  *v5 = 0x4EC4EC4EC4EC4EC5LL * ((v10 - *a4) >> 3);
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
