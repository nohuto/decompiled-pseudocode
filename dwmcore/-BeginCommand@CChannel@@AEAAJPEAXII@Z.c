/*
 * XREFs of ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180043B74
 * Callers:
 *     ?GdiSpriteBitmapDirtyRectangles@CChannel@@UEAAJIPEBUtagRECT@@I@Z @ 0x18001F7E0 (-GdiSpriteBitmapDirtyRectangles@CChannel@@UEAAJIPEBUtagRECT@@I@Z.c)
 *     ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x180040260 (-RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z.c)
 *     ?AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NHPEBUMilRectF@@1I@Z @ 0x1800EBCA0 (-AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NHPEBUMilRectF@@1I@Z.c)
 *     ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x1800EE820 (-AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z.c)
 *     ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z @ 0x1800EF4A0 (-RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z.c)
 *     ?InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x1800F6DD0 (-InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42I.c)
 *     ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x1801CB5A0 (-AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x1801CC280 (-Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0W4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x1801CC5E0 (-LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0W4Enum@MilColorInterpolati.c)
 *     ?MeshGeometry2DUpdate@CChannel@@UEAAJIHPEBUMilPoint3F@@PEBUMilPoint2D@@IPEBII@Z @ 0x1801CCE30 (-MeshGeometry2DUpdate@CChannel@@UEAAJIHPEBUMilPoint3F@@PEBUMilPoint2D@@IPEBII@Z.c)
 *     ?Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x1801CDA80 (-Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x1801CDBC0 (-TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?VisualGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x1801CDEB0 (-VisualGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 * Callees:
 *     ?EnsureSize@CChannel@@AEAAJI@Z @ 0x180043C0C (-EnsureSize@CChannel@@AEAAJI@Z.c)
 *     ?GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z @ 0x1800443CC (-GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x1800D6CFC (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 */

__int64 __fastcall CChannel::BeginCommand(CDataStreamWriter **this, void *a2, unsigned int a3, int a4)
{
  int v7; // eax
  unsigned int v8; // esi
  CDataStreamWriter *v9; // rcx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v13; // [rsp+20h] [rbp-28h]
  void *v14; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a3 + a4 < a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9C,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070216LL,
      v13);
    return 2147942934LL;
  }
  else
  {
    v7 = CChannel::EnsureSize((CChannel *)this, a3 + a4);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9D,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
        (const char *)(unsigned int)v7,
        v13);
      return v8;
    }
    else
    {
      CDataStreamWriter::BeginItem(this[22]);
      if ( a3 )
      {
        v9 = this[22];
        v14 = 0LL;
        v10 = CDataStreamWriter::GetItemDataWritePointer(v9, a3, &v14);
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xB2u, 0LL);
        else
          memcpy_0(v14, a2, a3);
      }
      return 0LL;
    }
  }
}
