/*
 * XREFs of ??$?0V?$span_iterator@PEAVCCompositionLight@@@details@gsl@@$0A@@?$vector@PEAVCCompositionLight@@V?$allocator@PEAVCCompositionLight@@@std@@@std@@QEAA@V?$span_iterator@PEAVCCompositionLight@@@details@gsl@@0AEBV?$allocator@PEAVCCompositionLight@@@1@@Z @ 0x1801FA5C8
 * Callers:
 *     ??0CSpectreCallbackRenderer@@AEAA@PEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCCompositionLight@@$0?0@gsl@@@Z @ 0x1801FA6A8 (--0CSpectreCallbackRenderer@@AEAA@PEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MM.c)
 * Callees:
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 *     ?_Buy_nonzero@?$vector@PEAVCCompositionLight@@V?$allocator@PEAVCCompositionLight@@@std@@@std@@AEAAX_K@Z @ 0x1801FAE54 (-_Buy_nonzero@-$vector@PEAVCCompositionLight@@V-$allocator@PEAVCCompositionLight@@@std@@@std@@AE.c)
 */

__int64 *__fastcall std::vector<CCompositionLight *>::vector<CCompositionLight *>(
        __int64 *a1,
        __int128 *a2,
        __int128 *a3)
{
  __int128 v4; // xmm2
  __int128 v6; // xmm1
  unsigned __int64 v7; // xmm0_8
  signed __int64 v8; // rbp
  __int64 v9; // rbx
  unsigned __int64 v11; // [rsp+30h] [rbp-38h]

  v4 = *a3;
  v11 = *((_QWORD *)a3 + 2);
  v6 = *a2;
  *a1 = 0LL;
  v7 = *((_QWORD *)a2 + 2);
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v6 != v4 || v7 > v11 )
  {
    gsl::details::terminate((gsl::details *)v6);
    JUMPOUT(0x1801FA69ELL);
  }
  v8 = *((_QWORD *)a3 + 2) - *((_QWORD *)a2 + 2);
  if ( v8 >> 3 )
  {
    std::vector<CCompositionLight *>::_Buy_nonzero(a1, (__int64)(*((_QWORD *)a3 + 2) - *((_QWORD *)a2 + 2)) >> 3);
    v9 = *a1;
    memmove_0((void *)*a1, *((const void **)a2 + 2), v8);
    a1[1] = v9 + 8 * (v8 >> 3);
  }
  return a1;
}
