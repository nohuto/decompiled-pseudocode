/*
 * XREFs of ??$_Swap_ranges_unchecked@V?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@V12@@std@@YA?AV?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@V12@V12@0@Z @ 0x1801FB06C
 * Callers:
 *     ??$swap_generic@V?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAXAEAV01@@Z @ 0x1801FB9DC (--$swap_generic@V-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_i.c)
 * Callees:
 *     ??1SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAA@XZ @ 0x1801FBD4C (--1SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAA@XZ.c)
 *     ??4SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801FBE28 (--4SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

_QWORD *__fastcall std::_Swap_ranges_unchecked<detail::basic_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters>,detail::basic_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters>>(
        _QWORD *a1,
        __int64 **a2,
        __int64 **a3,
        __int64 *a4)
{
  __int64 i; // rdi
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // xmm0_4
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *result; // rax
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+28h] [rbp-30h]
  int v17; // [rsp+2Ch] [rbp-2Ch]
  __int64 v18; // [rsp+30h] [rbp-28h]
  __int64 v19; // [rsp+38h] [rbp-20h]
  char v20; // [rsp+40h] [rbp-18h]
  char v21; // [rsp+41h] [rbp-17h]

  for ( i = *a4; ; i = *a4 )
  {
    v9 = *a2;
    if ( *a2 == *a3 )
      break;
    v10 = *v9;
    *v9 = 0LL;
    v11 = *((_DWORD *)v9 + 2);
    v15 = v10;
    v17 = *((_DWORD *)v9 + 3);
    v12 = v9[2];
    v9[2] = 0LL;
    v18 = v12;
    v13 = v9[3];
    v9[3] = 0LL;
    v19 = v13;
    v20 = *((_BYTE *)v9 + 32);
    v21 = *((_BYTE *)v9 + 33);
    v16 = v11;
    CCpuClipAntialiasSinkContext::SinkRenderParameters::operator=(v9, i);
    CCpuClipAntialiasSinkContext::SinkRenderParameters::operator=(i, &v15);
    CCpuClipAntialiasSinkContext::SinkRenderParameters::~SinkRenderParameters((CCpuClipAntialiasSinkContext::SinkRenderParameters *)&v15);
    *a2 += 5;
    *a4 += 40LL;
  }
  result = a1;
  *a1 = i;
  return result;
}
