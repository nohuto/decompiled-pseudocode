/*
 * XREFs of ??$move@V?$move_iterator@PEAUPrimitiveUVDesc@@@std@@V?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@V?$move_iterator@PEAUPrimitiveUVDesc@@@0@0V12@@Z @ 0x1801F70A4
 * Callers:
 *     ?clear_region@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800D9948 (-clear_region@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move<std::move_iterator<PrimitiveUVDesc *>,stdext::checked_array_iterator<PrimitiveUVDesc *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v4; // r11
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // xmm1_8

  v4 = a4 + 2;
  v6 = 0x4EC4EC4EC4EC4EC5LL * ((a3 - a2) >> 2);
  if ( v6 < 0 )
  {
    if ( *v4 >= 0xB13B13B13B13B13BuLL * ((a3 - a2) >> 2) )
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
    *(_OWORD *)v7 = *(_OWORD *)a2;
    *(_OWORD *)(v7 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v7 + 32) = *(_OWORD *)(a2 + 32);
    *(_DWORD *)(v7 + 48) = *(_DWORD *)(a2 + 48);
    v7 += 52LL;
    a2 += 52LL;
  }
  result = a1;
  *v4 = 0x4EC4EC4EC4EC4EC5LL * ((v7 - *a4) >> 2);
  v9 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v9;
  return result;
}
