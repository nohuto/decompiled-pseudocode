/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCVisualBitmapMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C024CE40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CVisualBitmapMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025BBB0 (-ReleaseAllReferences@CVisualBitmapMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@.c)
 */

void __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualBitmapMarshaler,2>::ReleaseAllReferences(
        DirectComposition::CVisualBitmapMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) = 0;
    ObfDereferenceObject((PVOID)(*((_QWORD *)this + 8) - 24LL));
    *((_QWORD *)this + 8) = 0LL;
  }
  DirectComposition::CVisualBitmapMarshaler::ReleaseAllReferences(this, a2);
}
