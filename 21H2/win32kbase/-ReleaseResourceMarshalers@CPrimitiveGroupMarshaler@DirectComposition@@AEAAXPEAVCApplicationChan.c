/*
 * XREFs of ?ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x1C00063D4
 * Callers:
 *     ?SetReferenceArrayProperty@CProjectedShadowSceneMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C00061D0 (-SetReferenceArrayProperty@CProjectedShadowSceneMarshaler@DirectComposition@@UEAAJPEAVCApplicati.c)
 *     ?ReleaseAllReferences@CProjectedShadowSceneMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0006370 (-ReleaseAllReferences@CProjectedShadowSceneMarshaler@DirectComposition@@MEAAXPEAVCApplicationCha.c)
 *     ?SetReferenceArrayProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C00120A0 (-SetReferenceArrayProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 *     ?SetReferenceArrayProperty@CCompositionLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0093B90 (-SetReferenceArrayProperty@CCompositionLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationCh.c)
 *     ?ReleaseAllReferences@CPrimitiveGroupMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00B0750 (-ReleaseAllReferences@CPrimitiveGroupMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 *     ?ReleaseAllReferences@CCompositionLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BAD70 (-ReleaseAllReferences@CCompositionLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CResourceMarshaler **a3,
        unsigned int *a4)
{
  __int64 i; // rdi

  if ( a3 )
  {
    for ( i = 0LL; (unsigned int)i < *a4; i = (unsigned int)(i + 1) )
      DirectComposition::CApplicationChannel::ReleaseResource(a2, a3[i]);
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      a3);
  }
  *a4 = 0;
}
