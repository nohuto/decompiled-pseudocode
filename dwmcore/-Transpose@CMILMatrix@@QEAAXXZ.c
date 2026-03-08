/*
 * XREFs of ?Transpose@CMILMatrix@@QEAAXXZ @ 0x180006324
 * Callers:
 *     ?IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1@@Z @ 0x180005D9C (-IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x18000616C (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 *     ?UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z @ 0x180017894 (-UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z.c)
 *     ?FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVCMILMatrix@@AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1801FE598 (-FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVC.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x18020EFFC (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 * Callees:
 *     ?transpose@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBU4123@@Z @ 0x180006368 (-transpose@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBU4123@@Z.c)
 */

void __fastcall CMILMatrix::Transpose(CMILMatrix *this)
{
  _OWORD *v1; // rax
  __int64 v2; // rdx
  __int128 v3; // xmm1
  _BYTE v4[72]; // [rsp+20h] [rbp-48h] BYREF

  v1 = (_OWORD *)Windows::Foundation::Numerics::transpose(v4, this);
  *(_OWORD *)v2 = *v1;
  *(_OWORD *)(v2 + 16) = v1[1];
  *(_OWORD *)(v2 + 32) = v1[2];
  v3 = v1[3];
  *(_BYTE *)(v2 + 64) &= 3u;
  *(_BYTE *)(v2 + 65) &= 0xC0u;
  *(_OWORD *)(v2 + 48) = v3;
}
