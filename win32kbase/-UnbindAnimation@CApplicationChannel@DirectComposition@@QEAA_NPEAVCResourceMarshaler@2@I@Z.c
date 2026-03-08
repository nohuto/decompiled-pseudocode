/*
 * XREFs of ?UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C005A9B8
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0066180 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00A7380 (-SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA.c)
 *     ?SetOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C00A7488 (-SetOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@.c)
 *     ?SetRelativeSizeHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C00A74F0 (-SetRelativeSizeHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_K.c)
 *     ?SetRelativeOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0252D00 (-SetRelativeOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX.c)
 * Callees:
 *     ?FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXIPEAPEAVCAnimationBinding@2@00@Z @ 0x1C005AC8C (-FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXIPEAPEAVCAnimationBinding@2@00.c)
 *     ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C005B284 (-NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C024AC7C (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 */

char __fastcall DirectComposition::CApplicationChannel::UnbindAnimation(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2,
        unsigned int a3)
{
  char v4; // bl
  struct DirectComposition::CAnimationBinding *v6; // [rsp+30h] [rbp-18h] BYREF
  struct DirectComposition::CAnimationBinding *v7; // [rsp+38h] [rbp-10h] BYREF
  struct DirectComposition::CAnimationBinding *v8; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v8 = 0LL;
  v6 = 0LL;
  DirectComposition::CResourceMarshaler::FindAnimationBindings(a2, a3, &v8, &v6, &v7);
  if ( v8 )
  {
    DirectComposition::CApplicationChannel::NewRemovingBinding(this, v8);
    return 1;
  }
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::DeleteAddingBinding(this, v6);
    return 1;
  }
  return v4;
}
