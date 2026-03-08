/*
 * XREFs of ?EmitGeometryForGroup@CGroupBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@PEBQEBVCBatchCommand@@@Z @ 0x18020759C
 * Callers:
 *     ?FillVertexAndIndexBuffers@CD3DBatchExecutionContext@@QEAAJPEAPEBQEBVCBatchCommand@@PEBVCRenderingEffect@@@Z @ 0x18020238C (-FillVertexAndIndexBuffers@CD3DBatchExecutionContext@@QEAAJPEAPEBQEBVCBatchCommand@@PEBVCRenderi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGroupBatchCommand::EmitGeometryForGroup(
        CGroupBatchCommand *this,
        struct CD3DBatchExecutionContext *a2,
        const struct CBatchCommand *const *a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  int v8; // eax
  __int64 v9; // rcx

  v3 = 0;
  v4 = 0LL;
  if ( *((_DWORD *)this + 6) )
  {
    while ( 1 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, struct CD3DBatchExecutionContext *, const struct CBatchCommand *const))(**((_QWORD **)this + 1) + 40LL))(
             *((_QWORD *)this + 1),
             a2,
             a3[v4 + 1]);
      v3 = v8;
      if ( v8 < 0 )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *((_DWORD *)this + 6) )
        return v3;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x53u, 0LL);
  }
  return v3;
}
