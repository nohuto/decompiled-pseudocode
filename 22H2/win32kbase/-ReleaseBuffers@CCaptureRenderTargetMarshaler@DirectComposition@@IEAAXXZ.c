/*
 * XREFs of ?ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ @ 0x1C01F4FF4
 * Callers:
 *     ?ReleaseAllReferences@CCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01F4FA0 (-ReleaseAllReferences@CCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChan.c)
 *     ?SetHandleArrayProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAPEAX_KPEA_N@Z @ 0x1C01F50C0 (-SetHandleArrayProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAPEAX_KPEA_N@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CCaptureRenderTargetMarshaler::ReleaseBuffers(
        DirectComposition::CCaptureRenderTargetMarshaler *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  __int64 v4; // rax

  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    v3 = 0;
    if ( *((_QWORD *)this + 13) )
    {
      v4 = 0LL;
      do
      {
        ObfDereferenceObject(*(PVOID *)(*((_QWORD *)this + 11) + 8 * v4));
        v4 = ++v3;
      }
      while ( (unsigned __int64)v3 < *((_QWORD *)this + 13) );
      v2 = *((_QWORD *)this + 11);
    }
    Win32FreePool(v2);
    *((_QWORD *)this + 11) = 0LL;
  }
}
