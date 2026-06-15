/*
 * XREFs of sub_180106C74 @ 0x180106C74
 * Callers:
 *     sub_180107A1C @ 0x180107A1C (sub_180107A1C.c)
 * Callees:
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_1800D50A8 @ 0x1800D50A8 (sub_1800D50A8.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180106C74(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  _QWORD *v6; // rax
  std::_Ref_count_base *v7; // rcx
  int v9; // eax

  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 144);
  v5 = Mtx_lock((_Mtx_t)(a1 + 144));
  if ( v5 )
  {
    std::_Throw_C_error(v5);
    __debugbreak();
  }
  if ( !*(_BYTE *)(a1 + 136) && !*(_BYTE *)(a1 + 137) && *(_QWORD *)(a1 + 128) )
  {
    v6 = *(_QWORD **)(a1 + 96);
    if ( v6 )
      v6 = (_QWORD *)*v6;
    sub_1800D50A8(a2, *(__int64 **)(v6[1] + 8 * (*(_QWORD *)(a1 + 120) & (v6[2] - 1LL))));
    v7 = *(std::_Ref_count_base **)(*(_QWORD *)(*(_QWORD *)(a1 + 104)
                                              + 8 * (*(_QWORD *)(a1 + 120) & (*(_QWORD *)(a1 + 112) - 1LL)))
                                  + 8LL);
    if ( v7 )
      sub_180052600(v7);
    if ( (*(_QWORD *)(a1 + 128))-- == 1LL )
      *(_QWORD *)(a1 + 120) = 0LL;
    else
      ++*(_QWORD *)(a1 + 120);
  }
  v9 = Mtx_unlock(v4);
  if ( v9 )
    std::_Throw_C_error(v9);
  return a2;
}
