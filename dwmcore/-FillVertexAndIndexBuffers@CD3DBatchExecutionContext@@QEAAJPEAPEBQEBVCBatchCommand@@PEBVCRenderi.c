/*
 * XREFs of ?FillVertexAndIndexBuffers@CD3DBatchExecutionContext@@QEAAJPEAPEBQEBVCBatchCommand@@PEBVCRenderingEffect@@@Z @ 0x18020238C
 * Callers:
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x180207270 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EmitGeometryForGroup@CGroupBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@PEBQEBVCBatchCommand@@@Z @ 0x18020759C (-EmitGeometryForGroup@CGroupBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@PEBQEBVCBatchComma.c)
 */

__int64 __fastcall CD3DBatchExecutionContext::FillVertexAndIndexBuffers(
        CD3DBatchExecutionContext *this,
        const struct CBatchCommand *const **a2,
        const struct CRenderingEffect *a3)
{
  unsigned int v3; // edi
  CGroupBatchCommand *v7; // rcx
  const struct CBatchCommand *const *v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax

  v3 = 0;
  if ( a3 )
  {
    v7 = (CGroupBatchCommand *)*((_QWORD *)this + 7);
    v8 = *a2;
    if ( v7 )
    {
      v9 = CGroupBatchCommand::EmitGeometryForGroup(v7, this, v8);
      v3 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1EEu, 0LL);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(const struct CRenderingEffect *, CD3DBatchExecutionContext *, const struct CBatchCommand *const))(*(_QWORD *)a3 + 40LL))(
              a3,
              this,
              *v8);
      v3 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1F3u, 0LL);
    }
  }
  v13 = *((_QWORD *)this + 7);
  if ( v13 )
  {
    v14 = *(unsigned int *)(v13 + 24);
    dword_1803E29D4 += v14;
    ++dword_1803E29D0;
    *a2 += v14;
    *((_QWORD *)this + 7) = 0LL;
  }
  return v3;
}
