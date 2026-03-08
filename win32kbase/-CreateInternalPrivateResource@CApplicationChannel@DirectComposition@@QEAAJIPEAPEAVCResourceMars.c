/*
 * XREFs of ?CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0069D34
 * Callers:
 *     ?SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0009244 (-SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEB.c)
 *     ?SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0009338 (-SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_.c)
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCResourceMarshaler@2@_NPEA_N@Z @ 0x1C0069BC8 (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCReso.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C006A848 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ?EnsureWriteableInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_N1PEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C00A1EAC (-EnsureWriteableInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_.c)
 *     ?SetTransformMatrixHelper@CCaptureControllerMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C026D9EC (-SetTransformMatrixHelper@CCaptureControllerMarshaler@DirectComposition@@QEAAJPEAVCApplicationCh.c)
 * Callees:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00673F4 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C0069DA8 (-InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResource.c)
 *     ?AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@@Z @ 0x1C00B8928 (-AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateInternalPrivateResource(
        DirectComposition::CApplicationChannel *this,
        unsigned __int64 a2,
        struct DirectComposition::CResourceMarshaler **a3)
{
  int v4; // esi
  int PrivateMarshaler; // ebx
  __int64 v8; // rax
  struct DirectComposition::CResourceMarshaler *v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v4 = a2;
  PrivateMarshaler = DirectComposition::CApplicationChannel::CreatePrivateMarshaler(this, a2, (__int64)&v9);
  if ( PrivateMarshaler >= 0 )
  {
    PrivateMarshaler = DirectComposition::CApplicationChannel::InitializeAndRegisterInternalResource(this, v9);
    if ( PrivateMarshaler >= 0 )
    {
      if ( v4 == 2 )
      {
        v8 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v9 + 80LL))(v9);
        DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
          this,
          *(struct DirectComposition::CAnimationTimeList **)(v8 + 80));
      }
      *a3 = v9;
    }
  }
  return (unsigned int)PrivateMarshaler;
}
