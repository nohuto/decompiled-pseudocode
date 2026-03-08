/*
 * XREFs of ?ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z @ 0x18007E818
 * Callers:
 *     ?ComputeColorAndUV@CDrawListEntryBuilder@@AEBAXPEBUPrimitiveVertexAttributesDesc@@V?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@V?$StridedSpan@UVertexAAFixup_UVxN@@@@@Z @ 0x18006FAB0 (-ComputeColorAndUV@CDrawListEntryBuilder@@AEBAXPEBUPrimitiveVertexAttributesDesc@@V-$StridedSpan.c)
 *     ?FillVertexColor@CCpuClipAntialiasDrawListEntry@@QEBAX_NMAEBV?$StridedSpan@K@@@Z @ 0x18007D418 (-FillVertexColor@CCpuClipAntialiasDrawListEntry@@QEBAX_NMAEBV-$StridedSpan@K@@@Z.c)
 *     ?UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x1801FEC78 (-UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?CopyInstanceFromIndex@CParticleEmitterVisual@@IEAAXII@Z @ 0x180241464 (-CopyInstanceFromIndex@CParticleEmitterVisual@@IEAAXII@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ColorDWFromStraightColorF(const struct _D3DCOLORVALUE *a1)
{
  float v1; // xmm0_4
  unsigned int v2; // edx
  float v3; // xmm0_4
  float v4; // xmm0_4
  float v6; // [rsp+8h] [rbp+8h]
  float v7; // [rsp+20h] [rbp+20h]

  v1 = (float)(a1->a * 255.0) + 6291456.25;
  v2 = (LODWORD(v1) & 0xFFFFFFFE) << 8;
  v3 = (float)(a1->b * 255.0) + 6291456.25;
  v7 = v3;
  v4 = (float)(a1->g * 255.0) + 6291456.25;
  v6 = (float)(a1->r * 255.0) + 6291456.25;
  return ((LODWORD(v7) & 0xFFFFFFFE | v2) << 15) | ((int)(((int)(LODWORD(v6) << 10) >> 8) | ((LODWORD(v4) & 0xFFFFFFFE) << 10)) >> 3);
}
