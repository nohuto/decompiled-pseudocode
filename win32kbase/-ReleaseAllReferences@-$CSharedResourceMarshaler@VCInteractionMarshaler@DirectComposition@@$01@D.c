/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCInteractionMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00A1160
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00A21C0 (-ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CInteractionMarshaler,2>::ReleaseAllReferences(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 42);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) = 0;
    ObfDereferenceObject((PVOID)(*((_QWORD *)this + 42) - 24LL));
    *((_QWORD *)this + 42) = 0LL;
  }
  DirectComposition::CInteractionMarshaler::ReleaseAllReferences(this, a2);
}
