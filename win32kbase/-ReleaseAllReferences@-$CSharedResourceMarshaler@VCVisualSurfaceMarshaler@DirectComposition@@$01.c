/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCVisualSurfaceMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00C12B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CVisualSurfaceMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00C1310 (-ReleaseAllReferences@CVisualSurfaceMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@.c)
 */

void __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualSurfaceMarshaler,2>::ReleaseAllReferences(
        DirectComposition::CVisualSurfaceMarshaler *this,
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
  DirectComposition::CVisualSurfaceMarshaler::ReleaseAllReferences(this, a2);
}
