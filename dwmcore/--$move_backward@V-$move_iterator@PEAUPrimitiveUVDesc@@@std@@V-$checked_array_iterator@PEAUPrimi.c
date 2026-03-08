/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAUPrimitiveUVDesc@@@std@@V?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@V?$move_iterator@PEAUPrimitiveUVDesc@@@0@0V12@@Z @ 0x1801F741C
 * Callers:
 *     ?reserve_region@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUPrimitiveUVDesc@@_K0@Z @ 0x1800D9A54 (-reserve_region@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$03$00Vlibera.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move_backward<std::move_iterator<PrimitiveUVDesc *>,stdext::checked_array_iterator<PrimitiveUVDesc *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v4; // r11
  signed __int64 v6; // r10
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // xmm1_8

  v4 = a4 + 2;
  v6 = 0xB13B13B13B13B13BuLL * ((a3 - a2) >> 2);
  if ( v6 < 0 )
  {
    if ( *v4 >= (unsigned __int64)(0x4EC4EC4EC4EC4EC5LL * ((a3 - a2) >> 2)) )
      goto LABEL_3;
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v6 > 0 && a4[1] - *v4 < (unsigned __int64)v6 )
    goto LABEL_8;
LABEL_3:
  v7 = *a4 + 52LL * *v4;
  while ( a2 != a3 )
  {
    v7 -= 52LL;
    a3 -= 52LL;
    *(_OWORD *)v7 = *(_OWORD *)a3;
    *(_OWORD *)(v7 + 16) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v7 + 32) = *(_OWORD *)(a3 + 32);
    *(_DWORD *)(v7 + 48) = *(_DWORD *)(a3 + 48);
  }
  result = a1;
  *v4 = 0x4EC4EC4EC4EC4EC5LL * ((v7 - *a4) >> 2);
  v9 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v9;
  return result;
}
