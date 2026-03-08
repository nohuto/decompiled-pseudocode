/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAUSourceCVI@CVisualSurface@@@std@@V?$checked_array_iterator@PEAUSourceCVI@CVisualSurface@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSourceCVI@CVisualSurface@@@stdext@@V?$move_iterator@PEAUSourceCVI@CVisualSurface@@@0@0V12@@Z @ 0x1802177C4
 * Callers:
 *     ?reserve_region@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSourceCVI@CVisualSurface@@_K0@Z @ 0x1800B0490 (-reserve_region@-$vector_facade@USourceCVI@CVisualSurface@@V-$buffer_impl@USourceCVI@CVisualSurf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CVisualSurface::SourceCVI *>,stdext::checked_array_iterator<CVisualSurface::SourceCVI *>>(
        __int64 a1,
        char *a2,
        char *a3,
        _QWORD *a4)
{
  __int64 *v4; // r11
  __int64 v6; // r10
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v4 = a4 + 2;
  v6 = (a3 - a2) >> 4;
  if ( v6 < 0 )
  {
    if ( *v4 >= (unsigned __int64)-v6 )
      goto LABEL_3;
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v6 > 0 && a4[1] - *v4 < (unsigned __int64)v6 )
    goto LABEL_8;
LABEL_3:
  v7 = (_QWORD *)(*a4 + 16 * *v4);
  while ( a2 != a3 )
  {
    v8 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
    *v7 = v8;
    v7[1] = *((_QWORD *)a2 + 1);
    v7 += 2;
    a2 += 16;
  }
  result = a1;
  *v4 = ((__int64)v7 - *a4) >> 4;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
