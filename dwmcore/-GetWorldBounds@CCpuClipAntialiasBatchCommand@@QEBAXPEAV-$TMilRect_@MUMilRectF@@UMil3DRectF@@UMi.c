/*
 * XREFs of ?GetWorldBounds@CCpuClipAntialiasBatchCommand@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180090484
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180084A90 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18008F1F0 (-AddRenderingCommand@CBatchOptimizer@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@.c)
 * Callees:
 *     ?CalcBoundingRect@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUD2D_RECT_F@@@Z @ 0x18007C264 (-CalcBoundingRect@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUD2D_RECT_F@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCpuClipAntialiasBatchCommand::GetWorldBounds(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  struct MilRectF *v4; // rdx
  __int128 *v6; // rax
  __int128 v7; // [rsp+20h] [rbp-30h] BYREF
  __int128 v8; // [rsp+30h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(unsigned int *)(a1 + 96);
  if ( !(_DWORD)v3 && *(float *)(a1 + 104) == *(float *)(v2 + 92) && *(float *)(a1 + 108) == *(float *)(v2 + 96) )
  {
    v6 = (__int128 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
    v4 = (struct MilRectF *)&v7;
    v7 = *v6;
  }
  else
  {
    CCpuClipAntialiasSink::CalcBoundingRect(*(_QWORD *)(v2 + 80), v3, a1 + 100, (float *)&v7);
    v4 = (struct MilRectF *)&v8;
    v8 = v7;
  }
  return CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(a1 + 16), v4);
}
