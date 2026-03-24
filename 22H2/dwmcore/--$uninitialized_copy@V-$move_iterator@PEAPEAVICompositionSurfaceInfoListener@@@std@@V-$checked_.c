/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@0@0V12@@Z @ 0x1800DAAEC
 * Callers:
 *     ?clear_region@?$vector_facade@PEAVICompositionSurfaceInfoListener@@V?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180036D38 (-clear_region@-$vector_facade@PEAVICompositionSurfaceInfoListener@@V-$buffer_impl@PEAVICompositi.c)
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180037808 (-ensure_extra_capacity@-$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansi.c)
 * Callees:
 *     memmove_0 @ 0x1800F4017 (memmove_0.c)
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<ICompositionSurfaceInfoListener * *>,stdext::checked_array_iterator<ICompositionSurfaceInfoListener * *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v5; // rbp
  __int64 v7; // r10
  bool v8; // cc
  __int64 v9; // rbx
  void *v10; // rdi
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v5 = a3 - (_QWORD)a2;
  v7 = (a3 - (__int64)a2) >> 3;
  v8 = v7 <= 0;
  if ( v7 < 0 )
  {
    if ( a4[2] < (unsigned __int64)-v7 )
      goto LABEL_7;
    v8 = v7 <= 0;
  }
  if ( !v8 && a4[1] - a4[2] < (unsigned __int64)v7 )
  {
LABEL_7:
    _o__invalid_parameter_noinfo_noreturn(a1, a2);
    __debugbreak();
    JUMPOUT(0x1801499B9LL);
  }
  v9 = *a4;
  v10 = (void *)(*a4 + 8 * a4[2]);
  memmove_0(v10, a2, a3 - (_QWORD)a2);
  result = a1;
  a4[2] = ((__int64)v10 + v5 - v9) >> 3;
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
