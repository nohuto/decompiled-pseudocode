/*
 * XREFs of ?ClearShapes@CContainerShapeMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C021EB00
 * Callers:
 *     ?ReleaseAllReferences@CContainerShapeMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C021EC00 (-ReleaseAllReferences@CContainerShapeMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2.c)
 *     ?SetReferenceArrayProperty@CContainerShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C021EC40 (-SetReferenceArrayProperty@CContainerShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CContainerShapeMarshaler::ClearShapes(
        DirectComposition::CContainerShapeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 i; // rdi
  char *v5; // rdx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 20); i = (unsigned int)(i + 1) )
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 9) + 8 * i));
  v5 = (char *)*((_QWORD *)this + 9);
  if ( v5 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v5);
    *((_QWORD *)this + 9) = 0LL;
    *((_DWORD *)this + 20) = 0;
  }
}
