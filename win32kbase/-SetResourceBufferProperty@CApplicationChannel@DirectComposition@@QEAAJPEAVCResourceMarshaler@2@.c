/*
 * XREFs of ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@IPEBX_K@Z @ 0x1C0009440
 * Callers:
 *     ?SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0009244 (-SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEB.c)
 *     ?SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0009338 (-SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_.c)
 *     ?SetTransformMatrixHelper@CCaptureControllerMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C026D9EC (-SetTransformMatrixHelper@CCaptureControllerMarshaler@DirectComposition@@QEAAJPEAVCApplicationCh.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C005C4B4 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceBufferProperty(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2,
        __int64 a3,
        const void *a4,
        unsigned __int64 a5)
{
  __int64 v5; // rax
  int v8; // r11d
  char v10; // [rsp+58h] [rbp+10h] BYREF

  v5 = *(_QWORD *)a2;
  v10 = 0;
  v8 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, __int64, const void *, unsigned __int64, char *))(v5 + 240))(
         a2,
         this,
         a3,
         a4,
         a5,
         &v10);
  if ( v8 >= 0 && v10 )
    DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, a2);
  return (unsigned int)v8;
}
