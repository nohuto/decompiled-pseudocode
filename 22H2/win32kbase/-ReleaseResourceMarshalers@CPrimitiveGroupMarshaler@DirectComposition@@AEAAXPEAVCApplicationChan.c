/*
 * XREFs of ?ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x1C002FCE8
 * Callers:
 *     ?SetReferenceArrayProperty@CCompositionLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0002EA0 (-SetReferenceArrayProperty@CCompositionLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationCh.c)
 *     ?ReleaseAllReferences@CProjectedShadowSceneMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000BBB0 (-ReleaseAllReferences@CProjectedShadowSceneMarshaler@DirectComposition@@MEAAXPEAVCApplicationCha.c)
 *     ?SetReferenceArrayProperty@CProjectedShadowSceneMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C000BC20 (-SetReferenceArrayProperty@CProjectedShadowSceneMarshaler@DirectComposition@@UEAAJPEAVCApplicati.c)
 *     ?SetReferenceArrayProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0031320 (-SetReferenceArrayProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 *     ?ReleaseAllReferences@CPrimitiveGroupMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00B0810 (-ReleaseAllReferences@CPrimitiveGroupMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 *     ?ReleaseAllReferences@CCompositionLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00B3BF0 (-ReleaseAllReferences@CCompositionLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C002FD60 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
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
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a3);
  }
  *a4 = 0;
}
