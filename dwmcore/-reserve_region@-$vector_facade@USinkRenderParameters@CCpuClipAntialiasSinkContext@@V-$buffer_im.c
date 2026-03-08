/*
 * XREFs of ?reserve_region@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@_K0@Z @ 0x18007BD98
 * Callers:
 *     ?AddDrawList@CCpuClipAntialiasSinkContext@@QEAAXPEAVCDrawListEntry@@MW4Enum@BlendMode@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18007BC64 (-AddDrawList@CCpuClipAntialiasSinkContext@@QEAAXPEAVCDrawListEntry@@MW4Enum@BlendMode@@PEAVCHwLi.c)
 *     ??$emplace@PEAVCCpuClipAntialiasDrawListEntry@@MW4Enum@BlendMode@@$$T$$T_N_N@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@1@V?$basic_iterator@$$CBUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@1@PEAVCCpuClipAntialiasDrawListEntry@@MW4Enum@BlendMode@@$$T3_N4@Z @ 0x1800E43FC (--$emplace@PEAVCCpuClipAntialiasDrawListEntry@@MW4Enum@BlendMode@@$$T$$T_N_N@-$vector_facade@USi.c)
 *     ??$insert@V?$move_iterator@V?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@@std@@X@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@1@V?$basic_iterator@$$CBUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@1@V?$move_iterator@V?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@@std@@1@Z @ 0x1801FB1D8 (--$insert@V-$move_iterator@V-$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@.c)
 *     ??$insert_unchecked@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@1@V?$basic_iterator@$$CBUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@1@$$QEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@Z @ 0x1801FB2BC (--$insert_unchecked@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@-$vector_facade@USinkRe.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18007BE8C (-ensure_extra_capacity@-$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00V.c)
 *     ??$move_backward@V?$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x1801FB804 (--$move_backward@V-$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@std@@V.c)
 *     ??1SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAA@XZ @ 0x1801FBD4C (--1SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAA@XZ.c)
 */

CCpuClipAntialiasSinkContext::SinkRenderParameters *__fastcall detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v6; // r14
  __int64 *v7; // rcx
  signed __int64 v8; // r9
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rax
  __int64 *v12; // r10
  __int64 v13; // rdi
  CCpuClipAntialiasSinkContext::SinkRenderParameters *v14; // rsi
  CCpuClipAntialiasSinkContext::SinkRenderParameters *v15; // rbp
  CCpuClipAntialiasSinkContext::SinkRenderParameters *i; // rdi
  CCpuClipAntialiasSinkContext::SinkRenderParameters *result; // rax
  __int64 *v18; // rcx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD v24[4]; // [rsp+20h] [rbp-58h] BYREF
  char v25[32]; // [rsp+40h] [rbp-38h] BYREF

  detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    a3);
  v6 = *a1;
  v7 = (__int64 *)a1[1];
  v8 = 0xCCCCCCCCCCCCCCCDuLL * (((__int64)v7 - *a1) >> 3);
  v9 = v8 - a2;
  v10 = *a1 + 8 * (((__int64)v7 - *a1) >> 3);
  if ( a3 && (!v10 || (a3 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_22;
  v11 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3) - a2;
  if ( a3 < v9 )
    v11 = a3;
  v12 = &v7[-5 * v11];
  if ( v7 != v12 )
  {
    v18 = v7 - 5;
    v19 = a3;
    v20 = v10 + 40 * a3 + 12;
    if ( v10 )
    {
      while ( v19 )
      {
        --v19;
        v20 -= 40LL;
        if ( v19 >= a3 )
          break;
        v21 = *v18;
        *v18 = 0LL;
        *(_QWORD *)(v20 - 12) = v21;
        *(_DWORD *)(v20 - 4) = *((_DWORD *)v18 + 2);
        *(_DWORD *)v20 = *((_DWORD *)v18 + 3);
        v22 = v18[2];
        v18[2] = 0LL;
        *(_QWORD *)(v20 + 4) = v22;
        v23 = v18[3];
        v18[3] = 0LL;
        *(_QWORD *)(v20 + 12) = v23;
        *(_BYTE *)(v20 + 20) = *((_BYTE *)v18 + 32);
        *(_BYTE *)(v20 + 21) = *((_BYTE *)v18 + 33);
        if ( v18 == v12 )
          goto LABEL_7;
        v18 -= 5;
      }
    }
    goto LABEL_22;
  }
LABEL_7:
  if ( v9 <= a3 )
  {
    v13 = 40 * a2;
    goto LABEL_9;
  }
  if ( v8 && (!v6 || v8 < 0) )
LABEL_22:
    _invalid_parameter_noinfo_noreturn();
  v24[1] = v8;
  v24[2] = v8;
  v24[0] = v6;
  v13 = 40 * a2;
  ((void (__fastcall *)(char *, __int64, unsigned __int64, _QWORD *))std::move_backward<std::move_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters *>,stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters *>>)(
    v25,
    40 * a2 + v6,
    v6 + 40 * (v8 - a3),
    v24);
LABEL_9:
  v14 = (CCpuClipAntialiasSinkContext::SinkRenderParameters *)(v6 + 40 * (a2 + a3));
  if ( v10 < (unsigned __int64)v14 )
    v14 = (CCpuClipAntialiasSinkContext::SinkRenderParameters *)v10;
  v15 = (CCpuClipAntialiasSinkContext::SinkRenderParameters *)(v13 + v6);
  for ( i = v15; i != v14; i = (CCpuClipAntialiasSinkContext::SinkRenderParameters *)((char *)i + 40) )
    CCpuClipAntialiasSinkContext::SinkRenderParameters::~SinkRenderParameters(i);
  result = v15;
  a1[1] += 40 * a3;
  return result;
}
