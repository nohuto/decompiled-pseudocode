/*
 * XREFs of ?ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ @ 0x1C026CAA4
 * Callers:
 *     ?ReleaseAllReferences@CCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C026CA50 (-ReleaseAllReferences@CCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChan.c)
 *     ?SetHandleArrayProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAPEAX_KPEA_N@Z @ 0x1C026CBC0 (-SetHandleArrayProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAPEAX_KPEA_N@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CCaptureRenderTargetMarshaler::ReleaseBuffers(
        DirectComposition::CCaptureRenderTargetMarshaler *this)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  char *v4; // rdx

  if ( *((_QWORD *)this + 11) )
  {
    v2 = 0;
    if ( *((_QWORD *)this + 13) )
    {
      v3 = 0LL;
      do
      {
        ObfDereferenceObject(*(PVOID *)(*((_QWORD *)this + 11) + 8 * v3));
        v3 = ++v2;
      }
      while ( (unsigned __int64)v2 < *((_QWORD *)this + 13) );
    }
    v4 = (char *)*((_QWORD *)this + 11);
    if ( v4 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
    *((_QWORD *)this + 11) = 0LL;
  }
}
