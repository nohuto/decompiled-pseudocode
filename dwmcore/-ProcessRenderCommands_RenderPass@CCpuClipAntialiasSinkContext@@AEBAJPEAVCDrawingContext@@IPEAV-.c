/*
 * XREFs of ?ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@@Z @ 0x180092408
 * Callers:
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x180090A0C (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 * Callees:
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800748A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18008C358 (-SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBa.c)
 *     ??$TakeItemFromCache@VCBatchCommand@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableArray@PEAVCBatchCommand@@U?$UniqueLifetime@PEAVCBatchCommand@@@@@@PEAPEAVCBatchCommand@@@Z @ 0x18008E7AC (--$TakeItemFromCache@VCBatchCommand@@@CDrawListBatchManager@@CAJPEAV-$ShrinkableArray@PEAVCBatch.c)
 *     ?InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@@Z @ 0x180091D54 (-InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatri.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1801FBED8 (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CCpuClipAntialiasSinkContext::ProcessRenderCommands_RenderPass(
        __int64 a1,
        __m128 *a2,
        unsigned int a3,
        __int64 **a4)
{
  unsigned __int64 v4; // rdi
  __int64 v8; // r15
  int v9; // eax
  unsigned int v10; // ebx
  __int64 *v11; // rbx
  _BYTE *v12; // r12
  __int64 v13; // rax
  int v14; // edi
  CBatchCommand *v15; // rcx
  CBatchCommand *v16; // rcx
  unsigned int v17; // edx
  __int64 v19; // rdx
  unsigned int v20; // edx
  int v21; // [rsp+20h] [rbp-30h]
  __int64 v22; // [rsp+30h] [rbp-20h]
  unsigned int v23[2]; // [rsp+40h] [rbp-10h] BYREF
  char v24; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  CBatchCommand *v26; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int64 v27; // [rsp+98h] [rbp+48h]
  __int64 v28; // [rsp+A8h] [rbp+58h]

  v4 = a2[2].m128_u64[1];
  v27 = v4;
  v8 = *(_QWORD *)(a1 + 16) + 432LL * a3;
  if ( !a4[1] )
    return 0LL;
  v9 = CDrawingContext::ApplyRenderStateInternal(a2, 1);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = *a4;
    while ( 1 )
    {
      do
      {
        v11 = (__int64 *)*v11;
        if ( v11 == *a4 )
          return 0LL;
        v22 = *(_QWORD *)(v8 + 8);
        v12 = *(_BYTE **)(v22 + 40LL * *((unsigned int *)v11 + 4));
        v28 = 5LL * *((unsigned int *)v11 + 4);
        v13 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v12 + 40LL))(v12);
      }
      while ( (*(int (__fastcall **)(__int64, __m128 *))(*(_QWORD *)v13 + 48LL))(v13, a2) < 0 );
      if ( (v12[48] & 4) != 0 )
        a2[505].m128_i8[15] = 1;
      v26 = 0LL;
      *(_QWORD *)v23 = 0LL;
      v24 = 1;
      v14 = CDrawListBatchManager::TakeItemFromCache<CBatchCommand>(v4 + 64, v23);
      if ( v24 )
      {
        v15 = v26;
        v26 = *(CBatchCommand **)v23;
        if ( v15 )
          CBatchCommand::`scalar deleting destructor'(v15, v23[0]);
      }
      if ( v14 < 0 )
        break;
      CBatchCommand::InitializeForRendering(
        (__int64)v26,
        v12,
        *(_DWORD *)(v22 + 8 * v28 + 12),
        *(float *)(v22 + 8 * v28 + 8),
        (CMILMatrix *)(a1 + 904));
      v16 = v26;
      *((_DWORD *)v26 + 24) = 0;
      *(_QWORD *)((char *)v16 + 100) = *(__int64 *)((char *)v11 + 20);
      *((_DWORD *)v16 + 27) = *((_DWORD *)v11 + 7);
      *((_OWORD *)v16 + 7) = *(_OWORD *)(a1 + 904);
      *((_OWORD *)v16 + 8) = *(_OWORD *)(a1 + 920);
      *((_OWORD *)v16 + 9) = *(_OWORD *)(a1 + 936);
      *((_OWORD *)v16 + 10) = *(_OWORD *)(a1 + 952);
      *((_DWORD *)v16 + 44) = *(_DWORD *)(a1 + 968);
      v14 = CD2DContext::SubmitRenderCommand(
              (CD2DContext *)(v27 + 16),
              (__int64 *)&v26,
              *(struct CHwLightCollectionBuffer **)(v22 + 8 * v28 + 16),
              *(struct ClipPlaneInfoRef **)(v22 + 8 * v28 + 24));
      if ( v14 < 0 )
      {
        v19 = 549LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
          (const char *)(unsigned int)v14,
          v21);
        if ( v26 )
          CBatchCommand::`scalar deleting destructor'(v26, v20);
        return (unsigned int)v14;
      }
      if ( v26 )
        CBatchCommand::`scalar deleting destructor'(v26, v17);
      v4 = v27;
    }
    v19 = 533LL;
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1FB,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
    (const char *)(unsigned int)v9,
    v21);
  return v10;
}
