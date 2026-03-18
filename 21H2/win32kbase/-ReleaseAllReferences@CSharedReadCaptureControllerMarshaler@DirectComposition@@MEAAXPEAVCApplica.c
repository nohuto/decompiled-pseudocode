/*
 * XREFs of ?ReleaseAllReferences@CSharedReadCaptureControllerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C023AD90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CCaptureControllerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0236560 (-ReleaseAllReferences@CCaptureControllerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChanne.c)
 */

void __fastcall DirectComposition::CSharedReadCaptureControllerMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedReadCaptureControllerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v3; // rax

  DirectComposition::CCaptureControllerMarshaler::ReleaseAllReferences(this, a2);
  v3 = *((_QWORD *)this + 12);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 32) = 0;
    ObfDereferenceObject((PVOID)(*((_QWORD *)this + 12) - 24LL));
    *((_QWORD *)this + 12) = 0LL;
  }
}
