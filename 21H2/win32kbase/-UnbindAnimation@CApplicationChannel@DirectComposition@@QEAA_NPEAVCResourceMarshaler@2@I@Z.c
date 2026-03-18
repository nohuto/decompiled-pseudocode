/*
 * XREFs of ?UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C0085F80
 * Callers:
 *     ?SetSizeHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0084B34 (-SetSizeHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z.c)
 *     ?SetOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0084B98 (-SetOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@.c)
 *     ?SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z @ 0x1C0085AF0 (-SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z.c)
 *     ?SetResourceIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJII_J@Z @ 0x1C0085C2C (-SetResourceIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJII_J@Z.c)
 *     ?SetRelativeSizeHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0086A58 (-SetRelativeSizeHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_K.c)
 *     ?SetRelativeOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C021B9F4 (-SetRelativeOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX.c)
 * Callees:
 *     ?FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXIPEAPEAVCAnimationBinding@2@00@Z @ 0x1C00861FC (-FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXIPEAPEAVCAnimationBinding@2@00.c)
 *     ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C00B44F0 (-NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C0214948 (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
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
