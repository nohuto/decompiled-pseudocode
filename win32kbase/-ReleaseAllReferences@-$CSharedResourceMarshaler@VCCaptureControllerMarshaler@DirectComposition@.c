/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCCaptureControllerMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C024CAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CCaptureControllerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C026D710 (-ReleaseAllReferences@CCaptureControllerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChanne.c)
 */

void __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CCaptureControllerMarshaler,2>::ReleaseAllReferences(
        DirectComposition::CCaptureControllerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 12);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) = 0;
    ObfDereferenceObject((PVOID)(*((_QWORD *)this + 12) - 24LL));
    *((_QWORD *)this + 12) = 0LL;
  }
  DirectComposition::CCaptureControllerMarshaler::ReleaseAllReferences(this, a2);
}
