/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAURampPair@CoordMap@@@std@@V?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@V?$move_iterator@PEAURampPair@CoordMap@@@0@0V12@@Z @ 0x1802B6ACC
 * Callers:
 *     ?reserve_region@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampPair@CoordMap@@_K0@Z @ 0x180025AB0 (-reserve_region@-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vli.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CoordMap::RampPair *>,stdext::checked_array_iterator<CoordMap::RampPair *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  _QWORD *v4; // r11
  signed __int64 v6; // r10
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v4 = a4 + 2;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((a3 - a2) >> 2);
  if ( v6 < 0 )
  {
    if ( *v4 >= (unsigned __int64)(0x5555555555555555LL * ((a3 - a2) >> 2)) )
      goto LABEL_3;
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v6 > 0 && a4[1] - *v4 < (unsigned __int64)v6 )
    goto LABEL_8;
LABEL_3:
  v7 = *a4;
  v8 = *a4 + 12LL * *v4;
  while ( a2 != a3 )
  {
    *(_QWORD *)v8 = *(_QWORD *)a2;
    *(_DWORD *)(v8 + 8) = *(_DWORD *)(a2 + 8);
    v8 += 12LL;
    a2 += 12LL;
  }
  result = a1;
  *v4 = 0xAAAAAAAAAAAAAAABuLL * ((v8 - v7) >> 2);
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
