/*
 * XREFs of ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x1801ED11C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x1800AC048 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ??2MagnifierCaptureBitsResponse@@SAPEAX_K@Z @ 0x1801ECC78 (--2MagnifierCaptureBitsResponse@@SAPEAX_K@Z.c)
 *     ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x1801ED760 (-ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_P.c)
 *     McTemplateU0xxddffff_EventWriteTransfer @ 0x1801ED918 (McTemplateU0xxddffff_EventWriteTransfer.c)
 *     ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChannelContext@@AEBUWICRect@@_K@Z @ 0x1801F69DC (--0MagnifierCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCMagnifierRenderTarget@@PEA.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessCaptureBits(
        CMagnifierRenderTarget *this,
        struct CChannelContext *a2,
        const struct tagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS *a3)
{
  int updated; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  MagnifierCaptureBitsResponse *v9; // rax
  __int64 v10; // rcx
  MagnifierCaptureBitsResponse *v11; // rax
  volatile signed __int32 *v12; // rsi
  int v13; // eax
  int v14; // edx
  __int64 v15; // rcx
  struct WICRect v17; // [rsp+50h] [rbp-18h] BYREF

  v17.X = 0;
  v17.Y = 0;
  v17.Width = *((_DWORD *)a3 + 2);
  v17.Height = *((_DWORD *)a3 + 3);
  *((_BYTE *)this + 1756) = 1;
  updated = CMagnifierRenderTarget::ProcessUpdateParams(
              this,
              a2,
              (const struct tagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS *)((char *)a3 + 32));
  v8 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, updated, 0x74u, 0LL);
  }
  else
  {
    *((_DWORD *)this + 438) = ((*((_DWORD *)a3 + 6) & 1) == 0) + 1;
    v9 = (MagnifierCaptureBitsResponse *)MagnifierCaptureBitsResponse::operator new();
    if ( v9
      && (v11 = MagnifierCaptureBitsResponse::MagnifierCaptureBitsResponse(
                  v9,
                  *((struct CGlobalSurfaceManager **)g_pComposition + 28),
                  this,
                  a2,
                  &v17,
                  *((_QWORD *)a3 + 2)),
          (v12 = (volatile signed __int32 *)v11) != 0LL) )
    {
      *((_DWORD *)v11 + 4) = 0;
      v13 = CResponseItem::QueueResponse(v11);
      v8 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v13, 0x8Fu, 0LL);
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        McTemplateU0xxddffff_EventWriteTransfer(
          v15,
          v14,
          *((_QWORD *)this + 230),
          *((_QWORD *)a3 + 2),
          *((_DWORD *)a3 + 8),
          *((_DWORD *)a3 + 9),
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 5)).m128_i8[0],
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 6)).m128_i8[0],
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 7)).m128_i8[0],
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 8)).m128_i8[0]);
      }
      CMILRefCountBaseT<IMILRefCount>::InternalRelease(v12);
    }
    else
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x86u, 0LL);
    }
  }
  return v8;
}
