/*
 * XREFs of ??$move@V?$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x1801FB524
 * Callers:
 *     ?clear_region@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800DE3AC (-clear_region@-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_impl.c)
 * Callees:
 *     ??4SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801FBE28 (--4SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 __fastcall std::move<std::move_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters *>,stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // rbx
  _QWORD *v5; // r14
  signed __int64 v8; // rdx
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // xmm1_8

  v4 = a2;
  v5 = a4 + 2;
  v8 = 0xCCCCCCCCCCCCCCCDuLL * ((a3 - a2) >> 3);
  if ( v8 < 0 )
  {
    if ( *v5 >= (unsigned __int64)-v8 )
      goto LABEL_3;
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 0 && a4[1] - *v5 < (unsigned __int64)v8 )
    goto LABEL_8;
LABEL_3:
  v10 = *a4;
  v11 = *a4 + 40LL * *v5;
  while ( v4 != a3 )
  {
    CCpuClipAntialiasSinkContext::SinkRenderParameters::operator=(v11, v4);
    v11 += 40LL;
    v4 += 40LL;
  }
  result = a1;
  *v5 = 0xCCCCCCCCCCCCCCCDuLL * ((v11 - v10) >> 3);
  v13 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v13;
  return result;
}
