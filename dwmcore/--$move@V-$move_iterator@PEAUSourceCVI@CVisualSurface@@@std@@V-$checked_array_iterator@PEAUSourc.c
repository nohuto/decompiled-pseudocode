/*
 * XREFs of ??$move@V?$move_iterator@PEAUSourceCVI@CVisualSurface@@@std@@V?$checked_array_iterator@PEAUSourceCVI@CVisualSurface@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSourceCVI@CVisualSurface@@@stdext@@V?$move_iterator@PEAUSourceCVI@CVisualSurface@@@0@0V12@@Z @ 0x1801BCD80
 * Callers:
 *     ?clear_region@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800B03BC (-clear_region@-$vector_facade@USourceCVI@CVisualSurface@@V-$buffer_impl@USourceCVI@CVisualSurfac.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::move<std::move_iterator<CVisualSurface::SourceCVI *>,stdext::checked_array_iterator<CVisualSurface::SourceCVI *>>(
        __int64 a1,
        char *a2,
        char *a3,
        _QWORD *a4)
{
  char *v4; // rbx
  __int64 *v5; // r14
  __int64 v8; // rdx
  __int64 *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // xmm1_8

  v4 = a2;
  v5 = a4 + 2;
  v8 = (a3 - a2) >> 4;
  if ( v8 >= 0 )
  {
    if ( v8 <= 0 || a4[1] - *v5 >= (unsigned __int64)v8 )
      goto LABEL_3;
LABEL_10:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( *v5 < (unsigned __int64)-v8 )
    goto LABEL_10;
LABEL_3:
  v10 = (__int64 *)(*a4 + 16 * *v5);
  while ( v4 != a3 )
  {
    v11 = *(_QWORD *)v4;
    *(_QWORD *)v4 = 0LL;
    v12 = *v10;
    *v10 = v11;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v10[1] = *((_QWORD *)v4 + 1);
    v10 += 2;
    v4 += 16;
  }
  result = a1;
  *v5 = ((__int64)v10 - *a4) >> 4;
  v14 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v14;
  return result;
}
