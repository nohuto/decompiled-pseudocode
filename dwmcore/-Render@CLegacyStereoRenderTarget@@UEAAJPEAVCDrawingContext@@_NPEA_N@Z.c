/*
 * XREFs of ?Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801EE3F8
 * Callers:
 *     ?Render@CLegacyStereoRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180118FF0 (-Render@CLegacyStereoRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x18008B408 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$span@.c)
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18008B8BC (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18008C4A8 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18008CA84 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetIntersectingRectCount@CDirtyRegion@@QEBAIAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801CAB7C (-GetIntersectingRectCount@CDirtyRegion@@QEBAIAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 */

__int64 __fastcall CLegacyStereoRenderTarget::Render(
        CLegacyStereoRenderTarget *this,
        struct CDrawingContext *a2,
        char a3,
        bool *a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // r15
  unsigned __int8 v10; // r11
  unsigned int IntersectingRectCount; // r12d
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  struct IDeviceTarget *v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  _QWORD v23[2]; // [rsp+30h] [rbp-38h] BYREF

  *a4 = 0;
  v7 = 0;
  if ( *((_QWORD *)this - 8) )
  {
    v8 = *((_QWORD *)this - 2325);
    if ( v8 )
    {
      if ( a3 || !*((_BYTE *)this - 66) )
      {
        v9 = v8 + 104;
        IntersectingRectCount = CDirtyRegion::GetIntersectingRectCount(v8 + 104, (float *)this - 149);
        if ( IntersectingRectCount )
        {
          v12 = CLegacyRenderTarget::Render((CLegacyStereoRenderTarget *)((char *)this - 16), a2, v10, a4);
          v7 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x22u, 0LL);
          }
          else if ( !*((_BYTE *)this - 56) || *(_DWORD *)(*((_QWORD *)this - 2344) + 436LL) )
          {
            v14 = *(_QWORD *)(*((_QWORD *)this - 8) + 360LL);
            if ( v14 )
              v15 = (struct IDeviceTarget *)(*(int *)(*(_QWORD *)(v14 + 8) + 24LL) + v14 + 8);
            else
              v15 = 0LL;
            v16 = CDrawingContext::BeginFrame(
                    a2,
                    v15,
                    (CLegacyStereoRenderTarget *)((char *)this + (*((_BYTE *)this - 7543) != 0 ? -416LL : -552LL)),
                    (const struct _D3DCOLORVALUE *)((char *)this - 18644),
                    (CLegacyStereoRenderTarget *)((char *)this - 18568));
            v7 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x2Bu, 0LL);
            }
            else
            {
              v23[0] = 0LL;
              v23[1] = 0LL;
              v18 = CLegacyRenderTarget::RenderDirtyRegion(
                      (__int64)this - 18768,
                      a2,
                      v9,
                      IntersectingRectCount,
                      v23,
                      0LL);
              v7 = v18;
              if ( v18 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x30u, 0LL);
                CDrawingContext::EndFrame(a2);
              }
              else
              {
                v20 = CDrawingContext::EndFrame(a2);
                v7 = v20;
                if ( v20 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x33u, 0LL);
              }
            }
          }
        }
      }
    }
  }
  return v7;
}
