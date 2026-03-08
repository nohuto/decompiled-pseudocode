/*
 * XREFs of ?Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801EA904
 * Callers:
 *     ?Render@CCaptureRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180118F70 (-Render@CCaptureRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CVirtualMonitorCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801EB6F0 (-Render@CVirtualMonitorCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E6D30 (-Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x1801E9CA4 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ @ 0x1801EA070 (-GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ.c)
 *     ?GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDevice@@AEBU_LUID@@PEAUIFlipProducer@@@Z @ 0x1801EA094 (-GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDevice@@AEBU_LUID@@PEAUIFlip.c)
 *     ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801EAAB0 (-RenderAdditionalTopmostContent@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1801EAE30 (-TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::Render(LARGE_INTEGER *this, struct CDrawingContext *a2, char a3, bool *a4)
{
  unsigned int v4; // ebx
  LARGE_INTEGER v7; // rcx
  int v10; // eax
  __int64 v11; // rcx
  struct D3D11_SUBRESOURCE_DATA *D3DDeviceNoRef; // rax
  int v13; // eax
  __int64 v14; // rcx
  int Buffer; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  char v23; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  *a4 = 0;
  v7 = this[-18];
  v23 = 0;
  if ( v7.QuadPart
    && (v10 = (*(__int64 (__fastcall **)(LARGE_INTEGER, char *))(*(_QWORD *)v7.QuadPart + 24LL))(v7, &v23),
        v4 = v10,
        v10 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x23Du, 0LL);
  }
  else
  {
    D3DDeviceNoRef = (struct D3D11_SUBRESOURCE_DATA *)CCaptureRenderTarget::CDeviceManager::GetD3DDeviceNoRef(
                                                        (struct CD3DDevice **)&this[-30],
                                                        (const struct _LUID *)&this[-29],
                                                        (struct IFlipProducer *)this[-18].QuadPart);
    if ( D3DDeviceNoRef
      && this[-252].QuadPart
      && ((this[-11].QuadPart - this[-12].QuadPart) & 0xFFFFFFFFFFFFFFF8uLL) != 0
      && this[-18].QuadPart
      && LOBYTE(this[-27].LowPart)
      && v23 )
    {
      v13 = CCaptureRenderTarget::EnsureResources((CCaptureRenderTarget *)&this[-264], D3DDeviceNoRef);
      v4 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x24Bu, 0LL);
      }
      else
      {
        Buffer = CCaptureRenderTarget::TryTargetNextBuffer((CCaptureRenderTarget *)&this[-264]);
        v4 = Buffer;
        if ( Buffer < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, Buffer, 0x24Eu, 0LL);
        }
        else if ( CCaptureRenderTarget::GetCurrentFrameBuffer((CCaptureRenderTarget *)&this[-264]) )
        {
          LOBYTE(v17) = a3;
          v18 = COffScreenRenderTarget::Render(this - 25, a2, v17, a4);
          v4 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x253u, 0LL);
          }
          else
          {
            v20 = CCaptureRenderTarget::RenderAdditionalTopmostContent((CCaptureRenderTarget *)&this[-264], a2);
            v4 = v20;
            if ( v20 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x254u, 0LL);
            else
              *a4 = 1;
          }
        }
      }
    }
  }
  return v4;
}
