/*
 * XREFs of ??$insert@V?$move_iterator@V?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@@std@@X@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@1@V?$basic_iterator@$$CBUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@1@V?$move_iterator@V?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@@std@@1@Z @ 0x1801FB1D8
 * Callers:
 *     ??$assign@V?$move_iterator@V?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@@std@@X@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$move_iterator@V?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@@std@@0@Z @ 0x1801FB13C (--$assign@V-$move_iterator@V-$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@_K0@Z @ 0x18007BD98 (-reserve_region@-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_im.c)
 */

_QWORD *__fastcall detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::insert<std::move_iterator<detail::basic_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters>>,void>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 **a4,
        __int64 **a5)
{
  __int64 v8; // rsi
  CCpuClipAntialiasSinkContext::SinkRenderParameters *v9; // rax
  __int64 *v10; // rdx
  __int64 *v11; // rcx
  char *v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *result; // rax

  v8 = 0xCCCCCCCCCCCCCCCDuLL * ((*a3 - *a1) >> 3);
  v9 = detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::reserve_region(
         a1,
         v8,
         0xCCCCCCCCCCCCCCCDuLL * (*a5 - *a4));
  v10 = *a5;
  v11 = *a4;
  v12 = (char *)v9 + 12;
  while ( v11 != v10 )
  {
    v13 = *v11;
    *v11 = 0LL;
    *(_QWORD *)(v12 - 12) = v13;
    *((_DWORD *)v12 - 1) = *((_DWORD *)v11 + 2);
    *(_DWORD *)v12 = *((_DWORD *)v11 + 3);
    v14 = v11[2];
    v11[2] = 0LL;
    *(_QWORD *)(v12 + 4) = v14;
    v15 = v11[3];
    v11[3] = 0LL;
    *(_QWORD *)(v12 + 12) = v15;
    v12[20] = *((_BYTE *)v11 + 32);
    LOBYTE(v15) = *((_BYTE *)v11 + 33);
    v11 += 5;
    v12[21] = v15;
    v12 += 40;
  }
  result = a2;
  *a2 = *a1 + 40 * v8;
  return result;
}
