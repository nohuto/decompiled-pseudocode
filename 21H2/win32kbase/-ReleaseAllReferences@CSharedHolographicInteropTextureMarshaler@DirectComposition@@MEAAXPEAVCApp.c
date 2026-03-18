/*
 * XREFs of ?ReleaseAllReferences@CSharedHolographicInteropTextureMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C023AA30
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CHolographicInteropTextureMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C022D060 (-ReleaseAllReferences@CHolographicInteropTextureMarshaler@DirectComposition@@MEAAXPEAVCApplicati.c)
 */

void __fastcall DirectComposition::CSharedHolographicInteropTextureMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedHolographicInteropTextureMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 13);
  if ( v4 )
  {
    ObfDereferenceObject((PVOID)(v4 - 24));
    *((_QWORD *)this + 13) = 0LL;
  }
  DirectComposition::CHolographicInteropTextureMarshaler::ReleaseAllReferences(this, a2);
}
