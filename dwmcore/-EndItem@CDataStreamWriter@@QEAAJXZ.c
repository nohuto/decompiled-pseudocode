/*
 * XREFs of ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800BAFA0
 * Callers:
 *     ?GdiSpriteBitmapDirtyRectangles@CChannel@@UEAAJIPEBUtagRECT@@I@Z @ 0x18001F7E0 (-GdiSpriteBitmapDirtyRectangles@CChannel@@UEAAJIPEBUtagRECT@@I@Z.c)
 *     ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x180040260 (-RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
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
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDataStreamWriter::EndItem(CDataStreamWriter *this)
{
  unsigned int *v1; // r8
  unsigned int v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  __int64 v6; // r10
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 result; // rax
  __int64 v11; // rdx
  unsigned int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (unsigned int *)((char *)this + 56);
  if ( *((_QWORD *)this + 6) || *v1 )
  {
    v3 = *v1;
    v4 = -2147024362;
    v5 = (*v1 + 3) & 0xFFFFFFFC;
    if ( v5 < *v1 )
    {
      v11 = 259LL;
    }
    else
    {
      v6 = *((_QWORD *)this + 4);
      *v1 = v5;
      v7 = v5 - v3;
      v8 = *(_DWORD *)(v6 + 20);
      if ( v8 + v7 < v8 )
      {
        *(_DWORD *)(v6 + 20) = -1;
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024362, 0x247u, 0LL);
      }
      else
      {
        *(_DWORD *)(v6 + 20) = v8 + v7;
        v9 = *((_DWORD *)this + 11);
        if ( v9 + v7 >= v9 )
        {
          *((_DWORD *)this + 11) = v9 + v7;
          **((_DWORD **)this + 6) = *v1;
          result = 0LL;
          *((_QWORD *)this + 6) = 0LL;
          *v1 = 0;
          return result;
        }
        *((_DWORD *)this + 11) = -1;
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024362, 0x248u, 0LL);
      }
      v11 = 264LL;
    }
  }
  else
  {
    v4 = -2147418113;
    v11 = 240LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\datastreamwriter.cpp",
    (const char *)v4,
    v12);
  return v4;
}
