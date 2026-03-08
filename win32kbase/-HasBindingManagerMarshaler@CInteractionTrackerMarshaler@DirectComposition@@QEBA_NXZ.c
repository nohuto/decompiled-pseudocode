/*
 * XREFs of ?HasBindingManagerMarshaler@CInteractionTrackerMarshaler@DirectComposition@@QEBA_NXZ @ 0x1C0268E1C
 * Callers:
 *     ?SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0268F70 (-SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCAppli.c)
 * Callees:
 *     Feature_503751999__private_IsEnabledDeviceUsage @ 0x1C00E15EC (Feature_503751999__private_IsEnabledDeviceUsage.c)
 */

bool __fastcall DirectComposition::CInteractionTrackerMarshaler::HasBindingManagerMarshaler(
        DirectComposition::CInteractionTrackerMarshaler *this)
{
  bool v2; // zf

  if ( (unsigned int)Feature_503751999__private_IsEnabledDeviceUsage() )
    v2 = *((_QWORD *)this + 56) == 0LL;
  else
    v2 = *((_QWORD *)this + 57) == 0LL;
  return !v2;
}
