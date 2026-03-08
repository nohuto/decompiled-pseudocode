/*
 * XREFs of ??$?0$0?0V?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@$0A@@?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@QEAA@AEAV?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18001CFC8
 * Callers:
 *     ?AppendCpuClipAntialiasHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_N2PEA_N@Z @ 0x18007D760 (-AppendCpuClipAntialiasHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveV.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

_QWORD *__fastcall gsl::span<PrimitiveUVDesc const,-1>::span<PrimitiveUVDesc const,-1>(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rdi
  gsl::details *v4; // rcx
  bool v5; // zf

  v2 = *a2;
  gsl::details::extent_type<-1>::extent_type<-1>(a1, 0x4EC4EC4EC4EC4EC5LL * ((a2[1] - *a2) >> 2));
  v5 = *a1 == -1LL;
  a1[1] = v2;
  if ( v5 || !v2 && *a1 )
  {
    gsl::details::terminate(v4);
    JUMPOUT(0x18001D01DLL);
  }
  return a1;
}
